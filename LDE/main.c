#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

int main()
{
    LDE* lista;

    insereInicio(&lista, 10);
    imprime(lista);

    return 0;
}
