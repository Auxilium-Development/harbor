//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIAnimationControllerDelegate-Protocol.h"

@class BKSApplicationActivationAssertion, SBActivationContext, SBApplication, UIView, UIWindow;

@interface SBUIAnimationController : NSObject
{
    id <SBUIAnimationControllerDelegate> _delegate;
    UIWindow *_transitionWindow;
    UIView *_transitionContainer;
    SBApplication *_activatingApp;
    SBApplication *_deactivatingApp;
    SBActivationContext *_activatingContext;
    SBActivationContext *_deactivatingContext;
    BKSApplicationActivationAssertion *_activationAssertion;
    void (^commitBlock)(void);
    int _animationState;
    BOOL _cancelOnNextSuspendIfNecessary;
    BOOL _didPostBeginAnimationNotification;
    BOOL _didNotifyDelegateOfCompletion;
    BOOL _needsCATransactionActivate;
}

@property(nonatomic) BOOL needsCATransactionActivate; // @synthesize needsCATransactionActivate=_needsCATransactionActivate;
@property(nonatomic) BOOL cancelOnNextSuspendIfNecessary; // @synthesize cancelOnNextSuspendIfNecessary=_cancelOnNextSuspendIfNecessary;
@property(retain, nonatomic) SBActivationContext *deactivatingContext; // @synthesize deactivatingContext=_deactivatingContext;
@property(retain, nonatomic) SBActivationContext *activatingContext; // @synthesize activatingContext=_activatingContext;
@property(retain, nonatomic) BKSApplicationActivationAssertion *activationAssertion; // @synthesize activationAssertion=_activationAssertion;
@property(copy, nonatomic) void (^commitBlock)(void); // @synthesize commitBlock=_commitBlock;
@property(retain, nonatomic) SBApplication *deactivatingApp; // @synthesize deactivatingApp=_deactivatingApp;
@property(retain, nonatomic) SBApplication *activatingApp; // @synthesize activatingApp=_activatingApp;
@property(nonatomic, assign) id <SBUIAnimationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_transitionContainer;
- (void)__cleanupAnimation;
- (void)__noteAnimationDidTerminateWithSuccess:(BOOL)arg1;
- (void)_noteAnimationDidFail;
- (void)_noteAnimationDidFinish;
- (void)_notifyDelegateOfCompletion;
- (void)_noteAnimationDidCommit:(BOOL)arg1 withDuration:(double)arg2 afterDelay:(double)arg3;
- (BOOL)_shouldTakeActivationAssertionForDeactivatingApp;
- (BOOL)_shouldDismissBanner;
- (void)_cleanupAnimation;
- (void)_cancelAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (void)_setHidden:(BOOL)arg1;
- (id)_animationProgressDependency;
- (BOOL)_animationShouldStart;
- (id)_animationIdentifier;
- (BOOL)_willAnimate;
- (void)endAnimation;
- (BOOL)isReasonableMomentToInterrupt;
- (BOOL)isComplete;
- (BOOL)waitingToStart;
- (BOOL)_wantsInitialProgressStateChange;
- (void)beginAnimation;
- (void)_applicationActivationStateDidChange;
- (void)_applicationDependencyStateChanged;
- (void)_evaluateProgressConditions;
- (void)__cancelAnimation;
- (void)__startAnimation;
- (void)_releaseActivationAssertion;
- (void)_setAnimationState:(int)arg1;
- (BOOL)_isNullAnimation;
- (BOOL)animating;
- (int)_animationState;
- (void)dealloc;
- (id)initWithActivatingApp:(id)arg1 deactivatingApp:(id)arg2;
- (id)init;
- (id)_getTransitionWindow;

@end

