#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//2. Escreva um programa que leia 3 notas de um aluno e a média das notas dos exercícios realizados por ele. 
//Calcular a média de aproveitamento, usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. A partir da média, informar o conceito de acordo com a tabela:

void calcular_media(int n1, int n2, int n3, int *med) {
    *med = (n1 + n2 + n3) / 3;
}


int main() {
    int n1, n2, n3;
    int med = 0;

    printf("Digite os valores das notas:\n");
    scanf("%d %d %d", &n1, &n2, &n3); // Adicione o & antes de cada variável

    calcular_media(n1, n2, n3, &med);
    printf("Media: %d\n", med);

    return 0;
}


