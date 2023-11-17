#include <stdlib.h>
#include <stdio.h>

int main() {

    int init_cont = 0;

    while (init_cont != 100) {
        printf("%d", init_cont);
        init_cont = init_cont + 1;
    }
    
    return 0;
}