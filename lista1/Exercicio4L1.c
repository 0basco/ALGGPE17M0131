#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
        setlocale(LC_ALL, "");

    printf("=======================\n");
    printf("Média anual do aluno\n");
    printf("=======================\n");

char nome[50];
int ID;
float nota1, nota2, nota3, nota4;

    printf("por favor, insira seu nome: \n");
     scanf("%s", &nome);
    printf("agora, insira seu ID de aluno: \n");
     scanf("%i", &ID);

        system("cls");

    printf("=======================\n");
    printf("nome: %s\n", nome);
    printf("ID: %i\n", ID);
    printf("=======================\n");

    printf("por favor, insira a nota final do primeiro semestre: ");
     scanf("%f", &nota1);
    printf("por favor, insira a nota final do segundo semestre: ");
     scanf("%f", &nota2);
    printf("por favor, insira a nota final do terceiro semestre: ");
     scanf("%f", &nota3);
    printf("por favor, insira a nota final do quarto semestre: ");
     scanf("%f", &nota4);

        system("cls");

float media;

    media = (nota1 + nota2 + nota3 + nota4)/4;

    printf("=======================\n");
    printf("nome: %s\n", nome);
    printf("ID: %i\n", ID);
    printf("=======================\n");

    printf("%s, sua média anual é de: %2.f ", nome, media);


}
