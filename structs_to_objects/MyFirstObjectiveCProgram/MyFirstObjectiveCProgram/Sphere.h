//
//  Sphere.h
//  MyFirstObjectiveCProgram
//
//  Created by Fabricio on 12/11/13.
//  Copyright (c) 2013 fmquaglia. All rights reserved.
//



@interface Sphere : NSObject {
    NSArray *_center;
    float _radius;
}

- (void)setCenter:(NSArray *)center;

- (NSArray *)center;

- (void)setRadius:(float)radius;

- (float)radius;

- (void)setCenter:(NSArray *)center radius:(float)radius;
@end
