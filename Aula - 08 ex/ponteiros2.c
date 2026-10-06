# include <stdio.h>
# include <string.h>

typedef struct{
    char nome[100];
    char sobre_nome[100];
} Registros;

void imprimir_nome(Registros *pessoa){
    printf("%s %s\n",(*pessoa).nome, pessoa -> sobre_nome);
}

void mudar_nome(Registros *pessoa){
    char novo_nome[100];
    printf("Digite o novo nome: ");
    scanf("%99s", novo_nome);
    strcpy((*pessoa).nome, novo_nome);
}

void mudar_sobrenome(Registros *pessoa, char novo_sobre_nome [100]){
    strcpy(pessoa -> sobre_nome, novo_sobre_nome);
}

int main(){
    
    //  REGISTRANDO NOVOS NOMES
    Registros pessoa1;
    strcpy(pessoa1.nome, "Mariana");
    strcpy(pessoa1.sobre_nome, "Silva");
    imprimir_nome(&pessoa1);

    Registros pessoa2 = {"Caio", "Lima"};
    imprimir_nome(&pessoa2);    

printf("\n"); // MUDANDO OS NOMES DEPOIS DO REGISTRO

    strcpy(pessoa1.nome, "Joaquina");
    strcpy(pessoa1.sobre_nome, "Bailarina");
    imprimir_nome(&pessoa1);

    mudar_nome(&pessoa2);
    mudar_sobrenome(&pessoa2, "Antonieta");
    imprimir_nome(&pessoa2);

    return 0;
}