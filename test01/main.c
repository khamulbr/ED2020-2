#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct nametype{
        char first[10]; // 10
        char midinit; // 1
        char last[20]; // 20 = 31
    };

    struct person{
        struct nametype name; // 0-30
        int birthday[2]; // 31-38
        struct nametype parents[2]; // 39 - 101
        int income; // 102 - 109
        int numchildren; // 110 - 113
        char address[20]; // 114 - 133
        char city[10]; // 134 - 143
        char state[2]; // 144 - 145
    };

    struct person p[100]; //500 - p[0] - 84023853290

    int pStart = &p;
    printf("p = %p - %d\n", pStart, pStart);
    printf("p[0] = %p - %d\n", &p[0], &p[0]);
    printf("p[0].name = %p - %d\n", &p[0].name, &p[0].name);
    printf("p[0].birthday = %p - %d\n", &p[0].birthday, &p[0].birthday);
    printf("p[1] = %p - %d\n", &p[1], &p[1]);
    printf("p[2] = %p - %d\n", &p[2], &p[2]);
    printf("p[5] = %p - %d\n", &p[5], &p[5]);
    printf("p[5].parents[1].last[10] = %p - %d\n", &p[5].parents[1].last[10], &p[5].parents[1].last[10]);
    printf("p[10] %p - %d\n", &p[10], &p[10]);

    const int startingpos = 500;

    int pAt10 = &p[10];
    int diffP10 = pAt10 - pStart + startingpos;
    printf("pos p[10] %p - %d\n", diffP10, diffP10); // 1940

    int pAt200 = &p[200].name.midinit;
    int diffP200 = pAt200 - pStart + startingpos;
    printf("pos p[200].name.midinit %p - %d\n", diffP200, diffP200); //29310

    int pAtIncome = &p[20].income;
    int diffPIncome = pAtIncome - pStart + startingpos;
    printf("pos p[20].income %p - %d\n", diffPIncome, diffPIncome); //3484

    int pAtAddress = &p[20].address[5];
    int diffPAddress = pAtAddress - pStart + startingpos;
    printf("pos p[20].address %p - %d\n", diffPAddress, diffPAddress); //3497

    int pAtParents = &p[5].parents[1].last[10];
    int diffPAtParents = pAtParents - pStart + startingpos;
    printf("pos p[5].parent %p - %d\n", diffPAtParents, diffPAtParents); //1312

    return 0;
}
