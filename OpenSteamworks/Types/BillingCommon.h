//==========================  Open Steamworks  ================================
//
// This file is part of the Open Steamworks project. All individuals associated
// with this project do not claim ownership of the contents
// 
// The code, comments, and all related files, projects, resources,
// redistributables included with this project are Copyright Valve Corporation.
// Additionally, Valve, the Valve logo, Half-Life, the Half-Life logo, the
// Lambda logo, Steam, the Steam logo, Team Fortress, the Team Fortress logo,
// Opposing Force, Day of Defeat, the Day of Defeat logo, Counter-Strike, the
// Counter-Strike logo, Source, the Source logo, and Counter-Strike Condition
// Zero are trademarks and or registered trademarks of Valve Corporation.
// All other trademarks are property of their respective owners.
//
//=============================================================================

#pragma once

#include "SteamTypes.h"

// Flags for licenses - BITS
typedef enum ELicenseFlags {
	k_ELicenseFlagNone = 0,
	k_ELicenseFlagRenew = 0x01,				// Renew this license next period
	k_ELicenseFlagRenewalFailed = 0x02,		// Auto-renew failed
	k_ELicenseFlagPending = 0x04,			// Purchase or renewal is pending
	k_ELicenseFlagExpired = 0x08,			// Regular expiration (no renewal attempted)
	k_ELicenseFlagCancelledByUser = 0x10,	// Cancelled by the user
	k_ELicenseFlagCancelledByAdmin = 0x20,	// Cancelled by customer support
	k_ELicenseFlagLowViolence = 0x40,
	k_ELicenseFlagImportedFromSteam2 = 0x80,
} ELicenseFlags;

