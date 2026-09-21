# include <stdio.h>
# include <stdlib.h>

typedef struct{
    int dado;
    struct Node *proximo;
} Node;

void inserir(Node **head, int valor){
    Node *novo = malloc(sizeof(Node));
    novo->dado = valor;
    novo->proximo = *head;
    *head = novo;
}

void imprimirLista(Node *head){
    Node* atual = head;
    while (atual != NULL){
        printf("%d -> ", atual -> dado);
        atual = atual->proximo;
    }
    printf("NULL\n");
}



int main(){
    // criando um nó dinamicamente
    Node *novoNo1, novoNo2;
    
    novoNo1 = (Node *)malloc(sizeof(Node)); // malloc = alocamento dinâmico de memória
    novoNo2 = (Node *)malloc(sizeof(Node)); 

    if (novoNo1 == NULL){
        printf("Erro, memoria insuficiente!\n");
        exit(1);
    }

    printf("%d\n", novoNo1 -> dado);
    novoNo1 -> dado = 10;
    printf("%d\n", novoNo1 ->dado);
    novoNo1->proximo = NULL;
    return 0;
}