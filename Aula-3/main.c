# include <stdio.h>

int main (){

// Tomada de decisão com estrutura If, Else If, e Else
    
    int presenca = 80; // presença entre 0 e 100

    float nota_1, nota_2;

    printf ("------------------------\n");
    printf ("CALCULADORA DE APROVACAO\n");
    printf ("------------------------\n");
    printf ("Digite sua primeira nota: \n");
    scanf("%f", &nota_1);
    printf ("Digite sua segunda nota: \n");
    scanf("%f", &nota_2);

    float media = (nota_1 + nota_2) / 2;

    if (media >= 9 && presenca >= 75){
        printf("Muito bom e Aprovado!\n");
    }else if (media >= 6 && presenca >= 75){
        printf("Aprovado!\n");
    }else if (media >= 6 && presenca < 75){
        printf("Reprovado por faltas :c\n");
    }else if (media < 6 && presenca >= 75){
        printf("Reprovado por nota :o\n");    
    }else {
    printf ("Aluno reprovado");    
    }
// && operador E
// || operador OU
    return 0;
}