#include <stdio.h>

int main() {

    char name[50];
    fgets(name, 50, stdin);
    fflush(stdin);

    printf("%s", name);

}