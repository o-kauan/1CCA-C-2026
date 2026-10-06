#include <stdio.h>

void contagem(int n){
    if (n == 0){ // caso base
        printf("FIM!\n");
        return;
    }
    printf("%d\n", n);
    contagem(n - 1); // chamada recursiva
}

int somatorio(int n){
    if (n == 0) return 0;
    return n + somatorio(n - 1);
}

int fatorial(int n){
    if (n == 1) return 1;
    return n * fatorial(n - 1);
}

// int = 32 bits (31 + 1 -)
// long long = 64 bits (63 + e 1 -)
// unsigned long long = 64 bits (64 +)

long long potenciamento(int base, int exp){
    if (exp == 0) return 1; // condição base
    return base * potenciamento(base, exp - 1); // condição recursiva
}

int soma_vetor(int vetor[], int tamanho_vetor){
    if (tamanho_vetor == 0) return 0; // condição base
    return vetor[tamanho_vetor - 1] + soma_vetor(vetor, tamanho_vetor - 1); // condição de recursividade
}

int numero;
int vetor[10] = {10, 20, 30, 40, 50};
int n = sizeof(vetor) / sizeof(vetor[0]);

int main()
{
    contagem(5);

    printf("5? = %d\n", somatorio(5));

    printf("5! = %d\n", fatorial(5));

    printf("2^10= %lld\n", potenciamento(2, 10));
    printf("2^4 = %lld\n", potenciamento(2, 4));

    printf("Soma do vetor --> %d\n", soma_vetor(vetor, n));
    printf("Soma do vetor 1, 2,...,5 --> %d\n", soma_vetor((int[]){1, 2, 3, 4, 5}, 5));

    return 0;
}
