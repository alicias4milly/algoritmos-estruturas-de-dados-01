#include <stdio.h>
#include <stdlib.h>

int main (void){
int var = 2;
int * point = &var;
printf("ponteiro %p e valor %d", *point, var);
return 0;
}