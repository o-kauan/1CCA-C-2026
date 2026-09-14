#include <stdio.h>

long long fibonacci(int n)
{
    if (n <= 1)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int numero;

int main()
{
    numero = fibonacci(4);
    printf("%d\n", numero);

    return 0;
}