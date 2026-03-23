#include <stdio.h>

int main (){
// Exercício 1
    int x = (2 + 3) * 4;
    // (2 + 3 = 5)
    // 5 * 4 = 20
    // Operação antes do parênteses acontece antes
    // x = 20
    printf ("%d\n", x);

// Exercício 2
    int x2 = (2 + 3) * 4;
    // (2 + 3 = 5)
    // 5 * 4 = 20
    // Operação antes do parênteses acontece antes
    // x = 20
    printf ("%d\n", x2); 

// Exercício 3
    float x3 = 10/3;
    // 10 / 3 = 3 + 1/3
    // quantidade de subtrações 3 ao 10 (resta 1)
    // x = 3,00...
    printf ("%f\n", x3); 

// Exercício 4
    float x4 = 10/3.0;
    // 10 / 3 = 3 + 1/3 ou 3,333...
    // quantidade de subtrações 3 ao 10 
    // x = 3,33...
    printf ("%f\n", x4); 

// Exercício 5
    float x5 = 10/3.0;
    // 10 / 3 = 3 + 1/3 ou 3,333...
    // quantidade de subtrações 3 ao 10 
    // x = 3,33...
    printf ("%f\n", x5); 

// Exercício 6
    int x6 = 5 + 7 / 2;
    // 7 / 2 = 3,5
    // 3,5 + 5 = 8,5
    // x = 8 (só parte inteira)
    // Divisao vem antes da soma
    printf ("%d\n", x6);

// Exercício 7 (relacional)
    int x7 = 10 > 5;
    // diz se 10 é maior que 5 (1 = true, 0 = false)
    // x = 1
    printf ("%d\n", x7);

// Exercício 8
    int x8 = 10 == 5;
    // diz se 10 é igual a 5 ()
    // x = 0
    printf("%d\n", x8);

// Exercício 9
    int x9 = (2 + 3) > (4 * 2);
    // (2 + 3 = 5)
    // (4 * 2 = 8)
    // diz se 5 é maior que 8
    // x = 0
    printf("%d\n", x9);

// Exercício 10 (expressão mista)
    int x10 = (10 / 2) + (3>1);
    // 10 / 2 = 5
    // 3 > 1 = 1
    // 5 + 1 = 6
    // x = 6
    // O resultado da comparação é somado como o equivalente inteiro 1 
    printf("%d\n", x10);

// Exercício 11 
    int x11 = (5 > 3) * 10;
    // 5 > 3 = 1
    // 1 * 10 = 10
    // verificador lógico que retorna 10 se 5>3, se não for retorna 0
    // x = 10
    printf ("%d\n", x11);

// Exercício 12 
    int x12 = (8 + 2) / (3 + 2);
    // (8 + 2) = 10
    // (3 + 2) = 5
    // 10 / 5 = 2
    // x = 2
    printf ("%d\n", x12);

// Exercício 14
    int x14 = (8 + 2) / 3 + 2;
    // (8 + 2) = 10
    // 10 / 3 = 3 + 1/3
    // 3 + 1/3 + 2 = 5 + 1/3
    // x = 5 (só parte inteira)
    // parênteses primeiro, depois divisão
    printf ("%d\n", x14);

//Exercício 15
    int x15 = 5 / 2 * 2;
    // 5 / 2 = 2 (divisão inteira, descarta o 0,5)
    // 2 * 2 = 4
    // x = 4
    printf ("%d\n", x15);

// Exercício 16
    int x16 = (10 > 5) + (3 * 2);
    // (10 > 5) = 1
    // (3 * 2) = 6
    // caso 10 seja maior que 5 soma 1 a 6
    // x = 7
    printf("%d\n", x16);

// Exercício 17 
    int a, b;
    scanf("%d %d", &a, &b);
    int x17 = a + b * 2;
    // pede a e b para o usuário
    // b * 2
    // (b * 2) + a
    // x = a + (b * 2)
    
    // Se a = 3 e b = 4:
    // 4 * 2 = 8
    // 8 + 3 = 11
    // x = 11
    printf ("%d\n", x17);

//Exercício 18
    int idade;
    scanf("%d", &idade);
    int maior = idade >= 18;
    // atribui o valor "maior" caso a variável idade seja maior ou igual a 18

    // Se idade = 20:
    // resultado = 1  
    // Se idade = 15: 
    // resultado = 0
    printf ("%d\n", maior);

    return 0;
}