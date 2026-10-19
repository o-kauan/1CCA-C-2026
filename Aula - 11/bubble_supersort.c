#include <stdio.h>
#include <stdlib.h>
#include <string.h> // comparar string

typedef struct No No;
struct No
{
    char equipamento[20];
    int valor_consumo; // -> informação armazenada
    No *proximo; // -> endereço do próximo nó
};

void bubble_sort(No *inicio)
{
    if (inicio == NULL){
        printf("Lista vazia meo.\n");
    }

    int trocou;
    No *atual;
    No *ultimo = NULL;

    do{
        trocou = 0;
        atual = inicio;

        while (atual->proximo != ultimo){
            if (atual->valor_consumo > atual->proximo->valor_consumo){
                int temp = atual->valor_consumo;
                atual->valor_consumo = atual->proximo->valor_consumo;
                atual->proximo->valor_consumo = temp;
                trocou = 1;
            }

            atual = atual->proximo;
        }
        ultimo = atual;
    } while (trocou);
}


No *inserirInicio(No *inicio, char equipamento[20], int valor){
    
    No *novo = malloc(sizeof(No));

    if (novo == NULL){
        printf("Erro ao alocar memoria.\n");
        return inicio;
    }
    
    strcpy(novo->equipamento, equipamento);
    novo->valor_consumo = valor;
 
    novo->proximo = inicio;

    return novo;
}

void imprimirLista(No *inicio)
{

    if (inicio == NULL)
    {
        printf("Lista vazia.\n");
        return;
    }

    No *atual = inicio;

    printf("\nLista: ");

    while (atual != NULL)
    {

        printf("%s - %d kWh -> ", atual->equipamento, atual->valor_consumo);

        atual = atual->proximo;
    }

    printf("NULL\n");
}

int main(void)
{

    No *inicio = NULL;

    int opcao;
    int valor;
    char nome_equipamento[20];

    do
    {

        printf("\n");
        printf("=================================\n");
        printf("       LISTA ENCADEADA\n");
        printf("=================================\n");

        printf("1 - Inserir Equipamento no inicio da lista\n");
        printf("2 - Mostrar lista de equipamentos\n");
        printf("3 - Ordenar de forma crescente os equipamentos por consumo\n");
        printf("0 - Sair\n");

        printf("\nEscolha: ");
        scanf("%d", &opcao);
        
        switch (opcao)
        {

        case 1:
            printf("Digite o nome do equipamento: ");
            scanf("%s", nome_equipamento);
            printf("Digite o valor do consumo do equipamento: ");
            scanf("%d", &valor);

            inicio =
                inserirInicio(
                    inicio,
                    nome_equipamento,
                    valor);

            break;

        case 2:
            imprimirLista(inicio);
            break;

        case 3:
            bubble_sort(inicio);
            printf("Lista ordenada!\n");
            break;

        case 0:
            printf("Encerrando programa...\n");
            break;

        default:

            printf("Opcao invalida.\n");
        }

    } while (opcao != 0);

    /*
        Antes de terminar o programa,
        liberamos toda a memória.
    */
    inicio = NULL;

    return 0;
}