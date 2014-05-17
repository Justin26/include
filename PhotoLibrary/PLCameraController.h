/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */


#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <IOSurface/IOSurface.h>

#import "PLCameraControllerDelegate-Protocol.h"
#import "PLCameraEffectsRendererDelegate-Protocol.h"
#import "SBSAccelerometerDelegate-Protocol.h"

typedef NS_ENUM(long long, PLFlashMode) {
    PLFlashModeAuto =  0,
    PLFlashModeOn   =  1,
    PLFlashModeOff  = -1,
};

typedef NS_ENUM(long long, PLCameraDevice) {
    PLCameraDeviceRear = 0,
    PLCameraDeviceFront
};

typedef NS_ENUM(long long, PLCameraMode) {
    PLCameraModePhoto  = 0,
    PLCameraModeVideo  = 1,
    PLCameraModePano   = 3,
    PLCameraModeSquare = 4
};

@class PLCameraEffectsRenderer, SBSAccelerometer;

@interface PLCameraController : NSObject <AVCaptureMetadataOutputObjectsDelegate, PLCameraEffectsRendererDelegate, SBSAccelerometerDelegate, AVCaptureFileOutputRecordingDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>
{
    AVCaptureSession *_avCaptureSession;
    AVCaptureDevice *_avCaptureDeviceFront;
    AVCaptureDevice *_avCaptureDeviceBack;
    AVCaptureDevice *_avCaptureDeviceAudio;
    AVCaptureDeviceInput *_avCaptureInputFront;
    AVCaptureDeviceInput *_avCaptureInputBack;
    AVCaptureDeviceInput *_avCaptureInputAudio;
    AVCaptureStillImageOutput *_avCaptureOutputPhoto;
    AVCaptureMovieFileOutput *_avCaptureOutputVideo;
    AVCaptureVideoDataOutput *_avCaptureOutputPanorama;
    AVCaptureVideoDataOutput *_avCaptureOutputEffectPreview;
    AVCaptureMetadataOutput *_avCaptureOutputMetadata;
    AVCaptureDeviceFormat *_mogulFormatBack;
    AVCaptureDeviceFormat *_mogulFormatFront;
    struct OpaqueFigSampleBufferProcessor *_panoramaProcessor;
    struct _CAImageQueue *_panoramaImageQueue;
    CGSize _panoramaPreviewSize;
    CGFloat _panoramaPreviewScale;
    dispatch_queue_t _avCaptureSessionDispatchQueue;
    dispatch_queue_t _avCaptureOutputMetadataQueue;
    AVCaptureDevice *_currentDevice;
    AVCaptureDeviceInput *_currentInput;
    AVCaptureOutput *_currentOutput;
    AVCaptureVideoPreviewLayer *_previewLayer;
    CGRect _cleanAperture;
    BOOL _shouldBeStopped;
    PLCameraMode _cameraMode;
    PLCameraDevice _cameraDevice;
    PLFlashMode _flashMode;
    AVCaptureVideoOrientation _captureOrientation;
    BOOL _imageWriterQueueIsAvailable;
    unsigned long long _ioSurfaceCounter;
    BOOL _hdrEnabled;
    BOOL _hdrCaptureIncludesEV0Image;
    int _hdrEV0PhotoCaptureCount;
    id<PLCameraControllerDelegate> _delegate;
    double _maximumCaptureDuration;
    int _videoCaptureQuality;
    NSString *_videoCapturePath;
    SBSAccelerometer *_accelerometer;
    CGImageRef _lastVideoPreviewFrameImageRef;
    BOOL _lockFocusLock;
    BOOL _lockFocusAfterFocusFinishes;
    BOOL _isFocusingOnFace;
    long long _cameraOrientation;
    NSTimer *_idleTimerTimer;
    BOOL _delaySuspend;
    NSTimer *_delaySuspendTimer;
    double _maxVideoZoomFactorRear;
    double _maxVideoZoomFactorFront;
    struct {
        NSUInteger supportsVideo:1;
        NSUInteger supportsFocus:1;
        NSUInteger supportsExposure:1;
        NSUInteger supportsHDRRear:1;
        NSUInteger supportsHDRFront:1;
        NSUInteger supportsAvalancheRear:1;
        NSUInteger supportsAvalancheFront:1;
        NSUInteger supportsMogulRear:1;
        NSUInteger supportsMogulFront:1;
        NSUInteger supportsLiveEffects:1;
        NSUInteger supportsPanorama:1;
        NSUInteger supportsVideoStillCapture:1;
        NSUInteger supportsPreviewDuringHDR:1;
        NSUInteger hasFlash:1;
        NSUInteger hasBackCamera:1;
        NSUInteger hasFrontCamera:1;
        NSUInteger deferStartVideoCapture:1;
        NSUInteger inCall:1;
        NSUInteger isCapturingPanorama:1;
        NSUInteger isProcessingPanorama:1;
        NSUInteger focusDisabled:1;
        NSUInteger focusWasModified:1;
        NSUInteger serverDied:1;
        NSUInteger didGetDeviceUnavailableInBackground:1;
        NSUInteger didSetLocationData:1;
        NSUInteger isChangingMode:1;
        NSUInteger flashWillFireAutomatically:1;
        NSUInteger isCameraApp:1;
        NSUInteger didSendPreviewStartedCallbackToEmptyDelegate:1;
        NSUInteger didGetPreviewStartedCallbackAfterResume:1;
        NSUInteger logFocusInfo:1;
        NSUInteger logPreviewInfo:1;
        NSUInteger logCaptureInfo:1;
        NSUInteger logFlashInfo:1;
        NSUInteger logDebugInfo:1;
        NSUInteger logPanoInfo:1;
        NSUInteger enable720p60Recording:1;
        NSUInteger pptTestDisableAutofocus:1;
        NSUInteger isInternalInstall:1;
        NSUInteger shouldTearDownPano:1;
        NSUInteger convertSampleBufferToJPEG:1;
        NSUInteger delegateDidStartSession:1;
        NSUInteger delegateWillStartPreview:1;
        NSUInteger delegatePreviewDidStart:1;
        NSUInteger delegateSessionDidStart:1;
        NSUInteger delegateDidStopSession:1;
        NSUInteger delegateWillStopSession:1;
        NSUInteger delegateSessionDidStop:1;
        NSUInteger delegateSessionWasInterrupted:1;
        NSUInteger delegateSessionInterruptionEnded:1;
        NSUInteger delegateServerDied:1;
        NSUInteger delegateCleanApertureDidChange:1;
        NSUInteger delegateModeWillChange:1;
        NSUInteger delegateModeDidChange:1;
        NSUInteger delegateWillTakePhoto:1;
        NSUInteger delegateDidTakePhoto:1;
        NSUInteger delegateCapturedPhoto:1;
        NSUInteger delegateDidChangeCaptureAbility:1;
        NSUInteger delegateDidChangePanoramaConfiguration:1;
        NSUInteger delegateDidUpdatePanoramaPreview:1;
        NSUInteger delegateDidReceivePanoramaIssue:1;
        NSUInteger delegateDidStartPanoramaCapture:1;
        NSUInteger delegateWillStopPanoramaCapture:1;
        NSUInteger delegatePanoramaWillStartProcessing:1;
        NSUInteger delegatePanoramaDidStopProcessing:1;
        NSUInteger delegateCapturedPanorama:1;
        NSUInteger delegateVideoCaptureDidStart:1;
        NSUInteger delegateDidStopVideoCapture:1;
        NSUInteger delegateVideoCaptureDidStop:1;
        NSUInteger delegateWillStartAutofocus:1;
        NSUInteger delegateFocusDidStart:1;
        NSUInteger delegateFocusDidEnd:1;
        NSUInteger delegateFaceMetadataDidChange:1;
        NSUInteger delegateVideoZoomFactorDidChange:1;
        NSUInteger delegateTorchAvailabilityChanged:1;
        NSUInteger delegateHDRSuggestionChanged:1;
    } _cameraFlags;
    NSObject<OS_dispatch_queue> *_dispatchTimerQueue;
    NSObject<OS_dispatch_source> *_dispatchTimer;
    BOOL __previewPaused;
    BOOL __previewLayerEnabledForRenderer;
    BOOL __videoDataOutputEnabledForRenderer;
    BOOL _performingTimedCapture;
    BOOL _disableAllPreviewSuspensionDuringCapture;
    BOOL __atomicEffectsAvailable;
    BOOL __configuringCamera;
    BOOL __atomicModeChangeWaitingForPreviewStarted;
    BOOL __atomicModeChangeWaitingForConfigureSession;
    BOOL __wasStillImageStabilzationOnBeforeTimedCapture;
    id postSessionSetupBlock;
    PLCameraEffectsRenderer *_effectsRenderer;
    NSArray *_supportedCameraModes;
    NSObject<OS_dispatch_queue> *__effectFilterIndexQueue;
    NSDictionary *__effectFilterIndices;
    NSObject<OS_dispatch_queue> *__captureIsolationQueue;
    NSMutableArray *__currentFaceMetadata;
}

