//
//  Teacher.h
//  notesForObjectiveC
//
//  Created by Ibokan on 13-4-22.
//  Copyright (c) 2013年 zht. All rights reserved.
//

#import "Person.h"
#import "PersonProtocol.h"
#import "Student.h"

@interface Teacher : Person <PersonProtocol>

@property (retain, nonatomic)Student *student;

- (Teacher *)initWithStudent:(Student *)astudent;

@end
