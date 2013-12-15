//
//  main.m
//  MyFirstObjectiveCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 fmquaglia. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "NSArray+CapitalizerArray.h"

int main()
{
    NSArray *letters = @[@"alpha", @"bravo", @"gamma", @"delta"];
    NSLog(@"%@", letters);
    NSLog(@"%@", [letters capitalize]);
    return 0;
}
