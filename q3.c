#include <stdlib.h>
#include <stdio.h>

int main() {

    int D; 

    printf("insira um valor de 1 a 7: ");
    scanf("%d", &D);

    switch (D)
    {
    case 1:
        printf("domingo");
        break;

    case 2:
        printf("segunda-feira");
        break;

    case 3:
        printf("terca-feira");
        break;

    case 4:
        printf("quarta-feira");
        break;

    case 5:
        printf("quinta-feira");
        break;

    case 6:
        printf("sexta-feira");
        break;

    case 7:
        printf("sabado");
        break;

    default:
        printf("valor inválido");
        break;
    }

    return 0;
}