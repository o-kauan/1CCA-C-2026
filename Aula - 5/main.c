#include <stdio.h>

int main (){

    int opcao, presenca;
    float nota_1, nota_2, media;

    printf("--- MENU ---\n");
    printf("1 - MEDIA DO ALUNO\n");
    printf("2 - PRESENCA DO ALUNO\n");

    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1: 
        printf("\n--- MEDIA DO ALUNO ---\n");
        
        printf("Digite sua primeira nota: \n");
        scanf("%f", &nota_1);
        printf("Digite sua segunda nota: \n");
        scanf("%f", &nota_2);
        media = (nota_1 + nota_2)/2;
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