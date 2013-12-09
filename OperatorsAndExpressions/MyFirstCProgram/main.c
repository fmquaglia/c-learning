//
//  main.c
//  MyFirstCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 fmquaglia. All rights reserved.
//

#include <stdio.h>

int main()
{

    int a = 9;
    printf("a: %d\n", a);
    
    int c = a++;
    printf("c: %d\na: %d\n", c, a);
    
    int d = a--;
    printf("d: %d\na: %d\n", d, a);
    
    int b = a % 4;
    printf("b: %d\n", b);
    
    float fa = 5.0 / .5;
    printf("fa: %f\n", fa);
    
    fa *= 10;
    printf("fa: %f\n", fa);    
    
    return 0;
}

