// Generated by Apple Swift version 5.3.2 effective-4.1.50 (swiftlang-1200.0.45 clang-1200.0.32.28)
#ifndef FRIENDLYSCORECONNECT_SWIFT_H
#define FRIENDLYSCORECONNECT_SWIFT_H
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="FriendlyScoreConnect",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif



@class NSCoder;

SWIFT_CLASS("_TtC20FriendlyScoreConnect13CategoryWheel")
@interface CategoryWheel : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutIfNeeded;
@end


SWIFT_CLASS("_TtC20FriendlyScoreConnect19ChartBackgroundView")
@interface ChartBackgroundView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)layoutSubviews;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC20FriendlyScoreConnect14ChartContainer")
@interface ChartContainer : UIView
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@class UIScrollView;
@class NSBundle;

/// Manages page navigation between view controllers. View controllers can be navigated via swiping gestures, or called programmatically.
SWIFT_CLASS("_TtC20FriendlyScoreConnect20EMPageViewController")
@interface EMPageViewController : UIViewController <UIScrollViewDelegate>
/// Transitions to the view controller right of the currently selected view controller in a horizontal orientation, or below the currently selected view controller in a vertical orientation. Also described as going to the next page.
/// \param animated A Boolean whether or not to animate the transition
///
/// \param completion A block that’s called after the transition is finished. The block parameter <code>transitionSuccessful</code> is <code>true</code> if the transition to the selected view controller was completed successfully. If <code>false</code>, the transition returned to the view controller it started from.
///
- (void)scrollForwardAnimated:(BOOL)animated completion:(void (^ _Nullable)(BOOL))completion;
/// Transitions to the view controller left of the currently selected view controller in a horizontal orientation, or above the currently selected view controller in a vertical orientation. Also described as going to the previous page.
/// \param animated A Boolean whether or not to animate the transition
///
/// \param completion A block that’s called after the transition is finished. The block parameter <code>transitionSuccessful</code> is <code>true</code> if the transition to the selected view controller was completed successfully. If <code>false</code>, the transition returned to the view controller it started from.
///
- (void)scrollReverseAnimated:(BOOL)animated completion:(void (^ _Nullable)(BOOL))completion;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
@property (nonatomic, readonly) BOOL shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewWillBeginDragging:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidEndDecelerating:(UIScrollView * _Nonnull)scrollView;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


/// The <code>EMPageViewControllerDataSource</code> protocol is adopted to provide the view controllers that are displayed when the user scrolls through pages. Methods are called on an as-needed basis.
/// Each method returns a <code>UIViewController</code> object or <code>nil</code> if there are no view controllers to be displayed.
/// note:
/// If the data source is <code>nil</code>, gesture based scrolling will be disabled and all view controllers must be provided through <code>selectViewController:direction:animated:completion:</code>.
SWIFT_PROTOCOL("_TtP20FriendlyScoreConnect30EMPageViewControllerDataSource_")
@protocol EMPageViewControllerDataSource
/// Called to optionally return a view controller that is to the left of a given view controller in a horizontal orientation, or above a given view controller in a vertical orientation.
/// \param pageViewController The page view controller
///
/// \param viewController The point of reference view controller
///
///
/// returns:
/// The view controller that is to the left of the given <code>viewController</code> in a horizontal orientation, or above the given <code>viewController</code> in a vertical orientation, or <code>nil</code> if there is no view controller to be displayed.
- (UIViewController * _Nullable)em_pageViewController:(EMPageViewController * _Nonnull)pageViewController viewControllerBeforeViewController:(UIViewController * _Nonnull)viewController SWIFT_WARN_UNUSED_RESULT;
/// Called to optionally return a view controller that is to the right of a given view controller.
/// \param pageViewController The page view controller
///
/// \param viewController The point of reference view controller
///
///
/// returns:
/// The view controller that is to the right of the given <code>viewController</code> in a horizontal orientation, or below the given <code>viewController</code> in a vertical orientation, or <code>nil</code> if there is no view controller to be displayed.
- (UIViewController * _Nullable)em_pageViewController:(EMPageViewController * _Nonnull)pageViewController viewControllerAfterViewController:(UIViewController * _Nonnull)viewController SWIFT_WARN_UNUSED_RESULT;
@end


