#include <stdio.h>
#include <stdbool.h>

void contagem(int n){
    if (n == 0){ // caso base
        printf("FIM!\n");
        return;
    }
    printf("%d\n", n);
    contagem(n - 1); // chamada recursiva
}

unsigned long long somatorio(int n){
    if (n == 0) return 0;
    return n + somatorio(n - 1);
}

unsigned long long fatorial(int n){
    if (n <= 1) return 1;
    return n * fatorial(n - 1);
}

unsigned long long potenciamento(int base, int exp){
    if (exp == 0) return 1; // condição base
    return base * potenciamento(base, exp - 1); // condição recursiva
}

int numero;
int main(){
    do{
    scanf("%d", &numero);
    printf("Somatorio: %llu\n", somatorio(numero));
    printf("fatorial: %llu\n", fatorial(numero));
    printf("potenciamento de 2: %llu\n", potenciamento(2, numero));
    } while (numero != true);

    return 0;
}
