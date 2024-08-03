#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

struct aluno {
    int matricula; 
    int idade;
    char nome[20];
}; 

Aluno * aloca_aluno(void){
    Aluno * aluno =(Aluno*)malloc(sizeof(Aluno));
    if(aluno == NULL){
        printf("NO MEMORY!");
        exit(1);
    }
    else{
        printf("Aluno alocado!\n");
    }
    return aluno;
}

void preenche(Aluno * aluno){
   
    printf("INFORME O NOME: \t");
    scanf(" %[^\n]", aluno->nome);
    printf("INFORME O NUMERO DA MATRICULA: \t");
    scanf("%d", &aluno->matricula);
    printf("DIGITE A IDADE: ");
    scanf("%d", &aluno->idade);
    } 
    
void imprime(Aluno * aluno){
    printf("NOME:%s\n, idade:%d\n, matricula:%d", aluno->nome, aluno->idade, aluno->matricula);
}