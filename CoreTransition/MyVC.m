//
//  MyVC.m
//  CoreTransition
//
//  Created by 成林 on 15/5/26.
//  Copyright (c) 2015年 冯成林. All rights reserved.
//

#import "MyVC.h"
#import "UINavigationController+RadialTransaction.h"


@interface MyVC ()

@end

@implementation MyVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event{
    [self.navigationController radialPopViewControllerWithDuration:1.0f withStartFrame:self.popFrame comlititionBlock:nil];
}
@end
