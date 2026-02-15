#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() { // Função principal
    int matriz[4][4]; // Declara uma matriz 4x4 de inteiros

    printf("Digite os elementos da matriz 4x4:\n"); // Solicita a entrada dos elementos

    // Loop para preencher a matriz
    for (int i = 0; i < 4; i++) { // Percorre as linhas
        for (int j = 0; j < 4; j++) { // Percorre as colunas
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]); // Lê o elemento e armazena na matriz
        }
    }

    printf("\nElementos da Diagonal Principal:\n"); // Mensagem para exibir a diagonal principal

    // Loop para imprimir os elementos da diagonal principal
    for (int i = 0; i < 4; i++) { // Percorre as linhas
        printf("%d ", matriz[i][i]); // O elemento da diagonal principal tem o mesmo índice de linha e coluna
    }
    printf("\n"); // Imprime uma nova linha para formatar a saída

    return 0; // Retorna 0 para indicar sucesso
}

