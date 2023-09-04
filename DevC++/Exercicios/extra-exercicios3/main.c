//3. Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número máximo (no exemplo, 9). Este número deve ser sempre ímpar.
/*  1 2 3 4 5 6 7 8 9
      2 3 4 5 6 7 8
        3 4 5 6 7
          4 5 6
            5   */
            
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int max_number;

    printf("Digite o número máximo (ímpar): ");
    scanf("%d", &max_number);
    
    for (int i = 1; i <= max_number; i += 2) {
        for (int space = 0; space < (i - 1) / 2; space++) {
            printf("  ");
        }
        
        for (int j = i; j <= max_number; j++) {
            printf("%d ", j);
        }
        
        printf("\n");
    }
    
    
    return 0;
}
