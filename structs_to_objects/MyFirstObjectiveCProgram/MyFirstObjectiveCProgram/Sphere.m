//
//  Sphere.m
//  MyFirstObjectiveCProgram
//
//  Created by Fabricio on 12/11/13.
//  Copyright (c) 2013 fmquaglia. All rights reserved.
//

#import "Sphere.h"

@implementation Sphere

- (void)setRadius:(float)radius {
    _radius = radius;
}

- (float)radius {
    return _radius;
}

- (void)setCenter:(NSArray *)center {
    _center = center;
}

- (NSArray *)center {
    return _center;
}

- (void)setCenter:(NSArray *)center radius:(float)radius {
    _center = center;
    _radius = radius;
}


@end
