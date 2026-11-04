#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MobilesdkAcceptPaymentMethods, MobilesdkAcceptPaymentMethodsCompanion, MobilesdkAuthenticationHelper, MobilesdkBankPayButtonController, MobilesdkBillingAddress, MobilesdkBillingAddressCompanion, MobilesdkBillingAddressController, MobilesdkBillingAddressState, MobilesdkCardError, MobilesdkCardErrorCardNumber, MobilesdkCardErrorCardholder, MobilesdkCardErrorCvv, MobilesdkCardErrorExpiryDate, MobilesdkCardInputController, MobilesdkCardInputSlimController, MobilesdkCardInputSlimStyleState, MobilesdkCardInputStyleState, MobilesdkComponentFontWeight, MobilesdkContinuousAuthorityAgreement, MobilesdkContinuousAuthorityAgreementCompanion, MobilesdkCustomerDetails, MobilesdkCustomerDetailsCompanion, MobilesdkCustomerDetailsResponse, MobilesdkCustomerDetailsResponseCompanion, MobilesdkEnvironment, MobilesdkEnvironmentCompanion, MobilesdkFinancialDetails, MobilesdkFinancialDetailsCompanion, MobilesdkKotlinArray<T>, MobilesdkKotlinEnum<E>, MobilesdkKotlinEnumCompanion, MobilesdkKotlinException, MobilesdkKotlinIllegalStateException, MobilesdkKotlinNothing, MobilesdkKotlinRuntimeException, MobilesdkKotlinThrowable, MobilesdkKotlinx_serialization_coreSerialKind, MobilesdkKotlinx_serialization_coreSerializersModule, MobilesdkLabelLocation, MobilesdkPaymentConfig, MobilesdkPaymentConfigCompanion, MobilesdkPaymentIntent, MobilesdkPaymentIntentCompanion, MobilesdkPaymentProcessor, MobilesdkPaymentProcessorCompanion, MobilesdkPaymentResult, MobilesdkPaymentResultCallbackCompanion, MobilesdkPaymentResultCanceled, MobilesdkPaymentResultCompanion, MobilesdkPaymentResultFailed, MobilesdkPaymentResultFailedCompanion, MobilesdkPaymentResultPending, MobilesdkPaymentResultPendingCompanion, MobilesdkPaymentResultSuccess, MobilesdkResponses, MobilesdkResponsesCardManager, MobilesdkResponsesInitiatePayment, MobilesdkResponsesPayments, MobilesdkSaveCardBoxController, MobilesdkSaveCardState, MobilesdkSavedCardsController, MobilesdkSavedCardsState, MobilesdkStatus, MobilesdkStatusCanceled, MobilesdkStatusCompanion, MobilesdkStatusError, MobilesdkStatusErrorCompanion, MobilesdkStatusInitiated, MobilesdkStatusPending, MobilesdkStatusPendingCompanion, MobilesdkStatusSessionExpired, MobilesdkStatusSuccess, MobilesdkStatusUnknown, MobilesdkTransactionDetails, MobilesdkTransactionDetailsCompanion, MobilesdkTransactionIdCallbackCompanion, MobilesdkTransactionType, MobilesdkTransactionTypeCompanion, MobilesdkUi_textFontWeight, MobilesdkUi_textFontWeightCompanion, UIViewController;

