// Generated by Apple Swift version 5.6 (swiftlang-5.6.0.323.62 clang-1316.0.20.8)
#ifndef MADNATIVEIOS_SWIFT_H
#define MADNATIVEIOS_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MAdNativeiOS",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

/// Type of content source
typedef SWIFT_ENUM(NSInteger, AdContentSource, open) {
  AdContentSourceCsr = 0,
  AdContentSourceCsm = 1,
  AdContentSourceRtb = 2,
};

/// Type of impression supported by SDK
typedef SWIFT_ENUM(NSInteger, AdImpressionType, open) {
  AdImpressionTypeBeginToRender = 0,
  AdImpressionTypeViewableImpression = 1,
};


/// AdInit is used to initialise MAdSDK
SWIFT_CLASS("_TtC12MAdNativeiOS6AdInit")
@interface AdInit : NSObject
+ (AdInit * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// Init SDK with member
- (void)initWithMemberIDWithMemberId:(NSInteger)memberId preCacheRequestObjects:(BOOL)preCacheRequestObjects completionHandler:(void (^ _Nullable)(BOOL))completionHandler SWIFT_METHOD_FAMILY(none);
@end


/// Defines the codes for different response types
SWIFT_CLASS("_TtC12MAdNativeiOS14AdResponseCode")
@interface AdResponseCode : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// Ad Response code
typedef SWIFT_ENUM(NSInteger, AdResponseCodeConstant, open) {
  AdResponseCodeConstantDefaultResponse = -1,
  AdResponseCodeConstantSuccess = 0,
  AdResponseCodeConstantInvalidRequest = 1,
  AdResponseCodeConstantUnableToFill = 2,
  AdResponseCodeConstantMediatedSdkUnavailable = 3,
  AdResponseCodeConstantNetworkError = 4,
  AdResponseCodeConstantInternalError = 5,
  AdResponseCodeConstantRequestTooFrequent = 6,
  AdResponseCodeConstantBadFormat = 7,
  AdResponseCodeConstantBadUrl = 8,
  AdResponseCodeConstantBadUrlConnection = 9,
  AdResponseCodeConstantNonViewResponse = 10,
  AdResponseCodeConstantCustomAdapterError = 11,
};

@class NSString;
enum AdType : NSInteger;

/// Defines the different properties that will be returned as part of the ad responses.
SWIFT_CLASS("_TtC12MAdNativeiOS14AdResponseInfo")
@interface AdResponseInfo : NSObject
/// An MAd creativeID for the current creative that is displayed
@property (nonatomic, copy) NSString * _Nullable creativeId;
/// Report the Ad Type of the returned ad object.
/// Not available until load is complete and successful.
@property (nonatomic) enum AdType adType;
/// An MAd placement ID.  A placement ID is a numeric ID that’s
/// associated with a place where ads can be shown.  In our
/// implementations of banner and interstitial ad views, we associate
/// each ad view with a placement ID.
@property (nonatomic) NSInteger placementId;
/// An MAd member ID. A member ID is a numeric ID that’s associated
/// with the member that this app belongs to.
@property (nonatomic) NSInteger memberId;
/// An MAd contentSource. A contentSource can be RTB , CSM or SSM
@property (nonatomic, copy) NSString * _Nullable contentSource;
/// An MAd networkName. A networkName belongs to mediation adaptor class based on UTv3 response
@property (nonatomic, copy) NSString * _Nullable networkName;
/// An MAd auctionId.  An auction identifier is unique id generated for the current bid.
@property (nonatomic, copy) NSString * _Nullable auctionId;
/// An MAd CPM. A CPM is BidPrice.
@property (nonatomic) double cpm;
/// An MAd Publisher Currency Price.CPM Publisher Currency of bidPrice
@property (nonatomic) double cpmPublisherCurrency;
/// An MAd Currency Code. A Publisher Currency Code of bidPrice
@property (nonatomic, copy) NSString * _Nullable publisherCurrencyCode;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

/// Ad Response message constant
typedef SWIFT_ENUM(NSInteger, AdResponseMessageConstant, open) {
  AdResponseMessageConstantDefaultResponse = 0,
  AdResponseMessageConstantSuccess = 1,
  AdResponseMessageConstantInvalidRequest = 2,
  AdResponseMessageConstantUnableToFill = 3,
  AdResponseMessageConstantMediatedSdkUnavailable = 4,
  AdResponseMessageConstantRequestFailed = 5,
  AdResponseMessageConstantNetworkError = 6,
  AdResponseMessageConstantInternalError = 7,
  AdResponseMessageConstantRequestTooFrequent = 8,
  AdResponseMessageConstantBadFormat = 9,
  AdResponseMessageConstantBadUrl = 10,
  AdResponseMessageConstantBadUrlConnection = 11,
  AdResponseMessageConstantNonViewResponse = 12,
  AdResponseMessageConstantCustomAdapterError = 13,
};

/// List of possible Ad Type
typedef SWIFT_ENUM(NSInteger, AdType, open) {
  AdTypeUnknown = 0,
  AdTypeBanner = 1,
  AdTypeVideo = 2,
  AdTypeNative = 3,
};


/// Defines the base url that can be used to construct ad request urls
SWIFT_CLASS("_TtC12MAdNativeiOS13BaseUrlConfig")
@interface BaseUrlConfig : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, ClickThroughAction, open) {
  ClickThroughActionClickThroughActionReturnURL = 1,
  ClickThroughActionClickThroughActionOpenDeviceBrowser = 2,
  ClickThroughActionClickThroughActionOpenSDKBrowser = 3,
};


