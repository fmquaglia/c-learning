//
//  main.c
//  MyFirstCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 fmquaglia. All rights reserved.
//

#include <stdio.h>

int example(int a, int b);

int main()
{
    int one = 1;
    int two = 2;

    // insert code here...
    printf("example result %d!\n", example(one, two));
    return 0;
}

int example(int a , int b) {
    return a + b + 234;
}

