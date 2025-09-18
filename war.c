#include <stdio.h>
#include <string.h>

// ---------------------------------------------
// Estrutura que representa um território
// ---------------------------------------------
typedef struct {
    char nome[30];   // Nome do território
    char cor[10];    // Cor do exército
    int tropas;      // Quantidade de tropas
} Territorio;

int main() {
    // Vetor para armazenar até 5 territórios
    Territorio territorios[5];

    // Cadastro dos territórios
    printf("===== Cadastro de Territórios =====\n");
    for (int i = 0; i < 5; i++) {
        printf("\nTerritório %d:\n", i + 1);

        printf("Digite o nome do território: ");
        scanf(" %[^\n]", territorios[i].nome); // leitura de string com espaços

        printf("Digite a cor do exército: ");
        scanf(" %[^\n]", territorios[i].cor);

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    // Exibição dos dados cadastrados
    printf("\n===== Territórios Cadastrados =====\n");
    for (int i = 0; i < 5; i++) {
        printf("\nTerritório %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Quantidade de tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}