@protocol MobilesdkCardCallback, MobilesdkKotlinAnnotation, MobilesdkKotlinComparable, MobilesdkKotlinIterator, MobilesdkKotlinKAnnotatedElement, MobilesdkKotlinKClass, MobilesdkKotlinKClassifier, MobilesdkKotlinKDeclarationContainer, MobilesdkKotlinx_coroutines_coreFlow, MobilesdkKotlinx_coroutines_coreFlowCollector, MobilesdkKotlinx_serialization_coreCompositeDecoder, MobilesdkKotlinx_serialization_coreCompositeEncoder, MobilesdkKotlinx_serialization_coreDecoder, MobilesdkKotlinx_serialization_coreDeserializationStrategy, MobilesdkKotlinx_serialization_coreEncoder, MobilesdkKotlinx_serialization_coreKSerializer, MobilesdkKotlinx_serialization_coreSerialDescriptor, MobilesdkKotlinx_serialization_coreSerializationStrategy, MobilesdkKotlinx_serialization_coreSerializersModuleCollector, MobilesdkPaymentResultCallback, MobilesdkTransactionIdCallback;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface MobilesdkBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface MobilesdkBase (MobilesdkBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface MobilesdkMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MobilesdkMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorMobilesdkKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface MobilesdkNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface MobilesdkByte : MobilesdkNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface MobilesdkUByte : MobilesdkNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface MobilesdkShort : MobilesdkNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface MobilesdkUShort : MobilesdkNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface MobilesdkInt : MobilesdkNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface MobilesdkUInt : MobilesdkNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface MobilesdkLong : MobilesdkNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface MobilesdkULong : MobilesdkNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface MobilesdkFloat : MobilesdkNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface MobilesdkDouble : MobilesdkNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface MobilesdkBoolean : MobilesdkNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end


/**
 * Card Management Page
 *
 * This class is used to display a card management page
 * that can be used to manage cards.
 *
 **/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardManagementPage")))
@interface MobilesdkCardManagementPage : MobilesdkBase

/**
 * Card Management Page
 *
 * This class is used to display a card management page
 * that can be used to manage cards.
 *
 **/
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Card Management Page
 *
 * This class is used to display a card management page
 * that can be used to manage cards.
 *
 **/
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * Display the CardManagementPage
 */
- (void)display __attribute__((swift_name("display()")));

/**
 * Set credentials using bearer token authentication (Recommended)
 *
 * This is the recommended way to set credentials as it uses secure token-based
 * authentication and provides access to the new mobile API features.
 */
- (void)setCredentialsAuthToken:(NSString *)authToken installationId:(NSString *)installationId environment:(MobilesdkEnvironment *)environment __attribute__((swift_name("setCredentials(authToken:installationId:environment:)")));

/**
 * Set the username and password for the CardManagementPage (Deprecated)
 *
 * @deprecated Use bearer token based setCredentials instead for better security
 */
- (void)setCredentialsUsername:(NSString *)username password:(NSString *)password installationId:(NSString *)installationId environment:(MobilesdkEnvironment *)environment __attribute__((swift_name("setCredentials(username:password:installationId:environment:)"))) __attribute__((deprecated("Use bearer token based setCredentials instead")));

/**
 * Set the customer reference for the CardManagementPage
 */
- (void)setCustomerReferenceCustomerReference:(NSString *)customerReference __attribute__((swift_name("setCustomerReference(customerReference:)")));

/**
 * UIViewController
 *
 * Optionally you can handle the displaying of the payment page manually
 * by using the uiController property
 */
@property (readonly) UIViewController *uiController __attribute__((swift_name("uiController")));
@end


/**
 * # Payment Configuration
 *
 * The [PaymentConfig] class is responsible for setting the payment configuration details.
 *
 * ## How to obtain the parameters?
 * - **installationId**: The installation id provided by PaySuite.
 * - **authToken**: The auth token (valid for 2h) is generated by you using the
 *  either the [requestAuthToken] method or own implementation.
 *
 *  ### API for generating the auth token:
 *  #### Registered Customer
 *  The customerReference will be the unique reference of the customer
 *  where is registered with the merchant. Using the reference you will be able
 *  to manage the customer's payment methods and other details
 *  ```
 *  Headers: Authorization: Basic base64(username:password)
 *  POST acceptor/rest/authorisation/{{instId}}/authoriseClient
 *  {
 *     "scopes": [
 *         "MOBILE_CUSTOMER_PAYMENT"
 *     ],
 *     "customerReference": "CUST_000001"
 *  }
 *  ```
 *  #### Guest Customer
 *  The customerReference will be null for guest customers.
 *  The payment will be processed as a guest user.
 *  ```
 *  Headers: Authorization: Basic base64(username:password)
 *  POST acceptor/rest/authorisation/{{instId}}/authoriseClient
 *  {
 *     "scopes": [
 *         "MOBILE_GUEST_PAYMENT"
 *     ]
 *  }
 *  ```
 *
 * @param installationId The installation id provided by PaySuite
 * @param clientToken The auth client token (valid for 2h) provided by you.
 * @param transactionType The type of transaction. [TransactionType.PAYMENT] or [TransactionType.AUTHORIZATION].
 * @param countryCode (Nullable) The country code of the transaction. It might enable some payment methods on specific
 * countries. Country Code format: ISO 3166 - ALPHA-3 (e.g: `GBR`).
 * @param currencyCode The currency code of the transaction. Currency Code format: ISO 4217 - ALPHA-3 (e.g: `GBP`).
 * @param transaction The transaction details. [TransactionDetails]
 * @param customer The customer details. [CustomerDetails]
 * @param financialServices The financial services details. [FinancialDetails]
 * @param environment The environment of the transaction. [Environment]
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
 *   androidx.compose.runtime.Stable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentConfig")))
@interface MobilesdkPaymentConfig : MobilesdkBase
- (instancetype)initWithInstallationId:(NSString *)installationId clientToken:(NSString *)clientToken environment:(MobilesdkEnvironment *)environment transactionType:(MobilesdkTransactionType *)transactionType countryCode:(NSString * _Nullable)countryCode currencyCode:(NSString *)currencyCode transaction:(MobilesdkTransactionDetails *)transaction customer:(MobilesdkCustomerDetails * _Nullable)customer financialServices:(MobilesdkFinancialDetails * _Nullable)financialServices __attribute__((swift_name("init(installationId:clientToken:environment:transactionType:countryCode:currencyCode:transaction:customer:financialServices:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkPaymentConfigCompanion *companion __attribute__((swift_name("companion")));
- (MobilesdkPaymentConfig *)doCopyInstallationId:(NSString *)installationId clientToken:(NSString *)clientToken environment:(MobilesdkEnvironment *)environment transactionType:(MobilesdkTransactionType *)transactionType countryCode:(NSString * _Nullable)countryCode currencyCode:(NSString *)currencyCode transaction:(MobilesdkTransactionDetails *)transaction customer:(MobilesdkCustomerDetails * _Nullable)customer financialServices:(MobilesdkFinancialDetails * _Nullable)financialServices __attribute__((swift_name("doCopy(installationId:clientToken:environment:transactionType:countryCode:currencyCode:transaction:customer:financialServices:)")));

/**
 * # Payment Configuration
 *
 * The [PaymentConfig] class is responsible for setting the payment configuration details.
 *
 * ## How to obtain the parameters?
 * - **installationId**: The installation id provided by PaySuite.
 * - **authToken**: The auth token (valid for 2h) is generated by you using the
 *  either the [requestAuthToken] method or own implementation.
 *
 *  ### API for generating the auth token:
 *  #### Registered Customer
 *  The customerReference will be the unique reference of the customer
 *  where is registered with the merchant. Using the reference you will be able
 *  to manage the customer's payment methods and other details
 *  ```
 *  Headers: Authorization: Basic base64(username:password)
 *  POST acceptor/rest/authorisation/{{instId}}/authoriseClient
 *  {
 *     "scopes": [
 *         "MOBILE_CUSTOMER_PAYMENT"
 *     ],
 *     "customerReference": "CUST_000001"
 *  }
 *  ```
 *  #### Guest Customer
 *  The customerReference will be null for guest customers.
 *  The payment will be processed as a guest user.
 *  ```
 *  Headers: Authorization: Basic base64(username:password)
 *  POST acceptor/rest/authorisation/{{instId}}/authoriseClient
 *  {
 *     "scopes": [
 *         "MOBILE_GUEST_PAYMENT"
 *     ]
 *  }
 *  ```
 *
 * @param installationId The installation id provided by PaySuite
 * @param clientToken The auth client token (valid for 2h) provided by you.
 * @param transactionType The type of transaction. [TransactionType.PAYMENT] or [TransactionType.AUTHORIZATION].
 * @param countryCode (Nullable) The country code of the transaction. It might enable some payment methods on specific
 * countries. Country Code format: ISO 3166 - ALPHA-3 (e.g: `GBR`).
 * @param currencyCode The currency code of the transaction. Currency Code format: ISO 4217 - ALPHA-3 (e.g: `GBP`).
 * @param transaction The transaction details. [TransactionDetails]
 * @param customer The customer details. [CustomerDetails]
 * @param financialServices The financial services details. [FinancialDetails]
 * @param environment The environment of the transaction. [Environment]
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * # Payment Configuration
 *
 * The [PaymentConfig] class is responsible for setting the payment configuration details.
 *
 * ## How to obtain the parameters?
 * - **installationId**: The installation id provided by PaySuite.
 * - **authToken**: The auth token (valid for 2h) is generated by you using the
 *  either the [requestAuthToken] method or own implementation.
 *
 *  ### API for generating the auth token:
 *  #### Registered Customer
 *  The customerReference will be the unique reference of the customer
 *  where is registered with the merchant. Using the reference you will be able
 *  to manage the customer's payment methods and other details
 *  ```
 *  Headers: Authorization: Basic base64(username:password)
 *  POST acceptor/rest/authorisation/{{instId}}/authoriseClient
 *  {
 *     "scopes": [
 *         "MOBILE_CUSTOMER_PAYMENT"
 *     ],
 *     "customerReference": "CUST_000001"
 *  }
 *  ```
 *  #### Guest Customer
 *  The customerReference will be null for guest customers.
 *  The payment will be processed as a guest user.
 *  ```
 *  Headers: Authorization: Basic base64(username:password)
 *  POST acceptor/rest/authorisation/{{instId}}/authoriseClient
 *  {
 *     "scopes": [
 *         "MOBILE_GUEST_PAYMENT"
 *     ]
 *  }
 *  ```
 *
 * @param installationId The installation id provided by PaySuite
 * @param clientToken The auth client token (valid for 2h) provided by you.
 * @param transactionType The type of transaction. [TransactionType.PAYMENT] or [TransactionType.AUTHORIZATION].
 * @param countryCode (Nullable) The country code of the transaction. It might enable some payment methods on specific
 * countries. Country Code format: ISO 3166 - ALPHA-3 (e.g: `GBR`).
 * @param currencyCode The currency code of the transaction. Currency Code format: ISO 4217 - ALPHA-3 (e.g: `GBP`).
 * @param transaction The transaction details. [TransactionDetails]
 * @param customer The customer details. [CustomerDetails]
 * @param financialServices The financial services details. [FinancialDetails]
 * @param environment The environment of the transaction. [Environment]
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * # Payment Configuration
 *
 * The [PaymentConfig] class is responsible for setting the payment configuration details.
 *
 * ## How to obtain the parameters?
 * - **installationId**: The installation id provided by PaySuite.
 * - **authToken**: The auth token (valid for 2h) is generated by you using the
 *  either the [requestAuthToken] method or own implementation.
 *
 *  ### API for generating the auth token:
 *  #### Registered Customer
 *  The customerReference will be the unique reference of the customer
 *  where is registered with the merchant. Using the reference you will be able
 *  to manage the customer's payment methods and other details
 *  ```
 *  Headers: Authorization: Basic base64(username:password)
 *  POST acceptor/rest/authorisation/{{instId}}/authoriseClient
 *  {
 *     "scopes": [
 *         "MOBILE_CUSTOMER_PAYMENT"
 *     ],
 *     "customerReference": "CUST_000001"
 *  }
 *  ```
 *  #### Guest Customer
 *  The customerReference will be null for guest customers.
 *  The payment will be processed as a guest user.
 *  ```
 *  Headers: Authorization: Basic base64(username:password)
 *  POST acceptor/rest/authorisation/{{instId}}/authoriseClient
 *  {
 *     "scopes": [
 *         "MOBILE_GUEST_PAYMENT"
 *     ]
 *  }
 *  ```
 *
 * @param installationId The installation id provided by PaySuite
 * @param clientToken The auth client token (valid for 2h) provided by you.
 * @param transactionType The type of transaction. [TransactionType.PAYMENT] or [TransactionType.AUTHORIZATION].
 * @param countryCode (Nullable) The country code of the transaction. It might enable some payment methods on specific
 * countries. Country Code format: ISO 3166 - ALPHA-3 (e.g: `GBR`).
 * @param currencyCode The currency code of the transaction. Currency Code format: ISO 4217 - ALPHA-3 (e.g: `GBP`).
 * @param transaction The transaction details. [TransactionDetails]
 * @param customer The customer details. [CustomerDetails]
 * @param financialServices The financial services details. [FinancialDetails]
 * @param environment The environment of the transaction. [Environment]
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *clientToken __attribute__((swift_name("clientToken")));
@property (readonly) NSString * _Nullable countryCode __attribute__((swift_name("countryCode")));
@property (readonly) NSString *currencyCode __attribute__((swift_name("currencyCode")));
@property (readonly) MobilesdkCustomerDetails * _Nullable customer __attribute__((swift_name("customer")));
@property (readonly) MobilesdkEnvironment *environment __attribute__((swift_name("environment")));
@property (readonly) MobilesdkFinancialDetails * _Nullable financialServices __attribute__((swift_name("financialServices")));
@property (readonly) NSString *installationId __attribute__((swift_name("installationId")));
@property (readonly) MobilesdkTransactionDetails *transaction __attribute__((swift_name("transaction")));
@property (readonly) MobilesdkTransactionType *transactionType __attribute__((swift_name("transactionType")));
@end


/**
 * # Payment Configuration
 *
 * The [PaymentConfig] class is responsible for setting the payment configuration details.
 *
 * ## How to obtain the parameters?
 * - **installationId**: The installation id provided by PaySuite.
 * - **authToken**: The auth token (valid for 2h) is generated by you using the
 *  either the [requestAuthToken] method or own implementation.
 *
 *  ### API for generating the auth token:
 *  #### Registered Customer
 *  The customerReference will be the unique reference of the customer
 *  where is registered with the merchant. Using the reference you will be able
 *  to manage the customer's payment methods and other details
 *  ```
 *  Headers: Authorization: Basic base64(username:password)
 *  POST acceptor/rest/authorisation/{{instId}}/authoriseClient
 *  {
 *     "scopes": [
 *         "MOBILE_CUSTOMER_PAYMENT"
 *     ],
 *     "customerReference": "CUST_000001"
 *  }
 *  ```
 *  #### Guest Customer
 *  The customerReference will be null for guest customers.
 *  The payment will be processed as a guest user.
 *  ```
 *  Headers: Authorization: Basic base64(username:password)
 *  POST acceptor/rest/authorisation/{{instId}}/authoriseClient
 *  {
 *     "scopes": [
 *         "MOBILE_GUEST_PAYMENT"
 *     ]
 *  }
 *  ```
 *
 * @param installationId The installation id provided by PaySuite
 * @param clientToken The auth client token (valid for 2h) provided by you.
 * @param transactionType The type of transaction. [TransactionType.PAYMENT] or [TransactionType.AUTHORIZATION].
 * @param countryCode (Nullable) The country code of the transaction. It might enable some payment methods on specific
 * countries. Country Code format: ISO 3166 - ALPHA-3 (e.g: `GBR`).
 * @param currencyCode The currency code of the transaction. Currency Code format: ISO 4217 - ALPHA-3 (e.g: `GBP`).
 * @param transaction The transaction details. [TransactionDetails]
 * @param customer The customer details. [CustomerDetails]
 * @param financialServices The financial services details. [FinancialDetails]
 * @param environment The environment of the transaction. [Environment]
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentConfig.Companion")))
@interface MobilesdkPaymentConfigCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * # Payment Configuration
 *
 * The [PaymentConfig] class is responsible for setting the payment configuration details.
 *
 * ## How to obtain the parameters?
 * - **installationId**: The installation id provided by PaySuite.
 * - **authToken**: The auth token (valid for 2h) is generated by you using the
 *  either the [requestAuthToken] method or own implementation.
 *
 *  ### API for generating the auth token:
 *  #### Registered Customer
 *  The customerReference will be the unique reference of the customer
 *  where is registered with the merchant. Using the reference you will be able
 *  to manage the customer's payment methods and other details
 *  ```
 *  Headers: Authorization: Basic base64(username:password)
 *  POST acceptor/rest/authorisation/{{instId}}/authoriseClient
 *  {
 *     "scopes": [
 *         "MOBILE_CUSTOMER_PAYMENT"
 *     ],
 *     "customerReference": "CUST_000001"
 *  }
 *  ```
 *  #### Guest Customer
 *  The customerReference will be null for guest customers.
 *  The payment will be processed as a guest user.
 *  ```
 *  Headers: Authorization: Basic base64(username:password)
 *  POST acceptor/rest/authorisation/{{instId}}/authoriseClient
 *  {
 *     "scopes": [
 *         "MOBILE_GUEST_PAYMENT"
 *     ]
 *  }
 *  ```
 *
 * @param installationId The installation id provided by PaySuite
 * @param clientToken The auth client token (valid for 2h) provided by you.
 * @param transactionType The type of transaction. [TransactionType.PAYMENT] or [TransactionType.AUTHORIZATION].
 * @param countryCode (Nullable) The country code of the transaction. It might enable some payment methods on specific
 * countries. Country Code format: ISO 3166 - ALPHA-3 (e.g: `GBR`).
 * @param currencyCode The currency code of the transaction. Currency Code format: ISO 4217 - ALPHA-3 (e.g: `GBP`).
 * @param transaction The transaction details. [TransactionDetails]
 * @param customer The customer details. [CustomerDetails]
 * @param financialServices The financial services details. [FinancialDetails]
 * @param environment The environment of the transaction. [Environment]
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkPaymentConfigCompanion *shared __attribute__((swift_name("shared")));

/**
 * # Payment Configuration
 *
 * The [PaymentConfig] class is responsible for setting the payment configuration details.
 *
 * ## How to obtain the parameters?
 * - **installationId**: The installation id provided by PaySuite.
 * - **authToken**: The auth token (valid for 2h) is generated by you using the
 *  either the [requestAuthToken] method or own implementation.
 *
 *  ### API for generating the auth token:
 *  #### Registered Customer
 *  The customerReference will be the unique reference of the customer
 *  where is registered with the merchant. Using the reference you will be able
 *  to manage the customer's payment methods and other details
 *  ```
 *  Headers: Authorization: Basic base64(username:password)
 *  POST acceptor/rest/authorisation/{{instId}}/authoriseClient
 *  {
 *     "scopes": [
 *         "MOBILE_CUSTOMER_PAYMENT"
 *     ],
 *     "customerReference": "CUST_000001"
 *  }
 *  ```
 *  #### Guest Customer
 *  The customerReference will be null for guest customers.
 *  The payment will be processed as a guest user.
 *  ```
 *  Headers: Authorization: Basic base64(username:password)
 *  POST acceptor/rest/authorisation/{{instId}}/authoriseClient
 *  {
 *     "scopes": [
 *         "MOBILE_GUEST_PAYMENT"
 *     ]
 *  }
 *  ```
 *
 * @param installationId The installation id provided by PaySuite
 * @param clientToken The auth client token (valid for 2h) provided by you.
 * @param transactionType The type of transaction. [TransactionType.PAYMENT] or [TransactionType.AUTHORIZATION].
 * @param countryCode (Nullable) The country code of the transaction. It might enable some payment methods on specific
 * countries. Country Code format: ISO 3166 - ALPHA-3 (e.g: `GBR`).
 * @param currencyCode The currency code of the transaction. Currency Code format: ISO 4217 - ALPHA-3 (e.g: `GBP`).
 * @param transaction The transaction details. [TransactionDetails]
 * @param customer The customer details. [CustomerDetails]
 * @param financialServices The financial services details. [FinancialDetails]
 * @param environment The environment of the transaction. [Environment]
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Standalone Payment Page
 *
 * This class is used to display a standalone payment page
 * that can be used to process payments.
 *
 * Initialization:
 * ```swift
 * var paymentPage = PaymentPage()
 * ```
 *
 * Setup:
 * ```swift
 * // config is type of PaymentConfig
 * paymentPage.setConfiguration(config: config)
 * // billingAddress is type of BillingAddress
 * // billingAddress can be null if the PaymentPlatform used is Evolve or SBS
 * paymentPage.setBillingAddress(billingAddress: billingAddress)
 * paymentPage.setResultCallback {
 *     // Payment Success
 * } onPaymentFailed: { reason in
 *     // Payment Failed (with reason)
 * } onPaymentCanceled: {
 *     // Payment Canceled by user
 * }
 * // Optionally (if you want to set the merchant name)
 * paymentPage.setMerchantName(name: "Merchant Name")
 * ```
 * Launch: (Display the payment page)
 * ```swift
 * // Display the payment page
 * paymentPage.display()
 * // Optionally you can handle the displaying of the payment page manually
 * // by using the uiController property
 * let uiController: UIViewController = paymentPage.uiController
 *
 * ```
 * @constructor Create a Standalone Payment Page
 * @property billing The billing address to be used for the payment
 * @property config The payment configuration
 * @property merchantName The name of the merchant
 * @property resultCallback The callback to be called when the payment is completed
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentPage")))
@interface MobilesdkPaymentPage : MobilesdkBase

/**
 * Standalone Payment Page
 *
 * This class is used to display a standalone payment page
 * that can be used to process payments.
 *
 * Initialization:
 * ```swift
 * var paymentPage = PaymentPage()
 * ```
 *
 * Setup:
 * ```swift
 * // config is type of PaymentConfig
 * paymentPage.setConfiguration(config: config)
 * // billingAddress is type of BillingAddress
 * // billingAddress can be null if the PaymentPlatform used is Evolve or SBS
 * paymentPage.setBillingAddress(billingAddress: billingAddress)
 * paymentPage.setResultCallback {
 *     // Payment Success
 * } onPaymentFailed: { reason in
 *     // Payment Failed (with reason)
 * } onPaymentCanceled: {
 *     // Payment Canceled by user
 * }
 * // Optionally (if you want to set the merchant name)
 * paymentPage.setMerchantName(name: "Merchant Name")
 * ```
 * Launch: (Display the payment page)
 * ```swift
 * // Display the payment page
 * paymentPage.display()
 * // Optionally you can handle the displaying of the payment page manually
 * // by using the uiController property
 * let uiController: UIViewController = paymentPage.uiController
 *
 * ```
 * @constructor Create a Standalone Payment Page
 * @property billing The billing address to be used for the payment
 * @property config The payment configuration
 * @property merchantName The name of the merchant
 * @property resultCallback The callback to be called when the payment is completed
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Standalone Payment Page
 *
 * This class is used to display a standalone payment page
 * that can be used to process payments.
 *
 * Initialization:
 * ```swift
 * var paymentPage = PaymentPage()
 * ```
 *
 * Setup:
 * ```swift
 * // config is type of PaymentConfig
 * paymentPage.setConfiguration(config: config)
 * // billingAddress is type of BillingAddress
 * // billingAddress can be null if the PaymentPlatform used is Evolve or SBS
 * paymentPage.setBillingAddress(billingAddress: billingAddress)
 * paymentPage.setResultCallback {
 *     // Payment Success
 * } onPaymentFailed: { reason in
 *     // Payment Failed (with reason)
 * } onPaymentCanceled: {
 *     // Payment Canceled by user
 * }
 * // Optionally (if you want to set the merchant name)
 * paymentPage.setMerchantName(name: "Merchant Name")
 * ```
 * Launch: (Display the payment page)
 * ```swift
 * // Display the payment page
 * paymentPage.display()
 * // Optionally you can handle the displaying of the payment page manually
 * // by using the uiController property
 * let uiController: UIViewController = paymentPage.uiController
 *
 * ```
 * @constructor Create a Standalone Payment Page
 * @property billing The billing address to be used for the payment
 * @property config The payment configuration
 * @property merchantName The name of the merchant
 * @property resultCallback The callback to be called when the payment is completed
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * Display the PaymentPage
 */
- (void)display __attribute__((swift_name("display()")));

/**
 * Set the billing address
 */
- (void)setBillingAddressBillingAddress:(MobilesdkBillingAddress *)billingAddress __attribute__((swift_name("setBillingAddress(billingAddress:)")));

/**
 * Set the payment configuration
 */
- (void)setConfigurationConfig:(MobilesdkPaymentConfig *)config __attribute__((swift_name("setConfiguration(config:)")));

/**
 * Set the merchant name
 */
- (void)setMerchantNameName:(NSString *)name __attribute__((swift_name("setMerchantName(name:)")));

/**
 * Set the result callback
 */
- (void)setResultCallbackPaymentResultCallback:(id<MobilesdkPaymentResultCallback>)paymentResultCallback __attribute__((swift_name("setResultCallback(paymentResultCallback:)")));

/**
 * Overload Function to set the result callback
 */
- (void)setResultCallbackOnPaymentSuccess:(void (^)(void))onPaymentSuccess onPaymentFailed:(void (^)(NSString *))onPaymentFailed onPaymentCanceled:(void (^)(void))onPaymentCanceled __attribute__((swift_name("setResultCallback(onPaymentSuccess:onPaymentFailed:onPaymentCanceled:)")));

/**
 * Set the return URL the bank app links back to once
 * authorisation completes. Only used by Pay by Bank.
 */
- (void)setReturnUrlReturnUrl:(NSString *)returnUrl __attribute__((swift_name("setReturnUrl(returnUrl:)")));

/**
 * UIViewController
 *
 * Optionally you can handle the displaying of the payment page manually
 * by using the uiController property
 */
@property (readonly) UIViewController *uiController __attribute__((swift_name("uiController")));
@end


/**
 * # Payment Processor (iOS)
 *
 *
 *  The [PaymentProcessor] class is responsible for handling the payment process.
 *  It is responsible for initiating the payment process,
 *  processing the Card, Google Pay payment methods, and handling the payment result.
 *
 *  ## Available functions
 *  - [initiate] - Initiates the payment processor
 *  - [processCardPayment] - Processes the card payment
 *  - [processApplePayPayment] - Processes the Apple Pay payment
 *  - [processBankPayment] - Processes the Pay by Bank (Open Banking) payment
 *  - [setPaymentResultCallback] - Sets the payment result callback
 *  - [setCardCallback] - Sets the card callback
 *  - [isApplePayAvailable] - Checks if Apple Pay is available
 *  - [detach] - Detaches the payment processor
 *  - [isCardEntered] - Checks if the card is entered
 *
 *
 *  ## Usage
 *  ### Kotlin
 *  ```kotlin
 *  val paymentProcessor = PaymentProcessor(
 *      paymentConfig = paymentConfig,
 *      context = context
 *  )
 *  paymentProcessor.initiate {
 *    // Payment Processor is initiated
 *  }
 *    // Set the payment result callback
 *  paymentProcessor.setPaymentResultCallback(
 *      onPaymentSuccess = {
 *          // Payment is successful
 *      },
 *      onPaymentFailed = { error ->
 *          // Payment failed
 *      },
 *      onPaymentMethodCanceled = {
 *          // Payment method is canceled
 *      }
 *  )
 *  // Set the card callback
 *  paymentProcessor.setCardCallback(
 *      onCardSubmittedSuccessfully = {
 *          // Card is submitted successfully
 *      },
 *      onCardSubmittedWithErrors = { errors ->
 *          // Card is submitted with errors
 *      }
 *  )
 *
 *
 *  // Process the card payment
 *  paymentProcessor.processCardPayment(billingAddress)
 *
 *  // Process the Apple Pay payment
 *  paymentProcessor.processApplePayPayment(appleMerchantId, billingAddress)
 *
 *  // Process the Pay by Bank payment
 *  paymentProcessor.processBankPayment(billingAddress)
 *  ```
 *  ### Swift
 *  ```swift
 *  let processor = PaymentProcessor(config: paymentConfig)
 *  processor.initiate(
 *      onInit: { status in
 *          // Payment Processor is initiated
 *          // if Success, status should be an instance of Status.Initiated
 *      }
 *  )
 *  ...
 *  // Process the card payment
 *  processor.processCardPayment(billingAddress: billingAddress)
 *
 *  // Process the Apple Pay payment
 *  processor.processApplePayPayment(appleMerchantId: appleMerchantId, billingAddress: billingAddress)
 *  ```
 *
 *  @param config The payment configuration; see [PaymentConfig]
 *
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentProcessor")))
@interface MobilesdkPaymentProcessor : MobilesdkBase
- (instancetype)initWithConfig:(MobilesdkPaymentConfig *)config __attribute__((swift_name("init(config:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkPaymentProcessorCompanion *companion __attribute__((swift_name("companion")));

/**
 * Detach the Payment Processor Instance
 *
 * Required after the Payment Processor is no longer needed
 */
- (void)detach __attribute__((swift_name("detach()")));

/**
 * Check if a payment method is available
 *
 * @param method CARD, APPLEPAY, GOOGLEPAY, OPENBANKING
 * @return Boolean
 */
- (BOOL)hasPaymentMethodMethod:(MobilesdkAcceptPaymentMethods *)method __attribute__((swift_name("hasPaymentMethod(method:)")));

/**
 * Initiate the payment processor
 *
 * This function is responsible for initiating the payment processor
 *
 * @param onInit
 */
- (void)initiateOnInit:(void (^)(MobilesdkStatus *))onInit __attribute__((swift_name("initiate(onInit:)")));
- (BOOL)isApplePayAvailable __attribute__((swift_name("isApplePayAvailable()")));

/**
 * ## Start the Apple Pay Payment Process
 *
 * ### Requirements:
 * - The PaymentResultCallback must be set before starting an Apple Pay payment
 * - The PaymentProcessor must be initiated before starting an Apple Pay payment
 * - The Apple Pay Merchant ID must be provided
 * - The billing address must be provided
 * - Apple Pay must be available on the device
 * - The transaction must not have Continuous Authority Agreement set
 * - The transaction must not have Recurring Payment set
 * - The transaction must not have Deferred Payment set
 *
 * @param appleMerchantId The Apple Merchant ID
 * @param billingAddress The billing address
 * @throws IllegalArgumentException
 *
 * @note This method converts instances of IllegalArgumentException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)processApplePayPaymentAppleMerchantId:(NSString *)appleMerchantId billingAddress:(MobilesdkBillingAddress *)billingAddress error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("processApplePayPayment(appleMerchantId:billingAddress:)")));

/**
 * # Start Pay by Bank (Open Banking) Payment Process
 *
 * ### Requirements:
 * - The PaymentResultCallback must be set before starting a Pay by Bank payment
 * - The PaymentProcessor must be initiated before starting a Pay by Bank payment
 * - The Open Banking Payment Method must be an accepted payment method
 * - The billing address must be provided and must be a United Kingdom
 * (GBR) address — Pay by Bank is UK-only
 *
 * ### Usage:
 * ```kotlin
 * paymentProcessor.processBankPayment(billingAddress)
 * ```
 * ```swift
 * processor.processBankPayment(billingAddress: billingAddress)
 * ```
 *
 * @param billingAddress required for Pay by Bank payments; must be a
 * United Kingdom (GBR) address
 * @param returnUrl the merchant-provided return URL the bank app links
 * back to once authorisation completes. Must be an https universal link
 * configured to open the merchant app — the merchant is responsible
 * for its universal link setup (associated domains /
 * apple-app-site-association). Required: the API rejects custom URL
 * schemes.
 * @throws IllegalArgumentException
 *
 * @note This method converts instances of IllegalArgumentException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)processBankPaymentBillingAddress:(MobilesdkBillingAddress *)billingAddress returnUrl:(NSString *)returnUrl error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("processBankPayment(billingAddress:returnUrl:)")));

/**
 * # Start Card Payment Process
 *
 * This function is responsible for starting the card payment process.
 *
 * @param billingAddress
 * @throws IllegalArgumentException
 *
 * @note This method converts instances of IllegalArgumentException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)processCardPaymentBillingAddress:(MobilesdkBillingAddress *)billingAddress error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("processCardPayment(billingAddress:)")));

/**
 * # Start Card Verification Process
 *
 * This function is responsible for starting the verification process for the current card.
 * This can used to verify the card details before processing the payment.
 *
 * **Note:** It uses the same Payment Result Callback as the payment process.
 *
 * @param billingAddress
 * @throws IllegalArgumentException
 *
 * @note This method converts instances of IllegalArgumentException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)processVerifyCardBillingAddress:(MobilesdkBillingAddress *)billingAddress error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("processVerifyCard(billingAddress:)")));

/**
 * Set card callback
 *
 * @param callback
 */
- (void)setCardCallbackCallback:(id<MobilesdkCardCallback>)callback __attribute__((swift_name("setCardCallback(callback:)")));

/**
 * Set card callback
 *
 * @param onCardSubmittedSuccessfully
 * @param onCardSubmittedWithErrors
 */
- (void)setCardCallbackOnCardSubmittedSuccessfully:(void (^)(void))onCardSubmittedSuccessfully onCardSubmittedWithErrors:(void (^)(MobilesdkKotlinArray<MobilesdkCardError *> *))onCardSubmittedWithErrors __attribute__((swift_name("setCardCallback(onCardSubmittedSuccessfully:onCardSubmittedWithErrors:)")));

/**
 * Set payment result callback
 *
 * @param callback
 */
- (void)setPaymentResultCallbackCallback:(id<MobilesdkPaymentResultCallback>)callback __attribute__((swift_name("setPaymentResultCallback(callback:)")));

/**
 * Set payment result callback
 *
 * @param onPaymentSuccess
 * @param onPaymentFailed
 * @param onPaymentMethodCanceled
 */
- (void)setPaymentResultCallbackOnPaymentSuccess:(void (^)(void))onPaymentSuccess onPaymentFailed:(void (^)(NSString *, NSString * _Nullable))onPaymentFailed onPaymentMethodCanceled:(void (^)(void))onPaymentMethodCanceled __attribute__((swift_name("setPaymentResultCallback(onPaymentSuccess:onPaymentFailed:onPaymentMethodCanceled:)")));

/**
 * Set payment result callback
 *
 * @param onPaymentSuccess
 * @param onPaymentFailed
 * @param onPaymentMethodCanceled
 * @param onPaymentPending
 */
- (void)setPaymentResultCallbackOnPaymentSuccess:(void (^)(void))onPaymentSuccess onPaymentFailed:(void (^)(NSString *, NSString * _Nullable))onPaymentFailed onPaymentMethodCanceled:(void (^)(void))onPaymentMethodCanceled onPaymentPending:(void (^)(NSString * _Nullable))onPaymentPending __attribute__((swift_name("setPaymentResultCallback(onPaymentSuccess:onPaymentFailed:onPaymentMethodCanceled:onPaymentPending:)")));

/**
 * ## Enable Card Saving
 *
 * This function is responsible for setting whether or not the card should be saved after the transaction.
 *
 * @param isSaveCard
 */
- (void)setSaveCardIsSaveCard:(BOOL)isSaveCard __attribute__((swift_name("setSaveCard(isSaveCard:)")));

/**
 * Set transaction id callback
 *
 * @param callback
 */
- (void)setTransactionIdCallbackCallback:(id<MobilesdkTransactionIdCallback>)callback __attribute__((swift_name("setTransactionIdCallback(callback:)")));

/**
 * Set transaction id callback
 *
 * @param onTransactionId
 */
- (void)setTransactionIdCallbackOnTransactionId:(void (^)(NSString *))onTransactionId __attribute__((swift_name("setTransactionIdCallback(onTransactionId:)")));
@property (readonly) BOOL canSaveCards __attribute__((swift_name("canSaveCards")));
@property (readonly) BOOL canUseSavedCards __attribute__((swift_name("canUseSavedCards")));
@property (readonly) BOOL initiated __attribute__((swift_name("initiated")));
@property (readonly) BOOL isCardEntered __attribute__((swift_name("isCardEntered")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentProcessor.Companion")))
@interface MobilesdkPaymentProcessorCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkPaymentProcessorCompanion *shared __attribute__((swift_name("shared")));
- (MobilesdkPaymentProcessor *)doNewInstanceContext:(id _Nullable)context paymentConfig:(MobilesdkPaymentConfig *)paymentConfig __attribute__((swift_name("doNewInstance(context:paymentConfig:)")));
- (MobilesdkPaymentProcessor *)doNewInstanceContext:(id _Nullable)context paymentConfig:(MobilesdkPaymentConfig *)paymentConfig onPaymentSuccess:(void (^)(MobilesdkPaymentProcessor *))onPaymentSuccess onPaymentFailed:(void (^)(MobilesdkPaymentProcessor *, NSString *, NSString * _Nullable))onPaymentFailed onPaymentMethodCanceled:(void (^)(MobilesdkPaymentProcessor *))onPaymentMethodCanceled onCardSubmittedSuccessfully:(void (^)(MobilesdkPaymentProcessor *))onCardSubmittedSuccessfully onCardSubmittedWithErrors:(void (^)(MobilesdkPaymentProcessor *, MobilesdkKotlinArray<MobilesdkCardError *> *))onCardSubmittedWithErrors onInitiate:(void (^)(MobilesdkPaymentProcessor *, MobilesdkStatus *))onInitiate __attribute__((swift_name("doNewInstance(context:paymentConfig:onPaymentSuccess:onPaymentFailed:onPaymentMethodCanceled:onCardSubmittedSuccessfully:onCardSubmittedWithErrors:onInitiate:)")));
@end


/**
 * # Card Callback
 * Callback for card submission
 *
 * [onCardSubmittedSuccessfully] is called when the card is submitted successfully and is valid (passes all validations)
 * [onCardSubmittedWithErrors] is called when the card is submitted with errors
 *
 * @constructor Create empty Card callback
 */
__attribute__((swift_name("CardCallback")))
@protocol MobilesdkCardCallback
@required

/**
 * # On card submitted successfully
 * Called when the card is submitted successfully and is valid (passes all validations)
 */
- (void)onCardSubmittedSuccessfully __attribute__((swift_name("onCardSubmittedSuccessfully()")));

/**
 * # On card submitted with errors
 * Called when the card is submitted with errors
 *
 *
 * @param errors
 */
- (void)onCardSubmittedWithErrorsErrors:(MobilesdkKotlinArray<MobilesdkCardError *> *)errors __attribute__((swift_name("onCardSubmittedWithErrors(errors:)")));
@end


/**
 * Payment result callback
 *
 * @constructor Create empty Payment result callback
 */
__attribute__((swift_name("PaymentResultCallback")))
@protocol MobilesdkPaymentResultCallback
@required

/**
 * # On Payment Result Callback
 *
 * This callback is used to notify the result of the payment.
 *
 * Possible status values:
 * - Success
 * - Error (with a message)
 * - Canceled
 * - Initiated (when the payment is initiated)
 * - SessionExpired (when the session/authentication token is expired)
 * - Pending (Pay by Bank only: the resume could not confirm the
 *   transaction because the provider is still processing it, so it must be
 *   retrieved with its transaction id for the final status)
 *
 * @param status The status of the payment result
 */
- (void)onPaymentResultStatus:(MobilesdkStatus *)status __attribute__((swift_name("onPaymentResult(status:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentResultCallbackCompanion")))
@interface MobilesdkPaymentResultCallbackCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkPaymentResultCallbackCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * # Transaction Id Callback
 *
 * Delivers the API-assigned transaction id as soon as the payment response
 * carrying it is received — before the payment itself reaches its outcome
 * (for example before 3-D Secure completes, before the bank redirects back,
 * or before the wallet sheet resolves).
 *
 * Register it once on the [com.accesspaysuite.mobilesdk.PaymentProcessor] to
 * track every payment started through that processor, whatever the payment
 * method.
 */
__attribute__((swift_name("TransactionIdCallback")))
@protocol MobilesdkTransactionIdCallback
@required

/**
 * # On Transaction Id Received
 *
 * Called once per transaction. The callback runs on the SDK's network
 * thread; dispatch to the main thread before updating UI.
 *
 * @param transactionId The transaction id returned by the API.
 */
- (void)onTransactionIdReceivedTransactionId:(NSString *)transactionId __attribute__((swift_name("onTransactionIdReceived(transactionId:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionIdCallbackCompanion")))
@interface MobilesdkTransactionIdCallbackCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkTransactionIdCallbackCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * # Payment Status
 *
 * Represents the status of a payment operation.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("Status")))
@interface MobilesdkStatus : MobilesdkBase
@property (class, readonly, getter=companion) MobilesdkStatusCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * # Canceled
 * Indicates that the payment operation was canceled.
 * This status is typically used when the user cancels the payment operation
 * for a specific payment method.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Status.Canceled")))
@interface MobilesdkStatusCanceled : MobilesdkStatus
+ (instancetype)alloc __attribute__((unavailable));

/**
 * # Canceled
 * Indicates that the payment operation was canceled.
 * This status is typically used when the user cancels the payment operation
 * for a specific payment method.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)canceled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkStatusCanceled *shared __attribute__((swift_name("shared")));

/**
 * # Canceled
 * Indicates that the payment operation was canceled.
 * This status is typically used when the user cancels the payment operation
 * for a specific payment method.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * # Canceled
 * Indicates that the payment operation was canceled.
 * This status is typically used when the user cancels the payment operation
 * for a specific payment method.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * # Canceled
 * Indicates that the payment operation was canceled.
 * This status is typically used when the user cancels the payment operation
 * for a specific payment method.
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * # Canceled
 * Indicates that the payment operation was canceled.
 * This status is typically used when the user cancels the payment operation
 * for a specific payment method.
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MobilesdkKotlinArray<id<MobilesdkKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));

/**
 * # Canceled
 * Indicates that the payment operation was canceled.
 * This status is typically used when the user cancels the payment operation
 * for a specific payment method.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * # Payment Status
 *
 * Represents the status of a payment operation.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Status.Companion")))
@interface MobilesdkStatusCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * # Payment Status
 *
 * Represents the status of a payment operation.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkStatusCompanion *shared __attribute__((swift_name("shared")));

/**
 * # Payment Status
 *
 * Represents the status of a payment operation.
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * # Payment Status
 *
 * Represents the status of a payment operation.
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MobilesdkKotlinArray<id<MobilesdkKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * # Error
 * Indicates that an error occurred during the payment operation.
 * Contains a message with details about the error.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Status.Error")))
@interface MobilesdkStatusError : MobilesdkStatus
- (instancetype)initWithMessage:(NSString *)message traceId:(NSString * _Nullable)traceId __attribute__((swift_name("init(message:traceId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkStatusErrorCompanion *companion __attribute__((swift_name("companion")));
- (MobilesdkStatusError *)doCopyMessage:(NSString *)message traceId:(NSString * _Nullable)traceId __attribute__((swift_name("doCopy(message:traceId:)")));

/**
 * # Error
 * Indicates that an error occurred during the payment operation.
 * Contains a message with details about the error.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * # Error
 * Indicates that an error occurred during the payment operation.
 * Contains a message with details about the error.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * # Error
 * Indicates that an error occurred during the payment operation.
 * Contains a message with details about the error.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString * _Nullable traceId __attribute__((swift_name("traceId")));
@end


/**
 * # Error
 * Indicates that an error occurred during the payment operation.
 * Contains a message with details about the error.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Status.ErrorCompanion")))
@interface MobilesdkStatusErrorCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * # Error
 * Indicates that an error occurred during the payment operation.
 * Contains a message with details about the error.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkStatusErrorCompanion *shared __attribute__((swift_name("shared")));

/**
 * # Error
 * Indicates that an error occurred during the payment operation.
 * Contains a message with details about the error.
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * # Initiated
 * Indicates that the payment processor was initiated.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Status.Initiated")))
@interface MobilesdkStatusInitiated : MobilesdkStatus
+ (instancetype)alloc __attribute__((unavailable));

/**
 * # Initiated
 * Indicates that the payment processor was initiated.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)initiated __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkStatusInitiated *shared __attribute__((swift_name("shared")));

/**
 * # Initiated
 * Indicates that the payment processor was initiated.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * # Initiated
 * Indicates that the payment processor was initiated.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * # Initiated
 * Indicates that the payment processor was initiated.
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * # Initiated
 * Indicates that the payment processor was initiated.
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MobilesdkKotlinArray<id<MobilesdkKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));

/**
 * # Initiated
 * Indicates that the payment processor was initiated.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * # Pending
 * Indicates that an Open Banking payment could not be confirmed because the
 * provider is still processing the transaction.
 *
 * The payment has not failed. The resume must not be retried; the
 * transaction has to be retrieved with [transactionId] (or awaited through
 * a notification) to get its final status. This status is only reported for
 * Pay by Bank payments.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Status.Pending")))
@interface MobilesdkStatusPending : MobilesdkStatus
- (instancetype)initWithTransactionId:(NSString * _Nullable)transactionId __attribute__((swift_name("init(transactionId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkStatusPendingCompanion *companion __attribute__((swift_name("companion")));
- (MobilesdkStatusPending *)doCopyTransactionId:(NSString * _Nullable)transactionId __attribute__((swift_name("doCopy(transactionId:)")));

/**
 * # Pending
 * Indicates that an Open Banking payment could not be confirmed because the
 * provider is still processing the transaction.
 *
 * The payment has not failed. The resume must not be retried; the
 * transaction has to be retrieved with [transactionId] (or awaited through
 * a notification) to get its final status. This status is only reported for
 * Pay by Bank payments.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * # Pending
 * Indicates that an Open Banking payment could not be confirmed because the
 * provider is still processing the transaction.
 *
 * The payment has not failed. The resume must not be retried; the
 * transaction has to be retrieved with [transactionId] (or awaited through
 * a notification) to get its final status. This status is only reported for
 * Pay by Bank payments.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * # Pending
 * Indicates that an Open Banking payment could not be confirmed because the
 * provider is still processing the transaction.
 *
 * The payment has not failed. The resume must not be retried; the
 * transaction has to be retrieved with [transactionId] (or awaited through
 * a notification) to get its final status. This status is only reported for
 * Pay by Bank payments.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable transactionId __attribute__((swift_name("transactionId")));
@end


/**
 * # Pending
 * Indicates that an Open Banking payment could not be confirmed because the
 * provider is still processing the transaction.
 *
 * The payment has not failed. The resume must not be retried; the
 * transaction has to be retrieved with [transactionId] (or awaited through
 * a notification) to get its final status. This status is only reported for
 * Pay by Bank payments.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Status.PendingCompanion")))
@interface MobilesdkStatusPendingCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * # Pending
 * Indicates that an Open Banking payment could not be confirmed because the
 * provider is still processing the transaction.
 *
 * The payment has not failed. The resume must not be retried; the
 * transaction has to be retrieved with [transactionId] (or awaited through
 * a notification) to get its final status. This status is only reported for
 * Pay by Bank payments.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkStatusPendingCompanion *shared __attribute__((swift_name("shared")));

/**
 * # Pending
 * Indicates that an Open Banking payment could not be confirmed because the
 * provider is still processing the transaction.
 *
 * The payment has not failed. The resume must not be retried; the
 * transaction has to be retrieved with [transactionId] (or awaited through
 * a notification) to get its final status. This status is only reported for
 * Pay by Bank payments.
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * # SessionExpired
 * Indicates that the payment session has expired.
 * This status is typically used when the payment session has expired and
 * a new authentication is required.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Status.SessionExpired")))
@interface MobilesdkStatusSessionExpired : MobilesdkStatus
+ (instancetype)alloc __attribute__((unavailable));

/**
 * # SessionExpired
 * Indicates that the payment session has expired.
 * This status is typically used when the payment session has expired and
 * a new authentication is required.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sessionExpired __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkStatusSessionExpired *shared __attribute__((swift_name("shared")));

/**
 * # SessionExpired
 * Indicates that the payment session has expired.
 * This status is typically used when the payment session has expired and
 * a new authentication is required.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * # SessionExpired
 * Indicates that the payment session has expired.
 * This status is typically used when the payment session has expired and
 * a new authentication is required.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * # SessionExpired
 * Indicates that the payment session has expired.
 * This status is typically used when the payment session has expired and
 * a new authentication is required.
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * # SessionExpired
 * Indicates that the payment session has expired.
 * This status is typically used when the payment session has expired and
 * a new authentication is required.
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MobilesdkKotlinArray<id<MobilesdkKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));

/**
 * # SessionExpired
 * Indicates that the payment session has expired.
 * This status is typically used when the payment session has expired and
 * a new authentication is required.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * # Success
 * Indicates that the payment operation was successful.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Status.Success")))
@interface MobilesdkStatusSuccess : MobilesdkStatus
+ (instancetype)alloc __attribute__((unavailable));

/**
 * # Success
 * Indicates that the payment operation was successful.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkStatusSuccess *shared __attribute__((swift_name("shared")));

/**
 * # Success
 * Indicates that the payment operation was successful.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * # Success
 * Indicates that the payment operation was successful.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * # Success
 * Indicates that the payment operation was successful.
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * # Success
 * Indicates that the payment operation was successful.
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MobilesdkKotlinArray<id<MobilesdkKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));

/**
 * # Success
 * Indicates that the payment operation was successful.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * # Unknown
 * Indicates that the status of the payment operation is unknown.
 * This status is typically used when the payment operation has an unexpected status.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Status.Unknown")))
@interface MobilesdkStatusUnknown : MobilesdkStatus
+ (instancetype)alloc __attribute__((unavailable));

/**
 * # Unknown
 * Indicates that the status of the payment operation is unknown.
 * This status is typically used when the payment operation has an unexpected status.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unknown __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkStatusUnknown *shared __attribute__((swift_name("shared")));

/**
 * # Unknown
 * Indicates that the status of the payment operation is unknown.
 * This status is typically used when the payment operation has an unexpected status.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * # Unknown
 * Indicates that the status of the payment operation is unknown.
 * This status is typically used when the payment operation has an unexpected status.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * # Unknown
 * Indicates that the status of the payment operation is unknown.
 * This status is typically used when the payment operation has an unexpected status.
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * # Unknown
 * Indicates that the status of the payment operation is unknown.
 * This status is typically used when the payment operation has an unexpected status.
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MobilesdkKotlinArray<id<MobilesdkKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));

/**
 * # Unknown
 * Indicates that the status of the payment operation is unknown.
 * This status is typically used when the payment operation has an unexpected status.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * # Billing Address
 *
 * > The billing address of the Customer. Will be used for AVS checks. We’ll save the billing address when the customer makes their first payment.
 * > Providing a billing address for subsequent payments will update the address we’ve saved if you send new, empty or no values for each field.
 *
 * @property name The Customer’s full name name.
 * @property line1 Line 1 of the Customer’s billing address.
 * @property line2 Line 2 of the Customer’s billing address.
 * @property line3 Line 3 of the Customer’s billing address.
 * @property line4 Line 4 of the Customer’s billing address.
 * @property city City of the Customer’s billing address.
 * @property region Region of the Customer’s billing address.
 * @property postcode Postcode of the Customer’s billing address.
 * @property countryCode The 3 character ISO-3166-1 code for the Customer’s billing address country.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BillingAddress")))
@interface MobilesdkBillingAddress : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithName:(NSString * _Nullable)name line1:(NSString * _Nullable)line1 line2:(NSString * _Nullable)line2 city:(NSString * _Nullable)city region:(NSString * _Nullable)region postcode:(NSString * _Nullable)postcode countryCode:(NSString *)countryCode __attribute__((swift_name("init(name:line1:line2:city:region:postcode:countryCode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString * _Nullable)name line1:(NSString * _Nullable)line1 line2:(NSString * _Nullable)line2 line3:(NSString * _Nullable)line3 line4:(NSString * _Nullable)line4 city:(NSString * _Nullable)city region:(NSString * _Nullable)region postcode:(NSString * _Nullable)postcode countryCode:(NSString * _Nullable)countryCode __attribute__((swift_name("init(name:line1:line2:line3:line4:city:region:postcode:countryCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkBillingAddressCompanion *companion __attribute__((swift_name("companion")));
- (MobilesdkBillingAddress *)doCopyName:(NSString * _Nullable)name line1:(NSString * _Nullable)line1 line2:(NSString * _Nullable)line2 line3:(NSString * _Nullable)line3 line4:(NSString * _Nullable)line4 city:(NSString * _Nullable)city region:(NSString * _Nullable)region postcode:(NSString * _Nullable)postcode countryCode:(NSString * _Nullable)countryCode __attribute__((swift_name("doCopy(name:line1:line2:line3:line4:city:region:postcode:countryCode:)")));

/**
 * # Billing Address
 *
 * > The billing address of the Customer. Will be used for AVS checks. We’ll save the billing address when the customer makes their first payment.
 * > Providing a billing address for subsequent payments will update the address we’ve saved if you send new, empty or no values for each field.
 *
 * @property name The Customer’s full name name.
 * @property line1 Line 1 of the Customer’s billing address.
 * @property line2 Line 2 of the Customer’s billing address.
 * @property line3 Line 3 of the Customer’s billing address.
 * @property line4 Line 4 of the Customer’s billing address.
 * @property city City of the Customer’s billing address.
 * @property region Region of the Customer’s billing address.
 * @property postcode Postcode of the Customer’s billing address.
 * @property countryCode The 3 character ISO-3166-1 code for the Customer’s billing address country.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * # Billing Address
 *
 * > The billing address of the Customer. Will be used for AVS checks. We’ll save the billing address when the customer makes their first payment.
 * > Providing a billing address for subsequent payments will update the address we’ve saved if you send new, empty or no values for each field.
 *
 * @property name The Customer’s full name name.
 * @property line1 Line 1 of the Customer’s billing address.
 * @property line2 Line 2 of the Customer’s billing address.
 * @property line3 Line 3 of the Customer’s billing address.
 * @property line4 Line 4 of the Customer’s billing address.
 * @property city City of the Customer’s billing address.
 * @property region Region of the Customer’s billing address.
 * @property postcode Postcode of the Customer’s billing address.
 * @property countryCode The 3 character ISO-3166-1 code for the Customer’s billing address country.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Set city
 *
 * @param city
 */
- (MobilesdkBillingAddress *)setCityCity:(NSString * _Nullable)city __attribute__((swift_name("setCity(city:)")));

/**
 * Set country code
 *
 * @param countryCode
 */
- (MobilesdkBillingAddress *)setCountryCodeCountryCode:(NSString *)countryCode __attribute__((swift_name("setCountryCode(countryCode:)")));

/**
 * Set line1
 *
 * @param line1
 */
- (MobilesdkBillingAddress *)setLine1Line1:(NSString * _Nullable)line1 __attribute__((swift_name("setLine1(line1:)")));

/**
 * Set line2
 *
 * @param line2
 */
- (MobilesdkBillingAddress *)setLine2Line2:(NSString * _Nullable)line2 __attribute__((swift_name("setLine2(line2:)")));

/**
 * Set line3
 *
 * @param line3
 */
- (MobilesdkBillingAddress *)setLine3Line3:(NSString * _Nullable)line3 __attribute__((swift_name("setLine3(line3:)")));

/**
 * Set line4
 *
 * @param line4
 */
- (MobilesdkBillingAddress *)setLine4Line4:(NSString * _Nullable)line4 __attribute__((swift_name("setLine4(line4:)")));

/**
 * Set name
 *
 * @param name
 */
- (MobilesdkBillingAddress *)setNameName:(NSString * _Nullable)name __attribute__((swift_name("setName(name:)")));

/**
 * Set postcode
 *
 * @param postcode
 */
- (MobilesdkBillingAddress *)setPostcodePostcode:(NSString * _Nullable)postcode __attribute__((swift_name("setPostcode(postcode:)")));

/**
 * Set region
 *
 * @param region
 */
- (MobilesdkBillingAddress *)setRegionRegion:(NSString * _Nullable)region __attribute__((swift_name("setRegion(region:)")));

/**
 * # Billing Address
 *
 * > The billing address of the Customer. Will be used for AVS checks. We’ll save the billing address when the customer makes their first payment.
 * > Providing a billing address for subsequent payments will update the address we’ve saved if you send new, empty or no values for each field.
 *
 * @property name The Customer’s full name name.
 * @property line1 Line 1 of the Customer’s billing address.
 * @property line2 Line 2 of the Customer’s billing address.
 * @property line3 Line 3 of the Customer’s billing address.
 * @property line4 Line 4 of the Customer’s billing address.
 * @property city City of the Customer’s billing address.
 * @property region Region of the Customer’s billing address.
 * @property postcode Postcode of the Customer’s billing address.
 * @property countryCode The 3 character ISO-3166-1 code for the Customer’s billing address country.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable city __attribute__((swift_name("city")));
@property NSString * _Nullable countryCode __attribute__((swift_name("countryCode")));
@property NSString * _Nullable line1 __attribute__((swift_name("line1")));
@property NSString * _Nullable line2 __attribute__((swift_name("line2")));
@property NSString * _Nullable line3 __attribute__((swift_name("line3")));
@property NSString * _Nullable line4 __attribute__((swift_name("line4")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable postcode __attribute__((swift_name("postcode")));
@property NSString * _Nullable region __attribute__((swift_name("region")));
@end


/**
 * # Billing Address
 *
 * > The billing address of the Customer. Will be used for AVS checks. We’ll save the billing address when the customer makes their first payment.
 * > Providing a billing address for subsequent payments will update the address we’ve saved if you send new, empty or no values for each field.
 *
 * @property name The Customer’s full name name.
 * @property line1 Line 1 of the Customer’s billing address.
 * @property line2 Line 2 of the Customer’s billing address.
 * @property line3 Line 3 of the Customer’s billing address.
 * @property line4 Line 4 of the Customer’s billing address.
 * @property city City of the Customer’s billing address.
 * @property region Region of the Customer’s billing address.
 * @property postcode Postcode of the Customer’s billing address.
 * @property countryCode The 3 character ISO-3166-1 code for the Customer’s billing address country.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BillingAddress.Companion")))
@interface MobilesdkBillingAddressCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * # Billing Address
 *
 * > The billing address of the Customer. Will be used for AVS checks. We’ll save the billing address when the customer makes their first payment.
 * > Providing a billing address for subsequent payments will update the address we’ve saved if you send new, empty or no values for each field.
 *
 * @property name The Customer’s full name name.
 * @property line1 Line 1 of the Customer’s billing address.
 * @property line2 Line 2 of the Customer’s billing address.
 * @property line3 Line 3 of the Customer’s billing address.
 * @property line4 Line 4 of the Customer’s billing address.
 * @property city City of the Customer’s billing address.
 * @property region Region of the Customer’s billing address.
 * @property postcode Postcode of the Customer’s billing address.
 * @property countryCode The 3 character ISO-3166-1 code for the Customer’s billing address country.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkBillingAddressCompanion *shared __attribute__((swift_name("shared")));

/**
 * # Billing Address
 *
 * > The billing address of the Customer. Will be used for AVS checks. We’ll save the billing address when the customer makes their first payment.
 * > Providing a billing address for subsequent payments will update the address we’ve saved if you send new, empty or no values for each field.
 *
 * @property name The Customer’s full name name.
 * @property line1 Line 1 of the Customer’s billing address.
 * @property line2 Line 2 of the Customer’s billing address.
 * @property line3 Line 3 of the Customer’s billing address.
 * @property line4 Line 4 of the Customer’s billing address.
 * @property city City of the Customer’s billing address.
 * @property region Region of the Customer’s billing address.
 * @property postcode Postcode of the Customer’s billing address.
 * @property countryCode The 3 character ISO-3166-1 code for the Customer’s billing address country.
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * # Card error
 */
__attribute__((swift_name("CardError")))
@interface MobilesdkCardError : MobilesdkBase
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end


/**
 * # Card Number Error
 *
 * It will trigger when the card number is invalid
 * Validation:
 * - Card number must pass the Luhn algorithm
 *
 * @property message
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardError.CardNumber")))
@interface MobilesdkCardErrorCardNumber : MobilesdkCardError
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (MobilesdkCardErrorCardNumber *)doCopyMessage:(NSString *)message __attribute__((swift_name("doCopy(message:)")));

/**
 * # Card Number Error
 *
 * It will trigger when the card number is invalid
 * Validation:
 * - Card number must pass the Luhn algorithm
 *
 * @property message
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * # Card Number Error
 *
 * It will trigger when the card number is invalid
 * Validation:
 * - Card number must pass the Luhn algorithm
 *
 * @property message
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * # Card Number Error
 *
 * It will trigger when the card number is invalid
 * Validation:
 * - Card number must pass the Luhn algorithm
 *
 * @property message
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end


/**
 * # Cardholder Error
 *
 * It will trigger when the cardholder name is invalid
 * Validation:
 * - Cardholder name must not be empty
 * - Cardholder name must not contain special characters
 * - Cardholder name must not contain numbers
 *
 * @property message
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardError.Cardholder")))
@interface MobilesdkCardErrorCardholder : MobilesdkCardError
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (MobilesdkCardErrorCardholder *)doCopyMessage:(NSString *)message __attribute__((swift_name("doCopy(message:)")));

/**
 * # Cardholder Error
 *
 * It will trigger when the cardholder name is invalid
 * Validation:
 * - Cardholder name must not be empty
 * - Cardholder name must not contain special characters
 * - Cardholder name must not contain numbers
 *
 * @property message
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * # Cardholder Error
 *
 * It will trigger when the cardholder name is invalid
 * Validation:
 * - Cardholder name must not be empty
 * - Cardholder name must not contain special characters
 * - Cardholder name must not contain numbers
 *
 * @property message
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * # Cardholder Error
 *
 * It will trigger when the cardholder name is invalid
 * Validation:
 * - Cardholder name must not be empty
 * - Cardholder name must not contain special characters
 * - Cardholder name must not contain numbers
 *
 * @property message
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end


/**
 * # CVV/CSC/CV2 Error
 *
 * It will trigger when the CVV is invalid
 * Validation:
 * - CVV must be 3 or 4 digits
 *
 * @property message
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardError.Cvv")))
@interface MobilesdkCardErrorCvv : MobilesdkCardError
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (MobilesdkCardErrorCvv *)doCopyMessage:(NSString *)message __attribute__((swift_name("doCopy(message:)")));

/**
 * # CVV/CSC/CV2 Error
 *
 * It will trigger when the CVV is invalid
 * Validation:
 * - CVV must be 3 or 4 digits
 *
 * @property message
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * # CVV/CSC/CV2 Error
 *
 * It will trigger when the CVV is invalid
 * Validation:
 * - CVV must be 3 or 4 digits
 *
 * @property message
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * # CVV/CSC/CV2 Error
 *
 * It will trigger when the CVV is invalid
 * Validation:
 * - CVV must be 3 or 4 digits
 *
 * @property message
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end


/**
 * # Expiry Date Error
 *
 * It will trigger when the expiry date is invalid
 * Validation:
 * - Expiry date must be in the future
 *
 * @property message
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardError.ExpiryDate")))
@interface MobilesdkCardErrorExpiryDate : MobilesdkCardError
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (MobilesdkCardErrorExpiryDate *)doCopyMessage:(NSString *)message __attribute__((swift_name("doCopy(message:)")));

/**
 * # Expiry Date Error
 *
 * It will trigger when the expiry date is invalid
 * Validation:
 * - Expiry date must be in the future
 *
 * @property message
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * # Expiry Date Error
 *
 * It will trigger when the expiry date is invalid
 * Validation:
 * - Expiry date must be in the future
 *
 * @property message
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * # Expiry Date Error
 *
 * It will trigger when the expiry date is invalid
 * Validation:
 * - Expiry date must be in the future
 *
 * @property message
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end


/**
 * # Continuous authority agreement
 *
 * > The continuous authority agreement established with the cardholder.
 * > Required if you want to process a transaction initiating a recurring or instalment series using 3DSv2
 *
 * @property minFrequency Minimum number of days expected between payments in a recurring or instalment sequence. Must be >= 1.
 * @property expiry Date (YYYY-MM-DD) at which recurring/instalment agreement expires, or at which it will need to be re-authenticated in order to continue. Must be in the future.
 * @property numberOfInstalments Total number of payments in an instalment sequence – including this one, if starting with a payment. Required only for instalments; must be >= 2.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContinuousAuthorityAgreement")))
@interface MobilesdkContinuousAuthorityAgreement : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMinFrequency:(NSString * _Nullable)minFrequency expiry:(NSString * _Nullable)expiry numberOfInstalments:(NSString * _Nullable)numberOfInstalments __attribute__((swift_name("init(minFrequency:expiry:numberOfInstalments:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkContinuousAuthorityAgreementCompanion *companion __attribute__((swift_name("companion")));
- (MobilesdkContinuousAuthorityAgreement *)doCopyMinFrequency:(NSString * _Nullable)minFrequency expiry:(NSString * _Nullable)expiry numberOfInstalments:(NSString * _Nullable)numberOfInstalments __attribute__((swift_name("doCopy(minFrequency:expiry:numberOfInstalments:)")));

/**
 * # Continuous authority agreement
 *
 * > The continuous authority agreement established with the cardholder.
 * > Required if you want to process a transaction initiating a recurring or instalment series using 3DSv2
 *
 * @property minFrequency Minimum number of days expected between payments in a recurring or instalment sequence. Must be >= 1.
 * @property expiry Date (YYYY-MM-DD) at which recurring/instalment agreement expires, or at which it will need to be re-authenticated in order to continue. Must be in the future.
 * @property numberOfInstalments Total number of payments in an instalment sequence – including this one, if starting with a payment. Required only for instalments; must be >= 2.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * # Continuous authority agreement
 *
 * > The continuous authority agreement established with the cardholder.
 * > Required if you want to process a transaction initiating a recurring or instalment series using 3DSv2
 *
 * @property minFrequency Minimum number of days expected between payments in a recurring or instalment sequence. Must be >= 1.
 * @property expiry Date (YYYY-MM-DD) at which recurring/instalment agreement expires, or at which it will need to be re-authenticated in order to continue. Must be in the future.
 * @property numberOfInstalments Total number of payments in an instalment sequence – including this one, if starting with a payment. Required only for instalments; must be >= 2.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * # Continuous authority agreement
 *
 * > The continuous authority agreement established with the cardholder.
 * > Required if you want to process a transaction initiating a recurring or instalment series using 3DSv2
 *
 * @property minFrequency Minimum number of days expected between payments in a recurring or instalment sequence. Must be >= 1.
 * @property expiry Date (YYYY-MM-DD) at which recurring/instalment agreement expires, or at which it will need to be re-authenticated in order to continue. Must be in the future.
 * @property numberOfInstalments Total number of payments in an instalment sequence – including this one, if starting with a payment. Required only for instalments; must be >= 2.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable expiry __attribute__((swift_name("expiry")));
@property (readonly) NSString * _Nullable minFrequency __attribute__((swift_name("minFrequency")));
@property (readonly) NSString * _Nullable numberOfInstalments __attribute__((swift_name("numberOfInstalments")));
@end


/**
 * # Continuous authority agreement
 *
 * > The continuous authority agreement established with the cardholder.
 * > Required if you want to process a transaction initiating a recurring or instalment series using 3DSv2
 *
 * @property minFrequency Minimum number of days expected between payments in a recurring or instalment sequence. Must be >= 1.
 * @property expiry Date (YYYY-MM-DD) at which recurring/instalment agreement expires, or at which it will need to be re-authenticated in order to continue. Must be in the future.
 * @property numberOfInstalments Total number of payments in an instalment sequence – including this one, if starting with a payment. Required only for instalments; must be >= 2.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContinuousAuthorityAgreement.Companion")))
@interface MobilesdkContinuousAuthorityAgreementCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * # Continuous authority agreement
 *
 * > The continuous authority agreement established with the cardholder.
 * > Required if you want to process a transaction initiating a recurring or instalment series using 3DSv2
 *
 * @property minFrequency Minimum number of days expected between payments in a recurring or instalment sequence. Must be >= 1.
 * @property expiry Date (YYYY-MM-DD) at which recurring/instalment agreement expires, or at which it will need to be re-authenticated in order to continue. Must be in the future.
 * @property numberOfInstalments Total number of payments in an instalment sequence – including this one, if starting with a payment. Required only for instalments; must be >= 2.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkContinuousAuthorityAgreementCompanion *shared __attribute__((swift_name("shared")));

/**
 * # Continuous authority agreement
 *
 * > The continuous authority agreement established with the cardholder.
 * > Required if you want to process a transaction initiating a recurring or instalment series using 3DSv2
 *
 * @property minFrequency Minimum number of days expected between payments in a recurring or instalment sequence. Must be >= 1.
 * @property expiry Date (YYYY-MM-DD) at which recurring/instalment agreement expires, or at which it will need to be re-authenticated in order to continue. Must be in the future.
 * @property numberOfInstalments Total number of payments in an instalment sequence – including this one, if starting with a payment. Required only for instalments; must be >= 2.
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * # Customer Details
 *
 * @property email Email address for the Customer.
 * @property dateOfBirth Date of birth for the Customer.
 * @property telephone Telephone number for the Customer.
 * @property customerRef Your reference for the Customer. Not required if registered is set to false, mandatory otherwise.
 * @property registered Indicates whether the Customer is registered with the Merchant. If set to true, the customerRef field is mandatory.
 * If set to false, the customerRef field is not required, but supported, it can be used to store a reference to the Customer without registering them.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomerDetails")))
@interface MobilesdkCustomerDetails : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithEmail:(NSString * _Nullable)email dateOfBirth:(NSString * _Nullable)dateOfBirth telephone:(NSString * _Nullable)telephone customerRef:(NSString * _Nullable)customerRef registered:(MobilesdkBoolean * _Nullable)registered __attribute__((swift_name("init(email:dateOfBirth:telephone:customerRef:registered:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkCustomerDetailsCompanion *companion __attribute__((swift_name("companion")));
- (MobilesdkCustomerDetails *)doCopyEmail:(NSString * _Nullable)email dateOfBirth:(NSString * _Nullable)dateOfBirth telephone:(NSString * _Nullable)telephone customerRef:(NSString * _Nullable)customerRef registered:(MobilesdkBoolean * _Nullable)registered __attribute__((swift_name("doCopy(email:dateOfBirth:telephone:customerRef:registered:)")));

/**
 * # Customer Details
 *
 * @property email Email address for the Customer.
 * @property dateOfBirth Date of birth for the Customer.
 * @property telephone Telephone number for the Customer.
 * @property customerRef Your reference for the Customer. Not required if registered is set to false, mandatory otherwise.
 * @property registered Indicates whether the Customer is registered with the Merchant. If set to true, the customerRef field is mandatory.
 * If set to false, the customerRef field is not required, but supported, it can be used to store a reference to the Customer without registering them.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * # Customer Details
 *
 * @property email Email address for the Customer.
 * @property dateOfBirth Date of birth for the Customer.
 * @property telephone Telephone number for the Customer.
 * @property customerRef Your reference for the Customer. Not required if registered is set to false, mandatory otherwise.
 * @property registered Indicates whether the Customer is registered with the Merchant. If set to true, the customerRef field is mandatory.
 * If set to false, the customerRef field is not required, but supported, it can be used to store a reference to the Customer without registering them.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * # Customer Details
 *
 * @property email Email address for the Customer.
 * @property dateOfBirth Date of birth for the Customer.
 * @property telephone Telephone number for the Customer.
 * @property customerRef Your reference for the Customer. Not required if registered is set to false, mandatory otherwise.
 * @property registered Indicates whether the Customer is registered with the Merchant. If set to true, the customerRef field is mandatory.
 * If set to false, the customerRef field is not required, but supported, it can be used to store a reference to the Customer without registering them.
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="merchantRef")
*/
@property (readonly) NSString * _Nullable customerRef __attribute__((swift_name("customerRef")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dob")
*/
@property (readonly) NSString * _Nullable dateOfBirth __attribute__((swift_name("dateOfBirth")));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) MobilesdkBoolean * _Nullable registered __attribute__((swift_name("registered")));
@property (readonly) NSString * _Nullable telephone __attribute__((swift_name("telephone")));
@end


/**
 * # Customer Details
 *
 * @property email Email address for the Customer.
 * @property dateOfBirth Date of birth for the Customer.
 * @property telephone Telephone number for the Customer.
 * @property customerRef Your reference for the Customer. Not required if registered is set to false, mandatory otherwise.
 * @property registered Indicates whether the Customer is registered with the Merchant. If set to true, the customerRef field is mandatory.
 * If set to false, the customerRef field is not required, but supported, it can be used to store a reference to the Customer without registering them.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomerDetails.Companion")))
@interface MobilesdkCustomerDetailsCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * # Customer Details
 *
 * @property email Email address for the Customer.
 * @property dateOfBirth Date of birth for the Customer.
 * @property telephone Telephone number for the Customer.
 * @property customerRef Your reference for the Customer. Not required if registered is set to false, mandatory otherwise.
 * @property registered Indicates whether the Customer is registered with the Merchant. If set to true, the customerRef field is mandatory.
 * If set to false, the customerRef field is not required, but supported, it can be used to store a reference to the Customer without registering them.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkCustomerDetailsCompanion *shared __attribute__((swift_name("shared")));

/**
 * # Customer Details
 *
 * @property email Email address for the Customer.
 * @property dateOfBirth Date of birth for the Customer.
 * @property telephone Telephone number for the Customer.
 * @property customerRef Your reference for the Customer. Not required if registered is set to false, mandatory otherwise.
 * @property registered Indicates whether the Customer is registered with the Merchant. If set to true, the customerRef field is mandatory.
 * If set to false, the customerRef field is not required, but supported, it can be used to store a reference to the Customer without registering them.
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol MobilesdkKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface MobilesdkKotlinEnum<E> : MobilesdkBase <MobilesdkKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end


/**
 * # Payment Environment
 *
 * The [Environment] enum class is responsible for setting the environment of the transaction.
 *
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Environment")))
@interface MobilesdkEnvironment : MobilesdkKotlinEnum<MobilesdkEnvironment *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * # Payment Environment
 *
 * The [Environment] enum class is responsible for setting the environment of the transaction.
 *
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MobilesdkEnvironmentCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MobilesdkEnvironment *live __attribute__((swift_name("live")));
@property (class, readonly) MobilesdkEnvironment *test __attribute__((swift_name("test")));
@property (class, readonly) MobilesdkEnvironment *develop __attribute__((swift_name("develop")));
+ (MobilesdkKotlinArray<MobilesdkEnvironment *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MobilesdkEnvironment *> *entries __attribute__((swift_name("entries")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * # Payment Environment
 *
 * The [Environment] enum class is responsible for setting the environment of the transaction.
 *
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Environment.Companion")))
@interface MobilesdkEnvironmentCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * # Payment Environment
 *
 * The [Environment] enum class is responsible for setting the environment of the transaction.
 *
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkEnvironmentCompanion *shared __attribute__((swift_name("shared")));

/**
 * # Payment Environment
 *
 * The [Environment] enum class is responsible for setting the environment of the transaction.
 *
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * # Payment Environment
 *
 * The [Environment] enum class is responsible for setting the environment of the transaction.
 *
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MobilesdkKotlinArray<id<MobilesdkKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * # Financial Service Details
 *
 * > The [FinancialDetails] class is responsible for setting the financial service details.
 * > **Mandatory for UK/Europe-based MCC 6012/6051/some 7299 merchants**
 *
 *
 * ## All parameters are mandatory
 * @property dateOfBirth Date of birth of the loan recipient, in YYYYMMDD format. For example, for Jan 2nd, 1980, this would be “19800102”
 * @property surname Surname of the loan recipient; up to six characters, excluding numbers or special characters.
 * If the name is longer than six characters, then provide the first six.
 * For example, for “Smith”, this would be “Smith”; for “Williams”, this would be “Willia”.
 * @property accountNumber Account number used to identify the customer or loan.
 * If this is a PAN, then provide the first six and last four digits of the PAN.
 * Otherwise, provide up to ten characters of the account number.
 * @property postCode First part of the postal code of the loan recipient; up to six characters.
 * For example, if the postal code is “EC2A 1AE”, this would be “EC2A”.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FinancialDetails")))
@interface MobilesdkFinancialDetails : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithDateOfBirth:(NSString * _Nullable)dateOfBirth surname:(NSString * _Nullable)surname accountNumber:(NSString * _Nullable)accountNumber postCode:(NSString * _Nullable)postCode __attribute__((swift_name("init(dateOfBirth:surname:accountNumber:postCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkFinancialDetailsCompanion *companion __attribute__((swift_name("companion")));
- (MobilesdkFinancialDetails *)doCopyDateOfBirth:(NSString * _Nullable)dateOfBirth surname:(NSString * _Nullable)surname accountNumber:(NSString * _Nullable)accountNumber postCode:(NSString * _Nullable)postCode __attribute__((swift_name("doCopy(dateOfBirth:surname:accountNumber:postCode:)")));

/**
 * # Financial Service Details
 *
 * > The [FinancialDetails] class is responsible for setting the financial service details.
 * > **Mandatory for UK/Europe-based MCC 6012/6051/some 7299 merchants**
 *
 *
 * ## All parameters are mandatory
 * @property dateOfBirth Date of birth of the loan recipient, in YYYYMMDD format. For example, for Jan 2nd, 1980, this would be “19800102”
 * @property surname Surname of the loan recipient; up to six characters, excluding numbers or special characters.
 * If the name is longer than six characters, then provide the first six.
 * For example, for “Smith”, this would be “Smith”; for “Williams”, this would be “Willia”.
 * @property accountNumber Account number used to identify the customer or loan.
 * If this is a PAN, then provide the first six and last four digits of the PAN.
 * Otherwise, provide up to ten characters of the account number.
 * @property postCode First part of the postal code of the loan recipient; up to six characters.
 * For example, if the postal code is “EC2A 1AE”, this would be “EC2A”.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * # Financial Service Details
 *
 * > The [FinancialDetails] class is responsible for setting the financial service details.
 * > **Mandatory for UK/Europe-based MCC 6012/6051/some 7299 merchants**
 *
 *
 * ## All parameters are mandatory
 * @property dateOfBirth Date of birth of the loan recipient, in YYYYMMDD format. For example, for Jan 2nd, 1980, this would be “19800102”
 * @property surname Surname of the loan recipient; up to six characters, excluding numbers or special characters.
 * If the name is longer than six characters, then provide the first six.
 * For example, for “Smith”, this would be “Smith”; for “Williams”, this would be “Willia”.
 * @property accountNumber Account number used to identify the customer or loan.
 * If this is a PAN, then provide the first six and last four digits of the PAN.
 * Otherwise, provide up to ten characters of the account number.
 * @property postCode First part of the postal code of the loan recipient; up to six characters.
 * For example, if the postal code is “EC2A 1AE”, this would be “EC2A”.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * # Financial Service Details
 *
 * > The [FinancialDetails] class is responsible for setting the financial service details.
 * > **Mandatory for UK/Europe-based MCC 6012/6051/some 7299 merchants**
 *
 *
 * ## All parameters are mandatory
 * @property dateOfBirth Date of birth of the loan recipient, in YYYYMMDD format. For example, for Jan 2nd, 1980, this would be “19800102”
 * @property surname Surname of the loan recipient; up to six characters, excluding numbers or special characters.
 * If the name is longer than six characters, then provide the first six.
 * For example, for “Smith”, this would be “Smith”; for “Williams”, this would be “Willia”.
 * @property accountNumber Account number used to identify the customer or loan.
 * If this is a PAN, then provide the first six and last four digits of the PAN.
 * Otherwise, provide up to ten characters of the account number.
 * @property postCode First part of the postal code of the loan recipient; up to six characters.
 * For example, if the postal code is “EC2A 1AE”, this would be “EC2A”.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable accountNumber __attribute__((swift_name("accountNumber")));
@property (readonly) NSString * _Nullable dateOfBirth __attribute__((swift_name("dateOfBirth")));
@property (readonly) NSString * _Nullable postCode __attribute__((swift_name("postCode")));
@property (readonly) NSString * _Nullable surname __attribute__((swift_name("surname")));
@end


/**
 * # Financial Service Details
 *
 * > The [FinancialDetails] class is responsible for setting the financial service details.
 * > **Mandatory for UK/Europe-based MCC 6012/6051/some 7299 merchants**
 *
 *
 * ## All parameters are mandatory
 * @property dateOfBirth Date of birth of the loan recipient, in YYYYMMDD format. For example, for Jan 2nd, 1980, this would be “19800102”
 * @property surname Surname of the loan recipient; up to six characters, excluding numbers or special characters.
 * If the name is longer than six characters, then provide the first six.
 * For example, for “Smith”, this would be “Smith”; for “Williams”, this would be “Willia”.
 * @property accountNumber Account number used to identify the customer or loan.
 * If this is a PAN, then provide the first six and last four digits of the PAN.
 * Otherwise, provide up to ten characters of the account number.
 * @property postCode First part of the postal code of the loan recipient; up to six characters.
 * For example, if the postal code is “EC2A 1AE”, this would be “EC2A”.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FinancialDetails.Companion")))
@interface MobilesdkFinancialDetailsCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * # Financial Service Details
 *
 * > The [FinancialDetails] class is responsible for setting the financial service details.
 * > **Mandatory for UK/Europe-based MCC 6012/6051/some 7299 merchants**
 *
 *
 * ## All parameters are mandatory
 * @property dateOfBirth Date of birth of the loan recipient, in YYYYMMDD format. For example, for Jan 2nd, 1980, this would be “19800102”
 * @property surname Surname of the loan recipient; up to six characters, excluding numbers or special characters.
 * If the name is longer than six characters, then provide the first six.
 * For example, for “Smith”, this would be “Smith”; for “Williams”, this would be “Willia”.
 * @property accountNumber Account number used to identify the customer or loan.
 * If this is a PAN, then provide the first six and last four digits of the PAN.
 * Otherwise, provide up to ten characters of the account number.
 * @property postCode First part of the postal code of the loan recipient; up to six characters.
 * For example, if the postal code is “EC2A 1AE”, this would be “EC2A”.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkFinancialDetailsCompanion *shared __attribute__((swift_name("shared")));

/**
 * # Financial Service Details
 *
 * > The [FinancialDetails] class is responsible for setting the financial service details.
 * > **Mandatory for UK/Europe-based MCC 6012/6051/some 7299 merchants**
 *
 *
 * ## All parameters are mandatory
 * @property dateOfBirth Date of birth of the loan recipient, in YYYYMMDD format. For example, for Jan 2nd, 1980, this would be “19800102”
 * @property surname Surname of the loan recipient; up to six characters, excluding numbers or special characters.
 * If the name is longer than six characters, then provide the first six.
 * For example, for “Smith”, this would be “Smith”; for “Williams”, this would be “Willia”.
 * @property accountNumber Account number used to identify the customer or loan.
 * If this is a PAN, then provide the first six and last four digits of the PAN.
 * Otherwise, provide up to ten characters of the account number.
 * @property postCode First part of the postal code of the loan recipient; up to six characters.
 * For example, if the postal code is “EC2A 1AE”, this would be “EC2A”.
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * # Transaction Details
 * This class is used to hold the transaction details for the payment request.
 *
 * ### Required
 * - **currency**
 * - **amount**
 *
 * ### Optional
 * - **description**
 * - **merchantRef**
 * - **recurring**
 * - **deferred**
 * - **continuousAuthorityAgreement**
 *
 * @property currency The currency of the transaction. (e.g. "GBP"). Currency Code format: ISO 4217 - ALPHA-3.
 * @property amount The amount of the transaction. (e.g. 10.0).
 * @property description The description of the transaction. (e.g. "Payment for the order").
 * @property merchantRef The merchant reference of the transaction. (e.g. "Order_123"). Recommended to be unique. Used to identify the transaction later.
 * @property recurring Set this field if you want to start a recurring Continuous Authority relationship from this transaction.
 * Possible values: `true`, `false`, `null`.
 * @property deferred Use the “deferred” indicator with the Payment request to indicate that you only want to perform an authorisation.
 * Possible values: `true`, `false`, `null`.
 * @property continuousAuthorityAgreement The continuous authority agreement of the transaction. [ContinuousAuthorityAgreement]
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionDetails")))
@interface MobilesdkTransactionDetails : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithCurrency:(NSString * _Nullable)currency amount:(MobilesdkDouble * _Nullable)amount merchantRef:(NSString * _Nullable)merchantRef __attribute__((swift_name("init(currency:amount:merchantRef:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCurrency:(NSString * _Nullable)currency amount:(MobilesdkDouble * _Nullable)amount merchantRef:(NSString * _Nullable)merchantRef recurring:(MobilesdkBoolean * _Nullable)recurring deferred:(MobilesdkBoolean * _Nullable)deferred __attribute__((swift_name("init(currency:amount:merchantRef:recurring:deferred:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTransactionId:(NSString * _Nullable)transactionId currency:(NSString * _Nullable)currency amount:(MobilesdkDouble * _Nullable)amount description:(NSString * _Nullable)description merchantRef:(NSString * _Nullable)merchantRef recurring:(MobilesdkBoolean * _Nullable)recurring deferred:(MobilesdkBoolean * _Nullable)deferred continuousAuthorityAgreement:(MobilesdkContinuousAuthorityAgreement * _Nullable)continuousAuthorityAgreement __attribute__((swift_name("init(transactionId:currency:amount:description:merchantRef:recurring:deferred:continuousAuthorityAgreement:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkTransactionDetailsCompanion *companion __attribute__((swift_name("companion")));
- (MobilesdkTransactionDetails *)doCopyTransactionId:(NSString * _Nullable)transactionId currency:(NSString * _Nullable)currency amount:(MobilesdkDouble * _Nullable)amount description:(NSString * _Nullable)description merchantRef:(NSString * _Nullable)merchantRef recurring:(MobilesdkBoolean * _Nullable)recurring deferred:(MobilesdkBoolean * _Nullable)deferred continuousAuthorityAgreement:(MobilesdkContinuousAuthorityAgreement * _Nullable)continuousAuthorityAgreement __attribute__((swift_name("doCopy(transactionId:currency:amount:description:merchantRef:recurring:deferred:continuousAuthorityAgreement:)")));

/**
 * # Transaction Details
 * This class is used to hold the transaction details for the payment request.
 *
 * ### Required
 * - **currency**
 * - **amount**
 *
 * ### Optional
 * - **description**
 * - **merchantRef**
 * - **recurring**
 * - **deferred**
 * - **continuousAuthorityAgreement**
 *
 * @property currency The currency of the transaction. (e.g. "GBP"). Currency Code format: ISO 4217 - ALPHA-3.
 * @property amount The amount of the transaction. (e.g. 10.0).
 * @property description The description of the transaction. (e.g. "Payment for the order").
 * @property merchantRef The merchant reference of the transaction. (e.g. "Order_123"). Recommended to be unique. Used to identify the transaction later.
 * @property recurring Set this field if you want to start a recurring Continuous Authority relationship from this transaction.
 * Possible values: `true`, `false`, `null`.
 * @property deferred Use the “deferred” indicator with the Payment request to indicate that you only want to perform an authorisation.
 * Possible values: `true`, `false`, `null`.
 * @property continuousAuthorityAgreement The continuous authority agreement of the transaction. [ContinuousAuthorityAgreement]
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * # Transaction Details
 * This class is used to hold the transaction details for the payment request.
 *
 * ### Required
 * - **currency**
 * - **amount**
 *
 * ### Optional
 * - **description**
 * - **merchantRef**
 * - **recurring**
 * - **deferred**
 * - **continuousAuthorityAgreement**
 *
 * @property currency The currency of the transaction. (e.g. "GBP"). Currency Code format: ISO 4217 - ALPHA-3.
 * @property amount The amount of the transaction. (e.g. 10.0).
 * @property description The description of the transaction. (e.g. "Payment for the order").
 * @property merchantRef The merchant reference of the transaction. (e.g. "Order_123"). Recommended to be unique. Used to identify the transaction later.
 * @property recurring Set this field if you want to start a recurring Continuous Authority relationship from this transaction.
 * Possible values: `true`, `false`, `null`.
 * @property deferred Use the “deferred” indicator with the Payment request to indicate that you only want to perform an authorisation.
 * Possible values: `true`, `false`, `null`.
 * @property continuousAuthorityAgreement The continuous authority agreement of the transaction. [ContinuousAuthorityAgreement]
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * # Transaction Details
 * This class is used to hold the transaction details for the payment request.
 *
 * ### Required
 * - **currency**
 * - **amount**
 *
 * ### Optional
 * - **description**
 * - **merchantRef**
 * - **recurring**
 * - **deferred**
 * - **continuousAuthorityAgreement**
 *
 * @property currency The currency of the transaction. (e.g. "GBP"). Currency Code format: ISO 4217 - ALPHA-3.
 * @property amount The amount of the transaction. (e.g. 10.0).
 * @property description The description of the transaction. (e.g. "Payment for the order").
 * @property merchantRef The merchant reference of the transaction. (e.g. "Order_123"). Recommended to be unique. Used to identify the transaction later.
 * @property recurring Set this field if you want to start a recurring Continuous Authority relationship from this transaction.
 * Possible values: `true`, `false`, `null`.
 * @property deferred Use the “deferred” indicator with the Payment request to indicate that you only want to perform an authorisation.
 * Possible values: `true`, `false`, `null`.
 * @property continuousAuthorityAgreement The continuous authority agreement of the transaction. [ContinuousAuthorityAgreement]
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MobilesdkDouble * _Nullable amount __attribute__((swift_name("amount")));
@property (readonly) MobilesdkContinuousAuthorityAgreement * _Nullable continuousAuthorityAgreement __attribute__((swift_name("continuousAuthorityAgreement")));
@property (readonly) NSString * _Nullable currency __attribute__((swift_name("currency")));
@property (readonly) MobilesdkBoolean * _Nullable deferred __attribute__((swift_name("deferred")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString * _Nullable merchantRef __attribute__((swift_name("merchantRef")));
@property (readonly) MobilesdkBoolean * _Nullable recurring __attribute__((swift_name("recurring")));
@end


/**
 * # Transaction Details
 * This class is used to hold the transaction details for the payment request.
 *
 * ### Required
 * - **currency**
 * - **amount**
 *
 * ### Optional
 * - **description**
 * - **merchantRef**
 * - **recurring**
 * - **deferred**
 * - **continuousAuthorityAgreement**
 *
 * @property currency The currency of the transaction. (e.g. "GBP"). Currency Code format: ISO 4217 - ALPHA-3.
 * @property amount The amount of the transaction. (e.g. 10.0).
 * @property description The description of the transaction. (e.g. "Payment for the order").
 * @property merchantRef The merchant reference of the transaction. (e.g. "Order_123"). Recommended to be unique. Used to identify the transaction later.
 * @property recurring Set this field if you want to start a recurring Continuous Authority relationship from this transaction.
 * Possible values: `true`, `false`, `null`.
 * @property deferred Use the “deferred” indicator with the Payment request to indicate that you only want to perform an authorisation.
 * Possible values: `true`, `false`, `null`.
 * @property continuousAuthorityAgreement The continuous authority agreement of the transaction. [ContinuousAuthorityAgreement]
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionDetails.Companion")))
@interface MobilesdkTransactionDetailsCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * # Transaction Details
 * This class is used to hold the transaction details for the payment request.
 *
 * ### Required
 * - **currency**
 * - **amount**
 *
 * ### Optional
 * - **description**
 * - **merchantRef**
 * - **recurring**
 * - **deferred**
 * - **continuousAuthorityAgreement**
 *
 * @property currency The currency of the transaction. (e.g. "GBP"). Currency Code format: ISO 4217 - ALPHA-3.
 * @property amount The amount of the transaction. (e.g. 10.0).
 * @property description The description of the transaction. (e.g. "Payment for the order").
 * @property merchantRef The merchant reference of the transaction. (e.g. "Order_123"). Recommended to be unique. Used to identify the transaction later.
 * @property recurring Set this field if you want to start a recurring Continuous Authority relationship from this transaction.
 * Possible values: `true`, `false`, `null`.
 * @property deferred Use the “deferred” indicator with the Payment request to indicate that you only want to perform an authorisation.
 * Possible values: `true`, `false`, `null`.
 * @property continuousAuthorityAgreement The continuous authority agreement of the transaction. [ContinuousAuthorityAgreement]
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkTransactionDetailsCompanion *shared __attribute__((swift_name("shared")));

/**
 * # Transaction Details
 * This class is used to hold the transaction details for the payment request.
 *
 * ### Required
 * - **currency**
 * - **amount**
 *
 * ### Optional
 * - **description**
 * - **merchantRef**
 * - **recurring**
 * - **deferred**
 * - **continuousAuthorityAgreement**
 *
 * @property currency The currency of the transaction. (e.g. "GBP"). Currency Code format: ISO 4217 - ALPHA-3.
 * @property amount The amount of the transaction. (e.g. 10.0).
 * @property description The description of the transaction. (e.g. "Payment for the order").
 * @property merchantRef The merchant reference of the transaction. (e.g. "Order_123"). Recommended to be unique. Used to identify the transaction later.
 * @property recurring Set this field if you want to start a recurring Continuous Authority relationship from this transaction.
 * Possible values: `true`, `false`, `null`.
 * @property deferred Use the “deferred” indicator with the Payment request to indicate that you only want to perform an authorisation.
 * Possible values: `true`, `false`, `null`.
 * @property continuousAuthorityAgreement The continuous authority agreement of the transaction. [ContinuousAuthorityAgreement]
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * # Transaction type
 *
 * Used to define the type of transaction
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionType")))
@interface MobilesdkTransactionType : MobilesdkKotlinEnum<MobilesdkTransactionType *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * # Transaction type
 *
 * Used to define the type of transaction
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MobilesdkTransactionTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MobilesdkTransactionType *payment __attribute__((swift_name("payment")));
@property (class, readonly) MobilesdkTransactionType *authorization __attribute__((swift_name("authorization")));
+ (MobilesdkKotlinArray<MobilesdkTransactionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MobilesdkTransactionType *> *entries __attribute__((swift_name("entries")));
@end


/**
 * # Transaction type
 *
 * Used to define the type of transaction
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionType.Companion")))
@interface MobilesdkTransactionTypeCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * # Transaction type
 *
 * Used to define the type of transaction
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkTransactionTypeCompanion *shared __attribute__((swift_name("shared")));

/**
 * # Transaction type
 *
 * Used to define the type of transaction
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * # Transaction type
 *
 * Used to define the type of transaction
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MobilesdkKotlinArray<id<MobilesdkKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomerDetailsResponse")))
@interface MobilesdkCustomerDetailsResponse : MobilesdkBase
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkCustomerDetailsResponseCompanion *companion __attribute__((swift_name("companion")));
- (MobilesdkCustomerDetailsResponse *)doCopyId:(NSString *)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomerDetailsResponse.Companion")))
@interface MobilesdkCustomerDetailsResponseCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkCustomerDetailsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AcceptPaymentMethods")))
@interface MobilesdkAcceptPaymentMethods : MobilesdkKotlinEnum<MobilesdkAcceptPaymentMethods *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MobilesdkAcceptPaymentMethodsCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MobilesdkAcceptPaymentMethods *card __attribute__((swift_name("card")));
@property (class, readonly) MobilesdkAcceptPaymentMethods *applepay __attribute__((swift_name("applepay")));
@property (class, readonly) MobilesdkAcceptPaymentMethods *googlepay __attribute__((swift_name("googlepay")));
@property (class, readonly) MobilesdkAcceptPaymentMethods *openbanking __attribute__((swift_name("openbanking")));
+ (MobilesdkKotlinArray<MobilesdkAcceptPaymentMethods *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MobilesdkAcceptPaymentMethods *> *entries __attribute__((swift_name("entries")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AcceptPaymentMethods.Companion")))
@interface MobilesdkAcceptPaymentMethodsCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkAcceptPaymentMethodsCompanion *shared __attribute__((swift_name("shared")));
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MobilesdkKotlinArray<id<MobilesdkKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * ## PaymentIntent
 *
 * This class is used to create a PaymentIntent object.
 * It's a data class that contains the payment configuration and billing address
 *
 * @property config The payment configuration
 * @property billingAddress The billing address to be used for the payment
 * @property returnUrl The merchant-provided return URL the bank app links back to
 * once authorisation completes. Only used by Pay by Bank.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentIntent")))
@interface MobilesdkPaymentIntent : MobilesdkBase
- (instancetype)initWithConfig:(MobilesdkPaymentConfig *)config billingAddress:(MobilesdkBillingAddress * _Nullable)billingAddress returnUrl:(NSString * _Nullable)returnUrl __attribute__((swift_name("init(config:billingAddress:returnUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkPaymentIntentCompanion *companion __attribute__((swift_name("companion")));
- (MobilesdkPaymentIntent *)doCopyConfig:(MobilesdkPaymentConfig *)config billingAddress:(MobilesdkBillingAddress * _Nullable)billingAddress returnUrl:(NSString * _Nullable)returnUrl __attribute__((swift_name("doCopy(config:billingAddress:returnUrl:)")));

/**
 * ## PaymentIntent
 *
 * This class is used to create a PaymentIntent object.
 * It's a data class that contains the payment configuration and billing address
 *
 * @property config The payment configuration
 * @property billingAddress The billing address to be used for the payment
 * @property returnUrl The merchant-provided return URL the bank app links back to
 * once authorisation completes. Only used by Pay by Bank.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * ## PaymentIntent
 *
 * This class is used to create a PaymentIntent object.
 * It's a data class that contains the payment configuration and billing address
 *
 * @property config The payment configuration
 * @property billingAddress The billing address to be used for the payment
 * @property returnUrl The merchant-provided return URL the bank app links back to
 * once authorisation completes. Only used by Pay by Bank.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * ## PaymentIntent
 *
 * This class is used to create a PaymentIntent object.
 * It's a data class that contains the payment configuration and billing address
 *
 * @property config The payment configuration
 * @property billingAddress The billing address to be used for the payment
 * @property returnUrl The merchant-provided return URL the bank app links back to
 * once authorisation completes. Only used by Pay by Bank.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MobilesdkBillingAddress * _Nullable billingAddress __attribute__((swift_name("billingAddress")));
@property (readonly) MobilesdkPaymentConfig *config __attribute__((swift_name("config")));
@property (readonly) NSString * _Nullable returnUrl __attribute__((swift_name("returnUrl")));
@end


/**
 * ## PaymentIntent
 *
 * This class is used to create a PaymentIntent object.
 * It's a data class that contains the payment configuration and billing address
 *
 * @property config The payment configuration
 * @property billingAddress The billing address to be used for the payment
 * @property returnUrl The merchant-provided return URL the bank app links back to
 * once authorisation completes. Only used by Pay by Bank.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentIntent.Companion")))
@interface MobilesdkPaymentIntentCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * ## PaymentIntent
 *
 * This class is used to create a PaymentIntent object.
 * It's a data class that contains the payment configuration and billing address
 *
 * @property config The payment configuration
 * @property billingAddress The billing address to be used for the payment
 * @property returnUrl The merchant-provided return URL the bank app links back to
 * once authorisation completes. Only used by Pay by Bank.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkPaymentIntentCompanion *shared __attribute__((swift_name("shared")));

/**
 * ## PaymentIntent
 *
 * This class is used to create a PaymentIntent object.
 * It's a data class that contains the payment configuration and billing address
 *
 * @property config The payment configuration
 * @property billingAddress The billing address to be used for the payment
 * @property returnUrl The merchant-provided return URL the bank app links back to
 * once authorisation completes. Only used by Pay by Bank.
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * ## PaymentResult
 *
 * This sealed class is used to represent the result of a payment from the
 * Standalone Payment Page.
 * It can be one of the following:
 * - [Success]
 * - [Failed] with a reason
 * - [Canceled]
 * - [Pending] with the transaction id (Pay by Bank only)
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("PaymentResult")))
@interface MobilesdkPaymentResult : MobilesdkBase
@property (class, readonly, getter=companion) MobilesdkPaymentResultCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * ## Canceled
 * This object represents a canceled payment.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentResult.Canceled")))
@interface MobilesdkPaymentResultCanceled : MobilesdkPaymentResult
+ (instancetype)alloc __attribute__((unavailable));

/**
 * ## Canceled
 * This object represents a canceled payment.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)canceled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkPaymentResultCanceled *shared __attribute__((swift_name("shared")));

/**
 * ## Canceled
 * This object represents a canceled payment.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * ## Canceled
 * This object represents a canceled payment.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * ## Canceled
 * This object represents a canceled payment.
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * ## Canceled
 * This object represents a canceled payment.
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MobilesdkKotlinArray<id<MobilesdkKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));

/**
 * @suppress
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * ## PaymentResult
 *
 * This sealed class is used to represent the result of a payment from the
 * Standalone Payment Page.
 * It can be one of the following:
 * - [Success]
 * - [Failed] with a reason
 * - [Canceled]
 * - [Pending] with the transaction id (Pay by Bank only)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentResult.Companion")))
@interface MobilesdkPaymentResultCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * ## PaymentResult
 *
 * This sealed class is used to represent the result of a payment from the
 * Standalone Payment Page.
 * It can be one of the following:
 * - [Success]
 * - [Failed] with a reason
 * - [Canceled]
 * - [Pending] with the transaction id (Pay by Bank only)
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkPaymentResultCompanion *shared __attribute__((swift_name("shared")));

/**
 * ## PaymentResult
 *
 * This sealed class is used to represent the result of a payment from the
 * Standalone Payment Page.
 * It can be one of the following:
 * - [Success]
 * - [Failed] with a reason
 * - [Canceled]
 * - [Pending] with the transaction id (Pay by Bank only)
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * ## PaymentResult
 *
 * This sealed class is used to represent the result of a payment from the
 * Standalone Payment Page.
 * It can be one of the following:
 * - [Success]
 * - [Failed] with a reason
 * - [Canceled]
 * - [Pending] with the transaction id (Pay by Bank only)
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MobilesdkKotlinArray<id<MobilesdkKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * ## Failed
 * This object represents a failed payment.
 * @property reason The reason for the failed payment
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentResult.Failed")))
@interface MobilesdkPaymentResultFailed : MobilesdkPaymentResult
- (instancetype)initWithReason:(NSString * _Nullable)reason __attribute__((swift_name("init(reason:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkPaymentResultFailedCompanion *companion __attribute__((swift_name("companion")));
- (MobilesdkPaymentResultFailed *)doCopyReason:(NSString * _Nullable)reason __attribute__((swift_name("doCopy(reason:)")));

/**
 * ## Failed
 * This object represents a failed payment.
 * @property reason The reason for the failed payment
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * ## Failed
 * This object represents a failed payment.
 * @property reason The reason for the failed payment
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @suppress
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable reason __attribute__((swift_name("reason")));
@end


/**
 * ## Failed
 * This object represents a failed payment.
 * @property reason The reason for the failed payment
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentResult.FailedCompanion")))
@interface MobilesdkPaymentResultFailedCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * ## Failed
 * This object represents a failed payment.
 * @property reason The reason for the failed payment
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkPaymentResultFailedCompanion *shared __attribute__((swift_name("shared")));

/**
 * ## Failed
 * This object represents a failed payment.
 * @property reason The reason for the failed payment
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * ## Pending
 * This object represents a Pay by Bank (Open Banking) payment that could
 * not be confirmed because the provider is still processing the
 * transaction. The payment has not failed; retrieve the transaction with
 * [transactionId] (or wait for a notification) for its final status.
 * @property transactionId The API-assigned transaction id, when known
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentResult.Pending")))
@interface MobilesdkPaymentResultPending : MobilesdkPaymentResult
- (instancetype)initWithTransactionId:(NSString * _Nullable)transactionId __attribute__((swift_name("init(transactionId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkPaymentResultPendingCompanion *companion __attribute__((swift_name("companion")));
- (MobilesdkPaymentResultPending *)doCopyTransactionId:(NSString * _Nullable)transactionId __attribute__((swift_name("doCopy(transactionId:)")));

/**
 * ## Pending
 * This object represents a Pay by Bank (Open Banking) payment that could
 * not be confirmed because the provider is still processing the
 * transaction. The payment has not failed; retrieve the transaction with
 * [transactionId] (or wait for a notification) for its final status.
 * @property transactionId The API-assigned transaction id, when known
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * ## Pending
 * This object represents a Pay by Bank (Open Banking) payment that could
 * not be confirmed because the provider is still processing the
 * transaction. The payment has not failed; retrieve the transaction with
 * [transactionId] (or wait for a notification) for its final status.
 * @property transactionId The API-assigned transaction id, when known
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @suppress
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable transactionId __attribute__((swift_name("transactionId")));
@end


/**
 * ## Pending
 * This object represents a Pay by Bank (Open Banking) payment that could
 * not be confirmed because the provider is still processing the
 * transaction. The payment has not failed; retrieve the transaction with
 * [transactionId] (or wait for a notification) for its final status.
 * @property transactionId The API-assigned transaction id, when known
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentResult.PendingCompanion")))
@interface MobilesdkPaymentResultPendingCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * ## Pending
 * This object represents a Pay by Bank (Open Banking) payment that could
 * not be confirmed because the provider is still processing the
 * transaction. The payment has not failed; retrieve the transaction with
 * [transactionId] (or wait for a notification) for its final status.
 * @property transactionId The API-assigned transaction id, when known
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkPaymentResultPendingCompanion *shared __attribute__((swift_name("shared")));

/**
 * ## Pending
 * This object represents a Pay by Bank (Open Banking) payment that could
 * not be confirmed because the provider is still processing the
 * transaction. The payment has not failed; retrieve the transaction with
 * [transactionId] (or wait for a notification) for its final status.
 * @property transactionId The API-assigned transaction id, when known
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * ## Success
 * This object represents a successful payment.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentResult.Success")))
@interface MobilesdkPaymentResultSuccess : MobilesdkPaymentResult
+ (instancetype)alloc __attribute__((unavailable));

/**
 * ## Success
 * This object represents a successful payment.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkPaymentResultSuccess *shared __attribute__((swift_name("shared")));

/**
 * ## Success
 * This object represents a successful payment.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * ## Success
 * This object represents a successful payment.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * ## Success
 * This object represents a successful payment.
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * ## Success
 * This object represents a successful payment.
 */
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MobilesdkKotlinArray<id<MobilesdkKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));

