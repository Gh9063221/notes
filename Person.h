//
//  Persion.h
//  notesForObjectiveC
//
//  Created by Ibokan on 13-4-22.
//  Copyright (c) 2013年 zht. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject
/*
 已知同为Person类子类的Student和Teacher两个类，编写协议WorkingPartner要求这两个类遵循之并实现work方法
 在主函数中实现将多个学生与老师对象放在同一个数组中，逐个取出数组的各个元素，并将其转换为WorkingPartner类型，再执行其work方法
 */

@property (retain, nonatomic)NSString *name;
@property (assign, nonatomic)int age;

@end
