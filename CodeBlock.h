//
//  CodeBlock.h
//  notesForObjectiveC
//
//  Created by Ibokan on 13-4-18.
//  Copyright (c) 2013年 zht. All rights reserved.
//

#ifndef notesForObjectiveC_CodeBlock_h
#define notesForObjectiveC_CodeBlock_h

void useCodeBlock (int (^myBLock)(int num[])) {
    
}

void codeBlockTest() {
    
    int a[5] = { 4, 5, 7, 1, 2};
    int (^bubbleSort)(int num[]);
    bubbleSort = ^(int num[]) {
        for (int i = 0; i < 5; i++) {
            for (int j = 4; j > i; j--) {
                if (num[j] < num[j - 1]) {
                    num[j] = num[j] + num[j - 1];
                    num[j - 1] = num[j] - num[j - 1];
                    num[j] = num[j] - num[j - 1];
                }
            }
        }
        return 1;
    };
    void (^printArray)(int num[], int n);
    printArray = ^(int num[], int n) {
        for (int i = 0; i < n; i++) {
            printf("%d ", num[i]);
        }
        printf("\n");
    };
    
    
    bubbleSort(a);
    printArray(a, 5);
    
    
    
    

}

#endif
