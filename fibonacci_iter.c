#include <stdio.h>
#include "globals.h"

long fibonacci_iter(int n) {
    if (n <= 1) return n;

    long a = 0;
    long b = 1;
    long temp;

    for (int i = 2; i <= n; i++) {
        counter_iter++;
        temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}
