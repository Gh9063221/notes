//
//  NSdateExample.h
//  notesForObjectiveC
//
//  Created by Ibokan on 13-4-25.
//  Copyright (c) 2013年 zht. All rights reserved.
//

#ifndef notesForObjectiveC_NSdateExample_h
#define notesForObjectiveC_NSdateExample_h

void nSdateExample () {
    //获取当前的日期和时间
    NSDate *now = [NSDate date];
    NSLog(@"now is %@",now);
    NSDate *alsoNow = [[NSDate alloc] init];
    NSLog(@"alsoNow is %@",alsoNow);
//    [alsoNow release];
    //获取明天的日期和时间
    NSDate *tomorrow = [[NSDate alloc] initWithTimeIntervalSinceNow:24 * 60 * 60];
    NSLog(@"tomorrow is %@",tomorrow);
    //获取昨天的日期和时间
    NSDate *yesterday = [[NSDate alloc] initWithTimeIntervalSinceNow:-1 * 24 * 60 * 60];
    NSLog(@"yesterday is %@",yesterday);
    NSDate *yesterday2 = [NSDate dateWithTimeIntervalSinceNow:-1 * 24 * 60 * 60];
    NSLog(@"yesterday2 is %@",yesterday2);
//    [tomorrow release];
//   [yesterday release];
    //获取一小时以后的日期和时间
    NSDate *anHourAfter = [now dateByAddingTimeInterval: 3600];
    NSLog(@"anHourAfter is %@",anHourAfter);
    //获取一小时以前的日期和时间
    NSDate *anHourAgo = [now dateByAddingTimeInterval:-3600];
    NSLog(@"anHourAgo is %@",anHourAgo);
    NSDate *anHourAgo2 = [NSDate dateWithTimeIntervalSinceNow:-3600];
    NSLog(@"anHourAgo2 is %@",anHourAgo2);
    //获取两个时间的间隔
    NSTimeInterval timeBetween = [now timeIntervalSinceDate:anHourAgo];
    NSLog(@"timeBetween:%f",timeBetween);
    //比较两个时间
    NSDate *rst1 = [now laterDate:anHourAgo];
    NSDate *rst2 = [now earlierDate:anHourAgo];
    NSComparisonResult rst3 = [now compare:anHourAgo];
    NSLog(@"%@ %@ %ld",rst1,rst2,rst3);
    
    NSTimeZone *timeZone = [NSTimeZone timeZoneWithName:@"Asia/Shanghai"];
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setTimeZone:timeZone];
    [formatter setDateFormat:@"yyyy年MM月dd日 HH:mm:ss"];
    NSLog(@"111 %@", [formatter stringFromDate:now]);
}

#endif
