//
// Created by Alessandro on 01/09/2020.
//
typedef float Vetor;

void main(){
    Vetor participante1, participante2;
    participante1 = leitura();
    participante2 = leitura();
    float mediaParticipante1, mediaParticipante2;
    int numDadosParticipante1 = num_elementos(participante1);
    int numDadosParticipante2 = num_elementos(participante2);

    mediaParticipante1 = soma_dos_elementos(participante1) / numDadosParticipante1;
    mediaParticipante2 = soma_dos_elementos(participante2) / numDadosParticipante2;

    if (mediaParticipante1 > mediaParticipante2) {
        printf("Media do primeiro eh maior: %f", mediaParticipante1);
    } else {
        if (mediaParticipante1 < mediaParticipante2) {
            printf("Media do segundo eh maior: %f", mediaParticipante2);
        }
    }
}

