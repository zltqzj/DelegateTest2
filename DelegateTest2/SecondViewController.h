//
//  SecondViewController.h
//  DelegateTest2
//
//  Created by Sinosoft on 9/13/13.
//  Copyright (c) 2013 com.Sinosoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GetContent.h"
@interface SecondViewController : UIViewController

@property(strong,nonatomic) IBOutlet UITextField* textField;

@property(assign,nonatomic) id<GetContent> delegate;

-(IBAction)back:(id)sender;

@end
