#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() { // Função principal
    float celsius; // Declara uma variável para a temperatura em Celsius
    float fahrenheit; // Declara uma variável para a temperatura em Fahrenheit

    printf("Digite a temperatura em Celsius: "); // Solicita a temperatura em Celsius
    scanf("%f", &celsius); // Lê o valor digitado pelo usuário

    fahrenheit = (celsius * 9/5) + 32; // Calcula a temperatura em Fahrenheit

    printf("A temperatura em Fahrenheit é: %.2f\n", fahrenheit); // Imprime o resultado com 2 casas decimais
    return 0; // Retorna 0 para indicar sucesso
}

