#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() { // Função principal
    int numeros[6] = {10, 20, 30, 40, 50, 60}; // Declara e inicializa um array de 6 inteiros
    int busca; // Variável para o número a ser buscado
    int encontrado = 0; // Flag para indicar se o número foi encontrado (0 = não, 1 = sim)
    int posicao = -1; // Variável para armazenar a posição do número, inicializada com -1 (não encontrado)

    printf("Array: {10, 20, 30, 40, 50, 60}\n"); // Imprime o array para referência
    printf("Digite um número para buscar no array: "); // Solicita o número a ser buscado
    scanf("%d", &busca); // Lê o número

    // Loop para percorrer o array e buscar o número
    for (int i = 0; i < 6; i++) {
        if (numeros[i] == busca) { // Se o elemento atual for igual ao número buscado
            encontrado = 1; // Define a flag como 1 (encontrado)
            posicao = i; // Armazena a posição
            break; // Sai do loop, pois o número foi encontrado
        }
    }

    if (encontrado == 1) { // Se o número foi encontrado
        printf("O número %d foi encontrado na posição %d do array.\n", busca, posicao); // Imprime a posição
    } else { // Se o número não foi encontrado
        printf("O número %d não foi encontrado no array.\n", busca); // Mensagem de não encontrado
    }

    return 0; // Retorna 0 para indicar sucesso
}

