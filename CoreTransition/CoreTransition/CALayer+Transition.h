//
//  CALayer+Transition.h
//  Carpenter
//
//  Created by 冯成林 on 15/4/23.
//  Copyright (c) 2015年 冯成林. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#import <UIKit/UIKit.h>


/*
 *  动画类型
 */
typedef enum{
    
    //水波
    TransitionAnimTypeRippleEffect = 0,
    
    //吸走
    TransitionAnimTypeSuckEffect,
    
    //翻开书本
    TransitionAnimTypePageCurl,
    
    //正反翻转
    TransitionAnimTypeOglFlip,
    
    //正方体
    TransitionAnimTypeCube,
    
    //推开
    TransitionAnimTypeReveal,
    
    //合上书本
    TransitionAnimTypePageUnCurl,
    
    //溶解
    TransitionAnimTypePush,
    
    //溶解
    TransitionAnimTypeCrossDissolve,
    
    //淡入淡出
    TransitionAnimTypeFade,
    
    //移入
    TransitionAnimTypeMoveIn,
    
    //随机
    TransitionAnimTypeRamdom,
    
}TransitionAnimType;




/*
 *  动画方向
 */
typedef enum{
    
    //从上
    TransitionSubtypeTop = 0,
    
    //从左
    TransitionSubtypeLeft,
    
    //从下
    TransitionSubtypeBottom,
    
    //从右
    TransitionSubtypeRight,
    
    //随机
    TransitionSubtypeRamdom,
    
}TransitionSubType;


/*
 *  动画曲线
 */
typedef enum {
    
    //默认
    TransitionCurveDefault = 0,
    
    //缓进
    TransitionCurveEaseIn,
    
    //缓出
    TransitionCurveEaseOut,
    
    //缓进缓出
    TransitionCurveEaseInEaseOut,
    
    //线性
    TransitionCurveLinear,
    
    //随机
    TransitionCurveRamdom,
    
}TransitionCurve;



@interface CALayer (Transition)






/**
 *  转场动画
 *
 *  @param animType 转场动画类型
 *  @param subtype  转动动画方向
 *  @param curve    转动动画曲线
 *  @param duration 转动动画时长
 *
 *  @return 转场动画实例
 */
-(CATransition *)transitionWithAnimType:(TransitionAnimType)animType subType:(TransitionSubType)subType curve:(TransitionCurve)curve duration:(CGFloat)duration;

@end






@interface UIView (Transition)

-(void)transitionWithAnimType:(TransitionAnimType)animType subType:(TransitionSubType)subType curve:(TransitionCurve)curve duration:(CGFloat)duration;


@end

