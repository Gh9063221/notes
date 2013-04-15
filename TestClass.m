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

@end
