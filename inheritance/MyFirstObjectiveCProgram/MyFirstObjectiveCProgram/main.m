//
//  main.m
//  MyFirstObjectiveCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 fmquaglia. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "Shape.h"
#import "Circle.h"
#import "Button.h"
#import "Rectangle.h"

int main()
{
    Shape *shape = [[Shape alloc] init];
    NSLog(@"Area of shape %f", shape.area);
    Circle *circle = [[Circle alloc] init];
    circle.radius = 3.1;
    NSLog(@"Area of circle %f", circle.area);
    Rectangle *rectangle = [[Rectangle alloc] init];
    rectangle.width = 10;
    rectangle.height = 15;
    NSLog(@"Rectangle area %f", rectangle.area);
    Button *roundButton = [[Button alloc] init];
    roundButton.shape = circle;
    Button *squareButton = [[Button alloc] init];
    squareButton.shape = rectangle;

    return 0;
}
