#include <stdio.h>
#include <string.h>
#include <stdbool.h> // precisa pros booleanos

typedef unsigned int uint; 
/* 
    unsigned int uint = int só +
    o typedef é só pra poder chamar como uint numero, ao invés de unsigned int numero.
 */

typedef struct{
    char rua[40];
    char bairro [20];
    uint numero;
}Endereco;

typedef struct{ // struct = tipo classe
    char nome [20];     // typedef = apelido
    int rm;
    char email [20];
    Endereco endereco; // como ele chama o outro, precisa ficar abaixo dele
    float media;
    bool aprovado; // booleano
}Aluno;

// struct Aluno { // forma padrão
//    char nome [20];     
//    int rm;
//    char email [20];
//    char aprovado;
// };


int main (){
    
    //typedef unsigned long int uint;
    //uint numero;

    // // // struct Aluno aluno_1; --> forma padrão
    
    Aluno aluno[100]; // delcaração do array para a struct Aluno
    
    // completar dados do aluno indice 
    strcpy (aluno[0].nome, "Joao Andante");
    aluno[0].rm = 32165;
    strcpy (aluno[0].email, "Joao.Andante@gmail.com");
    
    strcpy (aluno[0].endereco.rua, "Rua do Joao");
    strcpy (aluno[0].endereco.bairro, "Campo Limpo");
    aluno[0].endereco.numero = 80;
    
    printf("Confirma o teu endereco: %s, nº %d, %s \n", aluno[0].endereco.rua, aluno[0].endereco.numero, aluno[0].endereco.bairro);
    
    float nota_1 = 10.0;
    float nota_2 = 7.5;
    aluno[0].media = ((nota_1 + nota_2)/2);
    
    printf("Média final do %s: %.2f\n", aluno[0].nome, aluno[0].media);
    
    // Exercício: Registrar a aprovaçãodo aluno (com limites pré coisado) 
    
    
    
    // // //
    Aluno aluno_1; // declaração independente
    aluno_1.rm = 102030;
    aluno_1.aprovado = false;
    
    strcpy(aluno_1.nome, "Joaquim"); // para atribuir nome precisa usar a biblioteca da string
    
    printf("O nome do aluno(a): %s\n", aluno_1.nome); // %s só pega o caracter
    printf("O rm do aluno(a): %d\n", aluno_1.rm);
    
    
    if(aluno_1.aprovado == true){
        printf("O %s está DBOAA", aluno_1.nome);
    }else{
        printf("O %s AAANAO", aluno_1.nome);
    }
    
    // printf("ALUNO está %c", aluno_1.reprovado)
    
    return 0;
}
