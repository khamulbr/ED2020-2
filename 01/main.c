#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b) {
    a = a + 10;
    return a + b;
}

int main(int argc, char *argv[])
{  
    printf("Hello World");
    int valor1 = 1;
    int valor2 = 2;

    int total = soma(valor1, valor2);

    printf("\n\n O total eh %d", total);

    printf("\n\n O valor em valor1 eh %d", valor1);
    
    return 0;
}