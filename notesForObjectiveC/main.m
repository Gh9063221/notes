//
//  main.m
//  notesForObjectiveC
//
//  Created by Ibokan on 13-4-15.
//  Copyright (c) 2013年 zht. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ExCh05.h"
#import "unicode.h"
#import "CodeBlock.h"
#import "NSString+NSStringCategory.h"
#import "NSString_NSStringExtension.h"
#import "Student.h"
#import "Student+Working.h"
#import "Teacher.h"
#import "NSdateExample.h"
#import "NSCalenderExample.h"




int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        ExCh05();
        
        getUnicode(@"这");
        getUnicode(@"那");
        codeBlockTest();
        
        NSString *str = [NSString stringWithFormat:@" "];
        [str testExtension];
        [str lengthOfNumber];
        
        
        Student *stu = [[Student alloc] init];
        Teacher *tea = [[Teacher alloc] initWithStudent:stu];
        
        NSMutableArray *arr = [NSMutableArray arrayWithObjects:stu, tea, nil];
        
        for (id obj in arr) {
            [obj work];
        }
        
        
        stu.score = 50;
        stu.score = 80;
        stu.score = 60;
        
        nSdateExample();
        nSCalenderExample();
    }
    return 0;
}

