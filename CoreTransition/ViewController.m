//
//  ViewController.m
//  CoreTransition
//
//  Created by 成林 on 15/5/26.
//  Copyright (c) 2015年 冯成林. All rights reserved.
//

#import "ViewController.h"
#import "MyVC.h"
#import "CALayer+Transition.h"

@interface ViewController ()

@property (nonatomic,strong) UIButton *btn;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    [self.btn addTarget:self action:@selector(btnClick:) forControlEvents:UIControlEventTouchUpInside];
    
}



-(void)btnClick:(UIButton *)btn{
    
    
    MyVC *myvc = [[MyVC alloc] init];
    
    myvc.popFrame = self.btn.frame;

}



-(UIButton *)btn{
    
    if(_btn == nil){
        
        _btn = [UIButton buttonWithType:UIButtonTypeCustom];
        _btn.frame = CGRectMake(self.view.center.x-40, self.view.center.y +30, 80, 80);
        _btn.backgroundColor = [UIColor brownColor];
        _btn.layer.cornerRadius = 40;
        [self.view addSubview:_btn];
    }
    
    return _btn;
}



-(void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event{
    
    
    MyVC *vc = [[MyVC alloc] init];
    
   
   [self.navigationController pushViewController:vc animated:NO];
        
    [self.navigationController.view transitionWithAnimType:TransitionAnimTypeRamdom subType:TransitionSubtypeRamdom curve:TransitionCurveRamdom duration:2];
}

@end
