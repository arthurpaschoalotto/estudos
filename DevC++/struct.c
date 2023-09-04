#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa{
        int idade;
        float peso;
        char nome[TAM];
    };
    
typedef struct tipo_pessoa tipo_pessoa;


int main(){
    setlocale(LC_ALL, "Portuguese");
    
    tipo_pessoa pes = {0, 0.0, "Teste"};
    
    pes.idade = 10;
    pes.peso = 99.09;
    strcpy(pes.nome, "Texto");
    
    printf("%.2f\n",pes.peso);
}

