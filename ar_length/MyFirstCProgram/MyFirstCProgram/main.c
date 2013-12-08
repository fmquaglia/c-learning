//
//  main.c
//  MyFirstCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#include <stdio.h>

int main()
{
    float numbers[] = {0.1, 1.2, 3.4};

    printf("a float takes %ld bytes in memory\n", sizeof(float));
    printf("all the floats numbers variable takes %ld bytes in memory\n", sizeof(numbers));
    printf("the numbers variable takes %ld bytes in memory\n", sizeof(numbers) / sizeof(float));

    return 0;
}

