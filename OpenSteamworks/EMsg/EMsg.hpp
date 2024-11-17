#include <string>
#include <vector>
#include <type_traits>
#include <sstream>

#include "Protobuf/steammessages_base.pb.h"

template <typename T, std::enable_if_t<std::is_base_of_v<::google::protobuf::Message, T>, std::nullptr_t> = nullptr>
class EMsg {
    public:
        inline explicit EMsg(int eMsg, const std::string jobName) :
            m_eMsg(eMsg),
            m_jobName(jobName),
            m_protobuf(),
            m_header()
        {
            if (!jobName.empty()) {
                m_header.set_target_job_name(jobName);
            }
        }

        inline explicit EMsg(int eMsg, const std::string jobName, const T &protobuf) :
            EMsg(eMsg, jobName),
            m_protobuf(protobuf)
        {
            if (!jobName.empty()) {
                m_header.set_target_job_name(jobName);
            }
        }

        inline explicit EMsg(int eMsg, const std::string jobName, const CMsgProtoBufHeader &header) :
            EMsg(eMsg, jobName),
            m_header(header)
        {
            if (!jobName.empty()) {
                m_header.set_target_job_name(jobName);
            }
        }

        inline explicit EMsg(int eMsg, const std::string jobName, const T &protobuf, const CMsgProtoBufHeader &header) :
            EMsg(eMsg, jobName),
            m_protobuf(protobuf),
            m_header(header)
        {
            if (!jobName.empty()) {
                m_header.set_target_job_name(jobName);
            }
        }

        inline auto SetJobName(const std::string jobName) -> void {
            m_jobName = jobName;
        }

        inline auto GetJobName() const -> std::string {
            return m_jobName;
        }

        inline auto SeteMsg(int eMsg) -> void {
            m_eMsg = eMsg;
        }

        inline auto GeteMsg() const -> int {
            return m_eMsg;
        }

        inline auto GetSerializedeMsg() const -> std::vector<unsigned char> {
            std::stringstream buffer;
            buffer << reinterpret_cast<int>(PROTOBUF_MASK | m_eMsg);

            buffer << m_header.ByteSizeLong();
            m_header.SerializeToOstream(&buffer);

            // Writes buffer to vector to return
            buffer.seekg(0, std::stringstream::beg);
            buffer.seekg(0, std::stringstream::end);
            std::size_t streamSize = buffer.tellg();
            std::vector<unsigned char> returnValue(streamSize);

            buffer.read(reinterpret_cast<char*>(returnValue.data()), streamSize);

            return returnValue;
        }

        inline auto SetProtobuf(const T &protobuf) -> void {
            m_protobuf = protobuf;
        }

        inline auto GetProtobuf() -> T {
            return m_protobuf;
        }

        inline auto SetHeader(const CMsgProtoBufHeader &header) -> void {
            m_header = header;
        }

        inline auto GetHeader() -> CMsgProtoBufHeader {
            return m_header;
        }

        inline static auto DeserializeeMsg(std::istream messageData) -> std::optional<EMsg<T>> {
            unsigned int maskedeMsg;
            messageData.read(reinterpret_cast<char*>(&maskedeMsg), sizeof(unsigned int));

            unsigned int eMsg = ~PROTOBUF_MASK & maskedeMsg;

            unsigned int headerSize;
            messageData.read(reinterpret_cast<char*>(&headerSize), sizeof(unsigned int));

            if (headerSize == -1) {
                return std::nullopt;
            }

            char serialzizedHeader[headerSize];
            std::streamsize numRead = messageData.readsome(serialzizedHeader, headerSize);
            if (numRead != headerSize) {
                return std::nullopt;
            }

            CMsgProtoBufHeader header;
            if (!header.ParseFromArray(serialzizedHeader, headerSize)) {
                return std::nullopt;
            }

            T protobuf;
            // TODO: Not sure how `ParseFromIstream` works exactly
            if (!protobuf.ParseFromIstream(messageData)) {
                return std::nullopt;
            }

            return EMsg<T>(eMsg, protobuf, header);
        }

    private:
        inline explicit EMsg(int eMsg, const T &protobuf, const CMsgProtoBufHeader &header) :
            m_eMsg(eMsg),
            m_jobName(header.target_job_name()), // Not sure if a response has a job name, but we ball
            m_protobuf(protobuf),
            m_header(header)
        {

        }

        static constexpr int PROTOBUF_MASK = 0x80000000;

        std::string m_jobName;
        int m_eMsg;

        T m_protobuf;
        CMsgProtoBufHeader m_header;
};
