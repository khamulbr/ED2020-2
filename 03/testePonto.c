#include <stdio.h>
#include "Circulo.h"

int main(){

    Ponto* ponto1 = cria(10, 20);
    Ponto* ponto2 = cria(25, 10);
    Ponto* ponto3 = cria(-10, -20);
    Ponto* ponto4 = cria(100, 210);
    Ponto* ponto5 = cria(-9, -1245);

    printf("ponto 1: x=%f & y=%f \n", ponto1->x, ponto1->y);
    printf("ponto 2: x=%f & y=%f \n", ponto2->x, ponto2->y);
    printf("ponto 3: x=%f & y=%f \n", ponto3->x, ponto3->y);
    printf("ponto 4: x=%f & y=%f \n", ponto4->x, ponto4->y);
    printf("ponto 5: x=%f & y=%f \n", ponto5->x, ponto5->y);

    float distancia2_1 = distancia(ponto1, ponto2);

    printf("A distancia entre p1 e p2 eh : %f \n", distancia2_1);

    atribui(ponto1, 8, 8);

    distancia2_1 = distancia(ponto1, ponto2);

    printf("A distancia entre p1 e p2 eh : %f \n", distancia2_1);

    float xdop1, ydop1;

    acessa(ponto1, &xdop1, &ydop1);

    printf("os dados de x e y de p1 sao: %f e %f \n", xdop1, ydop1);

    Circulo* circulo1 = cria_circulo(ponto1, 10);

    printf("circulo 1: ponto(x=%f & y=%f) e raio %f \n", circulo1->centro->x, circulo1->centro->y, circulo1->raio);

    printf("a area do circulo1 eh: %f\n", area(circulo1));

    printf(" o ponto1 esta dentro do circulo1 ? %s\n", interior(ponto1, circulo1)? "true" : "false");
    printf(" o ponto2 esta dentro do circulo1 ? %s\n", interior(ponto2, circulo1)? "true" : "false");
    printf(" o ponto3 esta dentro do circulo1 ? %s\n", interior(ponto3, circulo1)? "true" : "false");
    printf(" o ponto4 esta dentro do circulo1 ? %s\n", interior(ponto4, circulo1)? "true" : "false");
    printf(" o ponto5 esta dentro do circulo1 ? %s\n", interior(ponto5, circulo1)? "true" : "false");

    long a;

    short c;


}
