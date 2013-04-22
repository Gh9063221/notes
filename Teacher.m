//
//  Teacher.m
//  notesForObjectiveC
//
//  Created by Ibokan on 13-4-22.
//  Copyright (c) 2013年 zht. All rights reserved.
//

#import "Teacher.h"

@implementation Teacher

- (void) work {
    NSLog(@"teacher %@ is working", self.name);
}

- (Teacher *)init {
    if (self = [super init]) {
        self.name = [NSString stringWithFormat:@"teacher"];
        self.age = 15;
    }
    return self;
}

@end
