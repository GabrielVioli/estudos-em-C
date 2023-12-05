#include <stdio.h>
#include <string.h>

int main() {

    int mat[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    int conti = 0;
    int contj = 0;

    while (conti < 3) {
        while (contj < 3) {
            printf("%d ", mat[conti][contj]);
            contj++;
        }
        contj = 0;
        conti++;
        printf("\n");
    }

    return 0;
}

