#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    //dados que serão introduzidos pelo usuário

    float number_1 = 0.0f;
    float number_2 = 0.0f;
    char operation_type[50] = "";

    //entrada dos dados

    printf("digite 2 numeros consecutivamente separados por espaco\n");
    scanf("%f %f", &number_1, &number_2);
    printf("qual operacao voce deseja fazer?\n[M]Multiplicacao\n[D]Divisao\n[R]Razao\n[S]Soma\n");
    scanf("%s", &operation_type);

    //operações

    float _x_ = (number_1 * number_2);
    float _ratio_ = (number_1 - number_2);
    float _division_ = (number_1 / number_2);
    float _sum_ = (number_1 + number_2);

    //saída de dados e condições

    if (strcmp(operation_type, "M") == 0) {
        printf("%.2f", _x_);
    }

    if (strcmp(operation_type, "D") == 0) {
        printf("%.2f", _division_);
    }

    if (strcmp(operation_type, "R") == 0) {
        printf("%.2f", _ratio_);
    }
    
    if (strcmp(operation_type, "S") == 0){
        printf("%.2f", _sum_);
    }

}
