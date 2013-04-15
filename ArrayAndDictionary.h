//
//  ArrayAndDictionary.h
//  notesForObjectiveC
//
//  Created by Ibokan on 13-4-15.
//  Copyright (c) 2013年 zht. All rights reserved.
//

#ifndef notesForObjectiveC_ArrayAndDictionary_h
#define notesForObjectiveC_ArrayAndDictionary_h

/* NSArray
 NSArray* myArray = [NSArray arrayWithObjects:@"obj1", @"obj2", @"obj3", @"obj4", nil];
 unsigned long length = [myArray count];
 for (int i = 0; i < length; i++) {
 //3
 NSLog(@"the %d obj of MyArray: %@", i, [myArray objectAtIndex:i]);
 }
 */

/* NSMutableArray
 -(void) addObject :  (id) anObject;
 -(void) removeObjectAtIndex : (unsigned long)index;
 -(void) insertObject:(id)atIndex: (NSUInteger) index;
 -(void) replaceObjectAtIndex:(NSUInteger) withObject:(id)
 */

/* NSEnumerator
 -(NSEnumerator *) objectEnumerator;
 NSEnumerator *enumerator = [array objectEnumerator];
 
 id obj;
 while(obj = [enumerator nextObject]){
 NSLog(@”%@\n”,obj);
 }
 */

/* NSDictionary
 -(id) dictionaryWithObjectsAndKeys:(id) obj,…;
 -(id) objectForKey : (id) aKey;

*/

/* NSMutableDictionary
 +(id) dictionaryWithCapacity : (NSUInteger) num;
 -(void) setObject:(id) obj forKey:(id) aKey;
 -(void) removeObjectForKey : (id) aKey;
 NSArray *keys = [dict allKeys];

*/


#endif
