
typedef struct ponto {
    float x;
    float y;
} Ponto;

Ponto* cria(float x, float y);

void acessa(Ponto* p, float* x, float* y);

void atribui(Ponto* p, float x, float y);

float distancia(Ponto* p1, Ponto* p2);

void libera(Ponto* p);
