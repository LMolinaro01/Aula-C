#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() { // Função principal
    int numero; // Declara uma variável inteira

    printf("Digite um número inteiro: "); // Solicita ao usuário que digite um número
    scanf("%d", &numero); // Lê o número inteiro digitado pelo usuário e armazena na variável 'numero'

    printf("O número digitado foi: %d\n", numero); // Imprime o número digitado
    return 0; // Retorna 0 para indicar sucesso
}

