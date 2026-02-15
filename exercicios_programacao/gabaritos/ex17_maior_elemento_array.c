#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() { // Função principal
    int numeros[10]; // Declara um array de 10 inteiros
    int maior_elemento; // Variável para armazenar o maior elemento

    printf("Digite 10 números inteiros:\n"); // Solicita a entrada de 10 números

    // Loop para preencher o array
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    maior_elemento = numeros[0]; // Assume que o primeiro elemento é o maior inicialmente

    // Loop para encontrar o maior elemento
    for (int i = 1; i < 10; i++) { // Começa do segundo elemento
        if (numeros[i] > maior_elemento) { // Se o elemento atual for maior que o maior_elemento
            maior_elemento = numeros[i]; // Atualiza o maior_elemento
        }
    }

    printf("O maior elemento do array é: %d\n", maior_elemento); // Imprime o maior elemento

    return 0; // Retorna 0 para indicar sucesso
}

