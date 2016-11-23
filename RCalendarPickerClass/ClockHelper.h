//
//  ClockHelper.h
//  RCalendarPicker
//
//  Created by roycms on 2016/11/23.
//  Copyright © 2016年 roycms. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface ClockHelper : NSObject
//三个点A、B、C，计算ㄥABC
+ (CGFloat)getAnglesWithThreePoint:(CGPoint)pointA
                            pointB:(CGPoint)pointB
                            pointC:(CGPoint)pointC;
//时间转角度 WithHour 整点
+ (CGFloat)getAnglesWithHours:(CGFloat)hours;
//时间转角度 WithHour 整点+ 分钟偏移
+ (CGFloat)getAnglesWithHoursAndMinutes:(CGFloat)hours minutes:(CGFloat)minutes;
//时间转角度 WithMinutes
+ (CGFloat)getAnglesWithMinutes:(CGFloat)minutes;
//根据角度换算成 小时时间
+ (CGFloat)getHoursWithAngles:(CGFloat)angle;

//根据角度换算成 分钟时间
+ (CGFloat)getMinutesWithAngles:(CGFloat)angle;
+ (CGPoint)calculateTextPositonWithArcCenter:(CGPoint)center Angle:(CGFloat)angel;
@end