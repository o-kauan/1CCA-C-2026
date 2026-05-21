# include <stdio.h>

void dec_to_n (int num, int base, int resultado [], int *tamanho){
    int i = 0;
    while (num > 0) {
        resultado [i] = num % base;
        i ++;
        num = num / base; 
    }
    *tamanho = i; // tamanho do vetor (casas "decimais")
}

int main(){
    
    int resultado[32]; // Vetor grande o suficiente para armazenar o resultado
    int tamanho = 0;
    
    dec_to_n(10, 2, resultado, &tamanho);
    
    // Para "printar" um vetor, você precisa percorrer ele com um loop
    printf("Resultado em binario: ");
    for(int i = tamanho - 1; i >= 0; i--) {
        printf("%d", resultado[i]);
    }
    
        
    return 0;
}