/// The EMPageViewControllerDelegate protocol is adopted to receive messages for all important events of the page transition process.
SWIFT_PROTOCOL("_TtP20FriendlyScoreConnect28EMPageViewControllerDelegate_")
@protocol EMPageViewControllerDelegate
@optional
/// Called before scrolling to a new view controller.
/// note:
/// This method will not be called if the starting view controller is <code>nil</code>. A common scenario where this will occur is when you initialize the page view controller and use <code>selectViewController:direction:animated:completion:</code> to load the first selected view controller.
/// important:
/// If bouncing is enabled, it is possible this method will be called more than once for one page transition. It can be called before the initial scroll to the destination view controller (which is when it is usually called), and it can also be called when the scroll momentum carries over slightly to the view controller after the original destination view controller.
/// \param pageViewController The page view controller
///
/// \param startingViewController The currently selected view controller the transition is starting from
///
/// \param destinationViewController The view controller that will be scrolled to, where the transition should end
///
- (void)em_pageViewController:(EMPageViewController * _Nonnull)pageViewController willStartScrollingFrom:(UIViewController * _Nonnull)startingViewController destinationViewController:(UIViewController * _Nonnull)destinationViewController;
/// Called whenever there has been a scroll position change in a page transition. This method is very useful if you need to know the exact progress of the page transition animation.
/// note:
/// This method will not be called if the starting view controller is <code>nil</code>. A common scenario where this will occur is when you initialize the page view controller and use <code>selectViewController:direction:animated:completion:</code> to load the first selected view controller.
/// \param pageViewController The page view controller
///
/// \param startingViewController The currently selected view controller the transition is starting from
///
/// \param destinationViewController The view controller being scrolled to where the transition should end
///
/// \param progress The progress of the transition, where 0 is a neutral scroll position, >= 1 is a complete transition to the right view controller in a horizontal orientation, or the below view controller in a vertical orientation, and <= -1 is a complete transition to the left view controller in a horizontal orientation, or the above view controller in a vertical orientation. Values may be greater than 1 or less than -1 if bouncing is enabled and the scroll velocity is quick enough.
///
- (void)em_pageViewController:(EMPageViewController * _Nonnull)pageViewController isScrollingFrom:(UIViewController * _Nonnull)startingViewController destinationViewController:(UIViewController * _Nullable)destinationViewController progress:(CGFloat)progress;
/// Called after a page transition attempt has completed.
/// important:
/// If bouncing is enabled, it is possible this method will be called more than once for one page transition. It can be called after the scroll transition to the intended destination view controller (which is when it is usually called), and it can also be called when the scroll momentum carries over slightly to the view controller after the intended destination view controller. In the latter scenario, <code>transitionSuccessful</code> will return <code>false</code> the second time it’s called because the scroll view will bounce back to the intended destination view controller.
/// \param pageViewController The page view controller
///
/// \param startingViewController The currently selected view controller the transition is starting from
///
/// \param destinationViewController The view controller that has been attempted to be selected
///
/// \param transitionSuccessful A Boolean whether the transition to the destination view controller was successful or not. If <code>true</code>, the new selected view controller is <code>destinationViewController</code>. If <code>false</code>, the transition returned to the view controller it started from, so the selected view controller is still <code>startingViewController</code>.
///
- (void)em_pageViewController:(EMPageViewController * _Nonnull)pageViewController didFinishScrollingFrom:(UIViewController * _Nullable)startingViewController destinationViewController:(UIViewController * _Nonnull)destinationViewController transitionSuccessful:(BOOL)transitionSuccessful;
@end

/// The navigation scroll direction.
typedef SWIFT_ENUM(NSInteger, EMPageViewControllerNavigationDirection, open) {
/// Forward direction. Can be right in a horizontal orientation or down in a vertical orientation.
  EMPageViewControllerNavigationDirectionForward = 0,
/// Reverse direction. Can be left in a horizontal orientation or up in a vertical orientation.
  EMPageViewControllerNavigationDirectionReverse = 1,
};

/// The navigation scroll orientation.
typedef SWIFT_ENUM(NSInteger, EMPageViewControllerNavigationOrientation, open) {
/// Horiziontal orientation. Scrolls left and right.
  EMPageViewControllerNavigationOrientationHorizontal = 0,
/// Vertical orientation. Scrolls up and down.
  EMPageViewControllerNavigationOrientationVertical = 1,
};


SWIFT_CLASS("_TtC20FriendlyScoreConnect12FinanceChart")
@interface FinanceChart : UIView
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC20FriendlyScoreConnect18IncomeOutcomeChart")
@interface IncomeOutcomeChart : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC20FriendlyScoreConnect28PagingBorderLayoutAttributes")
@interface PagingBorderLayoutAttributes : UICollectionViewLayoutAttributes
- (id _Nonnull)copyWithZone:(struct _NSZone * _Nullable)zone SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// A custom <code>UICollectionViewReusableView</code> subclass used to display
/// the border at the bottom of the menu items. You can subclass this
/// type if you need further customization; just override the
/// <code>borderClass</code> property in <code>PagingViewController</code>.
SWIFT_CLASS("_TtC20FriendlyScoreConnect16PagingBorderView")
@interface PagingBorderView : UICollectionReusableView
- (void)applyLayoutAttributes:(UICollectionViewLayoutAttributes * _Nonnull)layoutAttributes;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