/**
 * @suppress
 */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * iOS-specific implementation of ConnectionTracker.
 * @param context Ignored
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectionTracker")))
@interface MobilesdkConnectionTracker : MobilesdkBase
- (instancetype)initWithContext:(id _Nullable)context __attribute__((swift_name("init(context:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isConnected __attribute__((swift_name("isConnected()")));

/** Emits connectivity status updates via SCNetworkReachability callbacks */
- (id<MobilesdkKotlinx_coroutines_coreFlow>)observeConnectivity __attribute__((swift_name("observeConnectivity()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultLoggerImpl")))
@interface MobilesdkDefaultLoggerImpl : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)printDebugMessage:(NSString *)message __attribute__((swift_name("printDebug(message:)")));
- (void)printErrorMessage:(NSString *)message __attribute__((swift_name("printError(message:)")));
- (void)printErrorMessage:(NSString *)message throwable:(MobilesdkKotlinThrowable *)throwable __attribute__((swift_name("printError(message:throwable:)")));
- (void)printInfoMessage:(NSString *)message __attribute__((swift_name("printInfo(message:)")));
- (void)printInternalDebugMessage:(NSString *)message __attribute__((swift_name("printInternalDebug(message:)")));
- (void)printWarningMessage:(NSString *)message __attribute__((swift_name("printWarning(message:)")));
@end


/**
 * # Pay by Bank Button (iOS)
 *
 * UIKit wrapper around [BankPayButton] that initiates a
 * Pay by Bank (Open Banking) payment.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BankPayButtonController")))
@interface MobilesdkBankPayButtonController : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * # Pay by Bank Button (iOS)
 *
 * UIKit wrapper around [BankPayButton] that initiates a
 * Pay by Bank (Open Banking) payment.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bankPayButtonController __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkBankPayButtonController *shared __attribute__((swift_name("shared")));

/**
 * Creates a [UIViewController] rendering the Pay by Bank button.
 */
- (UIViewController *)make __attribute__((swift_name("make()")));

/**
 * Sets the billing address used for the payment. Required for Pay by Bank.
 */
- (void)setBillingAddressAddress:(MobilesdkBillingAddress *)address __attribute__((swift_name("setBillingAddress(address:)")));

/**
 * Sets the corner radius of the button.
 */
- (void)setRadiusRadius:(float)radius __attribute__((swift_name("setRadius(radius:)")));

/**
 * Sets the merchant-provided return URL (https universal link) the bank
 * app links back to once authorisation completes. Required — the API
 * rejects custom URL schemes, so an unset or non-https value fails the
 * payment.
 */
- (void)setReturnUrlUrl:(NSString *)url __attribute__((swift_name("setReturnUrl(url:)")));
@end


/**
 * Billing Address Controller
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BillingAddressController")))
@interface MobilesdkBillingAddressController : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Billing Address Controller
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)billingAddressController __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkBillingAddressController *shared __attribute__((swift_name("shared")));
- (UIViewController *)make __attribute__((swift_name("make()")));
- (void)updateState:(MobilesdkBillingAddressState *)state __attribute__((swift_name("update(state:)")));
@end


/**
 * Billing address state
 *
 * @property fontSize
 * @property fontWeight
 * @property borderSize
 * @property borderCornerRadius
 * @property borderColor
 * @property defaultCountryCode
 * @property useDropdown
 * @property showAddressLine2
 * @property showAddressLine3
 * @property showAddressLine4
 * @property skipCheckboxUI
 * @property defaultAddress
 * @property onAddressFilled
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BillingAddressState")))
@interface MobilesdkBillingAddressState : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithFontSize:(int32_t)fontSize fontWeight:(MobilesdkComponentFontWeight *)fontWeight borderSize:(int32_t)borderSize borderCornerRadius:(int32_t)borderCornerRadius borderColor:(MobilesdkInt * _Nullable)borderColor defaultCountryCode:(NSString *)defaultCountryCode useDropdown:(BOOL)useDropdown showAddressLine2:(BOOL)showAddressLine2 showAddressLine3:(BOOL)showAddressLine3 showAddressLine4:(BOOL)showAddressLine4 skipCheckboxUI:(BOOL)skipCheckboxUI defaultAddress:(MobilesdkBillingAddress * _Nullable)defaultAddress onAddressFilled:(void (^)(MobilesdkBillingAddress *))onAddressFilled __attribute__((swift_name("init(fontSize:fontWeight:borderSize:borderCornerRadius:borderColor:defaultCountryCode:useDropdown:showAddressLine2:showAddressLine3:showAddressLine4:skipCheckboxUI:defaultAddress:onAddressFilled:)"))) __attribute__((objc_designated_initializer));
- (MobilesdkBillingAddressState *)doCopyFontSize:(int32_t)fontSize fontWeight:(MobilesdkComponentFontWeight *)fontWeight borderSize:(int32_t)borderSize borderCornerRadius:(int32_t)borderCornerRadius borderColor:(MobilesdkInt * _Nullable)borderColor defaultCountryCode:(NSString *)defaultCountryCode useDropdown:(BOOL)useDropdown showAddressLine2:(BOOL)showAddressLine2 showAddressLine3:(BOOL)showAddressLine3 showAddressLine4:(BOOL)showAddressLine4 skipCheckboxUI:(BOOL)skipCheckboxUI defaultAddress:(MobilesdkBillingAddress * _Nullable)defaultAddress onAddressFilled:(void (^)(MobilesdkBillingAddress *))onAddressFilled __attribute__((swift_name("doCopy(fontSize:fontWeight:borderSize:borderCornerRadius:borderColor:defaultCountryCode:useDropdown:showAddressLine2:showAddressLine3:showAddressLine4:skipCheckboxUI:defaultAddress:onAddressFilled:)")));

/**
 * Billing address state
 *
 * @property fontSize
 * @property fontWeight
 * @property borderSize
 * @property borderCornerRadius
 * @property borderColor
 * @property defaultCountryCode
 * @property useDropdown
 * @property showAddressLine2
 * @property showAddressLine3
 * @property showAddressLine4
 * @property skipCheckboxUI
 * @property defaultAddress
 * @property onAddressFilled
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Billing address state
 *
 * @property fontSize
 * @property fontWeight
 * @property borderSize
 * @property borderCornerRadius
 * @property borderColor
 * @property defaultCountryCode
 * @property useDropdown
 * @property showAddressLine2
 * @property showAddressLine3
 * @property showAddressLine4
 * @property skipCheckboxUI
 * @property defaultAddress
 * @property onAddressFilled
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Set on address filled
 *
 * @param callback
 * @receiver
 */
- (MobilesdkBillingAddressState *)setOnAddressFilledCallback:(void (^)(MobilesdkBillingAddress *))callback __attribute__((swift_name("setOnAddressFilled(callback:)")));

/**
 * Billing address state
 *
 * @property fontSize
 * @property fontWeight
 * @property borderSize
 * @property borderCornerRadius
 * @property borderColor
 * @property defaultCountryCode
 * @property useDropdown
 * @property showAddressLine2
 * @property showAddressLine3
 * @property showAddressLine4
 * @property skipCheckboxUI
 * @property defaultAddress
 * @property onAddressFilled
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MobilesdkInt * _Nullable borderColor __attribute__((swift_name("borderColor")));
@property (readonly) int32_t borderCornerRadius __attribute__((swift_name("borderCornerRadius")));
@property (readonly) int32_t borderSize __attribute__((swift_name("borderSize")));
@property (readonly) MobilesdkBillingAddress * _Nullable defaultAddress __attribute__((swift_name("defaultAddress")));
@property (readonly) NSString *defaultCountryCode __attribute__((swift_name("defaultCountryCode")));
@property (readonly) int32_t fontSize __attribute__((swift_name("fontSize")));
@property (readonly) MobilesdkComponentFontWeight *fontWeight __attribute__((swift_name("fontWeight")));
@property (readonly) void (^onAddressFilled)(MobilesdkBillingAddress *) __attribute__((swift_name("onAddressFilled")));
@property (readonly) BOOL showAddressLine2 __attribute__((swift_name("showAddressLine2")));
@property (readonly) BOOL showAddressLine3 __attribute__((swift_name("showAddressLine3")));
@property (readonly) BOOL showAddressLine4 __attribute__((swift_name("showAddressLine4")));
@property (readonly) BOOL skipCheckboxUI __attribute__((swift_name("skipCheckboxUI")));
@property (readonly) BOOL useDropdown __attribute__((swift_name("useDropdown")));
@end


/**
 * CardInputController
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardInputController")))
@interface MobilesdkCardInputController : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * CardInputController
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cardInputController __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkCardInputController *shared __attribute__((swift_name("shared")));
- (UIViewController *)make __attribute__((swift_name("make()")));
- (void)updateState:(MobilesdkCardInputStyleState *)state __attribute__((swift_name("update(state:)")));
@end


/**
 * Card Input Slim Controller
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardInputSlimController")))
@interface MobilesdkCardInputSlimController : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Card Input Slim Controller
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cardInputSlimController __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkCardInputSlimController *shared __attribute__((swift_name("shared")));
- (UIViewController *)make __attribute__((swift_name("make()")));
- (void)updateState:(MobilesdkCardInputSlimStyleState *)state __attribute__((swift_name("update(state:)")));
@end


/**
 * # Slim Card Input Style State.
 *
 * Android View System
 * ```kotlin
 * processor.initiate { nonNullProcessor ->
 *     val styleState = CardInputSlimStyleState(
 *         showCardHolderName = true
 *     )
 *     cardInputSlimView.init(styleState)
 * }
 * ```
 * Jetpack Compose
 * ```kotlin
 * val styleState = rememberCardInputSlimStyleState(
 *     showCardHolderName = true
 * )
 * CardInputSlim(state = styleState)
 * ```
 * Swift
 * ```swift
 * @State private var cardState: CardInputSlimStyleState = CardInputSlimStyleState()
 *
 * }
 * ```
 * ```swift
 * CardInputSlim(state: $cardState)
 * ```
 * @param textSize The size of the text in the card input. Default value is 16.0.
 * @param textFontWeight The font weight of the text in the card input. Default value is ComponentFontWeight.NORMAL.
 * @param showCardHolderName A boolean indicating whether the cardholder's name should be shown. Default value is false.
 * If this is set to true, then the cardHolderName must not be empty.
 * @param cardHolderName The name of the card holder. Default value is an empty string.
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardInputSlimStyleState")))
@interface MobilesdkCardInputSlimStyleState : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithTextSize:(id)textSize textFontWeight:(MobilesdkComponentFontWeight *)textFontWeight showCardHolderName:(BOOL)showCardHolderName cardHolderName:(NSString *)cardHolderName __attribute__((swift_name("init(textSize:textFontWeight:showCardHolderName:cardHolderName:)"))) __attribute__((objc_designated_initializer));
- (MobilesdkCardInputSlimStyleState *)doCopyTextSize:(id)textSize textFontWeight:(MobilesdkComponentFontWeight *)textFontWeight showCardHolderName:(BOOL)showCardHolderName cardHolderName:(NSString *)cardHolderName __attribute__((swift_name("doCopy(textSize:textFontWeight:showCardHolderName:cardHolderName:)")));

/**
 * # Slim Card Input Style State.
 *
 * Android View System
 * ```kotlin
 * processor.initiate { nonNullProcessor ->
 *     val styleState = CardInputSlimStyleState(
 *         showCardHolderName = true
 *     )
 *     cardInputSlimView.init(styleState)
 * }
 * ```
 * Jetpack Compose
 * ```kotlin
 * val styleState = rememberCardInputSlimStyleState(
 *     showCardHolderName = true
 * )
 * CardInputSlim(state = styleState)
 * ```
 * Swift
 * ```swift
 * @State private var cardState: CardInputSlimStyleState = CardInputSlimStyleState()
 *
 * }
 * ```
 * ```swift
 * CardInputSlim(state: $cardState)
 * ```
 * @param textSize The size of the text in the card input. Default value is 16.0.
 * @param textFontWeight The font weight of the text in the card input. Default value is ComponentFontWeight.NORMAL.
 * @param showCardHolderName A boolean indicating whether the cardholder's name should be shown. Default value is false.
 * If this is set to true, then the cardHolderName must not be empty.
 * @param cardHolderName The name of the card holder. Default value is an empty string.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * # Slim Card Input Style State.
 *
 * Android View System
 * ```kotlin
 * processor.initiate { nonNullProcessor ->
 *     val styleState = CardInputSlimStyleState(
 *         showCardHolderName = true
 *     )
 *     cardInputSlimView.init(styleState)
 * }
 * ```
 * Jetpack Compose
 * ```kotlin
 * val styleState = rememberCardInputSlimStyleState(
 *     showCardHolderName = true
 * )
 * CardInputSlim(state = styleState)
 * ```
 * Swift
 * ```swift
 * @State private var cardState: CardInputSlimStyleState = CardInputSlimStyleState()
 *
 * }
 * ```
 * ```swift
 * CardInputSlim(state: $cardState)
 * ```
 * @param textSize The size of the text in the card input. Default value is 16.0.
 * @param textFontWeight The font weight of the text in the card input. Default value is ComponentFontWeight.NORMAL.
 * @param showCardHolderName A boolean indicating whether the cardholder's name should be shown. Default value is false.
 * If this is set to true, then the cardHolderName must not be empty.
 * @param cardHolderName The name of the card holder. Default value is an empty string.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * # Slim Card Input Style State.
 *
 * Android View System
 * ```kotlin
 * processor.initiate { nonNullProcessor ->
 *     val styleState = CardInputSlimStyleState(
 *         showCardHolderName = true
 *     )
 *     cardInputSlimView.init(styleState)
 * }
 * ```
 * Jetpack Compose
 * ```kotlin
 * val styleState = rememberCardInputSlimStyleState(
 *     showCardHolderName = true
 * )
 * CardInputSlim(state = styleState)
 * ```
 * Swift
 * ```swift
 * @State private var cardState: CardInputSlimStyleState = CardInputSlimStyleState()
 *
 * }
 * ```
 * ```swift
 * CardInputSlim(state: $cardState)
 * ```
 * @param textSize The size of the text in the card input. Default value is 16.0.
 * @param textFontWeight The font weight of the text in the card input. Default value is ComponentFontWeight.NORMAL.
 * @param showCardHolderName A boolean indicating whether the cardholder's name should be shown. Default value is false.
 * If this is set to true, then the cardHolderName must not be empty.
 * @param cardHolderName The name of the card holder. Default value is an empty string.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cardHolderName __attribute__((swift_name("cardHolderName")));
@property (readonly) BOOL showCardHolderName __attribute__((swift_name("showCardHolderName")));
@property (readonly) MobilesdkComponentFontWeight *textFontWeight __attribute__((swift_name("textFontWeight")));
@property (readonly) id textSize __attribute__((swift_name("textSize")));
@end


/**
 * Card Input Style State.
 *
 * Android View System
 * ```kotlin
 * processor.initiate { nonNullProcessor ->
 *     val styleState = CardInputStyleState()
 *     cardInputView.init(styleState)
 * }
 * ```
 * Jetpack Compose
 * ```kotlin
 * val styleState = rememberCardInputStyleState(
 *     showCardHolderName = true
 * )
 * CardInputSlim(state = styleState)
 * ```
 * Swift
 * ```swift
 * @State private var cardState: CardInputStyleState = CardInputStyleState()
 * @State private var onCardError: (String) -> Void = { error in
 *
 * }
 * ```
 * ```swift
 * CardInput(
 *     state: $cardState,
 *     onError: $onCardError
 * )
 * ```
 * @param backgroundCornerSize The size of the background corner in the card input. Default value is 0.
 * @param labelLocation The location of the label in the card input. Default value is LabelLocation.TOP.
 * @param labelTextSize The size of the label text in the card input. Default value is 12.
 * @param labelTextFontWeight The font weight of the label text in the card input. Default value is ComponentFontWeight.NORMAL.
 * @param fieldTextSize The size of the field text in the card input. Default value is 12.
 * @param fieldTextFontWeight The font weight of the field text in the card input. Default value is ComponentFontWeight.NORMAL.
 * @param showCardHolderName A boolean indicating whether the cardholder's name should be shown. Default value is true.
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardInputStyleState")))
@interface MobilesdkCardInputStyleState : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithBackgroundCornerSize:(int32_t)backgroundCornerSize labelLocation:(MobilesdkLabelLocation *)labelLocation labelTextSize:(int32_t)labelTextSize labelTextFontWeight:(MobilesdkComponentFontWeight *)labelTextFontWeight fieldTextSize:(int32_t)fieldTextSize fieldTextFontWeight:(MobilesdkComponentFontWeight *)fieldTextFontWeight showCardHolderName:(BOOL)showCardHolderName __attribute__((swift_name("init(backgroundCornerSize:labelLocation:labelTextSize:labelTextFontWeight:fieldTextSize:fieldTextFontWeight:showCardHolderName:)"))) __attribute__((objc_designated_initializer));
- (MobilesdkCardInputStyleState *)doCopyBackgroundCornerSize:(int32_t)backgroundCornerSize labelLocation:(MobilesdkLabelLocation *)labelLocation labelTextSize:(int32_t)labelTextSize labelTextFontWeight:(MobilesdkComponentFontWeight *)labelTextFontWeight fieldTextSize:(int32_t)fieldTextSize fieldTextFontWeight:(MobilesdkComponentFontWeight *)fieldTextFontWeight showCardHolderName:(BOOL)showCardHolderName __attribute__((swift_name("doCopy(backgroundCornerSize:labelLocation:labelTextSize:labelTextFontWeight:fieldTextSize:fieldTextFontWeight:showCardHolderName:)")));

/**
 * Card Input Style State.
 *
 * Android View System
 * ```kotlin
 * processor.initiate { nonNullProcessor ->
 *     val styleState = CardInputStyleState()
 *     cardInputView.init(styleState)
 * }
 * ```
 * Jetpack Compose
 * ```kotlin
 * val styleState = rememberCardInputStyleState(
 *     showCardHolderName = true
 * )
 * CardInputSlim(state = styleState)
 * ```
 * Swift
 * ```swift
 * @State private var cardState: CardInputStyleState = CardInputStyleState()
 * @State private var onCardError: (String) -> Void = { error in
 *
 * }
 * ```
 * ```swift
 * CardInput(
 *     state: $cardState,
 *     onError: $onCardError
 * )
 * ```
 * @param backgroundCornerSize The size of the background corner in the card input. Default value is 0.
 * @param labelLocation The location of the label in the card input. Default value is LabelLocation.TOP.
 * @param labelTextSize The size of the label text in the card input. Default value is 12.
 * @param labelTextFontWeight The font weight of the label text in the card input. Default value is ComponentFontWeight.NORMAL.
 * @param fieldTextSize The size of the field text in the card input. Default value is 12.
 * @param fieldTextFontWeight The font weight of the field text in the card input. Default value is ComponentFontWeight.NORMAL.
 * @param showCardHolderName A boolean indicating whether the cardholder's name should be shown. Default value is true.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Card Input Style State.
 *
 * Android View System
 * ```kotlin
 * processor.initiate { nonNullProcessor ->
 *     val styleState = CardInputStyleState()
 *     cardInputView.init(styleState)
 * }
 * ```
 * Jetpack Compose
 * ```kotlin
 * val styleState = rememberCardInputStyleState(
 *     showCardHolderName = true
 * )
 * CardInputSlim(state = styleState)
 * ```
 * Swift
 * ```swift
 * @State private var cardState: CardInputStyleState = CardInputStyleState()
 * @State private var onCardError: (String) -> Void = { error in
 *
 * }
 * ```
 * ```swift
 * CardInput(
 *     state: $cardState,
 *     onError: $onCardError
 * )
 * ```
 * @param backgroundCornerSize The size of the background corner in the card input. Default value is 0.
 * @param labelLocation The location of the label in the card input. Default value is LabelLocation.TOP.
 * @param labelTextSize The size of the label text in the card input. Default value is 12.
 * @param labelTextFontWeight The font weight of the label text in the card input. Default value is ComponentFontWeight.NORMAL.
 * @param fieldTextSize The size of the field text in the card input. Default value is 12.
 * @param fieldTextFontWeight The font weight of the field text in the card input. Default value is ComponentFontWeight.NORMAL.
 * @param showCardHolderName A boolean indicating whether the cardholder's name should be shown. Default value is true.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Card Input Style State.
 *
 * Android View System
 * ```kotlin
 * processor.initiate { nonNullProcessor ->
 *     val styleState = CardInputStyleState()
 *     cardInputView.init(styleState)
 * }
 * ```
 * Jetpack Compose
 * ```kotlin
 * val styleState = rememberCardInputStyleState(
 *     showCardHolderName = true
 * )
 * CardInputSlim(state = styleState)
 * ```
 * Swift
 * ```swift
 * @State private var cardState: CardInputStyleState = CardInputStyleState()
 * @State private var onCardError: (String) -> Void = { error in
 *
 * }
 * ```
 * ```swift
 * CardInput(
 *     state: $cardState,
 *     onError: $onCardError
 * )
 * ```
 * @param backgroundCornerSize The size of the background corner in the card input. Default value is 0.
 * @param labelLocation The location of the label in the card input. Default value is LabelLocation.TOP.
 * @param labelTextSize The size of the label text in the card input. Default value is 12.
 * @param labelTextFontWeight The font weight of the label text in the card input. Default value is ComponentFontWeight.NORMAL.
 * @param fieldTextSize The size of the field text in the card input. Default value is 12.
 * @param fieldTextFontWeight The font weight of the field text in the card input. Default value is ComponentFontWeight.NORMAL.
 * @param showCardHolderName A boolean indicating whether the cardholder's name should be shown. Default value is true.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t backgroundCornerSize __attribute__((swift_name("backgroundCornerSize")));
@property (readonly) MobilesdkComponentFontWeight *fieldTextFontWeight __attribute__((swift_name("fieldTextFontWeight")));
@property (readonly) int32_t fieldTextSize __attribute__((swift_name("fieldTextSize")));
@property (readonly) MobilesdkLabelLocation *labelLocation __attribute__((swift_name("labelLocation")));
@property (readonly) MobilesdkComponentFontWeight *labelTextFontWeight __attribute__((swift_name("labelTextFontWeight")));
@property (readonly) int32_t labelTextSize __attribute__((swift_name("labelTextSize")));
@property (readonly) BOOL showCardHolderName __attribute__((swift_name("showCardHolderName")));
@end


/**
 * Label location
 *
 * @constructor Create empty Label location
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LabelLocation")))
@interface MobilesdkLabelLocation : MobilesdkKotlinEnum<MobilesdkLabelLocation *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Label location
 *
 * @constructor Create empty Label location
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MobilesdkLabelLocation *top __attribute__((swift_name("top")));
@property (class, readonly) MobilesdkLabelLocation *contained __attribute__((swift_name("contained")));
+ (MobilesdkKotlinArray<MobilesdkLabelLocation *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MobilesdkLabelLocation *> *entries __attribute__((swift_name("entries")));
@end


/**
 * Component font weight
 *
 * @property value
 * @constructor Create empty Component font weight
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ComponentFontWeight")))
@interface MobilesdkComponentFontWeight : MobilesdkKotlinEnum<MobilesdkComponentFontWeight *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Component font weight
 *
 * @property value
 * @constructor Create empty Component font weight
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MobilesdkComponentFontWeight *normal __attribute__((swift_name("normal")));
@property (class, readonly) MobilesdkComponentFontWeight *medium __attribute__((swift_name("medium")));
@property (class, readonly) MobilesdkComponentFontWeight *bold __attribute__((swift_name("bold")));
@property (class, readonly) MobilesdkComponentFontWeight *light __attribute__((swift_name("light")));
+ (MobilesdkKotlinArray<MobilesdkComponentFontWeight *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MobilesdkComponentFontWeight *> *entries __attribute__((swift_name("entries")));
@property (readonly) MobilesdkUi_textFontWeight *value __attribute__((swift_name("value")));
@end


/**
 * Save Card Box Controller
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SaveCardBoxController")))
@interface MobilesdkSaveCardBoxController : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Save Card Box Controller
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)saveCardBoxController __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkSaveCardBoxController *shared __attribute__((swift_name("shared")));
- (UIViewController *)make __attribute__((swift_name("make()")));
- (void)updateState:(MobilesdkSaveCardState *)state __attribute__((swift_name("update(state:)")));
@end


/**
 * Save card state
 *
 * @property fontSize
 * @property fontWeight
 * @property defaultState
 * @constructor Create empty Save card state
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SaveCardState")))
@interface MobilesdkSaveCardState : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithFontSize:(int32_t)fontSize fontWeight:(MobilesdkComponentFontWeight *)fontWeight defaultState:(BOOL)defaultState __attribute__((swift_name("init(fontSize:fontWeight:defaultState:)"))) __attribute__((objc_designated_initializer));
- (MobilesdkSaveCardState *)doCopyFontSize:(int32_t)fontSize fontWeight:(MobilesdkComponentFontWeight *)fontWeight defaultState:(BOOL)defaultState __attribute__((swift_name("doCopy(fontSize:fontWeight:defaultState:)")));

/**
 * Save card state
 *
 * @property fontSize
 * @property fontWeight
 * @property defaultState
 * @constructor Create empty Save card state
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Save card state
 *
 * @property fontSize
 * @property fontWeight
 * @property defaultState
 * @constructor Create empty Save card state
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Save card state
 *
 * @property fontSize
 * @property fontWeight
 * @property defaultState
 * @constructor Create empty Save card state
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL defaultState __attribute__((swift_name("defaultState")));
@property (readonly) int32_t fontSize __attribute__((swift_name("fontSize")));
@property (readonly) MobilesdkComponentFontWeight *fontWeight __attribute__((swift_name("fontWeight")));
@end


/**
 * Saved Cards Controller
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SavedCardsController")))
@interface MobilesdkSavedCardsController : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Saved Cards Controller
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)savedCardsController __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkSavedCardsController *shared __attribute__((swift_name("shared")));
- (UIViewController *)make __attribute__((swift_name("make()")));
- (void)updateState:(MobilesdkSavedCardsState *)state __attribute__((swift_name("update(state:)")));
@end


/**
 * Saved cards state
 *
 * @property onCardSelected The callback to be called when a card is selected. (Boolean) -> Unit, true when no saved card is selected.
 * @property tryToUseDefaultCard If true, the default saved card will be selected automatically.
 * @constructor Create empty Saved cards state
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SavedCardsState")))
@interface MobilesdkSavedCardsState : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithOnCardSelected:(void (^)(MobilesdkBoolean *))onCardSelected tryToUseDefaultCard:(BOOL)tryToUseDefaultCard __attribute__((swift_name("init(onCardSelected:tryToUseDefaultCard:)"))) __attribute__((objc_designated_initializer));
- (MobilesdkSavedCardsState *)doCopyOnCardSelected:(void (^)(MobilesdkBoolean *))onCardSelected tryToUseDefaultCard:(BOOL)tryToUseDefaultCard __attribute__((swift_name("doCopy(onCardSelected:tryToUseDefaultCard:)")));

/**
 * Saved cards state
 *
 * @property onCardSelected The callback to be called when a card is selected. (Boolean) -> Unit, true when no saved card is selected.
 * @property tryToUseDefaultCard If true, the default saved card will be selected automatically.
 * @constructor Create empty Saved cards state
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Saved cards state
 *
 * @property onCardSelected The callback to be called when a card is selected. (Boolean) -> Unit, true when no saved card is selected.
 * @property tryToUseDefaultCard If true, the default saved card will be selected automatically.
 * @constructor Create empty Saved cards state
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Set on card selected
 *
 * @param callback
 * @receiver
 */
- (MobilesdkSavedCardsState *)setOnCardSelectedCallback:(void (^)(MobilesdkBoolean *))callback __attribute__((swift_name("setOnCardSelected(callback:)")));

/**
 * Set try to use default card
 *
 * @param tryToUseDefaultCard
 * @receiver
 */
- (MobilesdkSavedCardsState *)setTryToUseDefaultCardTryToUseDefaultCard:(BOOL)tryToUseDefaultCard __attribute__((swift_name("setTryToUseDefaultCard(tryToUseDefaultCard:)")));

/**
 * Saved cards state
 *
 * @property onCardSelected The callback to be called when a card is selected. (Boolean) -> Unit, true when no saved card is selected.
 * @property tryToUseDefaultCard If true, the default saved card will be selected automatically.
 * @constructor Create empty Saved cards state
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^onCardSelected)(MobilesdkBoolean *) __attribute__((swift_name("onCardSelected")));
@property (readonly) BOOL tryToUseDefaultCard __attribute__((swift_name("tryToUseDefaultCard")));
@end


/**
 * Authentication Helper
 *
 * This class is used to retrieve Authorization Credentials (Client Token) for
 * Advanced Payments Platform (AP)
 *
 * This is just the built-in method to ease the process of getting the client token
 * from the server.
 *
 * This method is not required to be used, you can implement your own method to get the
 * client token from the server.
 *
 *  ### API for generating the auth token:
 *  Test environment: `https://api.mite.pay360.com`
 *
 *  Production environment: `https://api.pay360.com`
 *
 *  #### Registered Customer
 *  The customerReference will be the unique reference of the customer
 *  where is registered with the merchant. Using the reference you will be able
 *  to manage the customer's payment methods and other details
 *  ```
 *  Headers: Authorization: Basic base64(username:password)
 *  POST acceptor/rest/authorisation/{{instId}}/authoriseClient
 *  {
 *     "scopes": [
 *         "MOBILE_CUSTOMER_PAYMENT",
 *         "MOBILE_CUSTOMER_MANAGE"
 *     ],
 *     "customerReference": "CUST_000001"
 *  }
 *  ```
 *  #### Guest Customer
 *  The customerReference will be null for guest customers.
 *  The payment will be processed as a guest user.
 *  ```
 *  Headers: Authorization: Basic base64(username:password)
 *  POST acceptor/rest/authorisation/{{instId}}/authoriseClient
 *  {
 *     "scopes": [
 *         "MOBILE_GUEST_PAYMENT"
 *     ]
 *  }
 *  ```
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthenticationHelper")))
@interface MobilesdkAuthenticationHelper : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Authentication Helper
 *
 * This class is used to retrieve Authorization Credentials (Client Token) for
 * Advanced Payments Platform (AP)
 *
 * This is just the built-in method to ease the process of getting the client token
 * from the server.
 *
 * This method is not required to be used, you can implement your own method to get the
 * client token from the server.
 *
 *  ### API for generating the auth token:
 *  Test environment: `https://api.mite.pay360.com`
 *
 *  Production environment: `https://api.pay360.com`
 *
 *  #### Registered Customer
 *  The customerReference will be the unique reference of the customer
 *  where is registered with the merchant. Using the reference you will be able
 *  to manage the customer's payment methods and other details
 *  ```
 *  Headers: Authorization: Basic base64(username:password)
 *  POST acceptor/rest/authorisation/{{instId}}/authoriseClient
 *  {
 *     "scopes": [
 *         "MOBILE_CUSTOMER_PAYMENT",
 *         "MOBILE_CUSTOMER_MANAGE"
 *     ],
 *     "customerReference": "CUST_000001"
 *  }
 *  ```
 *  #### Guest Customer
 *  The customerReference will be null for guest customers.
 *  The payment will be processed as a guest user.
 *  ```
 *  Headers: Authorization: Basic base64(username:password)
 *  POST acceptor/rest/authorisation/{{instId}}/authoriseClient
 *  {
 *     "scopes": [
 *         "MOBILE_GUEST_PAYMENT"
 *     ]
 *  }
 *  ```
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)authenticationHelper __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkAuthenticationHelper *shared __attribute__((swift_name("shared")));

/**
 * Synchronous Helper method to retrieve Authorization Credentials (Client Token) for
 * Advanced Payments Platform (AP)
 *
 * ## !! This method is blocking the main thread !!
 *
 * @note This method converts instances of AuthenticationHelper.AuthorizationException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (NSString * _Nullable)getAuthTokenEnvironment:(MobilesdkEnvironment *)environment instId:(NSString *)instId userName:(NSString *)userName password:(NSString *)password customerReference:(NSString * _Nullable)customerReference guestPayment:(BOOL)guestPayment includeManageScope:(BOOL)includeManageScope error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("getAuthToken(environment:instId:userName:password:customerReference:guestPayment:includeManageScope:)")));

/**
 * Async Helper method to retrieve Authorization Credentials (Client Token) for
 * Advanced Payments Platform (AP)
 *
 * The customer reference must be the unique reference of the customer and will
 * be used to manage the customer's payment methods and other details.
 *
 * The customer reference can be null if the guestPayment flag is set to true.
 *
 * The guest payment flag is used to process the payment as a guest user.
 * Making the payment as guest it will not store any customer details.
 *
 * @param environment The environment to use for the request
 * @param instId The installation ID
 * @param userName The API username
 * @param password The API password
 * @param customerReference The customer reference (nullable)
 * @param guestPayment The guest payment flag (false/true)
 * @param includeManageScope Include MOBILE_CUSTOMER_MANAGE scope for card management operations
 *
 * @return The Authentication Token (Client Token) as a string
 *
 * @note This method converts instances of AuthenticationHelper.AuthorizationException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestAuthTokenEnvironment:(MobilesdkEnvironment *)environment instId:(NSString *)instId userName:(NSString *)userName password:(NSString *)password customerReference:(NSString * _Nullable)customerReference guestPayment:(BOOL)guestPayment includeManageScope:(BOOL)includeManageScope completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestAuthToken(environment:instId:userName:password:customerReference:guestPayment:includeManageScope:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Responses")))
@interface MobilesdkResponses : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)responses __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkResponses *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Responses.CardManager")))
@interface MobilesdkResponsesCardManager : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cardManager __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkResponsesCardManager *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_CUSTOMER_ID __attribute__((swift_name("ERROR_CUSTOMER_ID")));
@property (readonly) NSString *ERROR_CUSTOMER_METHODS __attribute__((swift_name("ERROR_CUSTOMER_METHODS")));
@property (readonly) NSString *ERROR_DELETE_CARD __attribute__((swift_name("ERROR_DELETE_CARD")));
@property (readonly) NSString *ERROR_INVALID_CREDENTIALS __attribute__((swift_name("ERROR_INVALID_CREDENTIALS")));
@property (readonly) NSString *ERROR_MAKE_PRIMARY_CARD __attribute__((swift_name("ERROR_MAKE_PRIMARY_CARD")));
@property (readonly) NSString *ERROR_MOBILE_DELETE_CARD __attribute__((swift_name("ERROR_MOBILE_DELETE_CARD")));
@property (readonly) NSString *ERROR_MOBILE_MAKE_PRIMARY __attribute__((swift_name("ERROR_MOBILE_MAKE_PRIMARY")));
@property (readonly) NSString *ERROR_MOBILE_STORED_CARDS __attribute__((swift_name("ERROR_MOBILE_STORED_CARDS")));
@property (readonly) NSString *INFO_USING_MOBILE_API __attribute__((swift_name("INFO_USING_MOBILE_API")));
@property (readonly) NSString *WARN_FALLBACK_TO_LEGACY __attribute__((swift_name("WARN_FALLBACK_TO_LEGACY")));
@property (readonly) NSString *WARN_USERNAME_PASSWORD __attribute__((swift_name("WARN_USERNAME_PASSWORD")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Responses.InitiatePayment")))
@interface MobilesdkResponsesInitiatePayment : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)initiatePayment __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkResponsesInitiatePayment *shared __attribute__((swift_name("shared")));
- (NSString *)failWithReasonReason:(id)reason __attribute__((swift_name("failWithReason(reason:)")));
@property (readonly) NSString *FAIL_INITIATE_PAYMENT_NO_INTERNET __attribute__((swift_name("FAIL_INITIATE_PAYMENT_NO_INTERNET")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Responses.Payments")))
@interface MobilesdkResponsesPayments : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)payments __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkResponsesPayments *shared __attribute__((swift_name("shared")));
- (NSString *)customerFacingErrorReason:(NSString *)reason __attribute__((swift_name("customerFacingError(reason:)")));
- (NSString *)errorWithReasonReason:(id)reason traceId:(id _Nullable)traceId __attribute__((swift_name("errorWithReason(reason:traceId:)")));
- (NSString *)unknownErrorStatus:(id)status traceId:(id _Nullable)traceId __attribute__((swift_name("unknownError(status:traceId:)")));
- (NSString *)unknownErrorStatus:(id)status error:(id _Nullable)error traceId:(id _Nullable)traceId __attribute__((swift_name("unknownError(status:error:traceId:)")));
@property (readonly) NSString *CONNECTION_FAILED __attribute__((swift_name("CONNECTION_FAILED")));
@property (readonly) NSString *CONNECTION_TIMEOUT __attribute__((swift_name("CONNECTION_TIMEOUT")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MobilesdkKotlinArray<T> : MobilesdkBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(MobilesdkInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MobilesdkKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

@interface MobilesdkKotlinArray (Extensions)

/**
 * # Map error handling lambda for each error type
 *
 * @param onCardNumberError
 * @param onExpiryDateError
 * @param onCvvError
 * @param onCardholderError
 */
- (void)forErrorOnCardNumberError:(void (^)(NSString *))onCardNumberError onExpiryDateError:(void (^)(NSString *))onExpiryDateError onCvvError:(void (^)(NSString *))onCvvError onCardholderError:(void (^)(NSString *))onCardholderError __attribute__((swift_name("forError(onCardNumberError:onExpiryDateError:onCvvError:onCardholderError:)")));

/**
 * Map CardError list to a string divided by a separator
 *
 * @return
 */
- (NSString *)mapToStringSeparator:(NSString *)separator __attribute__((swift_name("mapToString(separator:)")));
@end


/**
 * Serialization strategy defines the serial form of a type [T], including its structural description,
 * declared by the [descriptor] and the actual serialization process, defined by the implementation
 * of the [serialize] method.
 *
 * [serialize] method takes an instance of [T] and transforms it into its serial form (a sequence of primitives),
 * calling the corresponding [Encoder] methods.
 *
 * A serial form of the type is a transformation of the concrete instance into a sequence of primitive values
 * and vice versa. The serial form is not required to completely mimic the structure of the class, for example,
 * a specific implementation may represent multiple integer values as a single string, omit or add some
 * values that are present in the type, but not in the instance.
 *
 * For a more detailed explanation of the serialization process, please refer to [KSerializer] documentation.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol MobilesdkKotlinx_serialization_coreSerializationStrategy
@required

/**
 * Serializes the [value] of type [T] using the format that is represented by the given [encoder].
 * [serialize] method is format-agnostic and operates with a high-level structured [Encoder] API.
 * Throws [SerializationException] if value cannot be serialized.
 *
 * Example of serialize method:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * fun serialize(encoder: Encoder, value: MyData): Unit = encoder.encodeStructure(descriptor) {
 *     // encodeStructure encodes beginning and end of the structure
 *     // encode 'int' property as Int
 *     encodeIntElement(descriptor, index = 0, value.int)
 *     // encode 'stringList' property as List<String>
 *     encodeSerializableElement(descriptor, index = 1, serializer<List<String>>, value.stringList)
 *     // don't encode 'alwaysZero' property because we decided to do so
 * } // end of the structure
 * ```
 *
 * @throws SerializationException in case of any serialization-specific error
 * @throws IllegalArgumentException if the supplied input does not comply encoder's specification
 * @see KSerializer for additional information about general contracts and exception specifics
 */
- (void)serializeEncoder:(id<MobilesdkKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));

/**
 * Describes the structure of the serializable representation of [T], produced
 * by this serializer.
 */
@property (readonly) id<MobilesdkKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * Deserialization strategy defines the serial form of a type [T], including its structural description,
 * declared by the [descriptor] and the actual deserialization process, defined by the implementation
 * of the [deserialize] method.
 *
 * [deserialize] method takes an instance of [Decoder], and, knowing the serial form of the [T],
 * invokes primitive retrieval methods on the decoder and then transforms the received primitives
 * to an instance of [T].
 *
 * A serial form of the type is a transformation of the concrete instance into a sequence of primitive values
 * and vice versa. The serial form is not required to completely mimic the structure of the class, for example,
 * a specific implementation may represent multiple integer values as a single string, omit or add some
 * values that are present in the type, but not in the instance.
 *
 * For a more detailed explanation of the serialization process, please refer to [KSerializer] documentation.
 */
__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol MobilesdkKotlinx_serialization_coreDeserializationStrategy
@required

/**
 * Deserializes the value of type [T] using the format that is represented by the given [decoder].
 * [deserialize] method is format-agnostic and operates with a high-level structured [Decoder] API.
 * As long as most of the formats imply an arbitrary order of properties, deserializer should be able
 * to decode these properties in an arbitrary order and in a format-agnostic way.
 * For that purposes, [CompositeDecoder.decodeElementIndex]-based loop is used: decoder firstly
 * signals property at which index it is ready to decode and then expects caller to decode
 * property with the given index.
 *
 * Throws [SerializationException] if value cannot be deserialized.
 *
 * Example of deserialize method:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * fun deserialize(decoder: Decoder): MyData = decoder.decodeStructure(descriptor) {
 *     // decodeStructure decodes beginning and end of the structure
 *     var int: Int? = null
 *     var list: List<String>? = null
 *     loop@ while (true) {
 *         when (val index = decodeElementIndex(descriptor)) {
 *             DECODE_DONE -> break@loop
 *             0 -> {
 *                 // Decode 'int' property as Int
 *                 int = decodeIntElement(descriptor, index = 0)
 *             }
 *             1 -> {
 *                 // Decode 'stringList' property as List<String>
 *                 list = decodeSerializableElement(descriptor, index = 1, serializer<List<String>>())
 *             }
 *             else -> throw SerializationException("Unexpected index $index")
 *         }
 *      }
 *     if (int == null || list == null) throwMissingFieldException()
 *     // Always use 0 as a value for alwaysZero property because we decided to do so.
 *     return MyData(int, list, alwaysZero = 0L)
 * }
 * ```
 *
 * @throws MissingFieldException if non-optional fields were not found during deserialization
 * @throws SerializationException in case of any deserialization-specific error
 * @throws IllegalArgumentException if the decoded input is not a valid instance of [T]
 * @see KSerializer for additional information about general contracts and exception specifics
 */
- (id _Nullable)deserializeDecoder:(id<MobilesdkKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));

