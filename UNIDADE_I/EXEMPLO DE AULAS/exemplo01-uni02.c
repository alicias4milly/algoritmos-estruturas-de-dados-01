#include <stdio.h>
#include <stdlib.h>

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
void imprime(Aluno * aluno){
    printf("NOME:%s\n, idade:%d\n, matricula:%d", 
    aluno->nome, aluno->idade, aluno->matricula);
}
int main(void){
    Aluno* aluno=(Aluno*)malloc(sizeof(Aluno));
    if (aluno == NUUL)(exit(1));}
    preenche(aluno);
    imprime(aluno);
    return 0;
}