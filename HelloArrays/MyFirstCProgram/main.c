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
    
    float numbers_geek_love[] = {3.14159, 1.680, 1.4142};
    
    printf("Pi: %f\n", numbers_geek_love[0]);
    printf("Golden ratio: %f\n", numbers_geek_love[1]);
    printf("Square root of two: %f\n", numbers_geek_love[2]);
    
    int primes[] = {2, 3, 5, 7};
    
    printf("first prime numbers %d %d %d %d\n", primes[0], primes[1], primes[2], primes[3]);
    return 0;
}

