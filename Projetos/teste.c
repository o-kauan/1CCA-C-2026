# include <stdio.h>

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
    
    int resultado[] = {};
    dec_to_n(255, 16, resultado);        
    return 0;
}