/// A custom <code>UICollectionViewCell</code> subclass used to display the menu
/// items. When creating your own custom cells, you need to subclass
/// this type instead of <code>UICollectionViewCell</code> directly.
SWIFT_CLASS("_TtC20FriendlyScoreConnect10PagingCell")
@interface PagingCell : UICollectionViewCell
- (UICollectionViewLayoutAttributes * _Nonnull)preferredLayoutAttributesFittingAttributes:(UICollectionViewLayoutAttributes * _Nonnull)layoutAttributes SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


/// A custom <code>UICollectionViewLayoutAttributes</code> subclass that adds a
/// <code>progress</code> property indicating how far the user has scrolled.
SWIFT_CLASS("_TtC20FriendlyScoreConnect26PagingCellLayoutAttributes")
@interface PagingCellLayoutAttributes : UICollectionViewLayoutAttributes
- (id _Nonnull)copyWithZone:(struct _NSZone * _Nullable)zone SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UICollectionViewLayoutInvalidationContext;

/// A custom <code>UICollectionViewLayout</code> subclass responsible for
/// defining the layout for all the <code>PagingItem</code> cells. You can
/// subclass this type if you need further customization outside what
/// is provided by customization properties on <code>PagingViewController</code>.
/// To create your own <code>PagingViewControllerLayout</code> you need to
/// override the <code>menuLayoutClass</code> property on <code>PagingViewController</code>.
/// Then you can override the methods you normally would to update the
/// layout attributes for each cell.
/// The layout has two decoration views; one for the border at the
/// bottom and one for the view that indicates the currently selected
/// <code>PagingItem</code>. You can customize their layout attributes by
/// updating the <code>indicatorLayoutAttributes</code> and
/// <code>borderLayoutAttributes</code> properties.
SWIFT_CLASS("_TtC20FriendlyScoreConnect26PagingCollectionViewLayout")
@interface PagingCollectionViewLayout : UICollectionViewLayout
@property (nonatomic, readonly) CGSize collectionViewContentSize;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) Class _Nonnull layoutAttributesClass;)
+ (Class _Nonnull)layoutAttributesClass SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)prepareLayout;
- (void)invalidateLayout;
- (void)invalidateLayoutWithContext:(UICollectionViewLayoutInvalidationContext * _Nonnull)context;
- (UICollectionViewLayoutAttributes * _Nullable)layoutAttributesForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewLayoutAttributes * _Nullable)layoutAttributesForDecorationViewOfKind:(NSString * _Nonnull)elementKind atIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (NSArray<UICollectionViewLayoutAttributes *> * _Nullable)layoutAttributesForElementsInRect:(CGRect)rect SWIFT_WARN_UNUSED_RESULT;
@end



SWIFT_CLASS("_TtC20FriendlyScoreConnect31PagingIndicatorLayoutAttributes")
@interface PagingIndicatorLayoutAttributes : UICollectionViewLayoutAttributes
- (id _Nonnull)copyWithZone:(struct _NSZone * _Nullable)zone SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// A custom <code>UICollectionViewReusableView</code> subclass used to display a
/// view that indicates the currently selected cell. You can subclass
/// this type if you need further customization; just override the
/// <code>indicatorClass</code> property in <code>PagingViewController</code>.
SWIFT_CLASS("_TtC20FriendlyScoreConnect19PagingIndicatorView")
@interface PagingIndicatorView : UICollectionReusableView
- (void)applyLayoutAttributes:(UICollectionViewLayoutAttributes * _Nonnull)layoutAttributes;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC20FriendlyScoreConnect25PagingInvalidationContext")
@interface PagingInvalidationContext : UICollectionViewLayoutInvalidationContext
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIColor;

SWIFT_CLASS("_TtC20FriendlyScoreConnect14PagingMenuView")
@interface PagingMenuView : UIView
/// The background color for the menu items.
@property (nonatomic, strong) UIColor * _Nullable backgroundColor;
/// Creates an instance of <code>PagingViewController</code>. You need to call
/// <code>select(pagingItem:animated:)</code> in order to set the initial view
/// controller before any items become visible.
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class UICollectionView;

@interface PagingMenuView (SWIFT_EXTENSION(FriendlyScoreConnect)) <UICollectionViewDelegate>
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didSelectItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end


