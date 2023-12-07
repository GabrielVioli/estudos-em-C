#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


struct item {
    char nome[50];
    int quantidade;
    float valor;
};

typedef struct item item;

#define TAM 3 // quantidade de itens no estoque

int main() {
    inicio:
    system("chcp 65001 > nul");
    setlocale(LC_ALL, ".UTF8"); 

    item item[TAM]; int adicionados;

    printf("quantos produtos serão adicionados: ");
    scanf("%d", &adicionados);

    printf("|PRODUTOS|\n");
    for(int u = 0; u < adicionados; u++) {
        scanf("%s", item[u].nome);
    }

    system("cls");

    printf("|defina o preço de cada item|\n");
    for(int a = 0; a < adicionados; a++) {
        printf("%s:", item[a].nome);
        scanf("%f", &item[a].valor);
    }

    system("cls");

    item->quantidade = adicionados;
    int choice;

    printf("itens em estoque:%d\n", item->quantidade);

    while(1) {
    printf("-(1)CONFERIR ITENS--(2)CONFERIR VALORES-(3)ADICIONAR MAIS PRODUTOS--(4)SAIR\n");
    scanf("%d", &choice);

    if(choice == 1) {
        for(int i = 0; i < adicionados; i++) {
            printf("%s\n", item[i].nome);
        }
    }

    if(choice == 2) {
        for(int j = 0; j < adicionados; j++) {
            printf("%s: %.2f\n", item[j].nome, item[j].valor);
        }

    }

    if(choice == 3) {
        system("cls");
        goto inicio;
    }

    if (choice == 4){
        break;
    }


    }

    


    return 0;
}