#include <stdio.h>

void contagem(int n)
{
    if (n == 0)
    { // caso base
        printf("FIM!");
        return;
    }
    printf("%d\n", n);
    contagem(n - 1); // chamada recursiva
}

int somatorio(int n)
{
    if (n == 0)
        return 0;
    return n + somatorio(n - 1);
}

int fatorial(int n)
{
    if (n == 1)
        return 0;
    return n * somatorio(n - 1);
}

long long potenciamento(int base, int exp)
{
    // condição base
    if (exp == 0)
        return 1;

    // condição recursiva
    return base * potenciamento(base, exp - 1);
}

// função somatoria de um vetor

int soma_vetor (int vetor[], int tamanho_vetor){
    // condição base
    if (tamanho_vetor == 0) return 0;

    // condição de recursividade
    return vetor[tamanho_vetor - 1] + soma_vetor(vetor, tamanho_vetor - 1);
    }


int numero;

int vetor [10] = {10, 20, 30, 40, 50};
int n = sizeof(vetor) / sizeof(vetor[0]);

int main()
{
    printf("O resultado da exponencial: %lld\n", potenciamento(2, 10));

    printf("Soma do vetor --> %d\n", soma_vetor(vetor, n));
    /* while (numero){

    scanf("%d", &numero);
    int soma = somatorio(numero);
    printf("Somatorio: %d\n", soma);

    int fatoriamento = fatorial(numero);
    printf("fatorial: %d\n", fatoriamento);
    }*/

    return 0;
}
