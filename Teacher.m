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

- (Teacher *)initWithStudent:(Student *)astudent {
    if (self = [super init]) {
        _student = astudent;
        [_student addObserver:self forKeyPath:@"score" options:(NSKeyValueObservingOptionNew | NSKeyValueObservingOptionOld ) context:nil];
    }
    return self;
}

- (void)observeValueForKeyPath:(NSString *)keyPath
                      ofObject:(id)object
                        change:(NSDictionary *)change
                       context:(void *)context {
    if ([keyPath isEqualToString:@"score"]) {
        NSNumber *oldScore = [change objectForKey:NSKeyValueChangeOldKey];
        NSNumber *newScore = [change objectForKey:NSKeyValueChangeNewKey];
        if ([oldScore intValue]  != 0 &&
            [newScore intValue] > [oldScore intValue]) {
            NSLog(@"improved");
        }
        else if ([oldScore intValue] != 0 &&
                 [newScore intValue] < [oldScore intValue])
            NSLog(@"desend");
    }
}

- (void)addObserver:(NSObject *)observer forKeyPath:(NSString *)keyPath options:(NSKeyValueObservingOptions)options context:(void *)context {
    
}

- (void)dealloc {
    [_student removeObserver:self forKeyPath:@"score"];
}

@end
