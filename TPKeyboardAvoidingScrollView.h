//
//  TPKeyboardAvoidingScrollView.h
//
//  Created by Michael Tyson on 11/04/2011.
//  Copyright 2011 A Tasty Pixel. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol TPKeyboardAvoidingScrollViewDelegate <NSObject>
    -(void)shouldSubmitFromKeyboard;
@end

@interface TPKeyboardAvoidingScrollView : UIScrollView <UITextFieldDelegate>

@property (assign) IBOutlet id <TPKeyboardAvoidingScrollViewDelegate> keyboardAvoidingDelegate;

- (BOOL)focusNextTextField;
- (void)scrollToActiveTextField;

@end