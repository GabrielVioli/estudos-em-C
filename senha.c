#include <stdio.h>
#include <string.h>

int main() {

    char temp_code[20];
    char code[20];

    printf("senha: ");
    scanf("%s", temp_code);

    printf("repita a senha: ");
    scanf("%s", code);

    if(strcmp(temp_code, code) != 0) {
        printf("senhas nao conhecidem\n");

        while (strcmp(temp_code, code) != 0)
        {
            printf("senha: ");
            scanf("%s", temp_code);

            printf("repita a senha: ");
            scanf("%s", code);

            if(strcmp(temp_code, code) != 0) {
                printf("senhas nao conhecidem\n");
            }

            if(strcmp(temp_code, code) == 0) {
                printf("Sucesso!\n");
                break;
            }

        }
        
    }

    char senha[20];
    int cont = 0;

    printf("senha: ");
    scanf("%s", senha);

    if(strcmp(senha, code) != 0) {
        printf("senha incorreta\n");

        while (strcmp(senha, code) != 0)
        {
            printf("senha incorreta, tente novamente\n");
            printf("senha: ");
            scanf("%s", senha);
            cont++;
            if(cont > 5) {
                printf("excesso de tentativas");
                break;
            }
            
            if(strcmp(senha, code) == 0) {
                printf("Sucesso!");
                break;
            }
        }
        
    
    }

    else
    {
        printf("Sucesso!");
    }
    

}