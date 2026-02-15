```c
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() { // Função principal
    int numeros[5]; // Declara um array de 5 inteiros

    printf("Digite 5 números inteiros:\n"); // Solicita a entrada de 5 números

    // Loop para preencher o array com valores lidos do teclado
    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1); // Solicita o (i+1)-ésimo número
        scanf("%d", &numeros[i]); // Lê o número e armazena na posição i do array
    }

    printf("Os números digitados foram:\n"); // Mensagem para exibir os números

    // Loop para imprimir todos os elementos do array
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]); // Imprime o elemento na posição i, seguido de um espaço
    }
    printf("\n"); // Imprime uma nova linha para formatar a saída

    return 0; // Retorna 0 para indicar sucesso
}
```
