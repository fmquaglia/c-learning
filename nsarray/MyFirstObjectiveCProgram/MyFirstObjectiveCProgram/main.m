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
    // immutable arrays
    NSArray *foo = [[NSArray alloc] initWithObjects:@"f", @"0", @"0", nil];
    NSLog(@"%@", foo);
    for(NSString *s in foo) {
        NSLog(@"%@", s);
    }
    NSString *o = foo[2];
    NSLog(@"%@", o);

    // convenience literal
    NSArray *bar = @[@"B", @"4", @"R"];
    NSLog(@"%@", bar);
    for(NSString *s in bar) {
        NSLog(@"%@", s);
    }
    NSString *r = bar[2];
    NSLog(@"%@", r);

    //mutable array
    NSMutableArray *lots = [[NSMutableArray alloc] init];
    lots[0] = @"One";
    lots[1] = @"Two";
    lots[2] = @"Three";
    NSLog(@"%@", lots);
    for(NSString *s in lots) {
        NSLog(@"%@", s);
    }

    return 0;
}
