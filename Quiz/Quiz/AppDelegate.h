//
//  AppDelegate.h
//  Quiz
//
//  Created by John Maddux on 9/1/13.
//  Copyright (c) 2013 John Maddux. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    int currentQuestionIndex;
    
    // The model objects
    NSMutableArray *questions;
    NSMutableArray *answers;
    
    // The view objects - don't worry about thus IBOutlet macro
    IBOutlet UILabel *questionField;
    IBOutlet UILabel *answerField;
}
@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) ViewController *viewController;

- (IBAction)showQuestion:(id)sender;
- (IBAction)showAnswer:(id)sender;

@end
