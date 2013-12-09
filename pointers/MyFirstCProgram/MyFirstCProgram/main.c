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

    char *letter;
    char c = 'c';
    letter = &c;
    printf("%c is always %c\n", c, *letter);

    c = 'd';
    printf("%c is always %c\n", c, *letter);

    c = 'e';
    printf("%c is always %c\n", c, *letter);

    char name[] = "Fabricio";
    letter = &name[0];
    printf("%c is in %s\n", *letter, name);

    letter++;
    printf("%c is in %s\n", *letter, name);

    letter++;
    printf("%c is in %s\n", *letter, name);

    letter++;
    printf("%c is in %s\n", *letter, name);

    letter++;
    printf("%c is in %s\n", *letter, name);

    letter++;
    printf("%c is in %s\n", *letter, name);

    letter++;
    printf("%c is in %s\n", *letter, name);

    letter++;
    printf("%c is in %s\n", *letter, name);

    return 0;
}