typedef enum EPaymentMethod {
	k_EPaymentMethodNone, // None
	k_EPaymentMethodCDKey, // CD Key
	k_EPaymentMethodCreditCard, // Credit Card
	k_EPaymentMethodGiropay, // Giropay
	k_EPaymentMethodPayPal, // PayPal
	k_EPaymentMethodIDEAL, // iDEAL
	k_EPaymentMethodPaySafeCard, // PaySafeCard
	k_EPaymentMethodSofort, // Sofort
	k_EPaymentMethodGuestPass, // Guest Pass
	k_EPaymentMethodWebMoney, // WebMoney
	k_EPaymentMethodMoneyBookers, // MoneyBookers
	k_EPaymentMethodAliPay, // AliPay
	k_EPaymentMethodYandex, // Yandex
	k_EPaymentMethodKiosk, // Kiosk
	k_EPaymentMethodQIWI, // QIWI
	k_EPaymentMethodGameStop, // GameStop
	k_EPaymentMethodHardwarePromo, // Hardware Promo
	k_EPaymentMethodMopay, // mopay
	k_EPaymentMethodBoletoBancario, // Boleto Bancario
	k_EPaymentMethodBoaCompraGold, // BoaCompra Gold
	k_EPaymentMethodBancoDoBrasilOnline, // Banco do Brasil Online
	k_EPaymentMethodItauOnline, // Itau Online
	k_EPaymentMethodBradescoOnline, // Bradesco Online
	k_EPaymentMethodPagseguro, // Pagseguro
	k_EPaymentMethodVisaBoaCompra, // Visa (BoaCompra)
	k_EPaymentMethodAmexBoaCompra, // Amex (BoaCompra)
	k_EPaymentMethodAura, // Aura
	k_EPaymentMethodHipercard, // Hipercard
	k_EPaymentMethodMastercardBoaCompra, // Mastercard (BoaCompra)
	k_EPaymentMethodDinersCardBoaCompra, // Diner's Card (BoaCompra)
	k_EPaymentMethodAuthorizedDevice, // Authorized Device
	k_EPaymentMethodMOLPoints, // MOL Points
	k_EPaymentMethodClickBuy, // Click&Buy
	k_EPaymentMethodBeeline, // Beeline
	k_EPaymentMethodKonbini, // Konbini
	k_EPaymentMethodEClubPoints, // EClub Points
	k_EPaymentMethodCreditCardDegica, // Credit Card (Degica)
	k_EPaymentMethodBankTransferDegica, // Bank Transfer (Degica)
	k_EPaymentMethodPayEasyDegica, // Pay Easy (Degica)
	k_EPaymentMethodZong, // Zong
	k_EPaymentMethodCultureVoucher, // Culture Voucher
	k_EPaymentMethodBookVoucher, // Book Voucher
	k_EPaymentMethodHappymoneyVoucher, // Happymoney Voucher
	k_EPaymentMethodConvenientStoreVoucher, // Convenient Store Voucher
	k_EPaymentMethodGameVoucher, // Game Voucher
	k_EPaymentMethodMultibanco, // Multibanco
	k_EPaymentMethodPayshop, // Payshop
	k_EPaymentMethodMaestro, // Maestro
	k_EPaymentMethodOXXO, // OXXO
	k_EPaymentMethodToditoCash, // Todito Cash
	k_EPaymentMethodCarnet, // Carnet
	k_EPaymentMethodSPEI, // SPEI
	k_EPaymentMethod3pay, // 3pay
	k_EPaymentMethodIsBank, // Is Bank
	k_EPaymentMethodGaranti, // Garanti
	k_EPaymentMethodAkbank, // Akbank
	k_EPaymentMethodYapiKredi, // Yapi Kredi
	k_EPaymentMethodHalkbank, // Halkbank
	k_EPaymentMethodBankAsya, // Bank Asya
	k_EPaymentMethodFinansbank, // Finansbank
	k_EPaymentMethodDenizBank, // DenizBank
	k_EPaymentMethodPTT, // PTT
	k_EPaymentMethodCashU, // CashU
	k_EPaymentMethodSantanderRio, // Santander Rio
	k_EPaymentMethodAutoGrant, // Auto Grant
	k_EPaymentMethodWebMoneyDegica, // WebMoney (Degica)
	k_EPaymentMethodOneCard, // OneCard
	k_EPaymentMethodPSE, // PSE
	k_EPaymentMethodExito, // Exito
	k_EPaymentMethodEfecty, // Efecty
	k_EPaymentMethodBalota, // Balota
	k_EPaymentMethodPinValidda, // PinValidda
	k_EPaymentMethodMangirKart, // MangirKart
	k_EPaymentMethodBancoCreditoDePeru, // Banco Credito de Peru
	k_EPaymentMethodBBVAContinental, // BBVA Continental
	k_EPaymentMethodSafetyPay, // SafetyPay
	k_EPaymentMethodPagoEfectivo, // PagoEfectivo
	k_EPaymentMethodTrustly, // Trustly
	k_EPaymentMethodUnionPay, // UnionPay
	k_EPaymentMethodBitcoin, // Bitcoin
	k_EPaymentMethodLicensedSite, // Licensed Site
	k_EPaymentMethodBitCash, // BitCash
	k_EPaymentMethodNetCash, // NetCash
	k_EPaymentMethodNanaco, // Nanaco
	k_EPaymentMethodTenpay, // Tenpay
	k_EPaymentMethodWeChat, // WeChat
	k_EPaymentMethodCashOnDelivery, // Cash on Delivery
	k_EPaymentMethodCreditCardNodwin, // Credit Card (Nodwin)
	k_EPaymentMethodDebitCardNodwin, // Debit Card (Nodwin)
	k_EPaymentMethodNetBankingNodwin, // Net Banking (Nodwin)
	k_EPaymentMethodCashCardNodwin, // Cash Card (Nodwin)
	k_EPaymentMethodWalletNodwin, // Wallet (Nodwin)
	k_EPaymentMethodMobileDegica, // Mobile (Degica)
	k_EPaymentMethodNaranja, // Naranja
	k_EPaymentMethodCencosud, // Cencosud
	k_EPaymentMethodCabal, // Cabal
	k_EPaymentMethodPagoFacil, // Pago Facil
	k_EPaymentMethodRapipago, // Rapipago
	k_EPaymentMethodBancoNacionalDeCostaRica, // Banco Nacional de Costa Rica
	k_EPaymentMethodBancoPoplar, // Banco Poplar
	k_EPaymentMethodRedPagos, // Red Pagos
	k_EPaymentMethodSPE, // SPE
	k_EPaymentMethodMulticaja, // Multicaja
	k_EPaymentMethodRedCompra, // RedCompra
	k_EPaymentMethodZiraatBank, // Ziraat Bank
	k_EPaymentMethodVakiflarBank, // Vakiflar Bank
	k_EPaymentMethodKuveytTurkBank, // Kuveyt Turk Bank
	k_EPaymentMethodEkonomiBank, // Ekonomi Bank
	k_EPaymentMethodPichincha, // Pichincha
	k_EPaymentMethodPichinchaCash, // Pichincha Cash
	k_EPaymentMethodPrzelewy24, // Przelewy24
	k_EPaymentMethodTrustpay, // Trustpay
	k_EPaymentMethodPOLi, // POLi
	k_EPaymentMethodMercadoPago, // MercadoPago
	k_EPaymentMethodPayU, // PayU
	k_EPaymentMethodVTCPayWallet, // VTC Pay Wallet
	k_EPaymentMethodMrCash, // MrCash
	k_EPaymentMethodEPS, // EPS
	k_EPaymentMethodInterac, // Interac
	k_EPaymentMethodVTCPayCards, // VTC Pay Cards
	k_EPaymentMethodVTCPayOnlineBanking, // VTC Pay Online Banking
	k_EPaymentMethodVisaElectronBoaCompra, // Visa Electron (BoaCompra)
	k_EPaymentMethodCafeFunded, // Cafe Funded
	k_EPaymentMethodOCA, // OCA
	k_EPaymentMethodLider, // Lider
	k_EPaymentMethodWebMoneySteamCardJapan, // WebMoney Steam Card (Japan)
	k_EPaymentMethodWebMoneySteamCardTopUpJapan, // WebMoney Steam Card Top Up (Japan)
	k_EPaymentMethodToss, // Toss
	k_EPaymentMethodWallet, // Wallet
	k_EPaymentMethodValve, // Valve
	k_EPaymentMethodSteamPressMaster, // Steam/Press Master
	k_EPaymentMethodStorePromotion, // Store Promotion
	k_EPaymentMethodMasterSubscription = 134, // Master Subscription
	k_EPaymentMethodPayco, // Payco
	k_EPaymentMethodMobileWalletJapan, // Mobile Wallet (Japan)
	k_EPaymentMethodBoletoFlash, // Boleto Flash
	k_EPaymentMethodPIX, // PIX
	k_EPaymentMethodOEMTicket = 256, // OEM Ticket
	k_EPaymentMethodSplit = 512, // Split
	k_EPaymentMethodComplimentary = 1024, // Complimentary
} EPaymentMethod;


