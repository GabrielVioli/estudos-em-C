#include <stdlib.h>
#include <stdio.h>

int main() {
    
    //dados de entrada do usuario
    float user_input;

    //dados de entrada do sistema

    int cont = 0;
    float result = 0;

    //interação com o usuário

    printf("Numero: ");
    scanf("%f", &user_input);

    //saída de dados

    while (cont != 10) 
    {
        printf("%.2f x %d = %.2f\n", user_input, cont, result);
        cont++;

        result = (user_input * cont);
    }
    

    return 0;
}