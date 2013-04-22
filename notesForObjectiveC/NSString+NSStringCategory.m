//
//  NSString+NSStringCategory.m
//  notesForObjectiveC
//
//  Created by Ibokan on 13-4-19.
//  Copyright (c) 2013年 zht. All rights reserved.
//

#import "NSString+NSStringCategory.h"

@implementation NSString (NSStringCategory)

- (NSNumber *)lengthOfNumber {
    [self testExtension];
    
    return [NSNumber numberWithLong:[self length]];
}

- (void)testExtension {
    NSLog(@"testExtension");
}

@end
