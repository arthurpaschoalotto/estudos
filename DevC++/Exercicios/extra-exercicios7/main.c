//7. Faça um programa que crie um vetor de pessoas. Os dados de uma pessoa devem ser armazenados em um variavel do tipo struct. 
//O programa deve permitir que o usuário digite o nome de 3 pessoas e a seguir imprimi os dados de todas as pessoas. A struct deve armazenar os dados de idade, peso e altura.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 50

struct tipo_pessoa{
        int idade;
        float peso;
        float altura;
        char nome[TAM];
    };
    
typedef struct tipo_pessoa tipo_pessoa;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    
    tipo_pessoa pes[3];
    
    for(i=0;i<3;i++){
        printf("Informe o nome da pessoa:\n");
        scanf("%s", &pes[i].nome);
        printf("Informe a idade da pessoa:\n");
        scanf("%d", &pes[i].idade);
        printf("Informe a altura da pessoa:\n");
        scanf("%f", &pes[i].altura);
        printf("Informe o peso da pessoa:\n");
        scanf("%f", &pes[i].peso);
    }
    
    for(i=0;i<3;i++){
        printf("Nome:%s\n", pes[i].nome);
        printf("Idade:%d\n", pes[i].idade);
        printf("Altura:%f\n", pes[i].altura);
        printf("Peso:%f\n", pes[i].peso);
        printf("\n")
        
    }
}

