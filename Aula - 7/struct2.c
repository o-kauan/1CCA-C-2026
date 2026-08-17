#include <stdio.h>
#include <string.h>
#include <stdbool.h> 

typedef unsigned int uint;

typedef struct{
    char rua[40];
    char bairro [20];
    uint numero;
}Endereco;

typedef struct{ 
    char nome [20];
    int rm;
    char email [20];
    Endereco endereco;
    float media;
    bool aprovado; 
}Aluno;

void adicionar_aluno (Aluno aluno[], int i) {
    
    printf("Adicione o nome do aluno %d: ", i+1);
    scanf("%s", aluno[i].nome);
    
    printf("Qual o RM do aluno %d? ", i+1);
    scanf("%d", &aluno[i].rm);
/*     
    printf("Adicione o email do aluno %d: ", i+1);
    scanf("%s", &aluno[i].email);
    
    printf("Adicione a rua do aluno %d: ", i+1);
    scanf("%s", &aluno[i].endereco.rua);

    printf("Adicione o bairro do aluno %d: ", i+1);
    scanf("%s", &aluno[i].endereco.bairro);
    
    printf("Adicione o numero do aluno %d: ", i+1);
    scanf("%u", &aluno[i].endereco.numero); */

    printf("\n");
}

void mostrar_alunos(Aluno aluno[], int qnt_alunos){
    for (int i = 0; i < qnt_alunos; i++){
        printf("%s\n", aluno[i].nome);
        printf("%d\n", aluno[i].rm);
/*         printf("%s\n", aluno[i].email);
        printf("%s\n", aluno[i].endereco.rua);
        printf("%s\n", aluno[i].endereco.bairro);
        printf("%u\n", aluno[i].endereco.numero); */
    }
}

void mostrar_alunos_aninhado(Aluno alunos[], int qnt) {
    // Lista com os nomes dos campos que serão as linhas da tabela
    const char *campos[] = {"Nome", "RM", "E-mail", "Rua", "Bairro", "Numero"};
    int total_campos = 6;

    printf("\n=== RELATORIO DE ALUNOS ===\n\n");

    // Cabeçalho da tabela com o número dos alunos
    printf("%-12s", "Campo");
    for (int i = 0; i < qnt; i++) {
        printf("| Aluno %-7d ", i + 1);
    }
    printf("|\n------------");
    for (int i = 0; i < qnt; i++) {
        printf("+---------------");
    }
    printf("+\n");

    // LAÇO ANINHADO:
    // O laço externo 'f' percorre as LINHAS (cada campo)
    for (int f = 0; f < total_campos; f++) {
        // Imprime o rótulo do campo na margem esquerda
        printf("%-12s", campos[f]);

        // O laço interno 'i' percorre as COLUNAS (todos os alunos)
        for (int i = 0; i < qnt; i++) {
            printf("| ");
            switch (f) {
                case 0: printf("%-13.13s ", alunos[i].nome); break;
                case 1: printf("%-13d ", alunos[i].rm); break;
                case 2: printf("%-13.13s ", alunos[i].email); break;
                case 3: printf("%-13.13s ", alunos[i].endereco.rua); break;
                case 4: printf("%-13.13s ", alunos[i].endereco.bairro); break;
                case 5: printf("%-13u ", alunos[i].endereco.numero); break;
            }
        }
        printf("|\n"); // Quebra a linha ao finalizar a impressão de todos os alunos
    }
    printf("\n");
}

int qnt_alunos;
int main (){
    
    printf("Quantos alunos gostaria de adicionar?");
    scanf("%d", &qnt_alunos);
    Aluno alunos[qnt_alunos];

    for (int i = 0; i < qnt_alunos; i++)
        adicionar_aluno(alunos, i);

    mostrar_alunos_aninhado(alunos, qnt_alunos);
    return 0;
}
