//
// Created by Alessandro on 01/09/2020.
//
typedef float Vetor;

void main(){
    Vetor notas;
    notas = leitura();
    int NumElementos = num_elementos(notas);
    float media = soma_dos_elementos(notas)/NumElementos;
    imprime(notas);
    printf("\n Media da turma : %f", media);
}
