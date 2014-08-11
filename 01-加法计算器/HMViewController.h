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
 
 IBAction & IBOutlet
 
 IB: Interface Builder
 
 1> IBAction : 如果需要监听按钮的点击方法，使用IBAction，就可以与IB进行连线，连线之后，在点击按钮时，就会执行相应的方法
 2> IBOutlet : 如果需要获得/修改界面上控件的属性，使用IBOutlet，就可以与IB进行连线
 
 */
@interface HMViewController : UIViewController

@property (nonatomic, weak) IBOutlet UITextField *num1;
@property (nonatomic, weak) IBOutlet UITextField *num2;

@property (nonatomic, weak) IBOutlet UILabel *resultLabel;

/** 计算 */
- (IBAction)compute;

@end
