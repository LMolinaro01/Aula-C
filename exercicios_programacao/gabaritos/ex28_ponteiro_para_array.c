#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() { // Função principal
    int arr[] = {10, 20, 30}; // Declara e inicializa um array de 3 inteiros
    int *ptr;                 // Declara um ponteiro para um inteiro

    ptr = arr; // Atribui o endereço do primeiro elemento do array ao ponteiro (arr é equivalente a &arr[0])

    printf("Elementos do array usando ponteiro:\n"); // Mensagem informativa

    // Loop para percorrer o array usando o ponteiro
    for (int i = 0; i < 3; i++) {
        printf("Elemento %d: %d\n", i, *(ptr + i)); // Imprime o valor apontado por (ptr + i)
                                                    // (ptr + i) avança o ponteiro i posições de memória
    }

    return 0; // Retorna 0 para indicar sucesso
}

