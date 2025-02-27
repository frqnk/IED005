/*
Desenvolva uma aplicação para cadastrar cliente que fará um crédito em até 12 vezes. Insira na estrutura informações pertinentes ao cliente.
*/
#include <stdio.h>

struct cadastro_em_loja {
    char nome[50], cpf[15];
    int crédito, n_vezes;
};

void cadastrar(struct cadastro_em_loja* cliente);
void mostrar(struct cadastro_em_loja cliente);

int main() {
    int n;
    printf("Qtde. de clientes: ");
    scanf("%i", &n);
    printf("---\n");

    struct cadastro_em_loja cliente[n];

    for(int i = 0; i < n; i++) {
        cadastrar(&cliente[i]);
    }
    printf("Cliente(s) cadastrado(s):\n");
    printf("---\n");
    for(int i = 0; i < n; i++) {
        mostrar(cliente[i]);
    }

    return 0;
}

void cadastrar(struct cadastro_em_loja* cliente) {
    printf("Nome: ");
    scanf("%s", &cliente->nome);
    printf("CPF: ");
    scanf("%s", &cliente->cpf);
    printf("Crédito: ");
    scanf("%i", &cliente->crédito);
    printf("Nº de vezes: ");
    scanf("%i", &cliente->n_vezes);
    printf("---\n");
}

void mostrar(struct cadastro_em_loja cliente) {
    printf("Nome: %s\n", cliente.nome);
    printf("CPF: %s\n", cliente.cpf);
    printf("Crédito: %i\n", cliente.crédito);
    printf("Nº de vezes: %i\n", cliente.n_vezes);
    printf("---\n");
}