#include <stdio.h>
#include <stdlib.h>

int main() {
    void *pp;
    int *p1, p2 = 10;
    printf("o endereco em p2: %p\n", &p2);
    printf("o conteudo em p2: %p\n", p2);


    p1 = &p2;
    printf("o endereco de p1: %p\n", &p1);
    printf("o conteudo em p1: %p\n", p1);

    pp = &p2;
    printf("o endereco de pp: %p\n", &pp);
    printf("o conteudo em pp: %p\n", pp);

    pp = &p1;
    printf("o endereco de pp: %p\n", &pp);
    printf("o conteudo de pp: %p\n", pp);

    pp = p1;
    printf("o endereco de pp: %p\n", &pp);
    printf("o conteudo de pp: %p\n", pp);

    *p1 = (*p1)/2;

    printf("o conteudo de p2: %p\n", p2);


}
