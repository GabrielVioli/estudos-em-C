#include <stdlib.h>
#include <stdio.h>

int main() {
    
    int user_n; 

    printf("digite um numero: ");
    scanf("%d", &user_n);

    if (user_n%2 == 0) {
        printf("este numero e par");
    }

    if (user_n%2 != 0) {
        printf("esse numero e impar");
    }

    return 0;
}