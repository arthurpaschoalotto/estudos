//5. Crie um programa  capaz de multiplicar uma linha de uma matriz de inteiros por um dado número. Faça o mesmo para uma coluna. A matriz deve ser lida de teclado.

#include <stdio.h>
#include <string.h>

int main() {
    char nome1[100];
    char nome2[100];

    printf("Digite o primeiro nome: ");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0'; // Remover a quebra de linha

    printf("Digite o segundo nome: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0'; // Remover a quebra de linha

    if (strcmp(nome1, nome2) < 0) { // strcmp for negativo significa que nome1 vem antes
        printf("%s\n%s\n", nome1, nome2);
    } else {
        printf("%s\n%s\n", nome2, nome1);
    }

    return 0;
}