+ (instancetype)sharedInstance;
@property(readonly, nonatomic) NSMutableArray *_currentFaceMetadata; // @synthesize _currentFaceMetadata=__currentFaceMetadata;
@property(readonly, nonatomic) BOOL _wasStillImageStabilzationOnBeforeTimedCapture; // @synthesize _wasStillImageStabilzationOnBeforeTimedCapture=__wasStillImageStabilzationOnBeforeTimedCapture;
@property(getter=_isAtomicModeChangeWaitingForConfigureSession, setter=_setAtomicModeChangeWaitingForConfigureSession:) BOOL _atomicModeChangeWaitingForConfigureSession; // @synthesize _atomicModeChangeWaitingForConfigureSession=__atomicModeChangeWaitingForConfigureSession;
@property(getter=_isAtomicModeChangeWaitingForPreviewStarted, setter=_setAtomicModeChangeWaitingForPreviewStarted:) BOOL _atomicModeChangeWaitingForPreviewStarted; // @synthesize _atomicModeChangeWaitingForPreviewStarted=__atomicModeChangeWaitingForPreviewStarted;
@property(readonly) dispatch_queue_t _captureIsolationQueue; // @synthesize _captureIsolationQueue=__captureIsolationQueue;
@property(getter=_isConfiguringCamera, setter=_setConfiguringCamera:) BOOL _configuringCamera; // @synthesize _configuringCamera=__configuringCamera;
@property(retain, nonatomic, setter=_setEffectFilterIndices:) NSDictionary *_effectFilterIndices; // @synthesize _effectFilterIndices=__effectFilterIndices;
@property(readonly) dispatch_queue_t _effectFilterIndexQueue; // @synthesize _effectFilterIndexQueue=__effectFilterIndexQueue;
@property(setter=_setAtomicEffectsAvailable:) BOOL _atomicEffectsAvailable; // @synthesize _atomicEffectsAvailable=__atomicEffectsAvailable;
@property(nonatomic) BOOL disableAllPreviewSuspensionDuringCapture; // @synthesize disableAllPreviewSuspensionDuringCapture=_disableAllPreviewSuspensionDuringCapture;
- (void)_setPerformingTimedCapture:(BOOL)arg1;
@property(nonatomic) BOOL performingTimedCapture; // @synthesize performingTimedCapture=_performingTimedCapture;
- (void)_setSupportedCameraModes:(id)arg1;
@property(copy, nonatomic) NSArray *supportedCameraModes; // @synthesize supportedCameraModes=_supportedCameraModes;
- (void)_setEffectsRenderer:(id)arg1;
@property(retain) PLCameraEffectsRenderer *effectsRenderer; // @synthesize effectsRenderer=_effectsRenderer;
@property(nonatomic) int captureOrientation; // @synthesize captureOrientation=_captureOrientation;
@property(copy, nonatomic) id postSessionSetupBlock; // @synthesize postSessionSetupBlock;
@property(readonly, nonatomic) CGRect cleanAperture; // @synthesize cleanAperture=_cleanAperture;
@property(readonly, nonatomic) CGSize panoramaPreviewSize; // @synthesize panoramaPreviewSize=_panoramaPreviewSize;
@property(readonly, nonatomic) CGFloat panoramaPreviewScale; // @synthesize panoramaPreviewScale=_panoramaPreviewScale;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(readonly, nonatomic) AVCaptureStillImageOutput *imageOutput; // @synthesize imageOutput=_avCaptureOutputPhoto;
@property(nonatomic, readonly) AVCaptureOutput *currentOutput; // @synthesize currentOutput=_currentOutput;
@property(nonatomic, readonly) AVCaptureDeviceInput *currentInput; // @synthesize currentInput=_currentInput;
@property(nonatomic, readonly) AVCaptureDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
@property(readonly, nonatomic) AVCaptureSession *currentSession; // @synthesize currentSession=_avCaptureSession;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)cameraEffectsRenderer:(id)arg1 didFinishTransitionToShowGrid:(BOOL)arg2;
- (void)cameraEffectsRenderer:(id)arg1 didStartTransitionToShowGrid:(BOOL)arg2 animated:(BOOL)arg3;
- (void)cameraEffectsRenderer:(id)arg1 willTransitionToShowGrid:(BOOL)arg2;
- (void)cameraEffectsRenderer:(id)arg1 requestsVideoDataOutputEnabled:(BOOL)arg2;
- (void)cameraEffectsRenderer:(id)arg1 requestsPreviewLayerEnabled:(BOOL)arg2;
- (void)cameraEffectsRendererDidStartPreview:(id)arg1;
- (void)_updateEffectsVideoDataOutputEnabled;
@property(nonatomic, setter=_setVideoDataOutputEnabledForRenderer:) BOOL _videoDataOutputEnabledForRenderer; // @synthesize _videoDataOutputEnabledForRenderer=__videoDataOutputEnabledForRenderer;
- (void)_updatePreviewLayerEnabled;
@property(nonatomic, setter=_setPreviewLayerEnabledForRenderer:) BOOL _previewLayerEnabledForRenderer; // @synthesize _previewLayerEnabledForRenderer=__previewLayerEnabledForRenderer;
@property(nonatomic, getter=_isPreviewPaused, setter=_setPreviewPaused:) BOOL _previewPaused; // @synthesize _previewPaused=__previewPaused;
- (void)resumePreview;
- (void)pausePreview;
- (id)recentFaceMetadata;
- (void)finishTimedCapture;
- (void)continueTimedCapture;
- (void)startTimedCapture;
- (id)_mogulFormatFromDevice:(id)arg1;
- (double)mogulFrameRate;
- (double)currentMaxFrameDuration;
- (double)currentMinFrameDuration;
@property(nonatomic, setter=_setEffectsAvailable:) BOOL _effectsAvailable;
- (void)setEffectFilterIndices:(id)arg1 forceStateChange:(BOOL)arg2;
- (id)effectFilterIndices;
- (void)_notifyEffectFilterIndexChanged;
- (void)setEffectFilterIndex:(unsigned long long)arg1 forMode:(long long)arg2;
- (unsigned long long)_sanitizeEffectFilterIndex:(unsigned long long)arg1 forMode:(long long)arg2;
- (unsigned long long)effectFilterIndexForMode:(long long)arg1;
@property(readonly, nonatomic) NSArray *activeFilters;
- (unsigned long long)_activeFilterIndex;
- (void)_updateEffectsRendererFilterIndexForceStateChange:(BOOL)arg1 renderNotifyBlock:(id)arg2;
- (void)_updateEffectsRendererMirroring;
- (void)_updateSupportedCameraModes;
- (void)cancelVideoZoomRamp;
- (void)rampToVideoZoomFactor:(double)arg1 withRate:(CGFloat)arg2;
@property(nonatomic) double videoZoomFactor;
- (double)_limitZoomFactor:(double)arg1 forDevice:(id)arg2;
- (void)_setOrientationEventsEnabled:(BOOL)arg1;
@property(readonly, nonatomic) AVCaptureVideoOrientation cameraOrientation;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(CGFloat)arg3 y:(CGFloat)arg4 z:(CGFloat)arg5 eventType:(int)arg6;
- (void)postOrientationChangedNotification:(long long)arg1 force:(BOOL)arg2;
- (BOOL)supportsLiveEffects;
- (BOOL)supportsAvalancheForDevice:(long long)arg1;
- (void)_synchronizeHDRSettings;
- (BOOL)_isCountingHDREV0Captures;
- (BOOL)supportsPreviewDuringHDR;
- (BOOL)supportsHDRForDevice:(long long)arg1;
@property(readonly, nonatomic) BOOL supportsHDR;
@property(nonatomic, getter=isHDREnabled) BOOL HDREnabled; // @synthesize HDREnabled=_hdrEnabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)isTorchDisabled;
- (void)_updateTorchAvailability;
- (BOOL)isTorchOn;
- (BOOL)flashWillFire;
@property(nonatomic) PLFlashMode flashMode;
- (BOOL)hasFlash;
- (void)_setFlashMode:(long long)arg1 force:(BOOL)arg2;
- (void)_torchLevelChanged;
- (void)_flashStateChanged;
- (void)setFaceDetectionEnabled:(BOOL)arg1;
- (void)_setFaceDetectionEnabled:(BOOL)arg1 forCaptureDevice:(id)arg2 captureOutput:(id)arg3;
- (void)_faceMetadataDidChange:(id)arg1;
- (void)_faceRectangleChanged;
- (CGRect)faceRectangle;
- (BOOL)isFocusingOnFace;
- (void)_whiteBalanceCompleted;
- (void)_whiteBalanceStarted;
- (void)_exposureCompleted;
- (BOOL)isExposing;
- (void)_exposureStarted;
- (void)_focusHasChanged:(id)arg1;
- (void)_focusStarted;
- (void)_focusCompleted;
- (void)_lockedFocusOperationFinished;
- (void)_autofocusOperationFinished;
- (void)_focusOperationFinished;
- (void)_commonFocusFinished;
- (void)setFocusDisabled:(BOOL)arg1;
- (BOOL)isFocusing;
- (void)lockFocusForTimedCapture;
- (void)lockFocusForRecording;
- (void)lockFocusAndExposureForPano;
- (void)userInitiatedLockFocus;
- (void)_lockFocus:(BOOL)arg1 lockExposure:(BOOL)arg2 lockWhiteBalance:(BOOL)arg3;
- (BOOL)isExposureLockSupported;
- (BOOL)isFocusLockSupported;
- (BOOL)canLockFocus;
- (void)_cancelDelayedFocusRequests;
- (void)performAutofocusAfterCapture;
- (void)_autofocusAfterCapture;
- (void)autofocus;
- (void)_autofocus:(BOOL)arg1 autoExpose:(BOOL)arg2;
- (void)_pptTestSetAutofocusDisabled:(BOOL)arg1;
- (void)restartAutoFocus;
- (long long)currentFocusMode;
- (void)smoothFocusAtCenter;
- (void)focusAtAdjustedPoint:(CGPoint)arg1;
- (BOOL)canFocusAtPoint;
- (BOOL)isFocusAllowed;
- (void)_panoShouldEnd;
- (void)_cleanupPanoramaOnSessionQueue:(BOOL)arg1;
- (void)_setupPanoramaForDevice:(id)arg1 output:(id)arg2 options:(out const CFDictionaryRef*)arg3;
- (void)_panoramaDidReceiveErrorNotificationString:(CFStringRef)arg1;
- (void)_panoramaDidReceiveWarningNotificationString:(CFStringRef)arg1;
- (void)_panoramaDidReceiveIssueWithPanoramaString:(CFStringRef)arg1;
- (void)_panoramaDidReceiveStatusNotificationString:(CFStringRef)arg1;
- (void)setPanoramaCaptureDirection:(int)arg1;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(CMSampleBufferRef)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(CMSampleBufferRef)arg2 fromConnection:(id)arg3;
- (void)_processSampleBuffer:(CMSampleBufferRef)arg1;
- (void)panoramaProcessorOutputCallbackWithStatus:(int)arg1 buffer:(CMSampleBufferRef)arg2;
- (void)_panoramaDidStop;
- (void)stopPanoramaCapture;
- (void)startPanoramaCapture;
- (void)setPanoramaImageQueueLayer:(id)arg1;
- (BOOL)isCapturingPanorama;
- (BOOL)canCapturePanorama;
- (BOOL)supportsPanorama;
- (void)setVideoCaptureMaximumDuration:(double)arg1;
- (void)setVideoCaptureQuality:(int)arg1;
- (id)videoCapturePath;
- (void)stopVideoCapture;
- (double)minimumVideoCaptureDuration;
- (void)startVideoCapture;
- (void)_setVideoCapturePath:(id)arg1;
- (id)_videoMetadataArrayIncludingSensitiveProperties:(BOOL)arg1;
- (void)_setOrientation;
- (void)_setOrientationForConnection:(id)arg1;
- (BOOL)canCaptureVideo;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)_movieFileRecordingCompleted:(id)arg1;
- (void)_verifyVideoConsolidationForVideoAtPath:(id)arg1 outUserInfo:(id *)arg2;
- (void)_removeVideoCaptureFileAndDirectoryAtPath:(id)arg1;
- (BOOL)isCapturingVideo;
- (IOSurfaceRef)_newFilteredSurfaceFromSurface:(IOSurfaceRef)arg1 filters:(id)arg2;
- (void)capturePhoto;
- (BOOL)imageWriterQueueIsAvailable;
- (BOOL)canCapturePhotoDuringRecording;
- (BOOL)canCapturePhoto;
- (void)_didTakePhoto;
- (void)_willTakePhoto;
- (void)_capturedPhotoWithDictionary:(id)arg1 error:(id)arg2;
- (void)_processCapturedPhotoWithDictionary:(id)arg1 error:(id)arg2;
- (BOOL)_sanityCheckSessionCanCaptureWithOutput:(id)arg1;
- (void)_sessionRuntimeErrored:(id)arg1;
- (void)_interruptionEnded:(id)arg1;
- (void)_wasInterrupted:(id)arg1;
- (void)_resetIdleTimer;
- (void)_delayIdleTimerByTimeInterval:(double)arg1;
- (void)_serverDied:(id)arg1;
- (void)_recoverFromServerError;
- (void)stopPreview;
- (void)_previewStarted;
- (void)_clearPreviewLayer;
- (BOOL)isPreviewMirrored;
@property(nonatomic) int previewOrientation;
- (void)startPreview;
- (void)startPreview:(id)arg1;
- (void)_startPreview:(id)arg1;
- (void)_startPreviewWithCameraDevice:(long long)arg1 cameraMode:(long long)arg2 effectFilterIndices:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)_didSendPreviewStartedCallbackToEmptyDelegate;
- (void)_sessionStopped:(id)arg1;
- (void)_sessionStarted:(id)arg1;
- (void)_deviceStarted:(id)arg1;
- (void)_tearDownCamera;
- (void)_setDelaySuspend:(BOOL)arg1;
- (void)_forceDelaySuspendTimeout;
- (void)_teardownDelaySuspendTimer;
- (void)_destroyCamera;
- (BOOL)_setupCamera;
- (id)_currentVideoConnection;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_debug_checkIris;
- (void)_debug_cancelWaitForIris;
- (void)_debug_waitForIrisToOpen;
- (id)_debug_dispatchTimerQueue;
- (void)_debug_teardownDispatchTimer;
- (void)_jankyPreviewStartedWorkaround;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationSuspended:(id)arg1;
- (double)maximumZoomFactorForDevice:(long long)arg1;
- (double)minimumZoomFactorForDevice:(long long)arg1;
- (void)_unlockCurrentDeviceForConfiguration;
- (BOOL)_lockCurrentDeviceForConfiguration;
@property(nonatomic) BOOL isCameraApp;
- (void)_setLocationEnabled:(BOOL)arg1;
- (BOOL)_modeUsesCompassHeading;
- (BOOL)_isVideoMode:(long long)arg1;
- (void)_inputPortFormatDescriptionDidChange:(id)arg1;
@property(nonatomic) BOOL convertSampleBufferToJPEG;
@property(nonatomic) UIImagePickerControllerCameraDevice cameraDevice;
- (BOOL)hasRearCamera;
- (BOOL)hasFrontCamera;
- (void)_setDefaultPrewarmDate:(id)arg1;
@property(nonatomic, getter=_isModeChangeWaitingForConfigureSession, setter=_setModeChangeWaitingForConfigureSession:) BOOL _modeChangeWaitingForConfigureSession;
@property(nonatomic, getter=_isModeChangeWaitingForPreviewStarted, setter=_setModeChangeWaitingForPreviewStarted:) BOOL _modeChangeWaitingForPreviewStarted;
- (void)_notifyControllerModeDidChange;
- (void)_setCameraMode:(long long)arg1 cameraDevice:(long long)arg2;
@property(nonatomic) long long cameraMode;
- (id)_videoModeSessionPreset;
- (BOOL)_configureSessionWithCameraMode:(long long)arg1 cameraDevice:(long long)arg2;
- (BOOL)_safeSetCameraMode:(long long)arg1 cameraDevice:(long long)arg2;
- (BOOL)supportsVideoCapture;
- (BOOL)isChangingModes;
- (void)executeBlockOnMainQueue:(id)arg1;
- (void)enqueueBlockOnMainQueue:(id)arg1;
- (void)enqueueBlockInCaptureSessionQueue:(id)arg1;
- (BOOL)isReady;
- (void)_imageWriterQueueAvailabilityChanged;
- (void)releaseIOSurface;
- (void)captureIOSurface;
- (BOOL)hasInheritedForegroundState;
- (BOOL)inCall;
- (void)_inCallStatusChanged:(BOOL)arg1;
- (void)_callStateDidChange:(id)arg1;
- (void)_updateCallStatus;
- (void)dealloc;
- (id)init;

@end

