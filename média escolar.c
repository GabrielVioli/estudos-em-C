#include <stdlib.h>
#include <stdio.h>

int main() {

    float n1, n2, n3, falt;
    
    printf("suas 3 notas\n");
    scanf("%f %f %f", &n1, &n2, &n3);

    falt = (180 - (n1 + n2 + n3));
    
    if ((n1 + n2 + n3) < 180){
        printf("reprovado, falta %.2f pontos para passar", falt);
    }

    else
    {
        printf("aprovado");
    }
    

    return 0;
}