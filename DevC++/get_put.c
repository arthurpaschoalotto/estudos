#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define N 20

// int main(int argc, char *argv[])
// {
//     char s[10];
    
//     printf("Digite algo:\n");
//     scanf("%s", s);
//     fflush(stdin);
    
//     printf("Resultado: %s\n\n", s);
    
//     printf("Digite algo:\n");
//     //Limita 10 caracteres
//     scanf("%9[^\n]s", s);
//     fflush(stdin);
    
//     printf("Resultado: %s\n\n", s);
// }

//----------------------------GETS---------------------------

// int main(int argc, char *argv[])
// {
//     char s[10];
    
//     printf("Digite algo:\n");
//     gets(s);
//     fflush(stdin);
    
//     puts("Resultado:");
//     puts(s);
//     puts("");
    
//     printf("Digite algo:\n");
//     fgets(s, 10, stdin);
//     fflush(stdin);
    
//     puts("Resultado:");
//     puts(s);
// }

//----------------------------strcpy-----------------------

// int main(int argc, char *argv[])
// {
//     setlocale(LC_ALL,"Portusguese");
    
//     char origem[N] = {"Olá mundo"};
//     char destino[N];
    
//     printf("Antes do strcpy:\n");
//     puts(origem);
//     puts(destino);
    
//     strcpy(destino,origem);
    
//     printf("Depois do strcpy:\n");
//     puts(origem);
//     puts(destino);
    
// }

//----------------------------strcat-----------------------

// int main(int argc, char *argv[])
// {
//     setlocale(LC_ALL,"Portusguese");
    
//     char s1[N] = {"Lógica de"};
//     char s2[N] = {" Programação"};
    
//     printf("Antes do strcat:\n");
//     printf("str1: %s\n", s1);
//     printf("str2: %s\n", s2);
    
//     strcat(s1,s2);
    
//     printf("Depois do strcat:\n");
//     puts(s1);
// }

//----------------------------strcmp-----------------------

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"Portusguese");
    
    char hardText[N] = {"/exit"};
    char senha_usr[N];
    int ok;
    
    printf("Digite um texto:\n");
    gets(senha_usr);
    
    ok = strcmp(hardText, senha_usr);
   
    if(ok == 0)
        printf("Textos iguais.\n");
    else
        printf("Textos diferentes.\n");
}