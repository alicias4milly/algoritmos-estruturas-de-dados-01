#include<stdio.h>
#include "str.c"

int main(void){
    char str[101], str1[51], str2[51];
    printf("digite uma sequencia de caracteres: ");
    scanf(" %50[^\n]", str1);
    printf("digite outra sequencia de caracteres: ");
    scanf(" %50[^\n]", str2);
    copia (str, str1);
    concatena (str, str2);
    printf("comprimento da concatenacao: %d\n", comprimento(str));
   
    return 0;
}