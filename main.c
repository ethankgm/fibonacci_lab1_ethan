#include <stdio.h>
#include <stdlib.h>
#include "globals.h"

// Déclarations des fonctions
long fibonacci(int n);
long fibonacci_mem(int n, long *T);
void init_tab(long *T, int n);
long fibonacci_iter_tab(int n);
long fibonacci_iter(int n);

// Déclarations des compteurs globaux (définis dans chaque fichier)
extern int counter_rec;
extern int counter_iter;

// Réinitialisation d’un compteur
void reset_counter(int * counter) {
    *counter = 0;
}

int main() {
    int n = 20;
    printf("=== FIBONACCI SEQUENCE UP TO %d ===\n\n", n);

    printf("Naive Recursive:\n");
    for (int i = 0; i < n; i++) {
        reset_counter(&counter_rec);
        printf("F(%d) = %ld | Calls: %d\n", i, fibonacci(i), counter_rec);
    }

    printf("\nMemoization:\n");
    for (int i = 0; i < n; i++) {
        long *T = malloc((i + 1) * sizeof(long));
        init_tab(T, i);
        reset_counter(&counter_rec);
        printf("F(%d) = %ld | Calls: %d\n", i, fibonacci_mem(i, T), counter_rec);
        free(T);
    }

    printf("\nIterative with Table:\n");
    for (int i = 0; i < n; i++) {
        reset_counter(&counter_iter);
        printf("F(%d) = %ld | Iterations: %d\n", i, fibonacci_iter_tab(i), counter_iter);
    }

    printf("\nIterative Optimized:\n");
    for (int i = 0; i < n; i++) {
        reset_counter(&counter_iter);
        printf("F(%d) = %ld | Iterations: %d\n", i, fibonacci_iter(i), counter_iter);
    }

    return 0;
}