typedef enum EPurchaseResultDetail {
	k_EPurchaseResultNoDetail = 0,
	k_EPurchaseResultAVSFailure = 1,
	k_EPurchaseResultInsufficientFunds = 2,
	k_EPurchaseResultContactSupport = 3,
	k_EPurchaseResultTimeout = 4,

	// these are mainly used for testing
	k_EPurchaseResultInvalidPackage = 5,
	k_EPurchaseResultInvalidPaymentMethod = 6,
	k_EPurchaseResultInvalidData = 7,
	k_EPurchaseResultOthersInProgress = 8,
	k_EPurchaseResultAlreadyPurchased = 9,
	k_EPurchaseResultWrongPrice = 10,

	k_EPurchaseResultFraudCheckFailed = 11,
	k_EPurchaseResultCancelledByUser = 12,
	k_EPurchaseResultRestrictedCountry = 13,
	k_EPurchaseResultBadActivationCode = 14,
	k_EPurchaseResultDuplicateActivationCode = 15,
	k_EPurchaseResultUseOtherPaymentMethod = 16,
	k_EPurchaseResultUseOtherFundingSource = 17,
	k_EPurchaseResultInvalidShippingAddress = 18,
	k_EPurchaseResultRegionNotSupported = 19,
	k_EPurchaseResultAcctIsBlocked = 20,
	k_EPurchaseResultAcctNotVerified = 21,
	k_EPurchaseResultInvalidAccount = 22,
	k_EPurchaseResultStoreBillingCountryMismatch = 23,
	k_EPurchaseResultDoesNotOwnRequiredApp = 24,
	k_EPurchaseResultCanceledByNewTransaction = 25,
	k_EPurchaseResultForceCanceledPending = 26,
	k_EPurchaseResultFailCurrencyTransProvider = 27,
	k_EPurchaseResultFailedCyberCafe = 28,
	k_EPurchaseResultNeedsPreApproval = 29,
	k_EPurchaseResultPreApprovalDenied = 30,
	k_EPurchaseResultWalletCurrencyMismatch = 31,
	k_EPurchaseResultEmailNotValidated = 32,
	k_EPurchaseResultExpiredCard = 33,
	k_EPurchaseResultTransactionExpired = 34,
	k_EPurchaseResultWouldExceedMaxWallet = 35,
	k_EPurchaseResultMustLoginPS3AppForPurchase = 36,
	k_EPurchaseResultCannotShipToPOBox = 37,
} EPurchaseResultDetail;

