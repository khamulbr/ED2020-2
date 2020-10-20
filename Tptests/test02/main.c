#include <stdio.h>
#include <stdlib.h>
#include "racional.h"

int main()
{
    Racional* racional1 = criar(5,2);
    double racionalDouble = obter(racional1);
    printf("o racional convertido para double eh %lf\n", racionalDouble);

    printf("Hello world!\n");
    return 0;
}
