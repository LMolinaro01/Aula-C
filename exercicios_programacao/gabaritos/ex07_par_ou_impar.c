```c
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() { // Função principal
    int numero; // Declara uma variável inteira

    printf("Digite um número inteiro: "); // Solicita um número ao usuário
    scanf("%d", &numero); // Lê o número digitado

    // Verifica se o resto da divisão por 2 é 0 (par) ou diferente de 0 (ímpar)
    if (numero % 2 == 0) {
        printf("O número %d é PAR.\n", numero); // Imprime que o número é par
    } else {
        printf("O número %d é ÍMPAR.\n", numero); // Imprime que o número é ímpar
    }

    return 0; // Retorna 0 para indicar sucesso
}
```
