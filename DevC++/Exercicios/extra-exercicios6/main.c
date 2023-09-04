//5. Crie um programa  capaz de multiplicar uma linha de uma matriz de inteiros por um dado número. Faça o mesmo para uma coluna. A matriz deve ser lida de teclado.

#include <stdio.h>

int main() {
    int mult_lin, mult_col, line, col;

    // Solicitar o número de multiplicacao e linha
    printf("Digite o número multiplicador de linhas: ");
    scanf("%d", &mult_lin);
    printf("Digite o número multiplicador de colunas: ");
    scanf("%d", &mult_col);
    printf("Digite a linha 0, 1 ou 2: ");
    scanf("%d", &line);
    printf("Digite a linha 0, 1 ou 2: ");
    scanf("%d", &col);

    // Declarar a matriz original e multiplicada
    int matriz[3][3];
    int multi[3][3];
    
    // Preencher a matriz
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calcular a matriz multipicada linha
    for (int i = 0; i < 3; i++) {
        multi[line][i] = matriz[line][i] * mult_lin;
    }

    // Calcular a matriz multipicada coluna
    for (int i = 0; i < 3; i++) {
        multi[i][col] = matriz[i][col] * mult_col;
    }

    // Imprimir a matriz multiplicada
    printf("A matriz multiplicada é:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", multi[i][j]);
        }
        printf("\n");
    }

    return 0;
}

