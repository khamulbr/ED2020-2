//
// Created by Alessandro on 01/09/2020.
//
#include <stdio.h>
#include <string.h>
#define TamanhoFrase 40
#define TamanhoPalavra 10

int main(){
    char frase[TamanhoFrase];
    char palavra[TamanhoPalavra];

    printf("escreva uma frase");
    gets(frase);
    printf("Digite uma palavra pra ser buscada:");
    scanf("%s", palavra);
    if (strstr(frase, palavra)){
        printf("\nSIM");
    } else {
        printf("\nNAO");
    }

    for (int i=0; i<TamanhoFrase; i++){
        printf("%d",i);
        printf("%c", frase[i]);
        printf("\n");
    }
}
