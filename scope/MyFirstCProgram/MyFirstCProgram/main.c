//
//  main.c
//  MyFirstCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#include <stdio.h>

void scoping();

int main()
{
    char bravo[] = "Alpha - main scope";
    printf("%s\n", bravo);
    scoping();
    int condition = 3;
    if(condition < 5) {
        char bravo[] = "Beta - code block scope";
        printf("%s\n", bravo);
    }
    printf("%s\n", bravo);
    return 0;
}

void scoping() {
    char bravo[] = "Gamma - function scope";
    printf("%s\n", bravo);
}