/**
 * Describes the structure of the serializable representation of [T], that current
 * deserializer is able to deserialize.
 */
@property (readonly) id<MobilesdkKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * KSerializer is responsible for the representation of a serial form of a type [T]
 * in terms of [encoders][Encoder] and [decoders][Decoder] and for constructing and deconstructing [T]
 * from/to a sequence of encoding primitives. For classes marked with [@Serializable][Serializable], can be
 * obtained from generated companion extension `.serializer()` or from [serializer<T>()][serializer] function.
 *
 * Serialization is decoupled from the encoding process to make it completely format-agnostic.
 * Serialization represents a type as its serial form and is abstracted from the actual
 * format (whether its JSON, ProtoBuf or a hashing) and unaware of the underlying storage
 * (whether it is a string builder, byte array or a network socket), while
 * encoding/decoding is abstracted from a particular type and its serial form and is responsible
 * for transforming primitives ("here in an int property 'foo'" call from a serializer) into a particular
 * format-specific representation ("for a given int, append a property name in quotation marks,
 * then append a colon, then append an actual value" for JSON) and how to retrieve a primitive
 * ("give me an int that is 'foo' property") from the underlying representation ("expect the next string to be 'foo',
 * parse it, then parse colon, then parse a string until the next comma as an int and return it).
 *
 * Serial form consists of a structural description, declared by the [descriptor] and
 * actual serialization and deserialization processes, defined by the corresponding
 * [serialize] and [deserialize] methods implementation.
 *
 * Structural description specifies how the [T] is represented in the serial form:
 * its [kind][SerialKind] (e.g. whether it is represented as a primitive, a list or a class),
 * its [elements][SerialDescriptor.elementNames] and their [positional names][SerialDescriptor.getElementName].
 *
 * Serialization process is defined as a sequence of calls to an [Encoder], and transforms a type [T]
 * into a stream of format-agnostic primitives that represent [T], such as "here is an int, here is a double
 * and here is another nested object". It can be demonstrated by the example:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * // .. serialize method of a corresponding serializer
 * fun serialize(encoder: Encoder, value: MyData): Unit = encoder.encodeStructure(descriptor) {
 *     // encodeStructure encodes beginning and end of the structure
 *     // encode 'int' property as Int
 *     encodeIntElement(descriptor, index = 0, value.int)
 *     // encode 'stringList' property as List<String>
 *     encodeSerializableElement(descriptor, index = 1, serializer<List<String>>, value.stringList)
 *     // don't encode 'alwaysZero' property because we decided to do so
 * } // end of the structure
 * ```
 *
 * Deserialization process is symmetric and uses [Decoder].
 *
 * ### Exception types for `KSerializer` implementation
 *
 * Implementations of [serialize] and [deserialize] methods are allowed to throw
 * any subtype of [IllegalArgumentException] in order to indicate serialization
 * and deserialization errors.
 *
 * For serializer implementations, it is recommended to throw subclasses of [SerializationException] for
 * any serialization-specific errors related to invalid or unsupported format of the data
 * and [IllegalStateException] for errors during validation of the data.
 */
__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol MobilesdkKotlinx_serialization_coreKSerializer <MobilesdkKotlinx_serialization_coreSerializationStrategy, MobilesdkKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("KotlinThrowable")))
@interface MobilesdkKotlinThrowable : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MobilesdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MobilesdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (MobilesdkKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MobilesdkKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface MobilesdkKotlinException : MobilesdkKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MobilesdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MobilesdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface MobilesdkKotlinRuntimeException : MobilesdkKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MobilesdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MobilesdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalArgumentException")))
@interface MobilesdkKotlinIllegalArgumentException : MobilesdkKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MobilesdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MobilesdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MobilesdkKotlinEnumCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * An asynchronous data stream that sequentially emits values and completes normally or with an exception.
 *
 * _Intermediate operators_ on the flow such as [map], [filter], [take], [zip], etc are functions that are
 * applied to the _upstream_ flow or flows and return a _downstream_ flow where further operators can be applied to.
 * Intermediate operations do not execute any code in the flow and are not suspending functions themselves.
 * They only set up a chain of operations for future execution and quickly return.
 * This is known as a _cold flow_ property.
 *
 * _Terminal operators_ on the flow are either suspending functions such as [collect], [single], [reduce], [toList], etc.
 * or [launchIn] operator that starts collection of the flow in the given scope.
 * They are applied to the upstream flow and trigger execution of all operations.
 * Execution of the flow is also called _collecting the flow_  and is always performed in a suspending manner
 * without actual blocking. Terminal operators complete normally or exceptionally depending on successful or failed
 * execution of all the flow operations in the upstream. The most basic terminal operator is [collect], for example:
 *
 * ```
 * try {
 *     flow.collect { value ->
 *         println("Received $value")
 *     }
 * } catch (e: Exception) {
 *     println("The flow has thrown an exception: $e")
 * }
 * ```
 *
 * By default, flows are _sequential_ and all flow operations are executed sequentially in the same coroutine,
 * with an exception for a few operations specifically designed to introduce concurrency into flow
 * execution such as [buffer] and [flatMapMerge]. See their documentation for details.
 *
 * The `Flow` interface does not carry information whether a flow is a _cold_ stream that can be collected repeatedly and
 * triggers execution of the same code every time it is collected, or if it is a _hot_ stream that emits different
 * values from the same running source on each collection. Usually flows represent _cold_ streams, but
 * there is a [SharedFlow] subtype that represents _hot_ streams. In addition to that, any flow can be turned
 * into a _hot_ one by the [stateIn] and [shareIn] operators, or by converting the flow into a hot channel
 * via the [produceIn] operator.
 *
 * ### Flow builders
 *
 * There are the following basic ways to create a flow:
 *
 * - [flowOf(...)][flowOf] functions to create a flow from a fixed set of values.
 * - [asFlow()][asFlow] extension functions on various types to convert them into flows.
 * - [flow { ... }][flow] builder function to construct arbitrary flows from
 *   sequential calls to [emit][FlowCollector.emit] function.
 * - [channelFlow { ... }][channelFlow] builder function to construct arbitrary flows from
 *   potentially concurrent calls to the [send][kotlinx.coroutines.channels.SendChannel.send] function.
 * - [MutableStateFlow] and [MutableSharedFlow] define the corresponding constructor functions to create
 *   a _hot_ flow that can be directly updated.
 *
 * ### Flow constraints
 *
 * All implementations of the `Flow` interface must adhere to two key properties described in detail below:
 *
 * - Context preservation.
 * - Exception transparency.
 *
 * These properties ensure the ability to perform local reasoning about the code with flows and modularize the code
 * in such a way that upstream flow emitters can be developed separately from downstream flow collectors.
 * A user of a flow does not need to be aware of implementation details of the upstream flows it uses.
 *
 * ### Context preservation
 *
 * The flow has a context preservation property: it encapsulates its own execution context and never propagates or leaks
 * it downstream, thus making reasoning about the execution context of particular transformations or terminal
 * operations trivial.
 *
 * There is only one way to change the context of a flow: the [flowOn][Flow.flowOn] operator
 * that changes the upstream context ("everything above the `flowOn` operator").
 * For additional information refer to its documentation.
 *
 * This reasoning can be demonstrated in practice:
 *
 * ```
 * val flowA = flowOf(1, 2, 3)
 *     .map { it + 1 } // Will be executed in ctxA
 *     .flowOn(ctxA) // Changes the upstream context: flowOf and map
 *
 * // Now we have a context-preserving flow: it is executed somewhere but this information is encapsulated in the flow itself
 *
 * val filtered = flowA // ctxA is encapsulated in flowA
 *    .filter { it == 3 } // Pure operator without a context yet
 *
 * withContext(Dispatchers.Main) {
 *     // All non-encapsulated operators will be executed in Main: filter and single
 *     val result = filtered.single()
 *     myUi.text = result
 * }
 * ```
 *
 * From the implementation point of view, it means that all flow implementations should
 * only emit from the same coroutine context.
 * This constraint is efficiently enforced by the default [flow] builder.
 * The [flow] builder should be used if the flow implementation does not start any coroutines.
 * Its implementation prevents most of the development mistakes:
 *
 * ```
 * val myFlow = flow {
 *     // GlobalScope.launch { // is prohibited
 *     // launch(Dispatchers.IO) { // is prohibited
 *     // withContext(CoroutineName("myFlow")) { // is prohibited
 *     emit(1) // OK
 *     coroutineScope {
 *         emit(2) // OK -- still the same coroutine
 *     }
 * }
 * ```
 *
 * Use [channelFlow] if the collection and emission of a flow are to be separated into multiple coroutines.
 * It encapsulates all the context preservation work and allows you to focus on your
 * domain-specific problem, rather than invariant implementation details.
 * It is possible to use any combination of coroutine builders from within [channelFlow].
 *
 * If you are looking for performance and are sure that no concurrent emits and context jumps will happen,
 * the [flow] builder can be used alongside a [coroutineScope] or [supervisorScope] instead:
 * - Scoped primitive should be used to provide a [CoroutineScope].
 * - Changing the context of emission is prohibited, no matter whether it is `withContext(ctx)` or
 *   a builder argument (e.g. `launch(ctx)`).
 * - Collecting another flow from a separate context is allowed, but it has the same effect as
 *   applying the [flowOn] operator to that flow, which is more efficient.
 *
 * ### Exception transparency
 *
 * When `emit` or `emitAll` throws, the Flow implementations must immediately stop emitting new values and finish with an exception.
 * For diagnostics or application-specific purposes, the exception may be different from the one thrown by the emit operation,
 * suppressing the original exception as discussed below.
 * If there is a need to emit values after the downstream failed, please use the [catch][Flow.catch] operator.
 *
 * The [catch][Flow.catch] operator only catches upstream exceptions, but passes
 * all downstream exceptions. Similarly, terminal operators like [collect][Flow.collect]
 * throw any unhandled exceptions that occur in their code or in upstream flows, for example:
 *
 * ```
 * flow { emitData() }
 *     .map { computeOne(it) }
 *     .catch { ... } // catches exceptions in emitData and computeOne
 *     .map { computeTwo(it) }
 *     .collect { process(it) } // throws exceptions from process and computeTwo
 * ```
 * The same reasoning can be applied to the [onCompletion] operator that is a declarative replacement for the `finally` block.
 *
 * All exception-handling Flow operators follow the principle of exception suppression:
 *
 * If the upstream flow throws an exception during its completion when the downstream exception has been thrown,
 * the downstream exception becomes superseded and suppressed by the upstream exception, being a semantic
 * equivalent of throwing from `finally` block. However, this doesn't affect the operation of the exception-handling operators,
 * which consider the downstream exception to be the root cause and behave as if the upstream didn't throw anything.
 *
 * Failure to adhere to the exception transparency requirement can lead to strange behaviors which make
 * it hard to reason about the code because an exception in the `collect { ... }` could be somehow "caught"
 * by an upstream flow, limiting the ability of local reasoning about the code.
 *
 * Flow machinery enforces exception transparency at runtime and throws [IllegalStateException] on any attempt to emit a value,
 * if an exception has been thrown on previous attempt.
 *
 * ### Reactive streams
 *
 * Flow is [Reactive Streams](http://www.reactive-streams.org/) compliant, you can safely interop it with
 * reactive streams using `Flow.asPublisher` and `Publisher.asFlow` from `kotlinx-coroutines-reactive` module.
 *
 * ### Not stable for inheritance
 *
 * **The `Flow` interface is not stable for inheritance in 3rd party libraries**, as new methods
 * might be added to this interface in the future, but is stable for use.
 *
 * Use the `flow { ... }` builder function to create an implementation, or extend [AbstractFlow].
 * These implementations ensure that the context preservation property is not violated, and prevent most
 * of the developer mistakes related to concurrency, inconsistent flow dispatchers, and cancellation.
 */
__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol MobilesdkKotlinx_coroutines_coreFlow
@required

/**
 * Accepts the given [collector] and [emits][FlowCollector.emit] values into it.
 *
 * This method can be used along with SAM-conversion of [FlowCollector]:
 * ```
 * myFlow.collect { value -> println("Collected $value") }
 * ```
 *
 * ### Method inheritance
 *
 * To ensure the context preservation property, it is not recommended implementing this method directly.
 * Instead, [AbstractFlow] can be used as the base type to properly ensure flow's properties.
 *
 * All default flow implementations ensure context preservation and exception transparency properties on a best-effort basis
 * and throw [IllegalStateException] if a violation was detected.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MobilesdkKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end


/**
 * The thickness of the glyphs, in a range of [1, 1000].
 *
 * @param weight Font weight value in the range of [1, 1000]
 * @see Font
 * @see FontFamily
 *
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textFontWeight")))
@interface MobilesdkUi_textFontWeight : MobilesdkBase <MobilesdkKotlinComparable>
- (instancetype)initWithWeight:(int32_t)weight __attribute__((swift_name("init(weight:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkUi_textFontWeightCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(MobilesdkUi_textFontWeight *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t weight __attribute__((swift_name("weight")));
@end

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("AuthenticationHelper.AuthorizationException")))
@interface MobilesdkAuthenticationHelperAuthorizationException : NSObject
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface MobilesdkKotlinIllegalStateException : MobilesdkKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MobilesdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MobilesdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface MobilesdkKotlinCancellationException : MobilesdkKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MobilesdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MobilesdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol MobilesdkKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end


/**
 * Encoder is a core serialization primitive that encapsulates the knowledge of the underlying
 * format and its storage, exposing only structural methods to the serializer, making it completely
 * format-agnostic. Serialization process transforms a single value into the sequence of its
 * primitive elements, also called its serial form, while encoding transforms these primitive elements into an actual
 * format representation: JSON string, ProtoBuf ByteArray, in-memory map representation etc.
 *
 * Encoder provides high-level API that operates with basic primitive types, collections
 * and nested structures. Internally, encoder represents output storage and operates with its state
 * and lower level format-specific details.
 *
 * To be more specific, serialization transforms a value into a sequence of "here is an int, here is
 * a double, here a list of strings and here is another object that is a nested int", while encoding
 * transforms this sequence into a format-specific commands such as "insert opening curly bracket
 * for a nested object start, insert a name of the value, and the value separated with colon for an int etc."
 *
 * The symmetric interface for the deserialization process is [Decoder].
 *
 * ### Serialization. Primitives
 *
 * If a class is represented as a single [primitive][PrimitiveKind] value in its serialized form,
 * then one of the `encode*` methods (e.g. [encodeInt]) can be used directly.
 *
 * ### Serialization. Structured types.
 *
 * If a class is represented as a structure or has multiple values in its serialized form,
 * `encode*` methods are not that helpful, because they do not allow working with collection types or establish structure boundaries.
 * All these capabilities are delegated to the [CompositeEncoder] interface with a more specific API surface.
 * To denote a structure start, [beginStructure] should be used.
 * ```
 * // Denote the structure start,
 * val composite = encoder.beginStructure(descriptor)
 * // Encoding all elements within the structure using 'composite'
 * ...
 * // Denote the structure end
 * composite.endStructure(descriptor)
 * ```
 *
 * E.g. if the encoder belongs to JSON format, then [beginStructure] will write an opening bracket
 * (`{` or `[`, depending on the descriptor kind), returning the [CompositeEncoder] that is aware of colon separator,
 * that should be appended between each key-value pair, whilst [CompositeEncoder.endStructure] will write a closing bracket.
 *
 * ### Exception guarantees
 *
 * For the regular exceptions, such as invalid input, conflicting serial names,
 * [SerializationException] can be thrown by any encoder methods.
 * It is recommended to declare a format-specific subclass of [SerializationException] and throw it.
 *
 * ### Exception safety
 *
 * In general, catching [SerializationException] from any of `encode*` methods is not allowed and produces unspecified behaviour.
 * After thrown exception, the current encoder is left in an arbitrary state, no longer suitable for further encoding.
 *
 * ### Format encapsulation
 *
 * For example, for the following serializer:
 * ```
 * class StringHolder(val stringValue: String)
 *
 * object StringPairDeserializer : SerializationStrategy<StringHolder> {
 *    override val descriptor = ...
 *
 *    override fun serializer(encoder: Encoder, value: StringHolder) {
 *        // Denotes start of the structure, StringHolder is not a "plain" data type
 *        val composite = encoder.beginStructure(descriptor)
 *        // Encode the nested string value
 *        composite.encodeStringElement(descriptor, index = 0)
 *        // Denotes end of the structure
 *        composite.endStructure(descriptor)
 *    }
 * }
 * ```
 *
 * This serializer does not know anything about the underlying storage and will work with any properly-implemented encoder.
 * JSON, for example, writes an opening bracket `{` during the `beginStructure` call, writes `stringValue` key along
 * with its value in `encodeStringElement` and writes the closing bracket `}` during the `endStructure`.
 * XML would do roughly the same, but with different separators and structures, while ProtoBuf
 * machinery could be completely different.
 * In any case, all these parsing details are encapsulated by an encoder.
 *
 * ### Encoder implementation.
 *
 * While being strictly typed, an underlying format can transform actual types in the way it wants.
 * For example, a format can support only string types and encode/decode all primitives in a string form:
 * ```
 * StringFormatEncoder : Encoder {
 *
 *     ...
 *     override fun encodeDouble(value: Double) = encodeString(value.toString())
 *     override fun encodeInt(value: Int) = encodeString(value.toString())
 *     ...
 * }
 * ```
 *
 * ### Not stable for inheritance
 *
 * `Encoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol MobilesdkKotlinx_serialization_coreEncoder
@required

/**
 * Encodes the beginning of the collection with size [collectionSize] and the given serializer of its type parameters.
 * This method has to be implemented only if you need to know collection size in advance, otherwise, [beginStructure] can be used.
 */
- (id<MobilesdkKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));

/**
 * Encodes the beginning of the nested structure in a serialized form
 * and returns [CompositeDecoder] responsible for encoding this very structure.
 * E.g the hierarchy:
 * ```
 * class StringHolder(val stringValue: String)
 * class Holder(val stringHolder: StringHolder)
 * ```
 *
 * with the following serialized form in JSON:
 * ```
 * {
 *   "stringHolder" : { "stringValue": "value" }
 * }
 * ```
 *
 * will be roughly represented as the following sequence of calls:
 * ```
 * // Holder serializer
 * fun serialize(encoder: Encoder, value: Holder) {
 *     val composite = encoder.beginStructure(descriptor) // the very first opening bracket '{'
 *     composite.encodeSerializableElement(descriptor, 0, value.stringHolder) // Serialize nested StringHolder
 *     composite.endStructure(descriptor) // The very last closing bracket
 * }
 *
 * // StringHolder serializer
 * fun serialize(encoder: Encoder, value: StringHolder) {
 *     val composite = encoder.beginStructure(descriptor) // One more '{' when the key "stringHolder" is already written
 *     composite.encodeStringElement(descriptor, 0, value.stringValue) // Serialize actual value
 *     composite.endStructure(descriptor) // Closing bracket
 * }
 * ```
 */
- (id<MobilesdkKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));

/**
 * Encodes a boolean value.
 * Corresponding kind is [PrimitiveKind.BOOLEAN].
 */
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));

