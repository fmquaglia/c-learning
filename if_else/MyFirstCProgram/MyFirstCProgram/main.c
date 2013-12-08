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
    char a = 'a';
    char b = 'b';
    char c = 'c';
    
    char letter = 'x';
    
    if (letter == a) {
        printf("letter %c is %c\n", letter, a);
    } else if (letter == b) {
        printf("letter %c is %c\n", letter, b);
    } else if (letter == c) {
        printf("letter %c is %c\n", letter, c);
    } else {
        printf("letter not found!\n");
    }
    
    return 0;
}

