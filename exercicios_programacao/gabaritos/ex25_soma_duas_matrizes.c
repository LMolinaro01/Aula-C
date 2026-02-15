#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() { // Função principal
    int matrizA[2][2]; // Declara a primeira matriz 2x2
    int matrizB[2][2]; // Declara a segunda matriz 2x2
    int matrizSoma[2][2]; // Declara a matriz para armazenar a soma

    printf("Digite os elementos da Matriz A (2x2):\n"); // Solicita a entrada para a Matriz A
    // Loop para preencher a Matriz A
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Elemento A[%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("\nDigite os elementos da Matriz B (2x2):\n"); // Solicita a entrada para a Matriz B
    // Loop para preencher a Matriz B
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Elemento B[%d][%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    // Loop para calcular a soma das matrizes
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j]; // Soma os elementos correspondentes
        }
    }

    printf("\nMatriz Resultante da Soma (A + B):\n"); // Imprime a matriz resultante
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", matrizSoma[i][j]);
        }
        printf("\n");
    }

    return 0; // Retorna 0 para indicar sucesso
}

