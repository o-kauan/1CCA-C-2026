#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
    char titulo[100];
    char disponibilidade [100];
} Livro;

void emprestarLivro(Livro *livro) {
    
    strcpy(livro-> disponibilidade, "emprestado");
}

int main() {
    
    Livro livro_1 = {"Algoritmos", "disponivel"};

    printf("Titulo: %s, disponibilidade: %s\n", livro_1.titulo,  livro_1.disponibilidade);

    emprestarLivro(&livro_1);
    
    printf("Titulo: %s, disponibilidade: %s\n", livro_1.titulo,  livro_1.disponibilidade);

    return 0;
}
