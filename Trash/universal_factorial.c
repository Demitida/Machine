#include <stdio.h>

int universal_factorial (signed int num) {
    if (num < 0) {
        if (num == -1) return -1;
        return num * universal_factorial(num + 1);
    } else if (num > 0) {
        if (num == 1) return 1;
        return num * universal_factorial(num - 1);
    } else return 0;
};