SWIFT_CLASS("_TtC12MAdNativeiOS12GDPRSettings")
@interface GDPRSettings : NSObject
+ (BOOL)canAccessDeviceData SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// To make a value available throughout SDK Lifecycle, which makes them a convenient way to share values or data between different ad request.
SWIFT_CLASS("_TtC12MAdNativeiOS16GlobalProperties")
@interface GlobalProperties : NSObject
/// sharedInstance is used to return the singleton instance of a class, ensuring that there is only one instance of the class in the app
+ (GlobalProperties * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
/// To prevent any other object from calling it and creating a new instance of the class
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// An MAdiOS member ID. A member ID is a numeric ID that’s associated
/// with the member that this app belongs to.
@property (nonatomic, readonly) NSInteger memberId;
/// Set whether the landing page should load in the background or in the foreground when an ad is clicked.
/// If set to YES, when an ad is clicked the user is presented with an activity indicator view, and the in-app
/// browser displays only after the landing page content has finished loading. If set to NO, the in-app
/// browser displays immediately. The default is YES.
/// Only used when clickThroughAction is set to ClickThroughActionOpenSDKBrowser.
@property (nonatomic) BOOL landingPageLoadsInBackground;
/// Do not track flag. Set this to true if you have information in the app about user opt out and want to disable tracking cookies for this auction.
/// Default value  is set to false.
@property (nonatomic) BOOL doNotTrack;
/// Specifies a string that corresponds to the Publishers  User ID for current application user.
@property (nonatomic, copy) NSString * _Nullable publisherUserId;
/// The amount of time, in milliseconds, to wait for a bidder to respond to a bid request, Default is zero
@property (nonatomic) NSInteger auctionTimeout;
/// geoOverrideCountryCode  is a string value which allows publishers to override country code.
@property (nonatomic, copy) NSString * _Nullable geoOverrideCountryCode;
/// geoOverrideZipCode  is a string value which allows publishers to override zip code.
@property (nonatomic, copy) NSString * _Nullable geoOverrideZipCode;
@end

/// List of Gender passed via SDK
typedef SWIFT_ENUM(NSInteger, MAdGender, open) {
  MAdGenderUnknown = 0,
  MAdGenderMale = 1,
  MAdGenderFemale = 2,
};

/// Supported network
typedef SWIFT_ENUM(NSInteger, NativeAdNetworkCode, open) {
  NativeAdNetworkCodeMAd = 0,
  NativeAdNetworkCodeCustom = 1,
  NativeAdNetworkCodeAdMob = 2,
  NativeAdNetworkCodeFacebook = 3,
};

typedef SWIFT_ENUM(NSInteger, NativeAdRegisterErrorCode, open) {
  NativeAdRegisterErrorCodeInvalidView = 200,
  NativeAdRegisterErrorCodeInvalidRootViewController = 201,
  NativeAdRegisterErrorCodeExpiredResponse = 202,
  NativeAdRegisterErrorCodeBadAdapter = 203,
  NativeAdRegisterErrorCodeInternalError = 204,
};

@class CLLocation;

SWIFT_CLASS("_TtC12MAdNativeiOS13TagProperties")
@interface TagProperties : NSObject
/// A publisher ID associates this member with a publisher.
@property (nonatomic) NSInteger publisherId;
/// Set the  location by passing CLLocation Object.
@property (nonatomic, strong) CLLocation * _Nullable location;
/// The user’s age.  This can contain a numeric age, a birth year.
@property (nonatomic) NSInteger age;
/// The user’s gender.  See the MAdGender enumeration in AdConstants.swift for details.
@property (nonatomic) enum MAdGender gender;
/// A placement ID is a numeric ID that’s
/// associated with a place where ads can be shown.  In our
/// implementations,  we associate
/// each ad  with a placement ID.
- (nonnull instancetype)initWithPlacementId:(NSInteger)placementId OBJC_DESIGNATED_INITIALIZER;
/// Set the inventory code  for the place that ads will be shown.
/// An inventory code for a placement to represent a place where ads can
/// be shown. In the presence of both placement and inventory code,
/// SDK favors inventory code over placement id.
- (nonnull instancetype)initWithInventoryCode:(NSString * _Nonnull)inventoryCode OBJC_DESIGNATED_INITIALIZER;
/// Add a custom keyword to the request URL for the ad.
/// This is used to set custom targeting parameters within the MAdiOS platform.
/// You will be given the keys and values to use by your MAdiOS account representative or your ad network.
/// @param key   The key to add
/// @param value The value to add
- (void)addCustomKeywordWithKey:(NSString * _Nonnull)key value:(NSString * _Nonnull)value;
/// Remove a custom keyword from the request URL for the ad.
/// Use this to remove a keyword previously set using the
/// addCustomKeywordWithKey:value: method.
/// @param key The key to remove
- (void)removeCustomKeywordWithKey:(NSString * _Nonnull)key;
/// Clear all custom keywords from the request URL.
- (void)clearCustomKeywords;
/// An MAdSDK placement ID.  A placement ID is a numeric ID that’s
/// associated with a place where ads can be shown.  In our
/// implementations of banner and interstitial ad views, we associate
/// each ad view with a placement ID.
@property (nonatomic) NSInteger placementId;
/// An inventory code for a placement to represent a place where ads can
/// be shown. In the presence of both placement and inventory code, MAdiOS
/// SDK favors inventory code over placement id. A member ID is required to request
/// an ad using inventory code.
@property (nonatomic, copy) NSString * _Nullable inventoryCode;
/// Set MAdiOS CreativeId that you want to display on this AdUnit for debugging/testing purpose.
@property (nonatomic) NSInteger creativeId;
/// The reserve price is the minimum bid amount you’ll accept to show
/// an ad.  Use this with caution, as it can drastically reduce fill
/// rates (i.e., you will make less money).
@property (nonatomic) float reserve;
/// Set the extInvCode, Specifies predefined value passed on the query string that can be used in reporting. The value must be entered into the system before it is logged.
@property (nonatomic, copy) NSString * _Nullable extInvCode;
/// Set the trafficSourceCode,  Specifies the third-party source of the impression.
@property (nonatomic, copy) NSString * _Nullable trafficSourceCode;
@property (nonatomic) enum ClickThroughAction clickThroughAction;
/// Set whether the landing page should load in the background or in the foreground when an ad is clicked.
/// If set to YES, when an ad is clicked the user is presented with an activity indicator view, and the in-app
/// browser displays only after the landing page content has finished loading. If set to NO, the in-app
/// browser displays immediately. The default is YES.
/// Only used when clickThroughAction is set to OpenSDKBrowser.
@property (nonatomic) BOOL landingPageLoadsInBackground;
/// Whether the ad view should display PSAs if there are no ads
/// available from the server.
@property (nonatomic) BOOL shouldServePublicServiceAnnouncements;
/// Ad type
@property (nonatomic, readonly) enum AdType adType;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@protocol NativeAdRequestDelegate;

/// This class allows the publishers’ application to set the attributes for the native ad and create a request to load the native ad on the publishers’ application. If the response is successful, the native ad elements are received from the response class via a delegate callback function
SWIFT_CLASS("_TtC12MAdNativeiOS15NativeAdRequest")
@interface NativeAdRequest : TagProperties
/// The delegate which is notified of a successful or failed request. This should be set before calling NativeAdRequestloadAd().
@property (nonatomic, strong) id <NativeAdRequestDelegate> _Nullable requestDelegate;
/// If YES, a main image will automatically be downloaded and included in the response.
@property (nonatomic) BOOL shouldLoadMainImage;
/// If YES, an icon image will automatically be downloaded and included in the response.
@property (nonatomic) BOOL shouldLoadIconImage;
/// rendererId :  Native Assembly renderer_id that is associated with the placement.
/// If rendererId is not set, the default is zero (0).
/// A value of zero indicates that renderer_id will not be sent in the UT Request.
@property (nonatomic) NSInteger rendererId;
/// init ad request with placementId
- (nonnull instancetype)initWithPlacementId:(NSInteger)placementId OBJC_DESIGNATED_INITIALIZER;
/// init ad request with inventoryCode
- (nonnull instancetype)initWithInventoryCode:(NSString * _Nonnull)inventoryCode OBJC_DESIGNATED_INITIALIZER;
/// Requests a set of native ad assets. This method may be called multiple times simultaneously. The delegate will
/// be notified once for each call to this method.
- (void)loadAd;
@end


@class NativeAdResponse;

SWIFT_PROTOCOL("_TtP12MAdNativeiOS23NativeAdRequestDelegate_")
@protocol NativeAdRequestDelegate <NSObject>
- (void)adRequest:(NativeAdRequest * _Nonnull)request didReceive:(NativeAdResponse * _Nonnull)response;
- (void)adRequest:(NativeAdRequest * _Nonnull)request didFailToLoadWithError:(NSError * _Nonnull)error with:(AdResponseInfo * _Nullable)adResponseInfo;
@end

@class NativeAdStarRating;
@class UIImage;
@class NSURL;
@class NSDictionary;
@protocol NativeAdResponseDelegate;
@class UIView;
@class UIViewController;

SWIFT_CLASS("_TtC12MAdNativeiOS16NativeAdResponse")
@interface NativeAdResponse : NSObject
/// The ad title.
@property (nonatomic, copy) NSString * _Nonnull title;
/// The ad body, also known as the ad text or description.
@property (nonatomic, copy) NSString * _Nonnull body;
/// The call to action text, for example, “Install Now!”
@property (nonatomic, copy) NSString * _Nonnull callToAction;
/// The star rating of the ad, generally reserved for an app install ad.
@property (nonatomic, strong) NativeAdStarRating * _Nullable rating;
/// The ad icon image.
@property (nonatomic, strong) UIImage * _Nullable iconImage;
/// The ad main image, also known as a cover image.
@property (nonatomic, strong) UIImage * _Nullable mainImage;
/// The icon image size
@property (nonatomic) CGSize iconImageSize;
/// The ad main image, also known as a cover image.
@property (nonatomic, copy) NSURL * _Nullable mainImageURL;
/// The main image size
@property (nonatomic) CGSize mainImageSize;
/// A URL which loads the ad icon image.
@property (nonatomic, copy) NSURL * _Nullable iconImageURL;
/// Contains any non-standard elements. This would include any custom assets requested from
/// third-party networks as specified in the third-party system.
@property (nonatomic, strong) NSDictionary * _Nullable customElements;
/// The sponspored By text
@property (nonatomic, copy) NSString * _Nonnull sponsoredBy;
/// An MAd Single Unified object that will contain all the common fields of all the ads types
@property (nonatomic, strong) AdResponseInfo * _Nullable adResponseInfo;
/// Additional description of the ad
@property (nonatomic, copy) NSString * _Nonnull additionalDescription;
@property (nonatomic) enum NativeAdNetworkCode networkCode;
///
/// returns:
/// YES if the response is no longer valid, for example, if too much time has elapsed
/// since receiving it. NO if the response is still valid.
@property (nonatomic) BOOL expired;
/// vastXML can be used to play Video.
@property (nonatomic, copy) NSString * _Nullable vastXML;
/// privacy Link of the ad
@property (nonatomic, copy) NSString * _Nonnull privacyLink;
/// Media Type of the ad
@property (nonatomic, copy) NSString * _Nullable adObjectMediaType;
@property (nonatomic, weak) id <NativeAdResponseDelegate> _Nullable delegate;
- (void)setDelegateWithDelegate:(id _Nonnull)delegate;
/// creativeId of the ad
@property (nonatomic, copy) NSString * _Nullable creativeId;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// reomove all friendly Obstructions
- (void)removeAllFriendlyObstructions;
/// reomove friendly Obstruction
- (void)removeFriendlyObstruction:(UIView * _Nonnull)friendlyObstructions;
/// Set whether the landing page should load in the background or in the foreground when an ad is clicked.
/// If set to YES, when an ad is clicked the user is presented with an activity indicator view, and the in-app
/// browser displays only after the landing page content has finished loading. If set to NO, the in-app
/// browser displays immediately. The default is YES.
/// Only used when clickThroughAction is set to ClickThroughActionOpenSDKBrowser.
- (void)setClickThroughAction:(enum ClickThroughAction)clickThroughAction;
- (void)registerViewForTracking:(UIView * _Nonnull)view withRootViewController:(UIViewController * _Nonnull)rvc clickableViews:(NSArray<UIView *> * _Nonnull)views completionHandler:(void (^ _Nullable)(BOOL, NSError * _Nullable))completionHandler;
- (void)registerViewForTracking:(UIView * _Nonnull)view withRootViewController:(UIViewController * _Nonnull)rvc clickableViews:(NSArray<UIView *> * _Nullable)views openMeasurementFriendlyObstructions:(NSArray<UIView *> * _Nonnull)obstructionViews completionHandler:(void (^ _Nullable)(BOOL, NSError * _Nullable))completionHandler;
- (void)unregisterViewFromTracking;
@end




/// This delegate has different callback functions that can be used for click and impression tracking, checking different states of the ad
SWIFT_PROTOCOL("_TtP12MAdNativeiOS24NativeAdResponseDelegate_")
@protocol NativeAdResponseDelegate <NSObject>
- (void)adWillExpire:(id _Nonnull)response;
- (void)adDidExpire:(id _Nonnull)response;
- (void)adWasClicked:(id _Nonnull)response;
- (void)adWasClicked:(id _Nonnull)response withURL:(NSString * _Nonnull)clickURLString fallbackURL:(NSString * _Nonnull)clickFallbackURLString;
- (void)adWillPresent:(id _Nonnull)response;
- (void)adDidPresent:(id _Nonnull)response;
- (void)adWillClose:(id _Nonnull)response;
- (void)adDidClose:(id _Nonnull)response;
- (void)adWillLeaveApplication:(id _Nonnull)response;
- (void)adDidLogImpression:(id _Nonnull)response;
@end


/// Defines the star rating functionality for native ads
SWIFT_CLASS("_TtC12MAdNativeiOS18NativeAdStarRating")
@interface NativeAdStarRating : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC12MAdNativeiOS24NativeStandardAdResponse")
@interface NativeStandardAdResponse : NativeAdResponse
- (void)unregisterViewFromTracking;
@end


@class UserId;

/// Sets the default settings for various ad attributes
SWIFT_CLASS("_TtC12MAdNativeiOS11SDKSettings")
@interface SDKSettings : NSObject
+ (SDKSettings * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
/// If true, the SDK will allow to perform Open-Measurement Optimisation  for viewability and verification measurement for ads served. Default is false.
@property (nonatomic) BOOL enableOMIDOptimization;
/// If true, the SDK will allow to support Open-Measurement for viewability and verification measurement for ads served. Default is true.
@property (nonatomic) BOOL enableOpenMeasurement;
/// If provided, the SDK will use it instead of one fetched from a WebView
@property (nonatomic, copy) NSString * _Nullable customUserAgent;
/// Get  SDK Version
- (NSString * _Nonnull)sdkVersion SWIFT_WARN_UNUSED_RESULT;
/// An MAd disableIDFAUsage  is a boolean value which exclude the IDFA field in ad request. Default value of disableIDFAUsage is set to NO
@property (nonatomic) BOOL disableIDFAUsage;
/// An MAd disableIDFVUsage  is a boolean value which exclude the IDFV field in ad request. Default value of disableIDFVUsage is set to NO and IDFV will be used in cases where both IDFA and Publisher First Party ID are not present for a given ad request.
@property (nonatomic) BOOL disableIDFVUsage;
/// Sets whether or not AdRequests should be executed in Test Mode.
/// Setting this to true will execute AdRequests in Test Mode.
/// This should be set to true only during development/testing.
/// Enabling Test Mode in production will result in unintended consequences and will impact Monetization of your app. Use with caution.
/// default is false.
@property (nonatomic) BOOL enableTestMode;
/// Specifies a string that is used as the in-app browser dismiss button title.
@property (nonatomic, copy) NSString * _Nullable sdkBrowserDismissTitle;
/// A Dictionary containing objects that hold  UserId parameters.
@property (nonatomic, copy) NSArray<UserId *> * _Nullable userIdArray;
- (BaseUrlConfig * _Nonnull)baseUrlConfig SWIFT_WARN_UNUSED_RESULT;
- (void)setNativeAdAboutToExpireInterval:(NSInteger)nativeAdAboutToExpireInterval;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end




@interface UIView (SWIFT_EXTENSION(MAdNativeiOS))
- (CGRect)an_visibleInViewRectangle SWIFT_WARN_UNUSED_RESULT;
- (BOOL)an_isViewable SWIFT_WARN_UNUSED_RESULT;
- (void)addTapGesture;
- (void)handleTap;
/// Keep the NativeAdResponse instance retain, allowing to associate an instance of NativeAdResponse with UIView, so that UIView can be have anNativeAdResponse property
@property (nonatomic, strong) NativeAdResponse * _Nullable anNativeAdResponse;
@end


SWIFT_CLASS("_TtC12MAdNativeiOS6UserId")
@interface UserId : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, UserIdSource, open) {
  UserIdSourceCriteo = 0,
  UserIdSourceUID2 = 1,
  UserIdSourceNetId = 2,
  UserIdSourceLiveRamp = 3,
  UserIdSourceTheTradeDesk = 4,
};

typedef SWIFT_ENUM(NSInteger, VideoOrientation, open) {
  VideoOrientationAnUnknown = 0,
  VideoOrientationAnPortrait = 1,
  VideoOrientationAnLandscape = 2,
  VideoOrientationAnSquare = 3,
};

@class NSData;
@class CIImage;
@class NSCoder;

SWIFT_CLASS("_TtC12MAdNativeiOS10XandrImage")
@interface XandrImage : UIImage
- (nullable instancetype)initWithContentsOfFile:(NSString * _Nonnull)path OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithData:(NSData * _Nonnull)data OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithData:(NSData * _Nonnull)data scale:(CGFloat)scale OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=6.0);
- (nonnull instancetype)initWithCGImage:(CGImageRef _Nonnull)cgImage OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCGImage:(CGImageRef _Nonnull)cgImage scale:(CGFloat)scale orientation:(UIImageOrientation)orientation OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=4.0);
- (nonnull instancetype)initWithCIImage:(CIImage * _Nonnull)ciImage OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=5.0);
- (nonnull instancetype)initWithCIImage:(CIImage * _Nonnull)ciImage scale:(CGFloat)scale orientation:(UIImageOrientation)orientation OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=6.0);
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12MAdNativeiOS9XandrView")
@interface XandrView : UIView
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@class NSBundle;

SWIFT_CLASS("_TtC12MAdNativeiOS19XandrViewController")
@interface XandrViewController : UIViewController
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
