```c
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() { // Função principal
    float numeros[7]; // Declara um array de 7 números reais
    float soma = 0.0f; // Variável para armazenar a soma dos elementos, inicializada com 0.0

    printf("Digite 7 números reais:\n"); // Solicita a entrada de 7 números

    // Loop para preencher o array
    for (int i = 0; i < 7; i++) {
        printf("Número %d: ", i + 1);
        scanf("%f", &numeros[i]); // Lê o número e armazena na posição i do array
        soma += numeros[i]; // Adiciona o número lido à soma
    }

    printf("A soma de todos os elementos do array é: %.2f\n", soma); // Imprime a soma com 2 casas decimais

    return 0; // Retorna 0 para indicar sucesso
}
```
