#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int dado;
    struct Node *proximo;
} Node;

void inserir(Node **head, int valor) {
    Node *novo = malloc(sizeof(Node));

    if (novo == NULL) {
        printf("Erro: memoria insuficiente!\n");
        exit(1);
    }

    novo->dado = valor;
    novo->proximo = *head;
    *head = novo;
}

void imprimirLista(Node *head) {
    Node *atual = head;

    printf("Lista: ");
    while (atual != NULL) {
        printf("%d -> ", atual->dado);
        atual = atual->proximo;
    }
    printf("NULL\n");
}

int main() {
    Node *lista = NULL;
    Node *novoNo1, *novoNo2;

    printf("Exemplo 1: criando nos manualmente\n");
    novoNo1 = malloc(sizeof(Node));
    novoNo2 = malloc(sizeof(Node));

    if (novoNo1 == NULL || novoNo2 == NULL) {
        printf("Erro: memoria insuficiente!\n");
        return 1;
    }

    novoNo1->dado = 10;
    novoNo1->proximo = NULL;

    novoNo2->dado = 20;
    novoNo2->proximo = NULL;

    printf("No 1: %d\n", novoNo1->dado);
    printf("No 2: %d\n", novoNo2->dado);

    printf("\nExemplo 2: ligando os nos manualmente\n");
    novoNo2->proximo = novoNo1;
    printf("novoNo2 aponta para novoNo1\n");
    printf("novoNo2->dado = %d, novoNo2->proximo->dado = %d\n", novoNo2->dado, novoNo2->proximo->dado);

    printf("\nExemplo 3: usando a funcao inserir()\n");
    inserir(&lista, 30);
    inserir(&lista, 40);
    inserir(&lista, 50);
    imprimirLista(lista);

    printf("\nExemplo 4: usando a funcao imprimirLista() em outra estrutura\n");
    lista = NULL;
    inserir(&lista, 7);
    inserir(&lista, 9);
    inserir(&lista, 11);
    imprimirLista(lista);

    free(novoNo1);
    free(novoNo2);

    return 0;
}