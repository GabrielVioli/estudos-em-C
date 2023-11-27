#include <string.h>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define N 20

int main() {

    system("cls");
    system("chcp 65001 > nul");
    setlocale(LC_ALL, ".UTF8");


    char senha[] = {};
    fgets(senha, 200, stdin);
    int limite = strlen(senha);
    if(limite > 15) {
        while (limite > 15)
        {
            printf("limite de 15 caractéres");
            fgets(senha, 200, stdin);
            limite = strlen(senha);
        }
                
    }
    printf("%d", limite);
    

    return 0;
}