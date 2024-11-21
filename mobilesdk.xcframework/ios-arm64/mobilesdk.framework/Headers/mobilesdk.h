#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MobilesdkEnvironment, UIViewController, MobilesdkTransactionType, MobilesdkTransactionDetails, MobilesdkCustomerDetails, MobilesdkFinancialDetails, MobilesdkPaymentConfigCompanion, MobilesdkBillingAddress, MobilesdkPaymentConfig, MobilesdkAcceptPaymentMethods, MobilesdkStatus, MobilesdkCardError, MobilesdkKotlinArray<T>, MobilesdkPaymentProcessorInternal, MobilesdkPaymentProcessorCompanion, MobilesdkPaymentResultCallbackCompanion, MobilesdkStatusCompanion, MobilesdkStatusCanceled, MobilesdkStatusErrorCompanion, MobilesdkStatusInitiated, MobilesdkStatusSessionExpired, MobilesdkStatusSuccess, MobilesdkStatusUnknown, MobilesdkBillingAddressCompanion, MobilesdkContinuousAuthorityAgreementCompanion, MobilesdkCustomerDetailsCompanion, MobilesdkKotlinEnumCompanion, MobilesdkKotlinEnum<E>, MobilesdkEnvironmentCompanion, MobilesdkFinancialDetailsCompanion, MobilesdkContinuousAuthorityAgreement, MobilesdkTransactionDetailsCompanion, MobilesdkTransactionTypeCompanion, MobilesdkCustomerDetailsResponseCompanion, MobilesdkAcceptPaymentMethodsCompanion, MobilesdkBillingAddressController, MobilesdkBillingAddressState, MobilesdkComponentFontWeight, MobilesdkCardInputController, MobilesdkCardInputStyleState, MobilesdkCardInputSlimController, MobilesdkCardInputSlimStyleState, MobilesdkLabelLocation, MobilesdkUi_textFontWeight, MobilesdkSaveCardBoxController, MobilesdkSaveCardState, MobilesdkSavedCardsController, MobilesdkSavedCardsState, MobilesdkAuthenticationHelper, MobilesdkKotlinThrowable, MobilesdkKotlinException, MobilesdkKotlinRuntimeException, MobilesdkUi_textFontWeightCompanion, MobilesdkKotlinIllegalStateException, MobilesdkKotlinx_serialization_coreSerializersModule, MobilesdkKotlinx_serialization_coreSerialKind, MobilesdkKotlinNothing;

@protocol MobilesdkParcelizeParcelable, MobilesdkPaymentResultCallback, MobilesdkCardCallback, MobilesdkKotlinx_serialization_coreKSerializer, MobilesdkKotlinComparable, MobilesdkKotlinIterator, MobilesdkKotlinx_serialization_coreEncoder, MobilesdkKotlinx_serialization_coreSerialDescriptor, MobilesdkKotlinx_serialization_coreSerializationStrategy, MobilesdkKotlinx_serialization_coreDecoder, MobilesdkKotlinx_serialization_coreDeserializationStrategy, MobilesdkKotlinx_serialization_coreCompositeEncoder, MobilesdkKotlinAnnotation, MobilesdkKotlinx_serialization_coreCompositeDecoder, MobilesdkKotlinx_serialization_coreSerializersModuleCollector, MobilesdkKotlinKClass, MobilesdkKotlinKDeclarationContainer, MobilesdkKotlinKAnnotatedElement, MobilesdkKotlinKClassifier;

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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardManagementPage")))
@interface MobilesdkCardManagementPage : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)display __attribute__((swift_name("display()")));
- (void)setCredentialsUsername:(NSString *)username password:(NSString *)password installationId:(NSString *)installationId environment:(MobilesdkEnvironment *)environment __attribute__((swift_name("setCredentials(username:password:installationId:environment:)")));
- (void)setCustomerReferenceCustomerReference:(NSString *)customerReference __attribute__((swift_name("setCustomerReference(customerReference:)")));
@property (readonly) UIViewController *uiController __attribute__((swift_name("uiController")));
@end

