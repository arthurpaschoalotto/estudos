#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float m;
    
    printf("Insira a nota do aluno:\n");
    scanf("%f", &m);
    
    if(m >= 7){
        printf("Aprovado!\n");
    }
    else{
        printf("Reprovado!\n");
    }
    
}   


