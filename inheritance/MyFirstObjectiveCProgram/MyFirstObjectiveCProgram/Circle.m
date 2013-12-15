//
//  Circle.m
//  MyFirstObjectiveCProgram
//
//  Created by Fabricio on 12/15/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#import "Shape.h"
#import "Circle.h"

@implementation Circle
- (float) area {
    return (float) (M_PI * self.radius * self.radius);
}
@end
