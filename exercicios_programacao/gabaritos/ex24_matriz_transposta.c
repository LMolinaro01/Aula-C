```c
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() { // Função principal
    int matriz[2][3]; // Declara a matriz original 2x3
    int transposta[3][2]; // Declara a matriz transposta 3x2

    printf("Digite os elementos da matriz 2x3:\n"); // Solicita a entrada dos elementos

    // Loop para preencher a matriz original
    for (int i = 0; i < 2; i++) { // Percorre as linhas
        for (int j = 0; j < 3; j++) { // Percorre as colunas
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]); // Lê o elemento e armazena na matriz
        }
    }

    printf("\nMatriz Original:\n"); // Imprime a matriz original
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Loop para calcular a matriz transposta
    for (int i = 0; i < 2; i++) { // Percorre as linhas da matriz original
        for (int j = 0; j < 3; j++) { // Percorre as colunas da matriz original
            transposta[j][i] = matriz[i][j]; // Inverte linha e coluna para a transposta
        }
    }

    printf("\nMatriz Transposta:\n"); // Imprime a matriz transposta
    for (int i = 0; i < 3; i++) { // Percorre as linhas da matriz transposta
        for (int j = 0; j < 2; j++) { // Percorre as colunas da matriz transposta
            printf("%d\t", transposta[i][j]);
        }
        printf("\n");
    }

    return 0; // Retorna 0 para indicar sucesso
}
```
