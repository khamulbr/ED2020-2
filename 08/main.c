#include <stdio.h>
#include <stdlib.h>
long contador = 0;

long fatorial(long number){
    contador++;
    printf("contador = %ld\n", contador);
    if (number==1 || number==0)
        return 1;
    return number * fatorial(number-1);
}

int main()
{
    printf("informe um numero:");
    long numero;
    scanf("%ld", &numero);
    printf("\n%ld",fatorial(numero));

    return 0;
}
