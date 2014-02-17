//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by Mohammad Bokhari on 2/16/14.
//  Copyright (c) 2014 Mohammad Bokhari. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
