# include <stdio.h>

int main (){
    int i = 0;
    int numero;
    int limite = 10;
    
    // for (i; i < 5; i++) {
    //     printf("%d\n", i);
    // }
    
    // printf("Digite o numero da tabuada desejada: ");
    // scanf("%d", &numero);
    // while (i <= 10){
    //     // printf ("%d\n", i);
    //     int resultado = numero * i;
    //     printf ("%d x %d = %d\n", numero, i, resultado);
    //     i = i + 1; // ou i++

    // }


    printf("Digite o numero da tabuada desejada: ");
    scanf("%d", &numero);
    do {
        int resultado = numero * i;
        printf ("%d x %d = %d\n", numero, i, resultado);
        i++;
    } while (i <= limite);
    


    return 0;
}