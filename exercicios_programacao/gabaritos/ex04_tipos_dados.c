#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() { // Função principal
    int idade = 30; // Declara e inicializa uma variável inteira
    float altura = 1.75f; // Declara e inicializa uma variável float (o 'f' indica float)
    double peso = 70.5; // Declara e inicializa uma variável double
    char inicial = 'J'; // Declara e inicializa uma variável char

    printf("Idade (int): %d\n", idade); // Imprime o valor da variável int
    printf("Altura (float): %.2f\n", altura); // Imprime o valor da variável float com 2 casas decimais
    printf("Peso (double): %.1lf\n", peso); // Imprime o valor da variável double com 1 casa decimal
    printf("Inicial (char): %c\n", inicial); // Imprime o valor da variável char

    return 0; // Retorna 0 para indicar sucesso
}

