#include <stdio.h>
#include <stdlib.h>
#define QUANTIDADE_ALUNOS 1 //Constante 

typedef struct aluno {
    int matricula; 
    int idade;
    char nome[20];
}Aluno; 

void preenche(Aluno * aluno, int tamanho){
    int count; 
    for(count=0; count < tamanho; count++){
    printf("INFORME O NOME: \t");
    scanf(" %[^\n]", aluno[count].nome);
    printf("INFORME O NUMERO DA MATRICULA: \t");
    scanf("%d", &aluno[count].matricula);
    printf("DIGITE A IDADE: ");
    scanf("%d", &aluno[count].idade);
    }
}

int main(void){
    
    Aluno * aluno = (Aluno*) malloc(QUANTIDADE_ALUNOS*sizeof(Aluno));
    if(aluno==NULL){
        printf("NO memory RAM.");
        exit(1);
    }
    
    preenche(aluno, QUANTIDADE_ALUNOS);
    
    int novo_tamanho;
    printf("Informe o novo tamanho do vetor: \t");
    scanf("%d", &novo_tamanho);
    aluno =(Aluno*) realloc(aluno, novo_tamanho*sizeof(Aluno));
    if(aluno==NULL){
        exit(1);
    } 
    else{
        printf("vetor realocado:\n");
    }
    preenche(aluno, novo_tamanho);
    return 0; 
}