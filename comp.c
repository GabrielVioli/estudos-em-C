#include <string.h>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <signal.h>

#define L 30

int main() {
    
    
    system("chcp 65001 > nul");
    setlocale(LC_ALL, ".UTF-8");

    char usr_input[L];
    char close[L] = {"/exit"};
    printf("comand: ");
    gets(usr_input);

    while (strcmp(usr_input, close) != 0)
    {
        printf("comand: ");
        gets(usr_input);

        if(strcmp(usr_input, close) == 0) {
        raise(SIGTERM);
    }
    }

    printf("TESTE");

    return 0;
}