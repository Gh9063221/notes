//
//  testClass.h
//  notesForObjectiveC
//
//  Created by Ibokan on 13-4-15.
//  Copyright (c) 2013年 zht. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "myProtocol.h"

@interface TestClass : NSObject <myProtocol>

@property (assign, nonatomic) int length;
@property (retain, nonatomic) NSString *name;

- (NSComparisonResult)compareInteger:(id)otherObject;

@end
