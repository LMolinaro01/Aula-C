#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() { // Função principal
    int matriz[2][2]; // Declara uma matriz 2x2 de inteiros
    int soma = 0; // Variável para armazenar a soma dos elementos, inicializada com 0

    printf("Digite os elementos da matriz 2x2:\n"); // Solicita a entrada dos elementos

    // Loop para preencher a matriz
    for (int i = 0; i < 2; i++) { // Percorre as linhas
        for (int j = 0; j < 2; j++) { // Percorre as colunas
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]); // Lê o elemento e armazena na matriz
            soma += matriz[i][j]; // Adiciona o elemento lido à soma
        }
    }

    printf("\nA soma de todos os elementos da matriz é: %d\n", soma); // Imprime a soma total

    return 0; // Retorna 0 para indicar sucesso
}

