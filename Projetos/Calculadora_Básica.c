# include <stdio.h>
int opcao, num;
char resposta;

// divir sucessivamente o num pela base e pegar os restos e colocar em um vetor
// pegar a parte inteira da divisão e = num
// acaba quando divir por 1 (então num > 0)

void dec_to_n (int num, int base, int resultado [], int *tamanho){
    int i = 0;
    while (num > 0) {
        resultado [i] = num % base;
        i ++;
        num = num / base; 
    }
    *tamanho = i; // tamanho do vetor (casas "decimais")
}


void print_array (int *tam, int resultado []){
    for (int j = *tam - 1; j >= 0; j--){
        if (resultado [j] < 10)
           printf("%d", resultado[j]);
        else {
        switch (resultado[j]){
            case 10:
                resultado [j] = 'A';
            break;

            case 11:
                resultado [j] = 'B';
            break;

            case 12:
                resultado [j] = 'C';
            break;

            case 13:
                resultado [j] = 'D';
            break;
            
            case 14:
                resultado [j] = 'E';
            break;

            case 15:
                resultado [j] = 'F';
            break;
        } 
        printf("%c", resultado[j]);
        }
    }    
}


int main(){
    menu:
    printf("\n======================\n");
    printf("CALCULADORA BASECA ;D\n");
    printf("======================\n");
    printf("(1) Decimal\n");
    printf("(2) Binario\n");
    printf("(3) Hexadecimal\n");
    printf("======================\n");
    
    printf("Qual tipo de numero gostaria de converter? ");
    int pergunta = scanf("%d", &opcao);
    if (pergunta == 0 || opcao < 1 || opcao > 3) { // quando inteiro recebe char fica = a 0
        printf("\nEita como tem inteligencia\n");
        while (getchar() != '\n'); // Limpa o buffer de entrada
        goto menu;
    }
    
    switch (opcao){
        case 1:
        printf("\n--- BASE DECIMAL ---\n");
        printf("Digite o numero: ");
        scanf("%d", &num);
        printf("Decimal: %d\n", num);
        
        int bin [64] = {};
        int bin_tam;
        printf("Binario: ");
        dec_to_n(num, 2, bin, &bin_tam);
        print_array(&bin_tam, tam);
        printf ("\n");

        int hex [64] = {};
        int hex_tam;
        printf("Hexadecimal: ");
        dec_to_n(num, 16, hex, &hex_tam);
        print_array(&hex, hex);
        printf ("\n");
        break;
        
        case 2:
        printf("\n--- BASE BINARIA ---\n");
        break;
        
        case 3:
        printf("\n--- BASE HEXADECIMAL ---\n");
        break;
    }
    printf("Continuar? (s/n): ");
    scanf(" %c", &resposta); // Esse espaço antes do %c é para consumir o caractere de nova linha deixado pelo scanf anterior
    if (resposta == 's' || resposta == 'S') {
        goto menu;
    }
    else if (resposta == 'n' || resposta == 'N') {
        printf("Ate logo!\n");
    }
    else{
        printf("Era s ou n, jumento\n");
    }

    return 0;
}