#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() { // Função principal
    int matriz[3][3]; // Declara uma matriz 3x3 de inteiros

    printf("Digite os elementos da matriz 3x3:\n"); // Solicita a entrada dos elementos

    // Loop para preencher a matriz
    for (int i = 0; i < 3; i++) { // Percorre as linhas
        for (int j = 0; j < 3; j++) { // Percorre as colunas
            printf("Elemento [%d][%d]: ", i, j); // Solicita o elemento na posição [i][j]
            scanf("%d", &matriz[i][j]); // Lê o elemento e armazena na matriz
        }
    }

    printf("\nMatriz digitada:\n"); // Mensagem para exibir a matriz

    // Loop para imprimir a matriz formatada
    for (int i = 0; i < 3; i++) { // Percorre as linhas
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]); // Imprime o elemento seguido de uma tabulação
        }
        printf("\n"); // Quebra de linha após cada linha da matriz
    }

    return 0; // Retorna 0 para indicar sucesso
}

