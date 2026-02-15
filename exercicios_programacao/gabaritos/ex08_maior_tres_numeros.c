#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() { // Função principal
    int num1, num2, num3; // Declara três variáveis inteiras
    int maior; // Declara uma variável para armazenar o maior número

    printf("Digite o primeiro número: "); // Solicita o primeiro número
    scanf("%d", &num1); // Lê o primeiro número

    printf("Digite o segundo número: "); // Solicita o segundo número
    scanf("%d", &num2); // Lê o segundo número

    printf("Digite o terceiro número: "); // Solicita o terceiro número
    scanf("%d", &num3); // Lê o terceiro número

    maior = num1; // Assume que o primeiro número é o maior inicialmente

    if (num2 > maior) { // Compara o segundo número com o maior atual
        maior = num2; // Se for maior, atualiza a variável maior
    }

    if (num3 > maior) { // Compara o terceiro número com o maior atual
        maior = num3; // Se for maior, atualiza a variável maior
    }

    printf("O maior número é: %d\n", maior); // Imprime o maior número encontrado

    return 0; // Retorna 0 para indicar sucesso
}

