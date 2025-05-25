#include <stdio.h>
#include <stdlib.h>
#include "globals.h"

long fibonacci_iter_tab(int n) {
    if (n <= 1) return n;

    long *T = malloc((n + 1) * sizeof(long));
    if (T == NULL) {
        printf("Erreur d'allocation mémoire\n");
        return -1;
    }

    T[0] = 0;
    T[1] = 1;

    for (int i = 2; i <= n; i++) {
        counter_iter++;
        T[i] = T[i - 1] + T[i - 2];
    }

    long result = T[n];
    free(T);
    return result;
}
