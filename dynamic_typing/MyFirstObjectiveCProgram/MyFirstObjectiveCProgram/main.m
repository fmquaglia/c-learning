//
//  main.m
//  MyFirstObjectiveCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 fmquaglia. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "Shape.h"
#import "Circle.h"
#import "Rectangle.h"

int main()
{
    NSArray *mixed = @[@123, @0.23, @"hello!", [[Shape alloc] init], [[Circle alloc] init], [[Rectangle alloc] init]];
    for(id thing in mixed) {
        NSLog(@"%@", thing);
    }
    return 0;
}
