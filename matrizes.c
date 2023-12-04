#include <string.h>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "UTF-8");
    
    int cont = 1; 
    int cont2 = 0;
    char nomes[20][20] = {};
    char exit[] = "exit";
    char not[] = "";

    for(cont2; cont2 <= 20; cont2++){ 
        printf("nome: ");
        fgets(nomes[cont2], sizeof(nomes[cont2]), stdin);

        size_t tamanho = strlen(nomes[cont2]);
        if(tamanho > 0 && nomes[cont2][tamanho-1] == '\n') {
            nomes[cont2][tamanho - 1] = '\0';
        }

        if(strcmp(nomes[cont2], exit) == 0) {
            break;
        }
    }

    for(cont; cont < 20; cont++) {
        printf("%d-%s\n", cont, nomes[cont]);

        if(strcmp(not, nomes[cont]) == 0) {
            break;
        }
    }

    return 0;
}
