#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>


struct tipo_pessoa
{
    char name[50];
    int idade;
    float peso;

};

typedef struct tipo_pessoa tipo_pessoa;

int main(){

    system("chcp 65001 > nul");
    setlocale(LC_ALL, ".UTF8");

    int cont = 0;
    tipo_pessoa pessoa1;
    tipo_pessoa lista[3];

    while(cont <= 2) {
    printf("--------pessoa(%d)---------\n", cont + 1);
    printf("nome: ");
    scanf("%s", lista[cont].name);
    fflush(stdin);
    printf("idade: ");
    scanf("%d", &lista[cont].idade);
    fflush(stdin);
    printf("peso: ");
    scanf("%f", &lista[cont].peso);
    fflush(stdin);
    cont++;

    }

    system("cls");

    for(int i = 0; i < 3; i++) {

    printf("----dados da %d° pessoa----\n", i + 1);
    printf("nome: %s\n", lista[i].name);
    printf("idade: %d\n", lista[i].name);
    printf("peso: %f\n", lista[i].peso);

    }

    return 0;
}