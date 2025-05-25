#include <stdio.h>
#include <stdlib.h>
#include "globals.h"

// Fonction d'initialisation du tableau de mémoïsation
void init_tab(long *T, int n) {
    for (int i = 0; i <= n; i++) {
        T[i] = -1; // Valeur par défaut (non calculée)
    }
    T[0] = 0;
    T[1] = 1;
}

// Fonction récursive avec mémoïsation
long fibonacci_mem(int n, long *T) {
    counter_rec++;
    if (T[n] != -1) return T[n];
    T[n] = fibonacci_mem(n - 1, T) + fibonacci_mem(n - 2, T);
    return T[n];
}
