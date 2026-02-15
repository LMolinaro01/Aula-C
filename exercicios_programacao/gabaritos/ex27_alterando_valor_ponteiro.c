```c
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() { // Função principal
    int numero = 5; // Declara e inicializa uma variável inteira
    int *ptr;       // Declara um ponteiro para um inteiro

    ptr = &numero;  // Atribui o endereço de memória da variável 'numero' ao ponteiro 'ptr'

    printf("Valor original da variável: %d\n", numero); // Imprime o valor original

    *ptr = 15;      // Altera o valor apontado por 'ptr' para 15. Isso modifica a variável 'numero'.

    printf("Novo valor da variável (após alteração com ponteiro): %d\n", numero); // Imprime o novo valor

    return 0; // Retorna 0 para indicar sucesso
}
```
