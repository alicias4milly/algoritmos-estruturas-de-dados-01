#include<stdio.h>

typedef struct funcionario{
    char nome[20];
    float salario;
    long int indentificador;
    char cargo[20];
} Funcionario;

void preenche(Funcionario * servidor){
    /*função para preencher variavel do tipo funcionario*/
    printf("digite o nome:\t");
    scanf(" %[^\n]", servidor->nome);
    printf("digite o salario:\t");
    scanf("%f", &servidor->salario);
    printf("digite o identificador:\t");
    scanf("%d", &servidor->indentificador);
    printf("digite o cargo:\t");
    scanf(" %[~\n]", servidor->cargo);

}