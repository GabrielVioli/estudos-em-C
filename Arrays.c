#include <stdlib.h>
#include <stdio.h>


int main() {

    float notas[30] = {43, 43, 65, 87, 12, 54, 65,
                       76, 23, 98, 45, 32, 67, 89, 10, 55, 66, 77,
                       88, 99, 21, 31, 72, 83, 14, 25, 54, 47, 32, 69};
                       
    float soma = 0;

    for(int i = 0; i <= 30; i++) {soma += notas[i];}
    float media = soma/30;

    printf("%.2f", media);

}
