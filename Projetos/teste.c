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
    
    int vetor [64] = {};
    int vetor_tam;
    dec_to_n(255, 16, vetor, &vetor_tam);
    print_array (&vetor_tam, vetor);        
    return 0;
}