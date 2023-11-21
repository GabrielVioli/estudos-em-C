#include <stdlib.h>
#include <stdio.h>

int main() { 

    int i; int cont = 0;

    printf("numero: ");
    scanf("%d", &i);
    
    for(i; cont != 11; cont++) {
        printf("%d x %d = %d\n", i , cont, i * cont);
    }

}