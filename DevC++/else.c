#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float m;
    
    printf("Insira a nota do aluno:\n");
    scanf("%f", &m);
    
    if(m >= 4.0 && m < 7){
        printf("Pode fazer exame!\n");
    }
    else{
        printf("Não pode fazer exame!\n");
    }
    
}   


