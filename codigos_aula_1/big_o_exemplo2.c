#include <stdio.h>

int somaMatriz(int matriz[][3], int n)
{
    int soma = 0; // o(1)

    for (int i = 0; i < n; i++){ // o(n+3)
        for (int j = 0; j < n; j++)
        {                         // o(n+3+1)
            soma += matriz[i][j]; // o(1)   up
        }
    }

    return soma; // o(1)
}

// g(n) = 1+(n+3)(n+4)+1

int main(void)
{
    int matriz[3][3] = {// o(9)
                        {1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    int resultado = somaMatriz(matriz, 3); // o(n²+7n+14)

    printf("Soma = %d\n", resultado); // o (1)

    return 0; // o (1)
}

// g2(n) = n² + 7n + 25