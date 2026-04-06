# include <stdio.h>

int main (){
    int i = 1;
    int numero;
    int limite = 100;
    
    printf("Digite o numero da tabuada desejada: ");
    scanf("%d", &numero);
    while (i <= limite){
        // printf ("%d\n", i);
        int resultado = numero * i;
        printf ("%d x %d = %d\n", numero, i, resultado);
        i = i + 1; // ou i++

    }

    return 0;
}