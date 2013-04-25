//
//  NSCalenderExample.h
//  notesForObjectiveC
//
//  Created by Ibokan on 13-4-25.
//  Copyright (c) 2013年 zht. All rights reserved.
//

#ifndef notesForObjectiveC_NSCalenderExample_h
#define notesForObjectiveC_NSCalenderExample_h

void nSCalenderExample () {
    //使用日历对象对绝对日期与date components（包括年，月，日，时，分，秒）进行转换
    NSCalendar * currentCalender = [NSCalendar currentCalendar];
    NSDateComponents *components = [[NSDateComponents alloc]init];
    [components setYear:2008];
    [components setMonth:8];
    [components setDay:8];
    [components setHour:20];
    [components setMinute:8];
    [components setSecond:8];
    NSDate *olympic2008 = [currentCalender dateFromComponents:components];
    NSLog(@"%@",olympic2008);
    //[components release];
    
    //获取系统当前日期和时间
    NSDate *today = [NSDate date];
    //获取格里高利历对象(格里高利历 和公元是同义词)
    NSCalendar *gregorian = [[NSCalendar alloc] initWithCalendarIdentifier:NSGregorianCalendar];
    //将一个日期对象解析到相应的date components
    NSDateComponents *weekdayComponents = [gregorian components:(NSDayCalendarUnit | NSWeekdayCalendarUnit) fromDate:today];
    
    NSInteger day = [weekdayComponents day];
    NSInteger weekday = [weekdayComponents weekday];
    NSLog(@"day:%ld",day);
    NSLog(@"weekday:%ld",weekday);
    //[gregorian release];
    NSCalendar *chineseCalendar = [[NSCalendar alloc]initWithCalendarIdentifier:NSChineseCalendar];
    NSDateComponents * c = [[NSDateComponents alloc]init];
    [c setYear:2013];
    [c setMonth:1];
    [c setDay: 31];
    
    NSDate * nolijintian = [chineseCalendar dateFromComponents:c];
    NSLog(@"%@",nolijintian);
//            [c release];
    NSCalendar *testC =  [NSCalendar currentCalendar];
    NSDate *testD = [testC dateFromComponents:c];
    NSLog(@"%@", testD);
}

#endif
