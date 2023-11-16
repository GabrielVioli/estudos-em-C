#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    system("echo CALCULO DE IMC");

    float altura = 0.0f;
    int peso = 0; 

    printf("insira sua altura e peso separados por espaco\n");
    scanf("%f %d", &altura, &peso);

    printf("Seu IMC e de %.2f", peso / (altura * altura));

    if (peso / (altura * altura) < 18.5) {
        printf(" e voce está muito magro");
    }
    if (peso / (altura * altura) >= 18.5 && peso / (altura * altura) <= 24.9) {
        printf(" e voce está no estado normal");
    }
    if (peso / (altura * altura) >= 25 && peso / (altura * altura) <= 29.9) {
        printf(" e voce esta com sobrepeso");
    }
    if (peso / (altura * altura) >= 30 && peso / (altura * altura) <= 34.9) {
        printf(" e voce esta obeso grau 1");
    }
    if (peso / (altura * altura) >= 35 && peso / (altura * altura) <= 39.9) {
        printf(" e voce esta obeso grau 2");
    }
    if (peso / (altura * altura)>= 40) {
        printf(" e voce esta obeso morbido");

    }
    return 0;
}
