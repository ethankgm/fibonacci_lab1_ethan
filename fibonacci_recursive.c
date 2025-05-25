#include <stdio.h>
#include "globals.h"

long fibonacci(int n) {
    counter_rec++;
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
