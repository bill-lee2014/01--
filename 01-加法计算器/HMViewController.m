//
//  HMViewController.m
//  01-加法计算器
//
//  Created by apple on 14-8-11.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import "HMViewController.h"

@interface HMViewController ()

@end

@implementation HMViewController

/** 视图加载完成会被执行 */
- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    NSLog(@"=========");
}

- (void)compute
{
    NSLog(@"compute");
    // 1. 取得界面上"两个文本框"的内容
    NSString *n1 = self.num1.text;
    NSString *n2 = self.num2.text;
    
    NSLog(@"%@ ==== %@", n1, n2);
    
    // 2. 将内容相加
    int result = n1.intValue + n2.intValue;
    
    // 3. 显示结果，显示在"右侧的标签"中
    self.resultLabel.text = [NSString stringWithFormat:@"%d", result];
    
    // 4. 关闭键盘
    // 在所有的面相对象语言中，有一个原则：谁申请，谁释放！
    // 对应键盘就应该，谁打开，谁关闭！
    // FirstResponder：光标所在的文本框
    // resign: 辞去
//    [self.num1 resignFirstResponder];
//    [self.num2 resignFirstResponder];
    // 让视图关闭键盘，无论现在谁是第一响应者
    // 参数表示是否强行关闭键盘，始终使用YES作为参数即可。
    [self.view endEditing:YES];
}

@end