/**
 * Encodes a single byte value.
 * Corresponding kind is [PrimitiveKind.BYTE].
 */
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));

/**
 * Encodes a 16-bit unicode character value.
 * Corresponding kind is [PrimitiveKind.CHAR].
 */
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));

/**
 * Encodes a 64-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.DOUBLE].
 */
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));

/**
 * Encodes a enum value that is stored at the [index] in [enumDescriptor] elements collection.
 * Corresponding kind is [SerialKind.ENUM].
 *
 * E.g. for the enum `enum class Letters { A, B, C, D }` and
 * serializable value "C", [encodeEnum] method should be called with `2` as am index.
 *
 * This method does not imply any restrictions on the output format,
 * the format is free to store the enum by its name, index, ordinal or any other
 */
- (void)encodeEnumEnumDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));

/**
 * Encodes a 32-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.FLOAT].
 */
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));

/**
 * Returns [Encoder] for encoding an underlying type of a value class in an inline manner.
 * [descriptor] describes a serializable value class.
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * the following sequence is used:
 * ```
 * thisEncoder.encodeInline(MyInt.serializer().descriptor).encodeInt(my)
 * ```
 *
 * Current encoder may return any other instance of [Encoder] class, depending on the provided [descriptor].
 * For example, when this function is called on Json encoder with `UInt.serializer().descriptor`, the returned encoder is able
 * to encode unsigned integers.
 *
 * Note that this function returns [Encoder] instead of the [CompositeEncoder]
 * because value classes always have the single property.
 * Calling [Encoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 */
