#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#include "Circulo.h"

Circulo* cria_circulo(Ponto* centro, float raio) {
    Circulo* novoCirculo = (Circulo*) malloc(sizeof(Circulo));
    if (novoCirculo==NULL){
        printf("Não consegui alocar memória para este novo circulo\n");
        exit(1);
    }
    novoCirculo->centro = centro;
    novoCirculo->raio = raio;
    return novoCirculo;
}

void libera_circulo(Circulo* c){
    free(c);
}

float area(Circulo* c){
    return M_PI * c->raio * c->raio;
}

bool interior(Ponto *p, Circulo* c){
    float distanciaCalculada = distancia(c->centro, p);
    return (distanciaCalculada < c->raio);
}
