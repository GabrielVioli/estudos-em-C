#include <stdio.h>

int main() {

    int fatorial = 1;
    int contador = 1;
    int entrada_usuario;

    printf("digite um numero: ");
    scanf("%d", &entrada_usuario);

    if(entrada_usuario < 0) {
        while (entrada_usuario < 0) {
            printf("Fatorial nao permite numeros negativos\n");
            printf("digite um numero: ");
            scanf("%d", &entrada_usuario);
                
            if(entrada_usuario > 0) {
                break;
            }
        }
    }
        
    while(contador <= entrada_usuario) {
        fatorial = fatorial * contador;
        contador++;

    }

    printf("%d", fatorial);


}

