
typedef struct racional {
    int denominador;
    int numerador;
} Racional;

Racional* criar(int denominador, int numerador);

double obter(Racional* numero);

Racional mmc(Racional numero1, Racional numero2);

double somar(Racional numero1, Racional numero2);

void liberar(Racional* numero);