__attribute__((swift_name("ParcelizeParcelable")))
@protocol MobilesdkParcelizeParcelable
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentConfig")))
@interface MobilesdkPaymentConfig : MobilesdkBase <MobilesdkParcelizeParcelable>
- (instancetype)initWithInstallationId:(NSString *)installationId clientToken:(NSString *)clientToken environment:(MobilesdkEnvironment *)environment transactionType:(MobilesdkTransactionType *)transactionType countryCode:(NSString * _Nullable)countryCode currencyCode:(NSString *)currencyCode transaction:(MobilesdkTransactionDetails *)transaction customer:(MobilesdkCustomerDetails * _Nullable)customer financialServices:(MobilesdkFinancialDetails * _Nullable)financialServices __attribute__((swift_name("init(installationId:clientToken:environment:transactionType:countryCode:currencyCode:transaction:customer:financialServices:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkPaymentConfigCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentConfig.Companion")))
@interface MobilesdkPaymentConfigCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkPaymentConfigCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentPage")))
@interface MobilesdkPaymentPage : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)display __attribute__((swift_name("display()")));
- (void)setBillingAddressBillingAddress:(MobilesdkBillingAddress *)billingAddress __attribute__((swift_name("setBillingAddress(billingAddress:)")));
- (void)setConfigurationConfig:(MobilesdkPaymentConfig *)config __attribute__((swift_name("setConfiguration(config:)")));
- (void)setMerchantNameName:(NSString *)name __attribute__((swift_name("setMerchantName(name:)")));
- (void)setResultCallbackPaymentResultCallback:(id<MobilesdkPaymentResultCallback>)paymentResultCallback __attribute__((swift_name("setResultCallback(paymentResultCallback:)")));
- (void)setResultCallbackOnPaymentSuccess:(void (^)(void))onPaymentSuccess onPaymentFailed:(void (^)(NSString *))onPaymentFailed onPaymentCanceled:(void (^)(void))onPaymentCanceled __attribute__((swift_name("setResultCallback(onPaymentSuccess:onPaymentFailed:onPaymentCanceled:)")));
@property (readonly) UIViewController *uiController __attribute__((swift_name("uiController")));
@end

__attribute__((swift_name("PaymentProcessorInternal")))
@interface MobilesdkPaymentProcessorInternal : MobilesdkBase
- (void)detach __attribute__((swift_name("detach()")));
- (BOOL)hasPaymentMethodMethod:(MobilesdkAcceptPaymentMethods *)method __attribute__((swift_name("hasPaymentMethod(method:)")));
- (void)initiateOnInit:(void (^)(MobilesdkStatus *))onInit __attribute__((swift_name("initiate(onInit:)")));

