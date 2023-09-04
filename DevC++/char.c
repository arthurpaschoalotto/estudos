#include <stdio.h>
#include <stdlib.h>

#define texto "Entrada e saida de texto"

int main(int argc, char *argv[])
{
    printf("%s\n", texto);
    
    int idade =0;
    float altura = 0.0;
    char nome[50] = "";
    
    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    
    printf("Digite sua altura:\n");
    scanf("%f", &altura);

    printf("Digite seu nome:\n");
    scanf("%s", nome);
    
    printf("Dados informados:\n");
    printf("Idade: %d.\n", idade);
    printf("Altura: %.2f.\n", altura);
    printf("Nome: %s.\n", nome);
    
}   

