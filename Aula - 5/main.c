#include <stdio.h>

void menu(){    // função que só exibe (retorna vazio)
    printf("--- MENU ---\n");
    printf("1 - MEDIA DO ALUNO\n");
    printf("2 - PRESENCA DO ALUNO\n");
    printf("Digite a opcao desejada: ");
    
}

    float mean(float nota_1, float nota_2){ // função cal média (retorna a mean (float))
        return (nota_1 + nota_2)/2;
    }

int main (){

    int opcao, presenca;
    float nota_1, nota_2;

    menu();
    scanf("%d", &opcao);
    
    switch (opcao){
        case 1: 
        printf("\n--- MEDIA DO ALUNO ---\n");
        
        printf("Digite sua primeira nota: \n");
        scanf("%f", &nota_1);
        printf("Digite sua segunda nota: \n");
        scanf("%f", &nota_2);
        float media = mean(nota_1,nota_2);
        printf("A media final do aluno: %.2f\n", media);

        break;

        case 2: 
        printf("\n--- PRESENCA DO ALUNO ---\n");

        printf("Digite a presenca do aluno (0-100): \n");
        scanf("%d", &presenca);

        if (presenca > 74){
            printf("Aluno Aprovado com %d %% \n", presenca); // mostra em porcentagem
        }else if (presenca <= 74){ 
            printf("Aluno Reprovado %d %% \n", presenca);
        }else{
            printf("Errou ai amigo!\n");

        }
        break;
                
        default:
        printf("Errou ai amigo!\n");
    }

return 0;
}