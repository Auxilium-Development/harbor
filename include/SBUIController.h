//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"


@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SBAnimationStepper, SBAppSliderController, SBAppSliderWindowController, SBApplication, SBDismissOnlyAlertItem, SBSwitchAppGestureView, SBWindow, SBWorkspaceEventQueueLockAssertion, UIStatusBar, UIView;

@interface SBUIController : NSObject
{
    SBWindow *_window;
    UIView *_iconsView;
    UIView *_contentView;
    UIStatusBar *_fakeSpringBoardStatusBar;
    SBAppSliderController *_switcherController;
    SBAppSliderWindowController *_sliderWindowController;
    SBApplication *_toggleSwitcherAfterLaunchApp;
    NSString *_bundleIDOfResignedApp;
    unsigned int _ignoringEvents:1;
    unsigned int _lastVolumeDownToControl:1;
    unsigned int _isBatteryCharging:1;
    unsigned int _isOnAC:1;
    unsigned int _isConnectedToUnsupportedChargingAccessory:1;
    unsigned int _isConnectedToChargeIncapablePowerSource:1;
    unsigned int _allowAlertWindowRotation:1;
    id _volumeHandler;
    float _batteryCapacity;
    float _curvedBatteryCapacity;
    BOOL _supportsDetailedBatteryCapacity;
    int _batteryLoggingStartCapacity;
    SBDismissOnlyAlertItem *_unsupportedChargerAlert;
    NSMutableDictionary *_installedSystemGestureViews;
    SBAnimationStepper *_suspendAnimationStepper;
    SBAnimationStepper *_statusBarAnimationStepper;
    CDUnknownBlockType _suspendGestureCompleteForwardToEndHandler;
    CDUnknownBlockType _suspendGestureCompleteBackwardToStartHandler;
    BOOL _switcherVisibleWhenSuspendGestureStarted;
    SBWorkspaceEventQueueLockAssertion *_suspendGestureWorkspaceLock;
    BOOL _shouldUnscatterForSuspendGesture;
    BOOL _switcherAnimationRevealing;
    BOOL _switcherAnimationInProgress;
    BOOL _switcherGestureRevealedOrDismissedSwitcher;
    SBSwitchAppGestureView *_switchAppGestureView;
    CGFloat _switchAppGesturePreviousPercentage;
    CGFloat _switchAppGestureEffectivePercentage;
    CGFloat _switchAppGestureInitialPercentage;
    unsigned long long _switchAppGestureChangedFrames;
    UIView *_systemGestureBackdrop;
    UIView *_pendingGestureLaunchView;
    SBApplication *_pendingAppActivatedByGesture;
    SBApplication *_appCurrentlyActivatingByGesture;
    NSMutableArray *_switchAppFullyOrderedList;
    NSArray *_switchAppFilteredList;
    BOOL _toggleSwitcherAfterLaunchAppUsesSystemGestureOrientation;
    CGFloat _ambiguousCCActivationMargin;
    NSMutableSet *_rotationPreventionReasons;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (int)displayedLevelForLockScreenBatteryLevel:(int)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)_legibilityPrototypeSettings;
