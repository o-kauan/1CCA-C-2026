#include <stdio.h>

void mostrarDobros(int n) {

    for (int i = 1; i < n; i *= 2) { // k + 3 + 1
        printf("%d\n", i);
    } // ------> n = 2^(k+)
}
int main(void) {

    mostrarDobros(32);

    return 0;
}