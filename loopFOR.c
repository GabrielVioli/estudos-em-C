#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

int main() { 

    int contador = 1;
    int fatorial = 1;
    int entrada_usuario;

    printf("numero: ");
    scanf("%d", &entrada_usuario);

    for(contador; contador <= entrada_usuario; contador++) {
        fatorial = fatorial * contador;
    }

    printf("%d", fatorial);


    
}