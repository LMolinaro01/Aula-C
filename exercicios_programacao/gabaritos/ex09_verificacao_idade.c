#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() { // Função principal
    int idade; // Declara uma variável para a idade

    printf("Digite sua idade: "); // Solicita a idade ao usuário
    scanf("%d", &idade); // Lê a idade digitada

    if (idade >= 18) { // Verifica se a idade é maior ou igual a 18
        printf("Você é maior de idade.\n"); // Imprime que é maior de idade
    } else { // Caso contrário
        printf("Você é menor de idade.\n"); // Imprime que é menor de idade
    }

    return 0; // Retorna 0 para indicar sucesso
}

