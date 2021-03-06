/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIView.h>

@class NSArray, UIImageView, NSMutableArray, UIToolbar;

@interface UIButtonBarCustomizeView : UIView {
	UIToolbar* _buttonBar;
	NSArray* _availableButtons;
	NSArray* _currentButtons;
	NSMutableArray* _fixedButtons;
	UIView* _draggingView;
	UIImageView* _ghostView;
	UIImageView* _replacementGlow;
	UIView* _replaceButton;
	CGPoint _startPoint;
}
-(void)dealloc;
-(void)setButtonBar:(id)bar currentButtons:(id)buttons availableButtons:(id)buttons3;
-(void)layoutSubviews;
-(void)adjustDragImage:(GSEventRef)image;
-(void)mouseDown:(GSEventRef)down;
-(id)buttonAtEvent:(GSEventRef)event;
-(void)mouseDragged:(GSEventRef)dragged;
-(void)mouseUp:(GSEventRef)up;
-(BOOL)canHandleSwipes;
-(void)buttonBarMouseDown:(GSEventRef)down;
-(void)buttonBarMouseDragged:(GSEventRef)dragged;
-(void)buttonBarMouseUp:(GSEventRef)up;
-(void)_finishCustomizeMouseUpChangeAnimation:(id)animation finished:(id)finished context:(id)context;
@end