- (id<MobilesdkKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));

/**
 * Encodes a 32-bit integer value.
 * Corresponding kind is [PrimitiveKind.INT].
 */
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));

/**
 * Encodes a 64-bit integer value.
 * Corresponding kind is [PrimitiveKind.LONG].
 */
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * Notifies the encoder that value of a nullable type that is
 * being serialized is not null. It should be called before writing a non-null value
 * of nullable type:
 * ```
 * // Could be String? serialize method
 * if (value != null) {
 *     encoder.encodeNotNullMark()
 *     encoder.encodeStringValue(value)
 * } else {
 *     encoder.encodeNull()
 * }
 * ```
 *
 * This method has a use in highly-performant binary formats and can
 * be safely ignore by most of the regular formats.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * Encodes `null` value.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * Encodes the nullable [value] of type [T] by delegating the encoding process to the given [serializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<MobilesdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));

/**
 * Encodes the [value] of type [T] by delegating the encoding process to the given [serializer].
 * For example, `encodeInt` call is equivalent to delegating integer encoding to [Int.serializer][Int.Companion.serializer]:
 * `encodeSerializableValue(Int.serializer())`
 */
- (void)encodeSerializableValueSerializer:(id<MobilesdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));

/**
 * Encodes a 16-bit short value.
 * Corresponding kind is [PrimitiveKind.SHORT].
 */
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));

