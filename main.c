//
//  main.c
//  time
//
//  Created by Daniil on 08.04.2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int x;
    int h;
    int m;
    if (argc < 1) {
        return -1;
    }
    x = atoi(argv[1]);
    if (x > 720) {
        while (x > 720) {
            x -= 720;
        }
    }
    h = x / 30;
    m = (x % 30)*2;
    printf("At an angle of %d degrees time = %d hours %d minutes \n", x,h,m);
    return 0;
}
