#include<stdio.h>

typedef enum Genero{
    MASCULINO,
    FEMININO,
    NEUTRO
}genero;
 
 typedef struct Pessoa{
    char nome[20];
    int idade;
    genero Genero;
 }pessoa;

 int main()
 return 0;