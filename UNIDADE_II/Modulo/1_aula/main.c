#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

int main(void){
    Aluno* aluno = aloca_aluno(); //aloca
    preenche(aluno); //preenche
    imprime(aluno);//imprime
    free(aluno); // libera memoria
    return 0;
}
