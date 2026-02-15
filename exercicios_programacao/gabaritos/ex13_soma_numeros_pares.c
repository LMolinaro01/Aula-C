#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() { // Função principal
    int soma = 0; // Inicializa a variável para armazenar a soma dos números pares

    // Loop for: percorre os números de 1 a 50
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) { // Verifica se o número atual é par
            soma += i; // Se for par, adiciona o número à soma
        }
    }

    printf("A soma dos números pares de 1 a 50 é: %d\n", soma); // Imprime o resultado da soma
    return 0; // Retorna 0 para indicar sucesso
}

