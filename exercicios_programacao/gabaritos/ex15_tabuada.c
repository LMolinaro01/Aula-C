#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() { // Função principal
    int numero; // Variável para armazenar o número que o usuário digitar

    printf("Digite um número inteiro para ver a tabuada: "); // Solicita um número ao usuário
    scanf("%d", &numero); // Lê o número digitado

    printf("Tabuada do %d:\n", numero); // Imprime o cabeçalho da tabuada

    // Loop for: itera de 1 a 10
    for (int i = 1; i <= 10; i++) {
        // Imprime a operação e o resultado da multiplicação
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0; // Retorna 0 para indicar sucesso
}

