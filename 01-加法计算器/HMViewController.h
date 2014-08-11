//
//  HMViewController.h
//  01-加法计算器
//
//  Created by apple on 14-8-11.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 用来声明属性和方法
 */
@interface HMViewController : UIViewController

@property (nonatomic, weak) IBOutlet UITextField *num1;
@property (nonatomic, weak) IBOutlet UITextField *num2;

@property (nonatomic, weak) IBOutlet UILabel *resultLabel;

/** 计算 */
- (IBAction)compute;

@end
