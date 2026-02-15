```c
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() { // Função principal
    double num1, num2; // Declara duas variáveis double para os números
    char operador; // Declara uma variável char para o operador

    printf("Digite o primeiro número: "); // Solicita o primeiro número
    scanf("%lf", &num1); // Lê o primeiro número

    printf("Digite o operador (+, -, *, /): "); // Solicita o operador
    scanf(" %c", &operador); // Lê o operador (espaço antes de %c para consumir o newline anterior)

    printf("Digite o segundo número: "); // Solicita o segundo número
    scanf("%lf", &num2); // Lê o segundo número

    switch (operador) { // Usa switch para verificar o operador
        case '+': // Caso seja soma
            printf("Resultado: %.2lf\n", num1 + num2); // Imprime a soma
            break; // Sai do switch
        case '-': // Caso seja subtração
            printf("Resultado: %.2lf\n", num1 - num2); // Imprime a subtração
            break; // Sai do switch
        case '*': // Caso seja multiplicação
            printf("Resultado: %.2lf\n", num1 * num2); // Imprime a multiplicação
            break; // Sai do switch
        case '/': // Caso seja divisão
            if (num2 != 0) { // Verifica se o divisor não é zero
                printf("Resultado: %.2lf\n", num1 / num2); // Imprime a divisão
            } else { // Se o divisor for zero
                printf("Erro: Divisão por zero!\n"); // Mensagem de erro
            }
            break; // Sai do switch
        default: // Caso o operador seja inválido
            printf("Operador inválido!\n"); // Mensagem de erro
    }

    return 0; // Retorna 0 para indicar sucesso
}
```
