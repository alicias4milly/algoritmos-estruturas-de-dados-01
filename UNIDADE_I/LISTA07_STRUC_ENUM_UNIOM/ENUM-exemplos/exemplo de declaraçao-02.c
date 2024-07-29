#include<stdio.h>

typedef enum dias_semana{
    SEGUNDA=2,
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO,
    DOMINGO
}DiaSemana;

int main(){
    DiaSemana dia;
    printf("Dia da semana: 2 - 8 \t");
    scanf("%d", &dia);
    switch (dia){
    case SEGUNDA:
    printf("SEGUNDA-FEIRA!\n");
        break;
    case TERCA:
    printf("TERÇA-FEIRA!\n");
        break;
    case QUARTA:
    printf("QUARTA-FEIRA!\n");
        break;
    case QUINTA:
    printf("QUINTA-FEIRA!\n");
        break;
    case SEXTA:
    printf("SEXTA-FEIRA!\n");
        break; 
    case SABADO:
    printf("SABADO!\n");
        break;  
    case DOMINGO:
    printf("DOMINGO!\n");
        break;     
    default:
    printf("Dia nao cadastrado! \n");
        break;
    }
    return 0;
}
