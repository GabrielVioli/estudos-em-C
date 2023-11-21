#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    float number_1,number_2;
    int operation_type;

    printf("digite 2 numeros consecutivamente separados por espaco\n");
    scanf("%f %f", &number_1, &number_2);
    printf("qual operacao voce deseja fazer?\n[1]Multiplicacao\n[2]Divisao\n[3]Razao\n[4]Soma\n");
    scanf("%d", &operation_type);

    switch (operation_type)
    {
    case 1:
        printf("%.2f", number_1 * number_2);
        break;
    case 2:
        printf("%.2f", number_1 / number_2);
        break;
    case 3:
        printf("%.2f", number_1 - number_2);
        break;
    case 4:
        printf("%.2f", number_1 + number_2);
        break;
    
    default:
        printf("dados invalidos");
        break;
    }

}