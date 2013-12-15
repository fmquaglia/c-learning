//
//  main.m
//  MyFirstObjectiveCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 fmquaglia. All rights reserved.
//

#import <Cocoa/Cocoa.h>

int main()
{
    NSNumber *magic = [[NSNumber alloc] initWithInt:6];
    NSLog(@"magic number %@", magic); // description method for magic returns the value of magic

    magic = @33;
    NSLog(@"magic number %@", magic);

    magic = @1.22;
    NSLog(@"magic number %@", magic);

    NSNumber *number = [NSNumber numberWithFloat:1.233445666]; // convenience constructor

    NSNumber *bla
    NSLog(@"convenience created %@", number);
    return 0;
}
