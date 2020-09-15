#include <stdio.h>
#include <string.h>

struct nametype {
    char first[10];
    char midinit;
    char last[20];
};

struct person {
    struct nametype name;
    int birthday[2];
    struct nametype parents[2];
    int income;
    int numchildren;
    char address[20];
    char city[10];
    char state[2]; 
};

struct person pessoas[100];

struct notas {
    float nota1;  // 1 * 4 = 4
    float nota2;  // 1 * 4 = 4
    float nota3;  // 1 * 4 = 4
};

struct aluno {
    char nome[100]; // 100 * 1 = 100
    struct notas; // 12 de notas
};

struct aluno alunos[73]; // 112 * 73 = 8176 bytes = +/-8Kb

int main() {
    alunos[0].nota1 = 10;
    alunos[0].nota2 = 9;
    alunos[0].nota3 = 3;
    strcpy(alunos[0].nome, "joao");

    for (int i=0; i<10; i++){
        printf("Aluno %d - nome: %s - nota1: %f - nota2: %f - nota3: %f \n", i, alunos[i].nome, alunos[i].nota1, alunos[i].nota2, alunos[i].nota3);
    }

}