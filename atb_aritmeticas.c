#include <stdlib.h>
#include <stdio.h>

int main() {

    int init_cont = 0;
    int init_cont2 = 0;
    int user_input;
    int user_input2;

    printf("divisor: ");
    scanf("%d", &user_input2);
    printf("dividendo: ");
    scanf("%d", &user_input);


    while (init_cont != user_input) {
        printf("%d\n%d\n", init_cont, init_cont2);
        init_cont += user_input2;
        init_cont2++;
    }
    
    return 0;
}