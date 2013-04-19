//
//  testClass.m
//  notesForObjectiveC
//
//  Created by Ibokan on 13-4-15.
//  Copyright (c) 2013年 zht. All rights reserved.
//

#import "TestClass.h"

@implementation TestClass

- (NSString *) description {
    return [NSString stringWithFormat:@"name: %@, length: %d", _name, _length];
}

//使用指定选择器（自定义方法）进行排序（sortUsingSelector:@selector(方法名:)）
//注意：需要为要排序的对象（放入数组的对象）的类添加一个排序方法，方法名可以自定义，然后有一个id形式的参数，返回值要为NSComparisonResult类型
- (NSComparisonResult)compareInteger:(id)otherObject {
    NSComparisonResult result;
    if (self.length < [otherObject length]) {
        result = NSOrderedAscending;
    }
    else
        if (self.length > [otherObject length]) {
        result = NSOrderedDescending;
    }
    else {
        result = NSOrderedSame;
    }
    return result;
}

@end
