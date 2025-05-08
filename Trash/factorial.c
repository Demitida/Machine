#include <stdio.h>
#include <stdlib.h>
#include "universal_factorial.h"

int main (int argc, char *argv[]) {
    int arg;

    switch(argc) {
        case 1:
            printf("You must include an argument in your program call, like: program.exe argument\n");
            break;
        case 2:
            sscanf(argv[1], "%d", &arg);
            universal_factorial(arg);
            printf("%d", universal_factorial(arg));
            break;
        default:
            printf("You must include only one single argument in your program call, like: program.exe argument\n");
            exit(1);
    };

    return 0;
};