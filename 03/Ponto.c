#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "Ponto.h"

Ponto* cria(float x1, float y1) {
    Ponto* novoPonto = (Ponto*) malloc(sizeof(Ponto));
    if (novoPonto == NULL) {
        printf("Não consegui alocar memória para este novo ponto\n");
        exit(1);
    }

    novoPonto->x = x1;
    novoPonto->y = y1;

    return novoPonto;
}

void libera(Ponto* p) {
    free(p);
}

void acessa(Ponto* p, float* x, float* y) {
    *x = p->x;
    *y = p->y;
}

void atribui(Ponto* p, float x, float y) {
    p->x = x;
    p->y = y;
}

float distancia(Ponto* p1, Ponto* p2) {
    float dx = p2->x - p1->x;
    float dy = p2->y - p1->y;
    return sqrt(dx*dx + dy*dy);
}
