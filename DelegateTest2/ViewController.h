//
//  ViewController.h
//  DelegateTest2
//
//  Created by Sinosoft on 9/13/13.
//  Copyright (c) 2013 com.Sinosoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SecondViewController.h"
#import "GetContent.h"
@interface ViewController : UIViewController<GetContent>

@property(strong,nonatomic) IBOutlet UILabel* label;
 

-(IBAction)jump:(id)sender;

@end
