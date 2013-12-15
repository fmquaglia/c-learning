//
//  main.m
//  MyFirstObjectiveCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 fmquaglia. All rights reserved.
//

#import <Cocoa/Cocoa.h>

int main() {
    NSString *alpha = @"A";
    NSString *beta = @"B";
    NSString *gamma = @"G";
    NSLog(@"%@ %@ %@", alpha, beta, gamma);
    NSString *concat = [[[alpha stringByAppendingString:beta] stringByAppendingString:gamma] stringByAppendingString:@" and it keeps going"];
    NSLog(@"%@", concat);
    NSString *upper = [concat uppercaseString];
    NSLog(@"%@", upper);
    return 0;
}
