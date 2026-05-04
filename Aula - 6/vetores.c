# include <stdio.h>

// Arrays:
//int notas[5]; // {0,1,2,3,4}

//int pares[3] = {2,4,6}; // 3 valores

//float idades[2] = {10.5, 20.0}; // 2 valores

//int idade[] = {18, 20 , 25}; // n valores

// float notas [3] = {100, 9, 57};
//           =
    //notas [0] = 100;
    //notas [1] = 9;
    //notas [2] = 57;

int main (){
    int quantidade_notas;
    printf("Digite a quantidade de notas: ");
    scanf("%d", &quantidade_notas);
    
    // float notas [quantidade_notas] = {10, 8, 2}; era pra isso funcionar, apesar do compilador do vscode

    // float notas [] = {0,0}; // array vazio

    float notas [quantidade_notas];

    float soma;
    for(int i = 0; i < quantidade_notas; i++){
        printf("Digite sua nota %d:", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i]; // soma de tds as notas
        printf("Soma das notas: %.1f\n", soma);
    }
    
    printf("A media do aluno e: %.2f", soma / quantidade_notas);

return 0;
        
}