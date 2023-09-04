#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//1. Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros. 
// Ao final da leitura o programa deverá imprimir o número da linha que contém o menor dentre todos os números lidos.

void imprime_val(int m[3][3], int *maior_valor, int *linha) {
    int i, j;

    for (i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 3; j++) {
            printf("%d ", m[i][j]);
            if (m[i][j] > *maior_valor) {
                *maior_valor = m[i][j];
                *linha = i; // Atualiza a linha
            }
        }
    }
}

int main(){
    int m[3][3] = {{1, 2, 3},
                   {9, 12, 5},
                   {22, 7, 12}};
    int maior_valor = 0; // Inicializa o maior valor
    int linha = 0;

    imprime_val(m, &maior_valor, &linha); // Passa os endereços das variáveis
    printf("\nLinha com o maior valor: %d\n", linha);

    return 0;
}



