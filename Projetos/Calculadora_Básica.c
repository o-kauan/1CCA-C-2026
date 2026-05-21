# include <stdio.h>
int opcao, num;
char resposta;

// divir sucessivamente o num pela base e pegar os restos e colocar em um vetor
// pegar a parte inteira da divisão e = num
// acaba quando divir por 1 (então num > 0)

void dec_to_n (int num, int base, int resultado []){
    int i = 0;
    while (num > 0) {
        resultado [i] = num % base;
        i ++;
        num = num / base; 
    }

    for(int j = i - 1; j >= 0; j--) {
        printf("%d", resultado[j]);
    }
}

int main(){
    menu:
    printf("\n======================\n");
    printf("CALCULADORA BASICA ;D\n");
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
        
        int binario [] = {};
        printf("Binario: ");
        dec_to_n(num, 2, binario);
        printf ("\n");

        int hexadecimal [] = {};
        printf("Hexadecimal: ");
        dec_to_n(num, 16, hexadecimal);
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