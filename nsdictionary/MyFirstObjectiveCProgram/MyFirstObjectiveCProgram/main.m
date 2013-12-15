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
    // immutable dicts
    NSDictionary *book = [[NSDictionary alloc] initWithObjectsAndKeys:@"The Cat in the Hat", @"title", @"Dr Seuss", @"author", nil];
    NSLog(@"%@", book);
    // literal constructor
    NSDictionary *another_book = @{@"title": @"Simulacra and Simulation", @"author": @"Baudrillard"};
    NSLog(@"%@", another_book);

    NSLog(@"%@ by %@", [book objectForKey:@"title"], [book objectForKey:@"author"]);
    NSLog(@"%@ by %@", [another_book objectForKey:@"title"], [another_book objectForKey:@"author"]);

    // mutable
    NSMutableDictionary *mutableBook = [NSMutableDictionary dictionaryWithDictionary:book];
    [mutableBook setObject:@1957 forKey:@"year"];
    NSLog(@"mutable book %@", mutableBook);
    for(NSString *key in mutableBook.allKeys) {
        NSLog(@"%@: %@", key, [mutableBook objectForKey:key]);
    }
    return 0;
}
