# include <stdio.h>

int main (){

int numero;
// usuário tem que digitar um valor
printf("Digite um numero para ser somado ou digite o caracter s para sair: ");
scanf("%d", numero);

// lógica dp loop e soma
char saida_loop;
while (saida_loop != 's' || saida_loop != 'S'){
    printf("Digite um numero para ser somado ou digite o caracter s para sair: ");
    scanf("%c,", saida_loop);

}

return 0;
}