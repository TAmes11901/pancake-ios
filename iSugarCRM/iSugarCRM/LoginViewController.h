//
//  LoginViewController.h
//  iSugarCRM
//
//  Created by pramati on 1/3/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginViewController : UIViewController <UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;
- (IBAction)onLoginClicked:(id)sender;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *spinner;

@end
