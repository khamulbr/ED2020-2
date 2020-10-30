#include <stdio.h>
#include <stdlib.h>
#include "LDE.h"

int main()
{
    No* inicio = NULL;
    No* final = NULL;

    insereInicio(&inicio, 9);

    imprime(inicio);

    insereInicio(&inicio, -1);

    imprime(inicio);

    return 0;
}
