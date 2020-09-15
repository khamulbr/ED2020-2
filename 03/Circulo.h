#include <stdbool.h>
#include "Ponto.h"

typedef struct circulo {
    Ponto* centro;
    float raio;
} Circulo;

Circulo* cria_circulo(Ponto* centro, float raio);

void libera_circulo(Circulo* c);

float area(Circulo* c);

bool interior(Ponto *p, Circulo* c);
