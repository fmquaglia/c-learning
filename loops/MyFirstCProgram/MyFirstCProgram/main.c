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
    int many[] = {2, 3, 5, 9, 17};
    int sum = 0;
    for(int i=0; i<5; i++){
        sum += many[i];
        printf("Suming %d...\n", many[i]);
        printf("The sum so far is %d\n", sum);
    }
    
    char letters[] = {'a', 'b', 'c'};
    int w = 0;
    while (w<3) {
        printf("letter %d is %c\n", w, letters[w]);
        ++w;
    }
    w = 0;
    do {
        printf("letter %d is %c\n", w, letters[w]);
        ++w;
    } while (w<3);
    
    return 0;
}

