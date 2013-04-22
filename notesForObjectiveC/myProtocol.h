//
//  myProtocol.h
//  notesForObjectiveC
//
//  Created by Ibokan on 13-4-22.
//  Copyright (c) 2013年 zht. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol myProtocol <NSObject>

@required
- (int)addx:(int)x andY:(int)y;

@optional//可不实现

@end