/**
 * Encodes a string value.
 * Corresponding kind is [PrimitiveKind.STRING].
 */
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) MobilesdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * Serial descriptor is an inherent property of [KSerializer] that describes the structure of the serializable type.
 * The structure of the serializable type is not only the characteristic of the type itself, but also of the serializer as well,
 * meaning that one type can have multiple descriptors that have completely different structures.
 *
 * For example, the class `class Color(val rgb: Int)` can have multiple serializable representations,
 * such as `{"rgb": 255}`, `"#0000FF"`, `[0, 0, 255]` and `{"red": 0, "green": 0, "blue": 255}`.
 * Representations are determined by serializers, and each such serializer has its own descriptor that identifies
 * each structure in a distinguishable and format-agnostic manner.
 *
 * ### Structure
 * Serial descriptor is identified by its [name][serialName] and consists of a kind, potentially empty set of
 * children elements, and additional metadata.
 *
 * * [serialName] uniquely identifies the descriptor (and the corresponding serializer) for non-generic types.
 *   For generic types, the actual type substitution is omitted from the string representation, and the name
 *   identifies the family of the serializers without type substitutions. However, type substitution is accounted for
 *   in [equals] and [hashCode] operations, meaning that descriptors of generic classes with the same name but different type
 *   arguments are not equal to each other.
 *   [serialName] is typically used to specify the type of the target class during serialization of polymorphic and sealed
 *   classes, for observability and diagnostics.
 * * [Kind][SerialKind] defines what this descriptor represents: primitive, enum, object, collection, etc.
 * * Children elements are represented as serial descriptors as well and define the structure of the type's elements.
 * * Metadata carries additional information, such as [nullability][nullable], [optionality][isElementOptional]
 *   and [serial annotations][getElementAnnotations].
 *
 * ### Usages
 * There are two general usages of the descriptors: THE serialization process and serialization introspection.
 *
 * #### Serialization
 * Serial descriptor is used as a bridge between decoders/encoders and serializers.
 * When asking for a next element, the serializer provides an expected descriptor to the decoder, and,
 * based on the descriptor content, the decoder decides how to parse its input.
 * In JSON, for example, when the encoder is asked to encode the next element and this element
 * is a subtype of [List], the encoder receives a descriptor with [StructureKind.LIST] and, based on that,
 * first writes an opening square bracket before writing the content of the list.
 *
 * Serial descriptor _encapsulates_ the structure of the data, so serializers can be free from
 * format-specific details. `ListSerializer` knows nothing about JSON and square brackets, providing
 * only the structure of the data and delegating encoding decision to the format itself.
 *
 * #### Introspection
 * Another usage of a serial descriptor is type introspection without its serialization.
 * Introspection can be used to check whether the given serializable class complies the
 * corresponding scheme and to generate JSON or ProtoBuf schema from the given class.
 *
 * ### Indices
 * Serial descriptor API operates with children indices.
 * For the fixed-size structures, such as regular classes, index is represented by a value in
 * the range from zero to [elementsCount] and represent and index of the property in this class.
 * Consequently, primitives do not have children and their element count is zero.
 *
 * For collections and maps indices do not have a fixed bound. Regular collections descriptors usually
 * have one element (`T`, maps have two, one for keys and one for values), but potentially unlimited
 * number of actual children values. Valid indices range is not known statically,
 * and implementations of such a descriptor should provide consistent and unbounded names and indices.
 *
 * In practice, for regular classes it is allowed to invoke `getElement*(index)` methods
 * with an index from `0` to [elementsCount] range and the element at the particular index corresponds to the
 * serializable property at the given position.
 * For collections and maps, index parameter for `getElement*(index)` methods is effectively bounded
 * by the maximal number of collection/map elements.
 *
 * ### Thread-safety and mutability
 * Serial descriptor implementation should be immutable and, thus, thread-safe.
 *
 * ### Equality and caching
 * Serial descriptor can be used as a unique identifier for format-specific data or schemas and
 * this implies the following restrictions on its `equals` and `hashCode`:
 *
 * An [equals] implementation should use both [serialName] and elements structure.
 * Comparing [elementDescriptors] directly is discouraged,
 * because it may cause a stack overflow error, e.g., if a serializable class `T` contains elements of type `T`.
 * To avoid it, a serial descriptor implementation should compare only descriptors
 * of class' type parameters, in a way that `serializer<Box<Int>>().descriptor != serializer<Box<String>>().descriptor`.
 * If type parameters are equal, descriptor structure should be compared by using children elements
 * descriptors' [serialName]s, which correspond to class names
 * (do not confuse with elements' own names, which correspond to properties' names); and/or other [SerialDescriptor]
 * properties, such as [kind].
 * An example of [equals] implementation:
 * ```
 * if (this === other) return true
 * if (other::class != this::class) return false
 * if (serialName != other.serialName) return false
 * if (!typeParametersAreEqual(other)) return false
 * if (this.elementDescriptors().map { it.serialName } != other.elementDescriptors().map { it.serialName }) return false
 * return true
 * ```
 *
 * [hashCode] implementation should use the same properties for computing the result.
 *
 * ### User-defined serial descriptors
 * The best way to define a custom descriptor is to use [buildClassSerialDescriptor] builder function, where
 * for each serializable property the corresponding element is declared.
 *
 * Example:
 * ```
 * // Class with custom serializer and custom serial descriptor
 * class Data(
 *     val intField: Int, // This field is ignored by custom serializer
 *     val longField: Long, // This field is written as long, but in serialized form is named as "_longField"
 *     val stringList: List<String> // This field is written as regular list of strings
 * )
 *
 * // Descriptor for such class:
 * buildClassSerialDescriptor("my.package.Data") {
 *     // intField is deliberately ignored by serializer -- not present in the descriptor as well
 *     element<Long>("_longField") // longField is named as _longField
 *     element("stringField", listSerialDescriptor<String>())
 * }
 *
 * // Example of 'serialize' function for such descriptor
 * override fun serialize(encoder: Encoder, value: Data) {
 *     encoder.encodeStructure(descriptor) {
 *         encodeLongElement(descriptor, 0, value.longField) // Will be written as "_longField" because descriptor's child at index 0 says so
 *         encodeSerializableElement(descriptor, 1, ListSerializer(String.serializer()), value.stringList)
 *     }
 * }
 * ```
 *
 * For classes that are represented as a single primitive value, [PrimitiveSerialDescriptor] builder function can be used instead.
 *
 * ### Consistency violations
 * An implementation of [SerialDescriptor] should be consistent with the implementation of the corresponding [KSerializer].
 * Yet it is not type-checked statically, thus making it possible to declare a non-consistent implementation of descriptor and serializer.
 * In such cases, the behavior of an underlying format is unspecified and may lead to both runtime errors and encoding of
 * corrupted data that is impossible to decode back.
 *
 * ### Not for implementation
 *
 * `SerialDescriptor` interface should not be implemented in 3rd party libraries, as new methods
 * might be added to this interface when kotlinx.serialization adds support for new Kotlin features.
 * This interface is safe to use and construct via [buildClassSerialDescriptor], [PrimitiveSerialDescriptor], and `SerialDescriptor` factory function.
 *
 * @note annotations
 *   kotlin.SubclassOptInRequired(markerClass=[NormalClass(value=kotlinx/serialization/SealedSerializationApi)])
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol MobilesdkKotlinx_serialization_coreSerialDescriptor
@required

/**
 * Returns serial annotations of the child element at the given [index].
 * This method differs from `getElementDescriptor(index).annotations` by reporting only
 * element-specific annotations:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(@OnPropertySerialAnnotation val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementAnnotations(0) // Returns [@OnPropertySerialAnnotation]
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 * Only annotations marked with [SerialInfo] are added to the resulting list.
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (NSArray<id<MobilesdkKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * Retrieves the descriptor of the child element for the given [index].
 * For the property of type `T` on the position `i`, `getElementDescriptor(i)` yields the same result
 * as for `T.serializer().descriptor`, if the serializer for this property is not explicitly overridden
 * with `@Serializable(with = ...`)`, [Polymorphic] or [Contextual].
 * This method can be used to completely introspect the type that the current descriptor describes.
 *
 * Example:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementDescriptor(0).serialName // Returns "Nested"
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 *
 * @throws IndexOutOfBoundsException for illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * Returns an index in the children list of the given element by its name or [CompositeDecoder.UNKNOWN_NAME]
 * if there is no such element.
 * The resulting index, if it is not [CompositeDecoder.UNKNOWN_NAME], is guaranteed to be usable with [getElementName].
 *
 * Example:
 *
 * ```
 * @Serializable
 * class User(val name: String, val alias: String?)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.getElementIndex("name") // Returns 0
 * userDescriptor.getElementIndex("alias") // Returns 1
 * userDescriptor.getElementIndex("lastName") // Returns CompositeDecoder.UNKNOWN_NAME = -3
 * ```
 */
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * Returns a positional name of the child at the given [index].
 * Positional name represents a corresponding property name in the class, associated with
 * the current descriptor.
 *
 * Do not confuse with [serialName], which returns class name:
 *
 * ```
 * package my.app
 *
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.serialName // Returns "my.app.User"
 * userDescriptor.getElementName(0) // Returns "name"
 * ```
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive)
 */
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * Whether the element at the given [index] is optional (can be absent in serialized form).
 * For generated descriptors, all elements that have a corresponding default parameter value are
 * marked as optional. Custom serializers can treat optional values in a serialization-specific manner
 * without a default parameters constraint.
 *
 * Example of optionality:
 * ```
 * @Serializable
 * class Holder(
 *     val a: Int, // isElementOptional(0) == false
 *     val b: Int?, // isElementOptional(1) == false
 *     val c: Int? = null, // isElementOptional(2) == true
 *     val d: List<Int>, // isElementOptional(3) == false
 *     val e: List<Int> = listOf(1), // isElementOptional(4) == true
 * )
 * ```
 * Returns `false` for valid indices of collections, maps, and enums.
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * Returns serial annotations of the associated class.
 * Serial annotations can be used to specify additional metadata that may be used during serialization.
 * Only annotations marked with [SerialInfo] are added to the resulting list.
 *
 * Do not confuse with [getElementAnnotations]:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(@OnPropertySerialAnnotation val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementAnnotations(0) // Returns [@OnPropertySerialAnnotation]
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 */
@property (readonly) NSArray<id<MobilesdkKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * The number of elements this descriptor describes, besides from the class itself.
 * [elementsCount] describes the number of **semantic** elements, not the number
 * of actual fields/properties in the serialized form, even though they frequently match.
 *
 * For example, for the following class
 * `class Complex(val real: Long, val imaginary: Long)` the corresponding descriptor
 * and the serialized form both have two elements, while for `List<Int>`
 * the corresponding descriptor has a single element (`IntDescriptor`, the type of list element),
 * but from zero up to `Int.MAX_VALUE` values in the serialized form:
 *
 * ```
 * @Serializable
 * class Complex(val real: Long, val imaginary: Long)
 *
 * Complex.serializer().descriptor.elementsCount // Returns 2
 *
 * @Serializable
 * class OuterList(val list: List<Int>)
 *
 * OuterList.serializer().descriptor.getElementDescriptor(0).elementsCount // Returns 1
 * ```
 */
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));

/**
 * Returns `true` if this descriptor describes a serializable value class which underlying value
 * is serialized directly.
 *
 * This property is true for serializable `@JvmInline value` classes:
 * ```
 * @Serializable
 * class User(val name: Name)
 *
 * @Serializable
 * @JvmInline
 * value class Name(val value: String)
 *
 * User.serializer().descriptor.isInline // false
 * User.serializer().descriptor.getElementDescriptor(0).isInline // true
 * Name.serializer().descriptor.isInline // true
 * ```
 */
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * Whether the descriptor describes a nullable type.
 * Returns `true` if associated serializer can serialize/deserialize nullable elements of the described type.
 *
 * Example:
 *
 * ```
 * @Serializable
 * class User(val name: String, val alias: String?)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.isNullable // Returns false
 * userDescriptor.getElementDescriptor(0).isNullable // Returns false
 * userDescriptor.getElementDescriptor(1).isNullable // Returns true
 * ```
 */
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * The kind of the serialized form that determines **the shape** of the serialized data.
 * Formats use serial kind to add and parse serializer-agnostic metadata to the result.
 *
 * For example, JSON format wraps [classes][StructureKind.CLASS] and [StructureKind.MAP] into
 * brackets, while ProtoBuf just serialize these types in separate ways.
 *
 * Kind should be consistent with the implementation, for example, if it is a [primitive][PrimitiveKind],
 * then its element count should be zero and vice versa.
 *
 * Example of introspecting kinds:
 *
 * ```
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.kind // Returns StructureKind.CLASS
 * userDescriptor.getElementDescriptor(0).kind // Returns PrimitiveKind.STRING
 * ```
 */
@property (readonly) MobilesdkKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * Serial name of the descriptor that identifies a pair of the associated serializer and target class.
 *
 * For generated and default serializers, the serial name is equal to the corresponding class's fully qualified name
 * or, if overridden, [SerialName].
 * Custom serializers should provide a unique serial name that identifies both the serializable class and
 * the serializer itself, ignoring type arguments if they are present, for example: `my.package.LongAsTrimmedString`.
 *
 * Do not confuse with [getElementName], which returns property name:
 *
 * ```
 * package my.app
 *
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.serialName // Returns "my.app.User"
 * userDescriptor.getElementName(0) // Returns "name"
 * ```
 */
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end


/**
 * Decoder is a core deserialization primitive that encapsulates the knowledge of the underlying
 * format and an underlying storage, exposing only structural methods to the deserializer, making it completely
 * format-agnostic. Deserialization process takes a decoder and asks him for a sequence of primitive elements,
 * defined by a deserializer serial form, while decoder knows how to retrieve these primitive elements from an actual format
 * representations.
 *
 * Decoder provides high-level API that operates with basic primitive types, collections
 * and nested structures. Internally, the decoder represents input storage, and operates with its state
 * and lower level format-specific details.
 *
 * To be more specific, serialization asks a decoder for a sequence of "give me an int, give me
 * a double, give me a list of strings and give me another object that is a nested int", while decoding
 * transforms this sequence into a format-specific commands such as "parse the part of the string until the next quotation mark
 * as an int to retrieve an int, parse everything within the next curly braces to retrieve elements of a nested object etc."
 *
 * The symmetric interface for the serialization process is [Encoder].
 *
 * ### Deserialization. Primitives
 *
 * If a class is represented as a single [primitive][PrimitiveKind] value in its serialized form,
 * then one of the `decode*` methods (e.g. [decodeInt]) can be used directly.
 *
 * ### Deserialization. Structured types
 *
 * If a class is represented as a structure or has multiple values in its serialized form,
 * `decode*` methods are not that helpful, because format may not require a strict order of data
 * (e.g. JSON or XML), do not allow working with collection types or establish structure boundaries.
 * All these capabilities are delegated to the [CompositeDecoder] interface with a more specific API surface.
 * To denote a structure start, [beginStructure] should be used.
 * ```
 * // Denote the structure start,
 * val composite = decoder.beginStructure(descriptor)
 * // Decode all elements within the structure using 'composite'
 * ...
 * // Denote the structure end
 * composite.endStructure(descriptor)
 * ```
 *
 * E.g. if the decoder belongs to JSON format, then [beginStructure] will parse an opening bracket
 * (`{` or `[`, depending on the descriptor kind), returning the [CompositeDecoder] that is aware of colon separator,
 * that should be read after each key-value pair, whilst [CompositeDecoder.endStructure] will parse a closing bracket.
 *
 * ### Exception guarantees
 *
 * For the regular exceptions, such as invalid input, missing control symbols or attributes, and unknown symbols,
 * [SerializationException] can be thrown by any decoder methods. It is recommended to declare a format-specific
 * subclass of [SerializationException] and throw it.
 *
 * ### Exception safety
 *
 * In general, catching [SerializationException] from any of `decode*` methods is not allowed and produces unspecified behavior.
 * After thrown exception, the current decoder is left in an arbitrary state, no longer suitable for further decoding.
 *
 * ### Format encapsulation
 *
 * For example, for the following deserializer:
 * ```
 * class StringHolder(val stringValue: String)
 *
 * object StringPairDeserializer : DeserializationStrategy<StringHolder> {
 *    override val descriptor = ...
 *
 *    override fun deserializer(decoder: Decoder): StringHolder {
 *        // Denotes start of the structure, StringHolder is not a "plain" data type
 *        val composite = decoder.beginStructure(descriptor)
 *        if (composite.decodeElementIndex(descriptor) != 0)
 *            throw MissingFieldException("Field 'stringValue' is missing")
 *        // Decode the nested string value
 *        val value = composite.decodeStringElement(descriptor, index = 0)
 *        // Denotes end of the structure
 *        composite.endStructure(descriptor)
 *    }
 * }
 * ```
 *
 * This deserializer does not know anything about the underlying data and will work with any properly-implemented decoder.
 * JSON, for example, parses an opening bracket `{` during the `beginStructure` call, checks that the next key
 * after this bracket is `stringValue` (using the descriptor), returns the value after the colon as string value
 * and parses closing bracket `}` during the `endStructure`.
 * XML would do roughly the same, but with different separators and parsing structures, while ProtoBuf
 * machinery could be completely different.
 * In any case, all these parsing details are encapsulated by a decoder.
 *
 * ### Decoder implementation
 *
 * While being strictly typed, an underlying format can transform actual types in the way it wants.
 * For example, a format can support only string types and encode/decode all primitives in a string form:
 * ```
 * StringFormatDecoder : Decoder {
 *
 *     ...
 *     override fun decodeDouble(): Double = decodeString().toDouble()
 *     override fun decodeInt(): Int = decodeString().toInt()
 *     ...
 * }
 * ```
 *
 * ### Not stable for inheritance
 *
 * `Decoder` interface is not stable for inheritance in 3rd-party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol MobilesdkKotlinx_serialization_coreDecoder
@required

/**
 * Decodes the beginning of the nested structure in a serialized form
 * and returns [CompositeDecoder] responsible for decoding this very structure.
 *
 * Typically, classes, collections and maps are represented as a nested structure in a serialized form.
 * E.g. the following JSON
 * ```
 * {
 *     "a": 2,
 *     "b": { "nested": "c" }
 *     "c": [1, 2, 3],
 *     "d": null
 * }
 * ```
 * has three nested structures: the very beginning of the data, "b" value and "c" value.
 */
