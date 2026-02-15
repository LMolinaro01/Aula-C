```c
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() { // Função principal
    int valor = 10; // Declara e inicializa uma variável inteira
    int *ptr;       // Declara um ponteiro para um inteiro

    ptr = &valor;   // Atribui o endereço de memória da variável 'valor' ao ponteiro 'ptr'

    printf("Valor da variável 'valor': %d\n", valor);         // Imprime o valor da variável 'valor' diretamente
    printf("Valor da variável 'valor' usando o ponteiro: %d\n", *ptr); // Imprime o valor apontado por 'ptr' (desreferenciação)

    return 0; // Retorna 0 para indicar sucesso
}
```
