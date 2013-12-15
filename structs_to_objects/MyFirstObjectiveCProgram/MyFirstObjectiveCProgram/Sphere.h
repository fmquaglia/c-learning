//
//  Sphere.h
//  MyFirstObjectiveCProgram
//
//  Created by Fabricio on 12/11/13.
//  Copyright (c) 2013 fmquaglia. All rights reserved.
//



@interface Sphere : NSObject

@property(nonatomic) float radius;

@property(nonatomic, strong) NSArray *center;

- (void)setCenter:(NSArray *)center radius:(float)radius;
@end
