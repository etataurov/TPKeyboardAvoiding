//
//  UIScrollView+TPKeyboardAvoidingAdditions.h
//  TPKeyboardAvoiding
//
//  Created by Michael Tyson on 30/09/2013.
//  Copyright 2015 A Tasty Pixel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TPKeyboardAvoidingConfig : NSObject
    @property (nonatomic, assign) BOOL    useMinimumPadding;
    @property (nonatomic, assign) CGFloat minimumScrollOffsetPadding;
@end

@interface UIScrollView (TPKeyboardAvoidingAdditions)
- (BOOL)TPKeyboardAvoiding_focusNextTextField;
- (void)TPKeyboardAvoiding_scrollToActiveTextField;
- (TPKeyboardAvoidingConfig*)keyboardAvoidingConfig;

- (void)TPKeyboardAvoiding_keyboardWillShow:(NSNotification*)notification;
- (void)TPKeyboardAvoiding_keyboardWillHide:(NSNotification*)notification;
- (void)TPKeyboardAvoiding_updateContentInset;
- (void)TPKeyboardAvoiding_updateFromContentSizeChange;
- (void)TPKeyboardAvoiding_assignTextDelegateForViewsBeneathView:(UIView*)view;
- (UIView*)TPKeyboardAvoiding_findFirstResponderBeneathView:(UIView*)view;
-(CGSize)TPKeyboardAvoiding_calculatedContentSizeFromSubviewFrames;
@end
