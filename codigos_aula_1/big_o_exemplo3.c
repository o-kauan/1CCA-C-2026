#include <stdio.h>

void imprimirTriangulo(int n) {
    for (int i = 0; i < n; i++) { // 1 + (n + 1) + 1 
        for (int j = 0; j <= i; j++) { // 1 + n + 1   {// tem o i e o j junto, logo soma e n multiplica}
            printf("* "); // + 1 
        } 

        printf("\n");
    }
}

int main(void) {
    imprimirTriangulo(5);
    return 0;
}