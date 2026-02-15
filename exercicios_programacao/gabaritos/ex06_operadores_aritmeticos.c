```c
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() { // Função principal
    int num1, num2; // Declara duas variáveis inteiras

    printf("Digite o primeiro número inteiro: "); // Solicita o primeiro número
    scanf("%d", &num1); // Lê o primeiro número

    printf("Digite o segundo número inteiro: "); // Solicita o segundo número
    scanf("%d", &num2); // Lê o segundo número

    printf("Soma: %d + %d = %d\n", num1, num2, num1 + num2); // Imprime a soma
    printf("Subtração: %d - %d = %d\n", num1, num2, num1 - num2); // Imprime a subtração
    printf("Multiplicação: %d * %d = %d\n", num1, num2, num1 * num2); // Imprime a multiplicação

    // Verifica se o segundo número é zero para evitar divisão por zero
    if (num2 != 0) {
        printf("Divisão: %d / %d = %.2f\n", num1, num2, (float)num1 / num2); // Imprime a divisão (com cast para float)
        printf("Resto da Divisão: %d %% %d = %d\n", num1, num2, num1 % num2); // Imprime o resto da divisão
    } else {
        printf("Não é possível dividir por zero.\n"); // Mensagem de erro para divisão por zero
    }

    return 0; // Retorna 0 para indicar sucesso
}
```
