#include <stdlib.h>
#include <stdio.h>

int main() {


    int n1, n2, s, m, su, r, d;

    printf("insira 2 numeros consecutivos e separados por espaco\n");
    scanf("%d %d", &n1, &n2);

    s = n1 + n2;
    m = n1 * n2;
    r = n1%n2;
    d = n1 / n2;
    su = n1 - n2;

    printf("soma:%d\nmultiplicacao:%d\nresto:%d\ndivisao:%d\nsubtracao:%d\n", s, m, r, d, su);

    return 0;
    
}