/**
 * @note This method converts instances of IllegalArgumentException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)processCardPaymentBillingAddress:(MobilesdkBillingAddress *)billingAddress error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("processCardPayment(billingAddress:)")));
- (void)setCardCallbackCallback:(id<MobilesdkCardCallback>)callback __attribute__((swift_name("setCardCallback(callback:)")));
- (void)setCardCallbackOnCardSubmittedSuccessfully:(void (^)(void))onCardSubmittedSuccessfully onCardSubmittedWithErrors:(void (^)(MobilesdkKotlinArray<MobilesdkCardError *> *))onCardSubmittedWithErrors __attribute__((swift_name("setCardCallback(onCardSubmittedSuccessfully:onCardSubmittedWithErrors:)")));
- (void)setPaymentResultCallbackCallback:(id<MobilesdkPaymentResultCallback>)callback __attribute__((swift_name("setPaymentResultCallback(callback:)")));
- (void)setPaymentResultCallbackOnPaymentSuccess:(void (^)(void))onPaymentSuccess onPaymentFailed:(void (^)(NSString *))onPaymentFailed onPaymentMethodCanceled:(void (^)(void))onPaymentMethodCanceled __attribute__((swift_name("setPaymentResultCallback(onPaymentSuccess:onPaymentFailed:onPaymentMethodCanceled:)")));
- (void)setSaveCardIsSaveCard:(BOOL)isSaveCard __attribute__((swift_name("setSaveCard(isSaveCard:)")));
@property (readonly) BOOL initiated __attribute__((swift_name("initiated")));
@property (readonly) BOOL isCardEntered __attribute__((swift_name("isCardEntered")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentProcessor")))
@interface MobilesdkPaymentProcessor : MobilesdkPaymentProcessorInternal
- (instancetype)initWithConfig:(MobilesdkPaymentConfig *)config __attribute__((swift_name("init(config:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkPaymentProcessorCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isApplePayAvailable __attribute__((swift_name("isApplePayAvailable()")));

/**
 * @note This method converts instances of IllegalArgumentException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)processApplePayPaymentAppleMerchantId:(NSString *)appleMerchantId billingAddress:(MobilesdkBillingAddress *)billingAddress error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("processApplePayPayment(appleMerchantId:billingAddress:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentProcessor.Companion")))
@interface MobilesdkPaymentProcessorCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkPaymentProcessorCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("CardCallback")))
@protocol MobilesdkCardCallback
@required
- (void)onCardSubmittedSuccessfully __attribute__((swift_name("onCardSubmittedSuccessfully()")));
- (void)onCardSubmittedWithErrorsErrors:(MobilesdkKotlinArray<MobilesdkCardError *> *)errors __attribute__((swift_name("onCardSubmittedWithErrors(errors:)")));
@end

__attribute__((swift_name("PaymentResultCallback")))
@protocol MobilesdkPaymentResultCallback
@required
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
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("Status")))
@interface MobilesdkStatus : MobilesdkBase
@property (class, readonly, getter=companion) MobilesdkStatusCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Status.Canceled")))
@interface MobilesdkStatusCanceled : MobilesdkStatus
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)canceled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkStatusCanceled *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MobilesdkKotlinArray<id<MobilesdkKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Status.Companion")))
@interface MobilesdkStatusCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkStatusCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MobilesdkKotlinArray<id<MobilesdkKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Status.Error")))
@interface MobilesdkStatusError : MobilesdkStatus
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkStatusErrorCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Status.ErrorCompanion")))
@interface MobilesdkStatusErrorCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkStatusErrorCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Status.Initiated")))
@interface MobilesdkStatusInitiated : MobilesdkStatus
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)initiated __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkStatusInitiated *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MobilesdkKotlinArray<id<MobilesdkKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Status.SessionExpired")))
@interface MobilesdkStatusSessionExpired : MobilesdkStatus
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sessionExpired __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkStatusSessionExpired *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MobilesdkKotlinArray<id<MobilesdkKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Status.Success")))
@interface MobilesdkStatusSuccess : MobilesdkStatus
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkStatusSuccess *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MobilesdkKotlinArray<id<MobilesdkKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Status.Unknown")))
@interface MobilesdkStatusUnknown : MobilesdkStatus
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unknown __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkStatusUnknown *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MobilesdkKotlinArray<id<MobilesdkKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BillingAddress")))
@interface MobilesdkBillingAddress : MobilesdkBase <MobilesdkParcelizeParcelable>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithLine1:(NSString * _Nullable)line1 line2:(NSString * _Nullable)line2 line3:(NSString * _Nullable)line3 line4:(NSString * _Nullable)line4 city:(NSString * _Nullable)city region:(NSString * _Nullable)region postcode:(NSString * _Nullable)postcode countryCode:(NSString * _Nullable)countryCode email:(NSString * _Nullable)email __attribute__((swift_name("init(line1:line2:line3:line4:city:region:postcode:countryCode:email:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkBillingAddressCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (MobilesdkBillingAddress *)setCityCity:(NSString * _Nullable)city __attribute__((swift_name("setCity(city:)")));
- (MobilesdkBillingAddress *)setCountryCodeCountryCode:(NSString *)countryCode __attribute__((swift_name("setCountryCode(countryCode:)")));
- (MobilesdkBillingAddress *)setEmailEmail:(NSString *)email __attribute__((swift_name("setEmail(email:)")));
- (MobilesdkBillingAddress *)setLine1Line1:(NSString * _Nullable)line1 __attribute__((swift_name("setLine1(line1:)")));
- (MobilesdkBillingAddress *)setLine2Line2:(NSString * _Nullable)line2 __attribute__((swift_name("setLine2(line2:)")));
- (MobilesdkBillingAddress *)setLine3Line3:(NSString * _Nullable)line3 __attribute__((swift_name("setLine3(line3:)")));
- (MobilesdkBillingAddress *)setLine4Line4:(NSString * _Nullable)line4 __attribute__((swift_name("setLine4(line4:)")));
- (MobilesdkBillingAddress *)setPostcodePostcode:(NSString * _Nullable)postcode __attribute__((swift_name("setPostcode(postcode:)")));
- (MobilesdkBillingAddress *)setRegionRegion:(NSString * _Nullable)region __attribute__((swift_name("setRegion(region:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable city __attribute__((swift_name("city")));
@property NSString * _Nullable countryCode __attribute__((swift_name("countryCode")));
@property NSString * _Nullable email __attribute__((swift_name("email")));
@property NSString * _Nullable line1 __attribute__((swift_name("line1")));
@property NSString * _Nullable line2 __attribute__((swift_name("line2")));
@property NSString * _Nullable line3 __attribute__((swift_name("line3")));
@property NSString * _Nullable line4 __attribute__((swift_name("line4")));
@property NSString * _Nullable postcode __attribute__((swift_name("postcode")));
@property NSString * _Nullable region __attribute__((swift_name("region")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BillingAddress.Companion")))
@interface MobilesdkBillingAddressCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkBillingAddressCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("CardError")))
@interface MobilesdkCardError : MobilesdkBase
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardError.CardNumber")))
@interface MobilesdkCardErrorCardNumber : MobilesdkCardError
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardError.Cardholder")))
@interface MobilesdkCardErrorCardholder : MobilesdkCardError
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardError.Cvv")))
@interface MobilesdkCardErrorCvv : MobilesdkCardError
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardError.ExpiryDate")))
@interface MobilesdkCardErrorExpiryDate : MobilesdkCardError
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContinuousAuthorityAgreement")))
@interface MobilesdkContinuousAuthorityAgreement : MobilesdkBase <MobilesdkParcelizeParcelable>
- (instancetype)initWithMinFrequency:(NSString * _Nullable)minFrequency expiry:(NSString * _Nullable)expiry numberOfInstalments:(NSString * _Nullable)numberOfInstalments __attribute__((swift_name("init(minFrequency:expiry:numberOfInstalments:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkContinuousAuthorityAgreementCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable expiry __attribute__((swift_name("expiry")));
@property (readonly) NSString * _Nullable minFrequency __attribute__((swift_name("minFrequency")));
@property (readonly) NSString * _Nullable numberOfInstalments __attribute__((swift_name("numberOfInstalments")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContinuousAuthorityAgreement.Companion")))
@interface MobilesdkContinuousAuthorityAgreementCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkContinuousAuthorityAgreementCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomerDetails")))
@interface MobilesdkCustomerDetails : MobilesdkBase <MobilesdkParcelizeParcelable>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithEmail:(NSString * _Nullable)email dateOfBirth:(NSString * _Nullable)dateOfBirth telephone:(NSString * _Nullable)telephone customerRef:(NSString * _Nullable)customerRef __attribute__((swift_name("init(email:dateOfBirth:telephone:customerRef:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkCustomerDetailsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
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
@property (readonly) NSString * _Nullable telephone __attribute__((swift_name("telephone")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomerDetails.Companion")))
@interface MobilesdkCustomerDetailsCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkCustomerDetailsCompanion *shared __attribute__((swift_name("shared")));
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
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Environment")))
@interface MobilesdkEnvironment : MobilesdkKotlinEnum<MobilesdkEnvironment *> <MobilesdkParcelizeParcelable>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MobilesdkEnvironmentCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MobilesdkEnvironment *live __attribute__((swift_name("live")));
@property (class, readonly) MobilesdkEnvironment *test __attribute__((swift_name("test")));
+ (MobilesdkKotlinArray<MobilesdkEnvironment *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MobilesdkEnvironment *> *entries __attribute__((swift_name("entries")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Environment.Companion")))
@interface MobilesdkEnvironmentCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkEnvironmentCompanion *shared __attribute__((swift_name("shared")));
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MobilesdkKotlinArray<id<MobilesdkKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FinancialDetails")))
@interface MobilesdkFinancialDetails : MobilesdkBase <MobilesdkParcelizeParcelable>
- (instancetype)initWithDateOfBirth:(NSString * _Nullable)dateOfBirth surname:(NSString * _Nullable)surname accountNumber:(NSString * _Nullable)accountNumber postCode:(NSString * _Nullable)postCode __attribute__((swift_name("init(dateOfBirth:surname:accountNumber:postCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkFinancialDetailsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable accountNumber __attribute__((swift_name("accountNumber")));
@property (readonly) NSString * _Nullable dateOfBirth __attribute__((swift_name("dateOfBirth")));
@property (readonly) NSString * _Nullable postCode __attribute__((swift_name("postCode")));
@property (readonly) NSString * _Nullable surname __attribute__((swift_name("surname")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FinancialDetails.Companion")))
@interface MobilesdkFinancialDetailsCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkFinancialDetailsCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionDetails")))
@interface MobilesdkTransactionDetails : MobilesdkBase <MobilesdkParcelizeParcelable>
- (instancetype)initWithTransactionId:(NSString * _Nullable)transactionId currency:(NSString * _Nullable)currency amount:(MobilesdkDouble * _Nullable)amount description:(NSString * _Nullable)description merchantRef:(NSString * _Nullable)merchantRef recurring:(MobilesdkBoolean * _Nullable)recurring deferred:(MobilesdkBoolean * _Nullable)deferred continuousAuthorityAgreement:(MobilesdkContinuousAuthorityAgreement * _Nullable)continuousAuthorityAgreement __attribute__((swift_name("init(transactionId:currency:amount:description:merchantRef:recurring:deferred:continuousAuthorityAgreement:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkTransactionDetailsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionDetails.Companion")))
@interface MobilesdkTransactionDetailsCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkTransactionDetailsCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionType")))
@interface MobilesdkTransactionType : MobilesdkKotlinEnum<MobilesdkTransactionType *> <MobilesdkParcelizeParcelable>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MobilesdkTransactionTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MobilesdkTransactionType *payment __attribute__((swift_name("payment")));
@property (class, readonly) MobilesdkTransactionType *authorization __attribute__((swift_name("authorization")));
+ (MobilesdkKotlinArray<MobilesdkTransactionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MobilesdkTransactionType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionType.Companion")))
@interface MobilesdkTransactionTypeCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkTransactionTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MobilesdkKotlinArray<id<MobilesdkKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomerDetailsResponse")))
@interface MobilesdkCustomerDetailsResponse : MobilesdkBase <MobilesdkParcelizeParcelable>
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkCustomerDetailsResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
 *   kotlin.native.HiddenFromObjC
*/
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BillingAddressController")))
@interface MobilesdkBillingAddressController : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)billingAddressController __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkBillingAddressController *shared __attribute__((swift_name("shared")));
- (UIViewController *)make __attribute__((swift_name("make()")));
- (void)updateState:(MobilesdkBillingAddressState *)state __attribute__((swift_name("update(state:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BillingAddressState")))
@interface MobilesdkBillingAddressState : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithFontSize:(int32_t)fontSize fontWeight:(MobilesdkComponentFontWeight *)fontWeight borderSize:(int32_t)borderSize borderCornerRadius:(int32_t)borderCornerRadius borderColor:(MobilesdkInt * _Nullable)borderColor defaultCountryCode:(NSString *)defaultCountryCode useDropdown:(BOOL)useDropdown showAddressLine2:(BOOL)showAddressLine2 showAddressLine3:(BOOL)showAddressLine3 showAddressLine4:(BOOL)showAddressLine4 skipCheckboxUI:(BOOL)skipCheckboxUI defaultAddress:(MobilesdkBillingAddress * _Nullable)defaultAddress onAddressFilled:(void (^)(MobilesdkBillingAddress *))onAddressFilled __attribute__((swift_name("init(fontSize:fontWeight:borderSize:borderCornerRadius:borderColor:defaultCountryCode:useDropdown:showAddressLine2:showAddressLine3:showAddressLine4:skipCheckboxUI:defaultAddress:onAddressFilled:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (MobilesdkBillingAddressState *)setOnAddressFilledCallback:(void (^)(MobilesdkBillingAddress *))callback __attribute__((swift_name("setOnAddressFilled(callback:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardInputController")))
@interface MobilesdkCardInputController : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cardInputController __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkCardInputController *shared __attribute__((swift_name("shared")));
- (UIViewController *)make __attribute__((swift_name("make()")));
- (void)updateState:(MobilesdkCardInputStyleState *)state __attribute__((swift_name("update(state:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardInputSlimController")))
@interface MobilesdkCardInputSlimController : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cardInputSlimController __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkCardInputSlimController *shared __attribute__((swift_name("shared")));
- (UIViewController *)make __attribute__((swift_name("make()")));
- (void)updateState:(MobilesdkCardInputSlimStyleState *)state __attribute__((swift_name("update(state:)")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardInputSlimStyleState")))
@interface MobilesdkCardInputSlimStyleState : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithTextSize:(id)textSize textFontWeight:(MobilesdkComponentFontWeight *)textFontWeight showCardHolderName:(BOOL)showCardHolderName cardHolderName:(NSString *)cardHolderName __attribute__((swift_name("init(textSize:textFontWeight:showCardHolderName:cardHolderName:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cardHolderName __attribute__((swift_name("cardHolderName")));
@property (readonly) BOOL showCardHolderName __attribute__((swift_name("showCardHolderName")));
@property (readonly) MobilesdkComponentFontWeight *textFontWeight __attribute__((swift_name("textFontWeight")));
@property (readonly) id textSize __attribute__((swift_name("textSize")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardInputStyleState")))
@interface MobilesdkCardInputStyleState : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithBackgroundCornerSize:(int32_t)backgroundCornerSize labelLocation:(MobilesdkLabelLocation *)labelLocation labelTextSize:(int32_t)labelTextSize labelTextFontWeight:(MobilesdkComponentFontWeight *)labelTextFontWeight fieldTextSize:(int32_t)fieldTextSize fieldTextFontWeight:(MobilesdkComponentFontWeight *)fieldTextFontWeight showCardHolderName:(BOOL)showCardHolderName __attribute__((swift_name("init(backgroundCornerSize:labelLocation:labelTextSize:labelTextFontWeight:fieldTextSize:fieldTextFontWeight:showCardHolderName:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
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
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LabelLocation")))
@interface MobilesdkLabelLocation : MobilesdkKotlinEnum<MobilesdkLabelLocation *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MobilesdkLabelLocation *top __attribute__((swift_name("top")));
@property (class, readonly) MobilesdkLabelLocation *contained __attribute__((swift_name("contained")));
+ (MobilesdkKotlinArray<MobilesdkLabelLocation *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MobilesdkLabelLocation *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ComponentFontWeight")))
@interface MobilesdkComponentFontWeight : MobilesdkKotlinEnum<MobilesdkComponentFontWeight *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MobilesdkComponentFontWeight *normal __attribute__((swift_name("normal")));
@property (class, readonly) MobilesdkComponentFontWeight *bold __attribute__((swift_name("bold")));
@property (class, readonly) MobilesdkComponentFontWeight *light __attribute__((swift_name("light")));
+ (MobilesdkKotlinArray<MobilesdkComponentFontWeight *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MobilesdkComponentFontWeight *> *entries __attribute__((swift_name("entries")));
@property (readonly) MobilesdkUi_textFontWeight *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SaveCardBoxController")))
@interface MobilesdkSaveCardBoxController : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)saveCardBoxController __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkSaveCardBoxController *shared __attribute__((swift_name("shared")));
- (UIViewController *)make __attribute__((swift_name("make()")));
- (void)updateState:(MobilesdkSaveCardState *)state __attribute__((swift_name("update(state:)")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SaveCardState")))
@interface MobilesdkSaveCardState : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithFontSize:(int32_t)fontSize fontWeight:(MobilesdkComponentFontWeight *)fontWeight defaultState:(BOOL)defaultState __attribute__((swift_name("init(fontSize:fontWeight:defaultState:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL defaultState __attribute__((swift_name("defaultState")));
@property (readonly) int32_t fontSize __attribute__((swift_name("fontSize")));
@property (readonly) MobilesdkComponentFontWeight *fontWeight __attribute__((swift_name("fontWeight")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SavedCardsController")))
@interface MobilesdkSavedCardsController : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)savedCardsController __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkSavedCardsController *shared __attribute__((swift_name("shared")));
- (UIViewController *)make __attribute__((swift_name("make()")));
- (void)updateState:(MobilesdkSavedCardsState *)state __attribute__((swift_name("update(state:)")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SavedCardsState")))
@interface MobilesdkSavedCardsState : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithOnCardSelected:(void (^)(MobilesdkBoolean *))onCardSelected tryToUseDefaultCard:(BOOL)tryToUseDefaultCard __attribute__((swift_name("init(onCardSelected:tryToUseDefaultCard:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (MobilesdkSavedCardsState *)setOnCardSelectedCallback:(void (^)(MobilesdkBoolean *))callback __attribute__((swift_name("setOnCardSelected(callback:)")));
- (MobilesdkSavedCardsState *)setTryToUseDefaultCardTryToUseDefaultCard:(BOOL)tryToUseDefaultCard __attribute__((swift_name("setTryToUseDefaultCard(tryToUseDefaultCard:)")));

/**
 * @note annotations
 *   kotlin.native.HiddenFromObjC
*/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^onCardSelected)(MobilesdkBoolean *) __attribute__((swift_name("onCardSelected")));
@property (readonly) BOOL tryToUseDefaultCard __attribute__((swift_name("tryToUseDefaultCard")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthenticationHelper")))
@interface MobilesdkAuthenticationHelper : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)authenticationHelper __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkAuthenticationHelper *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of AuthenticationHelper.AuthorizationException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (NSString * _Nullable)getAuthTokenEnvironment:(MobilesdkEnvironment *)environment instId:(NSString *)instId userName:(NSString *)userName password:(NSString *)password customerReference:(NSString * _Nullable)customerReference guestPayment:(BOOL)guestPayment error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("getAuthToken(environment:instId:userName:password:customerReference:guestPayment:)")));

/**
 * @note This method converts instances of AuthenticationHelper.AuthorizationException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestAuthTokenEnvironment:(MobilesdkEnvironment *)environment instId:(NSString *)instId userName:(NSString *)userName password:(NSString *)password customerReference:(NSString * _Nullable)customerReference guestPayment:(BOOL)guestPayment completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("requestAuthToken(environment:instId:userName:password:customerReference:guestPayment:completionHandler:)")));
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
- (void)forErrorOnCardNumberError:(void (^)(NSString *))onCardNumberError onExpiryDateError:(void (^)(NSString *))onExpiryDateError onCvvError:(void (^)(NSString *))onCvvError onCardholderError:(void (^)(NSString *))onCardholderError __attribute__((swift_name("forError(onCardNumberError:onExpiryDateError:onCvvError:onCardholderError:)")));
- (NSString *)mapToStringSeparator:(NSString *)separator __attribute__((swift_name("mapToString(separator:)")));
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

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol MobilesdkKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<MobilesdkKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MobilesdkKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol MobilesdkKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<MobilesdkKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<MobilesdkKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol MobilesdkKotlinx_serialization_coreKSerializer <MobilesdkKotlinx_serialization_coreSerializationStrategy, MobilesdkKotlinx_serialization_coreDeserializationStrategy>
@required
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

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol MobilesdkKotlinx_serialization_coreEncoder
@required
- (id<MobilesdkKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<MobilesdkKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<MobilesdkKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<MobilesdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<MobilesdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) MobilesdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol MobilesdkKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<MobilesdkKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<MobilesdkKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) MobilesdkKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol MobilesdkKotlinx_serialization_coreDecoder
@required
- (id<MobilesdkKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<MobilesdkKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (MobilesdkKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<MobilesdkKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<MobilesdkKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) MobilesdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ui_textFontWeight.Companion")))
@interface MobilesdkUi_textFontWeightCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkUi_textFontWeightCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *Black __attribute__((swift_name("Black")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *Bold __attribute__((swift_name("Bold")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *ExtraBold __attribute__((swift_name("ExtraBold")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *ExtraLight __attribute__((swift_name("ExtraLight")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *Light __attribute__((swift_name("Light")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *Medium __attribute__((swift_name("Medium")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *Normal __attribute__((swift_name("Normal")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *SemiBold __attribute__((swift_name("SemiBold")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *Thin __attribute__((swift_name("Thin")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *W100 __attribute__((swift_name("W100")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *W200 __attribute__((swift_name("W200")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *W300 __attribute__((swift_name("W300")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *W400 __attribute__((swift_name("W400")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *W500 __attribute__((swift_name("W500")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *W600 __attribute__((swift_name("W600")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *W700 __attribute__((swift_name("W700")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *W800 __attribute__((swift_name("W800")));

/**
 * @note annotations
 *   androidx.compose.runtime.Stable
*/
@property (readonly) MobilesdkUi_textFontWeight *W900 __attribute__((swift_name("W900")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol MobilesdkKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<MobilesdkKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MobilesdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MobilesdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) MobilesdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface MobilesdkKotlinx_serialization_coreSerializersModule : MobilesdkBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<MobilesdkKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MobilesdkKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<MobilesdkKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MobilesdkKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MobilesdkKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MobilesdkKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
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
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface MobilesdkKotlinx_serialization_coreSerialKind : MobilesdkBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol MobilesdkKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<MobilesdkKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MobilesdkKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MobilesdkKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) MobilesdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MobilesdkKotlinNothing : MobilesdkBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol MobilesdkKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<MobilesdkKotlinKClass>)kClass provider:(id<MobilesdkKotlinx_serialization_coreKSerializer> (^)(NSArray<id<MobilesdkKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<MobilesdkKotlinKClass>)kClass serializer:(id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<MobilesdkKotlinKClass>)baseClass actualClass:(id<MobilesdkKotlinKClass>)actualClass actualSerializer:(id<MobilesdkKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<MobilesdkKotlinKClass>)baseClass defaultDeserializerProvider:(id<MobilesdkKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<MobilesdkKotlinKClass>)baseClass defaultDeserializerProvider:(id<MobilesdkKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
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
