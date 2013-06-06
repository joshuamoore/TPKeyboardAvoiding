//
//  TPKeyboardAvoidingTableView.h
//
//  Created by Michael Tyson on 11/04/2011.
//  Copyright 2011 A Tasty Pixel. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol TPKeyboardAvoidingTableView <NSObject>

@end

@interface TPKeyboardAvoidingTableView : UITableView
- (BOOL)focusNextTextField;
- (void)scrollToActiveTextField;

//@property (assign) IBOutlet id delegate;

@end