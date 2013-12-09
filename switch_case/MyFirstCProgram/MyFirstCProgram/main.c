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
    char a = 'a';
    char b = 'b';
    char c = 'c';
    
    char letter = 'x';
    
    switch(letter) {
        case 'a':
            printf("letter %c is %c\n", letter, a);
            break;
        case 'b':
            printf("letter %c is %c\n", letter, b);
            break;
        case 'c':
            printf("letter %c is %c\n", letter, c);
            break;
        default:
            printf("letter not found");
    }
    
    return 0;
}

