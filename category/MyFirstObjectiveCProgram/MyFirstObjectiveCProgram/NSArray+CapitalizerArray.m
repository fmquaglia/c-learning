//
// Created by Fabricio on 12/15/13.
// Copyright (c) 2013 treehouse. All rights reserved.
//

#import "NSArray+CapitalizerArray.h"


@implementation NSArray (CapitalizerArray)
- (NSArray *)capitalize {
    NSMutableArray *letters_caps = [NSMutableArray array];
    for(NSString *letter in self) {
        [letters_caps addObject:[letter capitalizedString]];
    }
    return letters_caps;
}

@end