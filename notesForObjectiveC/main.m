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

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        ExCh05();
        
        getUnicode(@"这");
        getUnicode(@"那");
        codeBlockTest();
        
    }
    return 0;
}

