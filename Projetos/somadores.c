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
} Saídas;

/*
FUNÇÃO SOMADOR COMPLETO
Entradas A, B e carry C
Pegar os 3 e juntas

Criar um aninhamento para aumentar o somador
O V do último somador, precisa ser o C do novo
Preciso colocar quantos número quizer na entrada e
o tamanho da saída precisa aumentar junto
*/
Saídas somador_completo(int A, int B, int C)
{
    Saídas res;
    res.S = A ^ B ^ C;
    res.V = (A & B) | (B & C) | (A & C);
    return res;
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

        Saídas out = somador_completo(1, 1, 0);
        output[0] = out.S;
        output[1] = out.V;

        Saídas out2 = somador_completo(1, 0, output[1]);
        output[1] = out2.S;
        output[2] = out2.V;

        Saídas out3 = somador_completo(1, 1, output[2]);
        output[2] = out3.S;
        output[3] = out3.V;

        for (int i = 7; i >= 0; i--)
        {
            printf("%d", output[i]);
            if (i == 4)
                printf(".");
        }
    //:  0000.1100
    */

    return 0;
}
