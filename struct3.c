#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 2 //quantidade de alunos

struct aluno {
    char nome[50];
    float nota;
    int matricula;
};

typedef struct aluno main_aluno;

int main() {

    system("chcp 65001 > nul");
    setlocale(LC_ALL, ".UTF8");

    main_aluno aluno;
    main_aluno lista[TAM];

    for(int i = 0; i < TAM; i++) {

        printf("----aluno(%d)----\n", i + 1);

        printf("nome: ");
        scanf("%50[^\n]s", lista[i].nome);
        fflush(stdin);
        printf("nota: ");
        scanf("%f", &lista[i].nota);
        fflush(stdin);
        printf("matricula: ");
        scanf("%d", &lista[i].matricula);
        fflush(stdin);

    }

    system("cls");

    int conf;

    printf("N° matricula: ");
    scanf("%d", &conf);

    for(int y = 0; y < TAM; y++){
        if(conf == lista[y].matricula) {
            printf("nome:%s\n", lista[y].nome);
            printf("nota:%f\n", lista[y].nota);
            printf("matricula:%d\n", lista[y].matricula);

        }

        if(conf != lista[y].matricula) {
            printf("numero de matricula não consta");
            break;
        }


    }

    return 0;
}