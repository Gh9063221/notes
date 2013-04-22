//
//  Student.h
//  notesForObjectiveC
//
//  Created by Ibokan on 13-4-22.
//  Copyright (c) 2013年 zht. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"
#import "PersonProtocol.h"

@interface Student : Person <PersonProtocol>

/*
 创建Student类，使其对外只有age和name属性，但通过延展实现不公开的sayHi方法，并在初始化实例的时候自动调用此方法。
 已知Student类含有age和name属性，通过类目方式为其添加work方法，并将此类目保存为Student+Working。
 
 */


@end