typedef enum EPurchaseStatus {
	k_EPurchasePending = 0,
	k_EPurchaseSucceeded = 1,
	k_EPurchaseFailed = 2,
	k_EPurchaseRefunded = 3,
	k_EPurchaseInit = 4,
	k_EPurchaseChargedback = 5,
	k_EPurchaseRevoked = 6,
	k_EPurchaseInDispute = 7,
	k_EPurchasePartialRefund = 8,
	k_EPurchaseRefundToWallet = 9,
} EPurchaseStatus;

typedef enum ECreditCardType {
	k_ECreditCardTypeUnknown = 0,
	k_ECreditCardTypeVisa = 1,
	k_ECreditCardTypeMaster = 2,
	k_ECreditCardTypeAmericanExpress = 3,
	k_ECreditCardTypeDiscover = 4,
	k_ECreditCardTypeDinersClub = 5,
	k_ECreditCardTypeJCB = 6,
	k_ECreditCardTypeCarteBleue = 7,
	k_ECreditCardTypeDankort = 8,
	k_ECreditCardTypeMaestro = 9,
	k_ECreditCardTypeSolo = 10,
	k_ECreditCardTypeLaser = 11,
} ECreditCardType;

enum ELicenseType {
	k_ENoLicense = 0,
	k_ESinglePurchase = 1,
	k_ESinglePurchaseLimitedUse = 2,
	k_ERecurringCharge = 3,
	k_ERecurringChargeLimitedUse = 4,
	k_ERecurringChargeLimitedUseWithOverages = 5,
};

#pragma pack( push, 8 )
//-----------------------------------------------------------------------------
// Purpose: called when this client has received a finalprice message from a Billing
//-----------------------------------------------------------------------------
struct OBSOLETE_CALLBACK FinalPriceMsg_t {
		enum { k_iCallback = k_iSteamBillingCallbacks + 1 };

		uint32 m_bSuccess;
		uint32 m_nBaseCost;
		uint32 m_nTotalDiscount;
		uint32 m_nTax;
		uint32 m_nShippingCost;
};

struct OBSOLETE_CALLBACK PurchaseMsg_t {
		enum { k_iCallback = k_iSteamBillingCallbacks + 2 };

		uint32 m_bSuccess;
		int32 m_EPurchaseResultDetail;			// Detailed result information
};

// Sent in response to PurchaseWithActivationCode
struct PurchaseResponse_t {
	enum { k_iCallback = k_iSteamBillingCallbacks + 4 };
	
	EResult m_EResult;
	int32 m_EPurchaseResultDetail;
	int32 m_iReceiptIndex;
};

struct CancelLicenseMsg_t {
	enum { k_iCallback = k_iSteamBillingCallbacks + 9 };

	enum EResult m_EResult;
};

struct RequestFreeLicenseResponse_t {
	enum { k_iCallback = k_iSteamBillingCallbacks + 12 };

	EResult m_EResult;
	AppId_t m_uAppId;
};

struct OEMTicketActivationResponse_t {
	enum { k_iCallback = k_iSteamBillingCallbacks + 14 };

	EResult m_EResult;
	EPurchaseResultDetail m_EPurchaseResultDetail;
	PackageId_t m_nPackageID;
	int m_iReceiptIndex;
};

#pragma pack( pop )
