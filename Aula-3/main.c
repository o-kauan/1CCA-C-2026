# include <stdio.h>

int main (){

// Tomada de decisão com estrutura If, Else If, e Else
    
    int media = 5;
    int presenca = 70;
    if (media >= 9 && presenca >= 75){
        printf("Muito bom e Aprovado!\n");
    }else if (media >= 6 && presenca >= 75){
        printf("Aprovado!\n");
    }else if (media >= 6 && presenca < 75){
        printf("Reprovado por faltas :c\n");
    }else {
    printf ("Aluno reprovado");    
    }
// && operador E
// || operador OU
    






    return 0;
}