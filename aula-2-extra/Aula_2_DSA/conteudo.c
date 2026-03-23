#include <stdio.h>

int idade;
int a = 20;
int b = 5;


int main(){
    printf("bom dia \n");
    // scanf("%d", &idade); (pergunta pro usuário)
    // printf("Sua idade e de: %d \n", idade);
    printf("Os numeros sao: %d", a );
    printf(" e %d \n", b);
    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);
    printf("Divisao inteira: %d\n", a / b);
    printf("Resto: %d\n", a % b);
    
    int numero_1 = 10; // inteiro
    float numero_2 = 20.2; // float
    int numero_3 = 9; // inteiro
    printf ("%f\n", (float)numero_1/numero_2);
    printf ("%d\n", numero_1 * numero_3);

    int resultado = (a + b) < 10;
    printf ("Resultado: %d\n", resultado);












    return 0;
}