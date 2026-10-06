#include <stdio.h>
#include <stdint.h>

struct Resultado
{
    int S;
    int V;
};

/*
Função Somador Incompleto
Entradas A e B
Pegar as 2, juntar e exibir o resultado
*/
struct Resultado somador_incompleto(int A, int B)
{
    struct Resultado res;
    res.S = A ^ B;
    res.V = A & B;
    return res;
}

typedef struct
{
    int S;
    int V;
} Saidas;

/*
FUNÇÃO SOMADOR COMPLETO
Entradas A, B e carry C
Pegar os 3 e juntas

Criar um aninhamento para aumentar o somador
O V do último somador, precisa ser o C do novo
Preciso colocar quantos número quizer na entrada e
o tamanho da saída precisa aumentar junto
*/
Saidas somador_completo(int A, int B, int C)
{
    Saidas res;
    res.S = A ^ B ^ C;
    res.V = (A & B) | (B & C) | (A & C);
    return res;
}

void somar(int *a_lista, int *b_lista, int *output){

    Saidas out;
    int carry = 0;
    
    for (int i = 7; i >= 0; i--){
        out = somador_completo(a_lista[i], b_lista[i], carry);
        output[i] = out.S;
        carry = out.V;
    }
}

void imprimir_lista(int *output){
    for (int i = 0; i <= 7; i++){
            if (i % 4 == 0 & i != 0) {printf(" ");}
            printf("%d", output[i]);
        }
}


int main()
{
/* 
        struct Resultado oi  = somador_incompleto(1, 1);
        printf("%d%d\n", oi.V, oi.S );
        //: 10
    */
    
/* 
    int output[8] = {0, 0};

    out = somador_completo(1, 1, 0);
    output[0] = out.S;
    output[1] = out.V;

    out = somador_completo(1, 0, output[1]);
    output[1] = out.S;
    output[2] = out.V;

    out = somador_completo(1, 1, output[2]);
    output[2] = out.S;
    output[3] = out.V;

    for (int i = 7; i >= 0; i--)
    {
        printf("%d", output[i]);
        if (i == 4)
            printf(".");
    }
//:  0000.1100
*/

/* 
    int output[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int a_lista[8] = {0, 0, 0, 0, 0, 0, 1, 1};
    int b_lista[8] = {0, 0, 0, 0, 0, 0, 1, 0};
    
    Saidas out;
    int carry = 0;
    
    for (int i = 7; i >= 0; i--){
        out = somador_completo(a_lista[i], b_lista[i], carry);
        output[i] = out.S;
        carry = out.V;
    }
    
    for (int i = 0; i <= 7; i++){
        if (i % 4 == 0 & i != 0) {printf(" ");}
        printf("%d", output[i]);
    }
 */

    int output[8] = {};
    int a_lista[8] = {0, 0, 0, 1, 1, 0, 1, 1};
    int b_lista[8] = {0, 0, 1, 0, 1, 0, 1, 0};
    
    somar(a_lista, b_lista, output);
    imprimir_lista(output);
    return 0;
}
