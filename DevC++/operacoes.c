#include <stdio.h>
#include <stdlib.h>

#define texto "Entrada e saida de texto"

int main(int argc, char *argv[])
{
    printf("%s\n", texto);
    
    int A, B, soma, subtr, mult, divis;
    
    printf("Digite o primeiro valor:\n");
    scanf("%d", &A);
    
    printf("Digite o segundo valor:\n");
    scanf("%d", &B);

    soma = A + B;
    subtr = A - B;
    mult = A * B;
    divis = A / B;

    printf("Resultados:\n");
    printf("Soma: %d.\n", soma);
    printf("Subtra: %d.\n", subtr);
    printf("Multiplica: %d.\n", mult);
    printf("Divisao:%d.\n", divis);
}   


