#include <stdio.h>
#include <stdlib.h>
#include "racional.h"

Racional* criar(int denominador, int numerador){
    Racional* novoRacional = (Racional*) malloc(sizeof(Racional));
    if (novoRacional==NULL){
        printf("Nao foi possivel criar o numero\n");
        exit(0);
    }

    if (numerador == 0) {
        printf("Nao foi possivel criar o numero, pois o numerador nao pode ser zero\n");
        exit(0);
    }
    novoRacional->denominador = denominador;

    return novoRacional;
}

double obter(Racional* numero) {
    return (double) (numero->denominador / numero->numerador);
}
