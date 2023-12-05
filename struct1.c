#include <stdio.h>
#include <string.h>

struct type_car {
    char modelo[50];
    float peso;
    int ano;
    char nome_dono[50];
};

struct type_people {
    float peso;
    int idade;
    char carro[50];
};

struct personal_data {
    char name[50];
    int idade;
    int grau_escolar;
    int contribuicao;
};

typedef struct personal_data personal_data;
typedef struct type_car type_car;
typedef struct type_people type_people;

int main() {

    

    type_car carro1 = {"fiesta", 900, 2004, "gabriel"};
    type_people pessoa1 = {92, 2004, "fiesta"};
    personal_data dados_pessoais = {"gabriel", 18, 14, 0};

    strcpy(carro1.nome_dono, "joao");

    printf("carro:%s %f %d %s\n", carro1.modelo, carro1.peso, carro1.ano, carro1.nome_dono);
    printf("Proprietario:%f %d %s\n", pessoa1.peso, pessoa1.idade, pessoa1.carro);
    printf("dados pessoais: %s %d %d %d", dados_pessoais.name, dados_pessoais.idade, dados_pessoais.grau_escolar, dados_pessoais.contribuicao);

    return 0;
}