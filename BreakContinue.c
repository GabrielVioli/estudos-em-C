#include <stdlib.h>
#include <stdio.h>

int main() { 

    int cont;

    for(cont = 1; cont <= 10; cont++) {
        if (cont == 5) {
            continue;          
        }

        printf("%d\n", cont);
    }
    
    return 0;
}