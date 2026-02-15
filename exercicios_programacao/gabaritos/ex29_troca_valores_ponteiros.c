```c
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

// Função para trocar os valores de duas variáveis usando ponteiros
void trocar(int *a, int *b) { // Recebe dois ponteiros para inteiros
    int temp; // Declara uma variável temporária
    temp = *a; // Armazena o valor apontado por 'a' em temp
    *a = *b;   // Atribui o valor apontado por 'b' ao endereço apontado por 'a'
    *b = temp; // Atribui o valor de temp (valor original de 'a') ao endereço apontado por 'b'
}

int main() { // Função principal
    int x = 10; // Declara e inicializa a primeira variável
    int y = 20; // Declara e inicializa a segunda variável

    printf("Antes da troca: x = %d, y = %d\n", x, y); // Imprime os valores antes da troca

    trocar(&x, &y); // Chama a função trocar, passando os endereços de x e y

    printf("Depois da troca: x = %d, y = %d\n", x, y); // Imprime os valores depois da troca

    return 0; // Retorna 0 para indicar sucesso
}
```