/// A custom <code>PagingCell</code> implementation that only displays a text
/// label. The title is based on the <code>PagingTitleItem</code> and the colors
/// are based on the <code>PagingTheme</code> passed into <code>setPagingItem:</code>. When
/// applying layout attributes it will interpolate between the default
/// and selected text color based on the <code>progress</code> property.
SWIFT_CLASS("_TtC20FriendlyScoreConnect15PagingTitleCell")
@interface PagingTitleCell : PagingCell
@property (nonatomic, getter=isSelected) BOOL selected;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(UICollectionViewLayoutAttributes * _Nonnull)layoutAttributes;
@end


/// A custom <code>UIView</code> subclass used by <code>PagingViewController</code>,
/// responsible for setting up the view hierarchy and its layout
/// constraints.
/// If you need additional customization, like changing the
/// constraints, you can subclass <code>PagingView</code> and override
/// <code>loadView:</code> in <code>PagingViewController</code> to use your subclass.
SWIFT_CLASS("_TtC20FriendlyScoreConnect10PagingView")
@interface PagingView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@protocol UIViewControllerTransitionCoordinator;

/// A view controller that lets you to page between views while
/// showing menu items that scrolls along with the content.
/// The data source object is responsible for actually generating the
/// <code>PagingItem</code> as well as allocating the view controller that
/// corresponds to each item. See <code>PagingViewControllerDataSource</code>.
/// After providing a data source you need to call
/// <code>select(pagingItem:animated:)</code> to set the initial view controller.
/// You can also use the same method to programmatically navigate to
/// other view controllers.
SWIFT_CLASS("_TtC20FriendlyScoreConnect20PagingViewController")
@interface PagingViewController : UIViewController <EMPageViewControllerDataSource, EMPageViewControllerDelegate, UICollectionViewDelegate>
/// Creates an instance of <code>PagingViewController</code>. You need to call
/// <code>select(pagingItem:animated:)</code> in order to set the initial view
/// controller before any items become visible.
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Creates an instance of <code>PagingViewController</code>.
/// \param coder An unarchiver object.
///
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator> _Nonnull)coordinator;
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewWillBeginDragging:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewWillEndDragging:(UIScrollView * _Nonnull)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(CGPoint * _Nonnull)targetContentOffset;
- (void)scrollViewDidEndDragging:(UIScrollView * _Nonnull)scrollView willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndScrollingAnimation:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewWillBeginDecelerating:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidEndDecelerating:(UIScrollView * _Nonnull)scrollView;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didSelectItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (CGPoint)collectionView:(UICollectionView * _Nonnull)collectionView targetContentOffsetForProposedContentOffset:(CGPoint)proposedContentOffset SWIFT_WARN_UNUSED_RESULT;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didUnhighlightItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didHighlightItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didDeselectItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView willDisplayCell:(UICollectionViewCell * _Nonnull)cell forItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didEndDisplayingCell:(UICollectionViewCell * _Nonnull)cell forItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (UIViewController * _Nullable)em_pageViewController:(EMPageViewController * _Nonnull)pageViewController viewControllerBeforeViewController:(UIViewController * _Nonnull)viewController SWIFT_WARN_UNUSED_RESULT;
- (UIViewController * _Nullable)em_pageViewController:(EMPageViewController * _Nonnull)pageViewController viewControllerAfterViewController:(UIViewController * _Nonnull)viewController SWIFT_WARN_UNUSED_RESULT;
- (void)em_pageViewController:(EMPageViewController * _Nonnull)pageViewController isScrollingFrom:(UIViewController * _Nonnull)startingViewController destinationViewController:(UIViewController * _Nullable)destinationViewController progress:(CGFloat)progress;
- (void)em_pageViewController:(EMPageViewController * _Nonnull)pageViewController willStartScrollingFrom:(UIViewController * _Nonnull)startingViewController destinationViewController:(UIViewController * _Nonnull)destinationViewController;
- (void)em_pageViewController:(EMPageViewController * _Nonnull)pageViewController didFinishScrollingFrom:(UIViewController * _Nullable)startingViewController destinationViewController:(UIViewController * _Nonnull)destinationViewController transitionSuccessful:(BOOL)transitionSuccessful;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end





SWIFT_CLASS("_TtC20FriendlyScoreConnect10ScoreLabel")
@interface ScoreLabel : UILabel
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC20FriendlyScoreConnect10ScoreWheel")
@interface ScoreWheel : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutIfNeeded;
@end



@interface UIButton (SWIFT_EXTENSION(FriendlyScoreConnect))
@property (nonatomic, readonly) CGSize intrinsicContentSize;
@end









#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
