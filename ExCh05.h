//
//  ExCh05.h
//  notesForObjectiveC
//
//  Created by Ibokan on 13-4-15.
//  Copyright (c) 2013年 zht. All rights reserved.
//

/*
 1 现有如下定义的字符串： NSMutableString * str=@“iphoneAndroid”,能不能对该字符串进行修改，如果能，请输出删除Android后的新字符串。
 2 求字符串“158”和“39”按十进制数值做差后的结果以字符串形式输出
 3 取出符串“123-456-789-000”中的数字部分，组成一个新的字符串输出，（提示：可变字符串；返回数组）
 4 放四个十进制三位数到一个数组中，然后按从小到大排序后组成一个新的数组
*/

#ifndef notesForObjectiveC_ExCh05_h
#define notesForObjectiveC_ExCh05_h

#import <Foundation/Foundation.h>
#import "TestClass.h"

void quickEnumerate(NSArray *arr);
void enumerate(NSArray *arr);

void quickEnumerateDictionary(NSDictionary *dic);

void ExCh05 () {
    
    NSArray * arr = [NSArray arrayWithObjects:@"魅族11", @"小米", @"36000000", nil];
    
    quickEnumerate(arr);
    enumerate(arr);
    
    NSMutableArray *mArr = [NSMutableArray arrayWithArray:arr];
    [mArr addObject:@"罗锤子"];
    for (int i = 0; i < 5; i++) {
        [mArr insertObject:[NSString stringWithFormat:@"小米%d", i] atIndex:i+1];
    }
    [mArr removeLastObject];
    [mArr removeObjectAtIndex:4];
    
    quickEnumerate(mArr);
    enumerate(mArr);
    
    [mArr removeAllObjects];
    for (int i = 10; i > 0; i--) {
        TestClass *testClass = [TestClass new];
        [testClass setLength:i + 10];
        [testClass setName:[NSString stringWithFormat:@"num %d", i]];
        [mArr addObject:testClass];
    }
        
#pragma mark -
#pragma mark Sort NSMutableArray
    NSSortDescriptor *sd = [NSSortDescriptor sortDescriptorWithKey:@"name" ascending:NO];
    
    //[mArr sortUsingDescriptors:[NSArray arrayWithObject:sd]];
    [mArr sortUsingSelector:@selector(compareInteger:)];
    
    quickEnumerate(mArr);
    
    
#pragma mark -
    
    NSDictionary *dic = [NSDictionary dictionaryWithObjectsAndKeys:@"name1", @"name1s", @"name2", @"name2s", @"name3", @"name3s" ,nil ];
    quickEnumerateDictionary(dic);
    
    //1 现有如下定义的字符串： NSMutableString * str=@“iphoneAndroid”,能不能对该字符串进行修改，如果能，请输出删除Android后的新字符串。
    NSMutableString *str = [NSMutableString stringWithString:@"iPhoneAndroid"];
    NSString *strToBeDeleted = @"Android";
    NSLog(@"%@", str);
    [str deleteCharactersInRange:[str rangeOfString:strToBeDeleted]];
    NSLog(@"delete Android %@", str);
    
    //2 求字符串“158”和“39”按十进制数值做差后的结果以字符串形式输出
    NSString *numString1 = @"158";
    NSString *numString2 = @"39";
    NSString *numResult = [NSString stringWithFormat:@"%d", [numString1 intValue] + [numString2 intValue]];
    NSLog(@"158 + 39 = %d", [numResult intValue]);
    
    //3 取出符串“123-456-789-000”中的数字部分，组成一个新的字符串输出，（提示：可变字符串；返回数组）
    NSString *stringToBeCut = [NSMutableString stringWithString:@"123-456-789-000"];
    NSArray *arrayResult = [stringToBeCut componentsSeparatedByString:@"-"];
    NSMutableString *resultString = [NSMutableString stringWithCapacity:10];
    for (id obj in arrayResult) {
        [resultString appendString:obj];
    }
    NSLog(@"make new string: %@", resultString);
    
    //4 放四个十进制三位数到一个数组中，然后按从小到大排序后组成一个新的数组
    //NSArray *numArr = [NSArray arrayWithObjects:[NSNumber numberWithInt:123], [NSNumber numberWithInt:234], [NSNumber numberWithInt:345], [NSNumber numberWithInt:456]];
    
    
}

//array
void quickEnumerate(NSArray *arr) {
    NSLog(@"quickEnumatator");
    for (id obj in arr) {
        NSLog(@"the objs in arr %@", obj);
    }
}

void enumerate(NSArray *arr) {
    NSLog(@"enumerator");
    NSEnumerator *enu = [arr objectEnumerator];
    id idForEnumerate;
    while (idForEnumerate = [enu nextObject]) {
        NSLog(@"the objs in arr %@", idForEnumerate);
    }
}

//dictionary
void quickEnumerateDictionary(NSDictionary *dic) {
    NSLog(@"quickEnumatatorDictionary");
    for (id obj in [dic allKeys]) {
        NSLog(@"key %@ with %@", obj, [dic objectForKey:obj]);
    }
}
#endif
