//
//  main.c
//  MyFirstCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 fmquaglia. All rights reserved.
//

#include <stdio.h>

typedef struct {
    float center[3];
    float radius;
} Sphere;

Sphere makeSphere(float *c, float r) {
    Sphere sphere;
    sphere.center[0] = c[0];
    sphere.center[1] = c[1];
    sphere.center[2] = c[2];
    sphere.radius = r;
    return sphere;
}

int main()
{
    float center[] = {1,2,3};
    float radius = 3;
    Sphere sphere = makeSphere(center, radius);
    printf("the center of the sphere is %f, %f, %f, and its center is %f\n", sphere.center[0],
            sphere.center[1], sphere.center[2], sphere.radius);
    return 0;
}

