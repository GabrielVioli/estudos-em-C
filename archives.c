#include <stdio.h>

int main() {

    int contador = 1;
    int fatorial = 1;
    int user_input;
    
    printf("fatorial: ");
    scanf("%d", &user_input);

    if(user_input < 0 || user_input ) {
        printf("formato nao suportado\n");
        while (user_input < 0)
        {
            printf("fatorial: ");
            scanf("%d", &user_input);
            if(user_input > 0) {
                break;
            }
        }
        
    }

    for(contador; contador <= user_input; contador++) {
        fatorial *= contador;
    }

    printf("%d\n", fatorial);

}