- (id)_currentFolderLegibilitySettings;
- (id)_legibilitySettings;
- (void)updateStatusBarLegibility;
- (void)_updateLegibility;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (void)screenManager:(id)arg1 didTriggerConnectionHandlerEvent:(long long)arg2 forScreen:(id)arg3;
- (BOOL)screenManager:(id)arg1 shouldBindConnectionHandlerToScreen:(id)arg2;
- (id)switcherController;
- (void)_runAppSliderBringupTest;
- (void)_runAppSliderDismissTest;
- (void)_reloadSwitcherController;
- (void)getRidOfAppSwitcher;
- (void)animateAppSwitcherDismissalToApplication:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_switcherFixupIconsViewIfNecessary;
- (void)appSwitcherNeedsToReload:(id)arg1;
- (void)appSwitcherWantsToDismissImmediately:(id)arg1;
- (void)appSwitcher:(id)arg1 wantsToActivateApplication:(id)arg2;
- (BOOL)_canPresentCenterController:(id)arg1;
- (void)_showControlCenterGestureCancelled;
- (void)_showControlCenterGestureFailed;
- (void)_hideControlCenterGrabber;
- (void)_showControlCenterGestureEndedWithLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)_showControlCenterGestureChangedWithLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2 duration:(CGFloat)arg3;
- (void)_showControlCenterGestureBeganWithLocation:(struct CGPoint)arg1;
- (void)_hideNotificationsGestureCancelled;
- (void)_hideNotificationsGestureEndedWithCompletionType:(long long)arg1 velocity:(struct CGPoint)arg2;
- (void)_hideNotificationsGestureChanged:(CGFloat)arg1;
- (void)_hideNotificationsGestureBegan:(CGFloat)arg1;
- (void)_hideNotificationCenterTabControl;
- (CGFloat)showNotificationsTabControlSwipableWidth;
- (void)setAmbiguousControlCenterActivationMargin:(CGFloat)arg1 forApp:(id)arg2;
- (CGFloat)ambiguousControlCenterActivationMargin;
- (BOOL)shouldUseAmbiguousControlCenterActivation;
- (BOOL)shouldShowControlCenterTabControlOnFirstSwipe;
- (BOOL)shouldShowNotificationCenterTabControlOnFirstSwipe;
- (BOOL)_preventShowingTabControls;
- (void)updateShouldShowCenterTabControlsOnFirstSwipe;
- (void)_showNotificationsGestureCancelled;
- (void)_showNotificationsGestureFailed;
- (void)_showNotificationsGestureEndedWithLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)_showNotificationsGestureChangedWithLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)_showNotificationsGestureBeganWithLocation:(struct CGPoint)arg1;
- (void)_switchAppGestureViewAnimationComplete;
- (void)_installSwitchAppGesturePlaceholderViewForEndingApp:(id)arg1;
- (void)launchApplicationByGesture:(id)arg1;
- (void)launchPendingAppActivatedByGestureIfExists;
- (void)scheduleApplicationForLaunchByGesture:(id)arg1;
- (void)_clearPendingAppActivatedByGesture:(BOOL)arg1;
- (void)clearPendingAppActivatedByGesture;
- (BOOL)hasPendingAppActivatedByGesture;
- (void)cleanupSwitchAppGestureViews;
- (void)programmaticSwitchAppGestureMoveToRight;
- (void)programmaticSwitchAppGestureMoveToLeft;
- (void)programmaticSwitchAppGestureApplyWithPercentage:(CGFloat)arg1;
- (void)_switchAppGestureCancelled;
- (void)_switchAppGestureEndedWithCompletionType:(long long)arg1 cumulativePercentage:(CGFloat)arg2;
- (void)_switchAppGestureChanged:(CGFloat)arg1;
- (void)_switchAppGestureBegan:(CGFloat)arg1;
- (void)prefetchAdjacentAppsAndEvictRemotes:(id)arg1;
- (void)_clearGestureViewVendorCacheForAppWithDisplayIdenitifier:(id)arg1;
- (id)_makeSwitchAppFilteredList:(id)arg1 initialApp:(id)arg2;
- (void)_getSwitchAppPrefetchApps:(id)arg1 initialApp:(id)arg2 outLeftwardAppIdentifier:(id *)arg3 outRightwardAppIdentifier:(id *)arg4;
- (id)_makeSwitchAppValidList:(id)arg1;
- (void)removeAppFromSwitchAppList:(id)arg1;
- (void)_clearSwitchAppList;
- (id)_calculateSwitchAppList;
- (void)_animateStatusBarForSuspendGesture;
- (void)endRequiringWallpaperForSuspendGestureIfNecessary;
- (void)_suspendGestureCleanUpState;
- (void)_suspendGestureCancelled;
- (void)_suspendGestureEndedWithCompletionType:(long long)arg1;
- (BOOL)_suspendGestureShouldFinish;
- (void)_suspendGestureChanged:(float)arg1;
- (void)_suspendGestureBegan;
- (void)_switcherGestureCancelled;
- (void)_switcherGestureEndedWithCompletionType:(long long)arg1 cumulativePercentage:(CGFloat)arg2;
- (void)_switcherGestureChanged:(float)arg1;
- (void)_switcherGestureBegan;
- (BOOL)_switcherGestureIsBlockedByAppLaunchOrIgnoringEvents;
- (void)cleanupRunningGestureIfNeeded;
- (void)animationStepperFinishBackwardToStartCompleted:(id)arg1;
- (BOOL)shouldSendTouchesToSystemGestures;
- (void)notifyAppResumeActive:(id)arg1;
- (void)notifyAppResignActive:(id)arg1;
- (void)handleShowControlCenterSystemGesture:(id)arg1;
- (void)handleDismissBannerSystemGesture:(id)arg1;
- (void)handleHideNotificationsSystemGesture:(id)arg1;
- (void)handleShowNotificationsSystemGesture:(id)arg1;
- (void)handleFluidVerticalSystemGesture:(id)arg1;
- (void)handleFluidHorizontalSystemGesture:(id)arg1;
- (void)handleFluidScaleSystemGesture:(id)arg1;
- (BOOL)allowSystemGestureType:(unsigned long long)arg1 atLocation:(struct CGPoint)arg2;
- (void)hideSystemGestureBackdrop;
- (void)showSystemGestureBackdrop;
- (id)systemGestureSnapshotForApp:(id)arg1 includeStatusBar:(BOOL)arg2 decodeImage:(BOOL)arg3;
- (id)systemGestureSnapshotWithIOSurfaceSnapshotOfApp:(id)arg1 includeStatusBar:(BOOL)arg2;
- (void)_installSystemGestureView:(id)arg1 forKey:(id)arg2 forGesture:(unsigned long long)arg3;
- (void)_clearAllInstalledSystemGestureViews;
- (void)_clearInstalledSystemGestureViewForKey:(id)arg1;
- (id)_installedSystemGestureViewForKey:(id)arg1;
- (id)_systemGestureViewKeyForApp:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (unsigned char)headsetBatteryCapacity;
- (BOOL)isHeadsetBatteryCharging;
- (BOOL)isHeadsetDocked;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(CGFloat)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)setAllowSwitcherRotation:(BOOL)arg1 forReason:(id)arg2;
- (void)setAllowIconRotation:(BOOL)arg1 forReason:(id)arg2;
- (void)window:(id)arg1 didRotateFromInterfaceOrientation:(long long)arg2;
- (void)window:(id)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(CGFloat)arg3;
- (void)window:(id)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(CGFloat)arg3;
- (id)rotatingFooterViewForWindow:(id)arg1;
- (id)rotatingContentViewForWindow:(id)arg1;
- (BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;
- (BOOL)shouldWindowUseOnePartInterfaceRotationAnimation:(id)arg1;
- (void)noteStatusBarHeightChanged:(id)arg1;
- (BOOL)supportsDetailedBatteryCapacity;
- (BOOL)isConnectedToUnsupportedChargingAccessory;
- (void)setIsConnectedToUnsupportedChargingAccessory:(BOOL)arg1;
- (void)ACPowerChanged;
- (BOOL)isConnectedToChargeIncapablePowerSource;
- (BOOL)isOnAC;
- (BOOL)isBatteryCharging;
- (int)displayBatteryCapacityAsPercentage;
- (int)curvedBatteryCapacityAsPercentage;
- (float)curvedBatteryCapacity;
- (int)batteryCapacityAsPercentage;
- (float)batteryCapacity;
- (void)updateBatteryState:(id)arg1;
- (void)cancelVolumeEvent;
- (void)handleVolumeEvent:(struct __IOHIDEvent *)arg1;
- (CGFloat)_contentRotationForOrientation:(long long)arg1;
- (struct CGAffineTransform)_portraitViewTransformForSwitcherSize:(struct CGSize)arg1 orientation:(long long)arg2;
- (BOOL)_ignoringEvents;
- (void)_resumeEventsIfNecessary;
- (void)requestApplicationEventsEnabledIfNecessary;
- (void)_ignoreEvents;
- (BOOL)_allowSwitcherGesture;
- (BOOL)allowAlertWindowRotation;
- (BOOL)isAppSwitcherShowing;
- (id)_appSliderController;
- (void)dismissSwitcherAnimated:(BOOL)arg1;
- (void)_dismissAppSwitcherImmediately;
- (void)dismissSwitcherForAlert:(id)arg1;
- (void)openNewsstand;
- (id)switcherWindow;
- (BOOL)_activateAppSwitcherFromSide:(int)arg1;
- (void)_accessibilityWillBeginAppSwitcherRevealAnimation;
- (CGFloat)_appSwitcherRevealAnimationDelay;
- (BOOL)handleMenuCGFloatTap;
- (void)_toggleSwitcher;
- (void)_setToggleSwitcherAfterLaunchApp:(id)arg1;
- (id)_toggleSwitcherAfterLaunchApp;
- (void)_backgroundContrastDidChange:(id)arg1;
- (void)_awayControllerActivated:(id)arg1;
- (void)_applicationActivationStateDidChange:(id)arg1;
- (void)_noteAppDidFailToActivate:(id)arg1;
- (void)_noteAppDidActivate:(id)arg1;
- (BOOL)clickedMenuButton;
- (BOOL)_handleButtonEventToSuspendDisplays:(BOOL)arg1 displayWasSuspendedOut:(BOOL *)arg2;
- (int)_dismissSheetsAndDetermineAlertStateForMenuClickOrSystemGesture;
- (void)stopRestoringIconList;
- (void)tearDownIconListAndBar;
- (void)restoreIconListForSuspendGesture;
- (void)restoreContentAndUnscatterIconsAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)restoreContentAndUnscatterIconsAnimated:(BOOL)arg1;
- (void)restoreContentUpdatingStatusBar:(BOOL)arg1;
- (void)restoreContent;
- (void)_closeOpenFolderIfNecessary;
- (void)_hideKeyboard;
- (void)_deviceLockStateChanged:(id)arg1;
- (void)_releaseTransitionOrientationLock;
- (void)_releaseSystemGestureOrientationLock;
- (void)releaseSwitcherOrientationLock;
- (void)_lockOrientationForSwitcher;
- (void)_lockOrientationForSystemGesture;
- (void)_lockOrientationForTransition;
- (void)activateURLFromBulletinList:(id)arg1;
- (void)activateApplicationAnimatedFromIcon:(id)arg1 fromLocation:(int)arg2;
- (void)activateApplicationAnimated:(id)arg1;
- (void)launchIcon:(id)arg1 fromLocation:(int)arg2;
- (id)window;
- (id)contentView;
- (void)setFakeSpringBoardStatusBarVisible:(BOOL)arg1;
- (id)_fakeSpringBoardStatusBar;
- (void)configureFakeSpringBoardStatusBarWithStyleRequest:(id)arg1;
- (void)configureFakeSpringBoardStatusBarWithDefaultStyleRequestForStyle:(long long)arg1;
- (void)removeFakeSpringBoardStatusBar;
- (void)cleanUpOnFrontLocked;
- (BOOL)promptUnlockForAppActivation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)systemControllerRouteChanged:(id)arg1;
- (void)finishLaunching;
- (void)_setHidden:(BOOL)arg1;
- (void)animateAppleDown:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (void)_indicateConnectedToPower;

@end

