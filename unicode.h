//
//  unicode.h
//  notesForObjectiveC
//
//  Created by Ibokan on 13-4-16.
//  Copyright (c) 2013年 zht. All rights reserved.
//

#ifndef notesForObjectiveC_unicode_h
#define notesForObjectiveC_unicode_h

void getUnicode (NSString * str) {
    NSLog(@"the unicode of %@ is: %d", str, [str characterAtIndex:0]);
}

#endif