- (id<MobilesdkKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));

/**
 * Decodes a boolean value.
 * Corresponding kind is [PrimitiveKind.BOOLEAN].
 */
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));

/**
 * Decodes a single byte value.
 * Corresponding kind is [PrimitiveKind.BYTE].
 */
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));

/**
 * Decodes a 16-bit unicode character value.
 * Corresponding kind is [PrimitiveKind.CHAR].
 */
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));

/**
 * Decodes a 64-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.DOUBLE].
 */
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));

/**
 * Decodes a enum value and returns its index in [enumDescriptor] elements collection.
 * Corresponding kind is [SerialKind.ENUM].
 *
 * E.g. for the enum `enum class Letters { A, B, C, D }` and
 * underlying input "C", [decodeEnum] method should return `2` as a result.
 *
 * This method does not imply any restrictions on the input format,
 * the format is free to store the enum by its name, index, ordinal or any other enum representation.
 */
- (int32_t)decodeEnumEnumDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));

/**
 * Decodes a 32-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.FLOAT].
 */
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));

/**
 * Returns [Decoder] for decoding an underlying type of a value class in an inline manner.
 * [descriptor] describes a target value class.
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`, the following sequence is used:
 * ```
 * thisDecoder.decodeInline(MyInt.serializer().descriptor).decodeInt()
 * ```
 *
 * Current decoder may return any other instance of [Decoder] class, depending on the provided [descriptor].
 * For example, when this function is called on `Json` decoder with
 * `UInt.serializer().descriptor`, the returned decoder is able to decode unsigned integers.
 *
 * Note that this function returns [Decoder] instead of the [CompositeDecoder]
 * because value classes always have the single property.
 *
 * Calling [Decoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 */
- (id<MobilesdkKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));

/**
 * Decodes a 32-bit integer value.
 * Corresponding kind is [PrimitiveKind.INT].
 */
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));

/**
 * Decodes a 64-bit integer value.
 * Corresponding kind is [PrimitiveKind.LONG].
 */
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * Returns `true` if the current value in decoder is not null, false otherwise.
 * This method is usually used to decode potentially nullable data:
 * ```
 * // Could be String? deserialize() method
 * public fun deserialize(decoder: Decoder): String? {
 *     if (decoder.decodeNotNullMark()) {
 *         return decoder.decodeString()
 *     } else {
 *         return decoder.decodeNull()
 *     }
 * }
 * ```
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * Decodes the `null` value and returns it.
 *
 * It is expected that `decodeNotNullMark` was called
 * prior to `decodeNull` invocation and the case when it returned `true` was handled.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (MobilesdkKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * Decodes the nullable value of type [T] by delegating the decoding process to the given [deserializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<MobilesdkKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));

/**
 * Decodes the value of type [T] by delegating the decoding process to the given [deserializer].
 * For example, `decodeInt` call is equivalent to delegating integer decoding to [Int.serializer][Int.Companion.serializer]:
 * `decodeSerializableValue(Int.serializer())`
 */
- (id _Nullable)decodeSerializableValueDeserializer:(id<MobilesdkKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));

/**
 * Decodes a 16-bit short value.
 * Corresponding kind is [PrimitiveKind.SHORT].
 */
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));

/**
 * Decodes a string value.
 * Corresponding kind is [PrimitiveKind.STRING].
 */
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) MobilesdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * [FlowCollector] is used as an intermediate or a terminal collector of the flow and represents
 * an entity that accepts values emitted by the [Flow].
 *
 * This interface should usually not be implemented directly, but rather used as a receiver in a [flow] builder when implementing a custom operator,
 * or with SAM-conversion.
 * Implementations of this interface are not thread-safe.
 *
 * Example of usage:
 *
 * ```
 * val flow = getMyEvents()
 * try {
 *     flow.collect { value ->
 *         println("Received $value")
 *     }
 *     println("My events are consumed successfully")
 * } catch (e: Throwable) {
 *     println("Exception from the flow: $e")
 * }
 * ```
 */
__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol MobilesdkKotlinx_coroutines_coreFlowCollector
@required

/**
 * Collects the value emitted by the upstream.
 * This method is not thread-safe and should not be invoked concurrently.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textFontWeight.Companion")))
@interface MobilesdkUi_textFontWeightCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkUi_textFontWeightCompanion *shared __attribute__((swift_name("shared")));

/** Alias for [W900]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *Black __attribute__((swift_name("Black")));

/** A commonly used font weight that is heavier than normal - alias for [W700]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *Bold __attribute__((swift_name("Bold")));

/** Alias for [W800]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *ExtraBold __attribute__((swift_name("ExtraBold")));

/** Alias for [W200]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *ExtraLight __attribute__((swift_name("ExtraLight")));

/** Alias for [W300]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *Light __attribute__((swift_name("Light")));

/** Alias for [W500]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *Medium __attribute__((swift_name("Medium")));

/** The default font weight - alias for [W400]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *Normal __attribute__((swift_name("Normal")));

/** Alias for [W600]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *SemiBold __attribute__((swift_name("SemiBold")));

/** Alias for [W100]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *Thin __attribute__((swift_name("Thin")));

/** [Thin]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *W100 __attribute__((swift_name("W100")));

/** [ExtraLight]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *W200 __attribute__((swift_name("W200")));

/** [Light]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *W300 __attribute__((swift_name("W300")));

/** [Normal] / regular / plain
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *W400 __attribute__((swift_name("W400")));

/** [Medium]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *W500 __attribute__((swift_name("W500")));

/** [SemiBold]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *W600 __attribute__((swift_name("W600")));

/** [Bold]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *W700 __attribute__((swift_name("W700")));

/** [ExtraBold]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *W800 __attribute__((swift_name("W800")));

/** [Black]
 *
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *W900 __attribute__((swift_name("W900")));
@end


/**
 * [CompositeEncoder] is a part of encoding process that is bound to a particular structured part of
 * the serialized form, described by the serial descriptor passed to [Encoder.beginStructure].
 *
 * All `encode*` methods have `index` and `serialDescriptor` parameters with a strict semantics and constraints:
 *   * `descriptor` is always the same as one used in [Encoder.beginStructure]. While this parameter may seem redundant,
 *      it is required for efficient serialization process to avoid excessive field spilling.
 *      If you are writing your own format, you can safely ignore this parameter and use one used in `beginStructure`
 *      for simplicity.
 *   * `index` of the element being encoded. This element at this index in the descriptor should be associated with
 *      the one being written.
 *
 * The symmetric interface for the deserialization process is [CompositeDecoder].
 *
 * ### Not stable for inheritance
 *
 * `CompositeEncoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol MobilesdkKotlinx_serialization_coreCompositeEncoder
@required

/**
 * Encodes a boolean [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.BOOLEAN] kind.
 */
- (void)encodeBooleanElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));

/**
 * Encodes a single byte [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.BYTE] kind.
 */
- (void)encodeByteElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));

/**
 * Encodes a 16-bit unicode character [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.CHAR] kind.
 */
- (void)encodeCharElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));

/**
 * Encodes a 64-bit IEEE 754 floating point [value] associated with an element
 * at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.DOUBLE] kind.
 */
- (void)encodeDoubleElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));

/**
 * Encodes a 32-bit IEEE 754 floating point [value] associated with an element
 * at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.FLOAT] kind.
 */
- (void)encodeFloatElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));

/**
 * Returns [Encoder] for decoding an underlying type of a value class in an inline manner.
 * Serializable value class is described by the [child descriptor][SerialDescriptor.getElementDescriptor]
 * of given [descriptor] at [index].
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * and `@Serializable class MyData(val myInt: MyInt)` the following sequence is used:
 * ```
 * thisEncoder.encodeInlineElement(MyData.serializer.descriptor, 0).encodeInt(my)
 * ```
 *
 * This method provides an opportunity for the optimization to avoid boxing of a carried value
 * and its invocation should be equivalent to the following:
 * ```
 * thisEncoder.encodeSerializableElement(MyData.serializer.descriptor, 0, MyInt.serializer(), myInt)
 * ```
 *
 * Current encoder may return any other instance of [Encoder] class, depending on provided descriptor.
 * For example, when this function is called on Json encoder with descriptor that has
 * `UInt.serializer().descriptor` at the given [index], the returned encoder is able
 * to encode unsigned integers.
 *
 * Note that this function returns [Encoder] instead of the [CompositeEncoder]
 * because value classes always have the single property.
 * Calling [Encoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 *
 * @see Encoder.encodeInline
 * @see SerialDescriptor.getElementDescriptor
 */
- (id<MobilesdkKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));

/**
 * Encodes a 32-bit integer [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.INT] kind.
 */
- (void)encodeIntElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));

/**
 * Encodes a 64-bit integer [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.LONG] kind.
 */
- (void)encodeLongElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * Delegates nullable [value] encoding of the type [T] to the given [serializer].
 * [value] is associated with an element at the given [index] in [serial descriptor][descriptor].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MobilesdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));

/**
 * Delegates [value] encoding of the type [T] to the given [serializer].
 * [value] is associated with an element at the given [index] in [serial descriptor][descriptor].
 */
- (void)encodeSerializableElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MobilesdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));

/**
 * Encodes a 16-bit short [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.SHORT] kind.
 */
- (void)encodeShortElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));

/**
 * Encodes a string [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.STRING] kind.
 */
- (void)encodeStringElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));

/**
 * Denotes the end of the structure associated with current encoder.
 * For example, composite encoder of JSON format will write
 * a closing bracket in the underlying input and reduce the number of nesting for pretty printing.
 */
- (void)endStructureDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * Whether the format should encode values that are equal to the default values.
 * This method is used by plugin-generated serializers for properties with default values:
 * ```
 * @Serializable
 * class WithDefault(val int: Int = 42)
 * // serialize method
 * if (value.int != 42 || output.shouldEncodeElementDefault(serialDesc, 0)) {
 *    encoder.encodeIntElement(serialDesc, 0, value.int);
 * }
 * ```
 *
 * This method is never invoked for properties annotated with [EncodeDefault].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) MobilesdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * [SerializersModule] is a collection of serializers used by [ContextualSerializer] and [PolymorphicSerializer]
 * to override or provide serializers at the runtime, whereas at the compile-time they provided by the serialization plugin.
 * It can be considered as a map where serializers can be found using their statically known KClasses.
 *
 * To enable runtime serializers resolution, one of the special annotations must be used on target types
 * ([Polymorphic] or [Contextual]), and a serial module with serializers should be used during construction of [SerialFormat].
 *
 * Serializers module can be built with `SerializersModule {}` builder function.
 * Empty module can be obtained with `EmptySerializersModule()` factory function.
 *
 * @see Contextual
 * @see Polymorphic
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface MobilesdkKotlinx_serialization_coreSerializersModule : MobilesdkBase

/**
 * Copies contents of this module to the given [collector].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<MobilesdkKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * Returns a contextual serializer associated with a given [kClass].
 * If given class has generic parameters and module has provider for [kClass],
 * [typeArgumentsSerializers] are used to create serializer.
 * This method is used in context-sensitive operations on a property marked with [Contextual] by a [ContextualSerializer].
 *
 * @see SerializersModuleBuilder.contextual
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MobilesdkKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<MobilesdkKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MobilesdkKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * Returns a polymorphic serializer registered for a class of the given [value] in the scope of [baseClass].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MobilesdkKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MobilesdkKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * Returns a polymorphic deserializer registered for a [serializedClassName] in the scope of [baseClass]
 * or default value constructed from [serializedClassName] if a default serializer provider was registered.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MobilesdkKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MobilesdkKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol MobilesdkKotlinAnnotation
@required
@end


/**
 * Serial kind is an intrinsic property of [SerialDescriptor] that indicates how
 * the corresponding type is structurally represented by its serializer.
 *
 * Kind is used by serialization formats to determine how exactly the given type
 * should be serialized. For example, JSON format detects the kind of the value and,
 * depending on that, may write it as a plain value for primitive kinds, open a
 * curly brace '{' for class-like structures and square bracket '[' for list- and array- like structures.
 *
 * Kinds are used both during serialization, to serialize a value properly and statically, and
 * to introspect the type structure or build serialization schema.
 *
 * Kind should match the structure of the serialized form, not the structure of the corresponding Kotlin class.
 * Meaning that if serializable class `class IntPair(val left: Int, val right: Int)` is represented by the serializer
 * as a single `Long` value, its descriptor should have [PrimitiveKind.LONG] without nested elements even though the class itself
 * represents a structure with two primitive fields.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface MobilesdkKotlinx_serialization_coreSerialKind : MobilesdkBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * [CompositeDecoder] is a part of decoding process that is bound to a particular structured part of
 * the serialized form, described by the serial descriptor passed to [Decoder.beginStructure].
 *
 * Typically, for unordered data, [CompositeDecoder] is used by a serializer withing a [decodeElementIndex]-based
 * loop that decodes all the required data one-by-one in any order and then terminates by calling [endStructure].
 * Please refer to [decodeElementIndex] for example of such loop.
 *
 * All `decode*` methods have `index` and `serialDescriptor` parameters with a strict semantics and constraints:
 *   * `descriptor` argument is always the same as one used in [Decoder.beginStructure].
 *   * `index` of the element being decoded. For [sequential][decodeSequentially] decoding, it is always a monotonic
 *      sequence from `0` to `descriptor.elementsCount` and for indexing-loop it is always an index that [decodeElementIndex]
 *      has returned from the last call.
 *
 * The symmetric interface for the serialization process is [CompositeEncoder].
 *
 * ### Not stable for inheritance
 *
 * `CompositeDecoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol MobilesdkKotlinx_serialization_coreCompositeDecoder
@required

/**
 * Decodes a boolean value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.BOOLEAN] kind.
 */
- (BOOL)decodeBooleanElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));

/**
 * Decodes a single byte value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.BYTE] kind.
 */
- (int8_t)decodeByteElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));

/**
 * Decodes a 16-bit unicode character value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.CHAR] kind.
 */
- (unichar)decodeCharElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));

/**
 * Method to decode collection size that may be called before the collection decoding.
 * Collection type includes [Collection], [Map] and [Array] (including primitive arrays).
 * Method can return `-1` if the size is not known in advance, though for [sequential decoding][decodeSequentially]
 * knowing precise size is a mandatory requirement.
 */
- (int32_t)decodeCollectionSizeDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));

/**
 * Decodes a 64-bit IEEE 754 floating point value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.DOUBLE] kind.
 */
- (double)decodeDoubleElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));

/**
 *  Decodes the index of the next element to be decoded.
 *  Index represents a position of the current element in the serial descriptor element that can be found
 *  with [SerialDescriptor.getElementIndex].
 *
 *  If this method returns non-negative index, the caller should call one of the `decode*Element` methods
 *  with a resulting index.
 *  Apart from positive values, this method can return [DECODE_DONE] to indicate that no more elements
 *  are left or [UNKNOWN_NAME] to indicate that symbol with an unknown name was encountered.
 *
 * Example of usage:
 * ```
 * class MyPair(i: Int, d: Double)
 *
 * object MyPairSerializer : KSerializer<MyPair> {
 *     // ... other methods omitted
 *
 *    fun deserialize(decoder: Decoder): MyPair {
 *        val composite = decoder.beginStructure(descriptor)
 *        var i: Int? = null
 *        var d: Double? = null
 *        while (true) {
 *            when (val index = composite.decodeElementIndex(descriptor)) {
 *                0 -> i = composite.decodeIntElement(descriptor, 0)
 *                1 -> d = composite.decodeDoubleElement(descriptor, 1)
 *                DECODE_DONE -> break // Input is over
 *                else -> error("Unexpected index: $index)
 *            }
 *        }
 *        composite.endStructure(descriptor)
 *        require(i != null && d != null)
 *        return MyPair(i, d)
 *    }
 * }
 * ```
 * This example is a rough equivalent of what serialization plugin generates for serializable pair class.
 *
 * The need in such a loop comes from unstructured nature of most serialization formats.
 * For example, JSON for the following input `{"d": 2.0, "i": 1}`, will first read `d` key with index `1`
 * and only after `i` with the index `0`.
 *
 * A potential implementation of this method for JSON format can be the following:
 * ```
 * fun decodeElementIndex(descriptor: SerialDescriptor): Int {
 *     // Ignore arrays
 *     val nextKey: String? = myStringJsonParser.nextKey()
 *     if (nextKey == null) return DECODE_DONE
 *     return descriptor.getElementIndex(nextKey) // getElementIndex can return UNKNOWN_NAME
 * }
 * ```
 *
 * If [decodeSequentially] returns `true`, the caller might skip calling this method.
 */
- (int32_t)decodeElementIndexDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));

/**
 * Decodes a 32-bit IEEE 754 floating point value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.FLOAT] kind.
 */
- (float)decodeFloatElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));

/**
 * Returns [Decoder] for decoding an underlying type of a value class in an inline manner.
 * Serializable value class is described by the [child descriptor][SerialDescriptor.getElementDescriptor]
 * of given [descriptor] at [index].
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * and `@Serializable class MyData(val myInt: MyInt)` the following sequence is used:
 * ```
 * thisDecoder.decodeInlineElement(MyData.serializer().descriptor, 0).decodeInt()
 * ```
 *
 * This method provides an opportunity for the optimization to avoid boxing of a carried value
 * and its invocation should be equivalent to the following:
 * ```
 * thisDecoder.decodeSerializableElement(MyData.serializer.descriptor, 0, MyInt.serializer())
 * ```
 *
 * Current decoder may return any other instance of [Decoder] class, depending on the provided descriptor.
 * For example, when this function is called on `Json` decoder with descriptor that has
 * `UInt.serializer().descriptor` at the given [index], the returned decoder is able
 * to decode unsigned integers.
 *
 * Note that this function returns [Decoder] instead of the [CompositeDecoder]
 * because value classes always have the single property.
 * Calling [Decoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 *
 * @see Decoder.decodeInline
 * @see SerialDescriptor.getElementDescriptor
 */
- (id<MobilesdkKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));

/**
 * Decodes a 32-bit integer value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.INT] kind.
 */
- (int32_t)decodeIntElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));

/**
 * Decodes a 64-bit integer value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.LONG] kind.
 */
- (int64_t)decodeLongElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * Decodes nullable value of the type [T] with the given [deserializer].
 *
 * If value at given [index] was already decoded with previous [decodeSerializableElement] call with the same index,
 * [previousValue] would contain a previously decoded value.
 * This parameter can be used to aggregate multiple values of the given property to the only one.
 * Implementation can safely ignore it and return a new value, efficiently using 'the last one wins' strategy,
 * or apply format-specific aggregating strategies, e.g. appending scattered Protobuf lists to a single one.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MobilesdkKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * Checks whether the current decoder supports strictly ordered decoding of the data
 * without calling to [decodeElementIndex].
 * If the method returns `true`, the caller might skip [decodeElementIndex] calls
 * and start invoking `decode*Element` directly, incrementing the index of the element one by one.
 * This method can be called by serializers (either generated or user-defined) as a performance optimization,
 * but there is no guarantee that the method will be ever called. Practically, it means that implementations
 * that may benefit from sequential decoding should also support a regular [decodeElementIndex]-based decoding as well.
 *
 * Example of usage:
 * ```
 * class MyPair(i: Int, d: Double)
 *
 * object MyPairSerializer : KSerializer<MyPair> {
 *     // ... other methods omitted
 *
 *    fun deserialize(decoder: Decoder): MyPair {
 *        val composite = decoder.beginStructure(descriptor)
 *        if (composite.decodeSequentially()) {
 *            val i = composite.decodeIntElement(descriptor, index = 0) // Mind the sequential indexing
 *            val d = composite.decodeIntElement(descriptor, index = 1)
 *            composite.endStructure(descriptor)
 *            return MyPair(i, d)
 *        } else {
 *            // Fallback to `decodeElementIndex` loop, refer to its documentation for details
 *        }
 *    }
 * }
 * ```
 * This example is a rough equivalent of what serialization plugin generates for serializable pair class.
 *
 * Sequential decoding is a performance optimization for formats with strictly ordered schema,
 * usually binary ones. Regular formats such as JSON or ProtoBuf cannot use this optimization,
 * because e.g. in the latter example, the same data can be represented both as
 * `{"i": 1, "d": 1.0}` and `{"d": 1.0, "i": 1}` (thus, unordered).
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));

/**
 * Decodes value of the type [T] with the given [deserializer].
 *
 * Implementations of [CompositeDecoder] may use their format-specific deserializers
 * for particular data types, e.g. handle [ByteArray] specifically if format is binary.
 *
 * If value at given [index] was already decoded with previous [decodeSerializableElement] call with the same index,
 * [previousValue] would contain a previously decoded value.
 * This parameter can be used to aggregate multiple values of the given property to the only one.
 * Implementation can safely ignore it and return a new value, effectively using 'the last one wins' strategy,
 * or apply format-specific aggregating strategies, e.g. appending scattered Protobuf lists to a single one.
 */
- (id _Nullable)decodeSerializableElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MobilesdkKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * Decodes a 16-bit short value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.SHORT] kind.
 */
- (int16_t)decodeShortElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));

/**
 * Decodes a string value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.STRING] kind.
 */
- (NSString *)decodeStringElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));

/**
 * Denotes the end of the structure associated with current decoder.
 * For example, composite decoder of JSON format will expect (and parse)
 * a closing bracket in the underlying input.
 */
- (void)endStructureDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * Context of the current decoding process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) MobilesdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MobilesdkKotlinNothing : MobilesdkBase
@end


/**
 * [SerializersModuleCollector] can introspect and accumulate content of any [SerializersModule] via [SerializersModule.dumpTo],
 * using a visitor-like pattern: [contextual] and [polymorphic] functions are invoked for each registered serializer.
 *
 * ### Not stable for inheritance
 *
 * `SerializersModuleCollector` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol MobilesdkKotlinx_serialization_coreSerializersModuleCollector
@required

/**
 * Accept a provider, associated with generic [kClass] for contextual serialization.
 */
- (void)contextualKClass:(id<MobilesdkKotlinKClass>)kClass provider:(id<MobilesdkKotlinx_serialization_coreKSerializer> (^)(NSArray<id<MobilesdkKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));

/**
 * Accept a serializer, associated with [kClass] for contextual serialization.
 */
- (void)contextualKClass:(id<MobilesdkKotlinKClass>)kClass serializer:(id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));

/**
 * Accept a serializer, associated with [actualClass] for polymorphic serialization.
 */
- (void)polymorphicBaseClass:(id<MobilesdkKotlinKClass>)baseClass actualClass:(id<MobilesdkKotlinKClass>)actualClass actualSerializer:(id<MobilesdkKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));

/**
 * Accept a default deserializer provider, associated with the [baseClass] for polymorphic deserialization.
 *
 * This function affect only deserialization process. To avoid confusion, it was deprecated and replaced with [polymorphicDefaultDeserializer].
 * To affect serialization process, use [SerializersModuleCollector.polymorphicDefaultSerializer].
 *
 * [defaultDeserializerProvider] is invoked when no polymorphic serializers associated with the `className`
 * in the scope of [baseClass] were found. `className` could be `null` for formats that support nullable class discriminators
 * (currently only `Json` with `useArrayPolymorphism` set to `false`).
 *
 * [defaultDeserializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 *
 * @see SerializersModuleCollector.polymorphicDefaultDeserializer
 * @see SerializersModuleCollector.polymorphicDefaultSerializer
 */
- (void)polymorphicDefaultBaseClass:(id<MobilesdkKotlinKClass>)baseClass defaultDeserializerProvider:(id<MobilesdkKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));

/**
 * Accept a default deserializer provider, associated with the [baseClass] for polymorphic deserialization.
 * [defaultDeserializerProvider] is invoked when no polymorphic serializers associated with the `className`
 * in the scope of [baseClass] were found. `className` could be `null` for formats that support nullable class discriminators
 * (currently only `Json` with `useArrayPolymorphism` set to `false`).
 *
 * Default deserializers provider affects only deserialization process. Serializers are accepted in the
 * [SerializersModuleCollector.polymorphicDefaultSerializer] method.
 *
 * [defaultDeserializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 */
- (void)polymorphicDefaultDeserializerBaseClass:(id<MobilesdkKotlinKClass>)baseClass defaultDeserializerProvider:(id<MobilesdkKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));

/**
 * Accept a default serializer provider, associated with the [baseClass] for polymorphic serialization.
 * [defaultSerializerProvider] is invoked when no polymorphic serializers for `value` in the scope of [baseClass] were found.
 *
 * Default serializers provider affects only serialization process. Deserializers are accepted in the
 * [SerializersModuleCollector.polymorphicDefaultDeserializer] method.
 *
 * [defaultSerializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 */
- (void)polymorphicDefaultSerializerBaseClass:(id<MobilesdkKotlinKClass>)baseClass defaultSerializerProvider:(id<MobilesdkKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol MobilesdkKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol MobilesdkKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol MobilesdkKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol MobilesdkKotlinKClass <MobilesdkKotlinKDeclarationContainer, MobilesdkKotlinKAnnotatedElement, MobilesdkKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
