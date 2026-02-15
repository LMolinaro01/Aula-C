```c
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() { // Função principal
    int numeros[5]; // Declara um array de 5 inteiros

    printf("Digite 5 números inteiros:\n"); // Solicita a entrada de 5 números

    // Loop para preencher o array
    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]); // Lê o número e armazena na posição i do array
    }

    printf("Os números na ordem inversa são:\n"); // Mensagem para exibir os números invertidos

    // Loop para imprimir os elementos do array na ordem inversa
    for (int i = 4; i >= 0; i--) { // Começa do último elemento (índice 4) e vai até o primeiro (índice 0)
        printf("%d ", numeros[i]); // Imprime o elemento na posição i
    }
    printf("\n"); // Imprime uma nova linha para formatar a saída

    return 0; // Retorna 0 para indicar sucesso
}
```
