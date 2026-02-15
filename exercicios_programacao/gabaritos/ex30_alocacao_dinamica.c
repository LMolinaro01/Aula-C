#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
#include <stdlib.h> // Inclui a biblioteca padrão para funções como malloc e free

int main() { // Função principal
    int tamanho; // Variável para armazenar o tamanho do array
    int *array;  // Declara um ponteiro para um inteiro, que será o início do array alocado dinamicamente

    printf("Digite o tamanho do array: "); // Solicita ao usuário o tamanho do array
    scanf("%d", &tamanho); // Lê o tamanho digitado

    // Aloca dinamicamente memória para o array
    // malloc retorna um ponteiro void*, que é convertido para int*
    // tamanho * sizeof(int) calcula o número total de bytes necessários
    array = (int *) malloc(tamanho * sizeof(int));

    // Verifica se a alocação de memória foi bem-sucedida
    if (array == NULL) { // Se malloc retornar NULL, houve um erro na alocação
        printf("Erro: Não foi possível alocar memória.\n"); // Mensagem de erro
        return 1; // Retorna 1 para indicar erro
    }

    printf("Digite os %d elementos do array:\n", tamanho); // Solicita os elementos do array
    // Loop para preencher o array alocado dinamicamente
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array[i]); // Lê o elemento e armazena na posição i do array
    }

    printf("\nElementos do array:\n"); // Mensagem para exibir os elementos
    // Loop para imprimir os elementos do array
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]); // Imprime o elemento na posição i
    }
    printf("\n"); // Imprime uma nova linha para formatar a saída

    free(array); // Libera a memória alocada dinamicamente para evitar vazamentos de memória
    array = NULL; // Define o ponteiro como NULL após liberar a memória para evitar dangling pointers

    printf("Memória liberada com sucesso.\n"); // Mensagem de confirmação

    return 0; // Retorna 0 para indicar sucesso
}
