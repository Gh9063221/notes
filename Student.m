//
//  Student.m
//  notesForObjectiveC
//
//  Created by Ibokan on 13-4-22.
//  Copyright (c) 2013年 zht. All rights reserved.
//

#import "Student.h"
#import "PersonProtocol.h"


@implementation Student

- (void)sayHi {
    NSLog(@"im an extension method of Student Class");
}

- (Student *)init {
    if (self = [super init]) {
        [self sayHi];
        self.name = [NSString stringWithFormat:@"student"];
        self.age = 10;
    }
    return self;
}

- (void)work {
    NSLog(@"student %@ is working", self.name);
}

@end
