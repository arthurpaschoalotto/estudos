#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    int dado = 10;
    
   printf("Dado antes do incremento: %d.\n", dado);
   
   dado ++;
   printf("Dado depois do incremento: %d.\n", dado);
   
   dado --;
   printf("Dado depois do dencremento: %d.\n", dado);
   
   dado +=3;
   printf("Dado depois do incremento 3 und: %d.\n", dado);
   
   dado -=3;
   printf("Dado depois do dencremento 2 und: %d.\n", dado);
   
   dado *=10;
   printf("Dado depois de multiplicar por 10: %d.\n", dado);
}   


