#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() { // Função principal
    float nota; // Variável para armazenar cada nota digitada
    float soma = 0; // Variável para acumular a soma das notas
    int contador = 0; // Variável para contar quantas notas foram digitadas
    float media; // Variável para armazenar a média

    printf("Digite as notas (digite um número negativo para parar):\n");

    do { // Inicia o loop do-while
        printf("Nota: "); // Solicita a nota
        scanf("%f", &nota); // Lê a nota digitada

        if (nota >= 0) { // Se a nota for não negativa (válida)
            soma += nota; // Adiciona a nota à soma
            contador++; // Incrementa o contador de notas
        }
    } while (nota >= 0); // A condição de continuação: enquanto a nota for não negativa

    if (contador > 0) { // Verifica se alguma nota válida foi digitada
        media = soma / contador; // Calcula a média
        printf("A média das notas digitadas é: %.2f\n", media); // Imprime a média com 2 casas decimais
    } else { // Se nenhuma nota válida foi digitada
        printf("Nenhuma nota válida foi digitada.\n"); // Mensagem informativa
    }

    return 0; // Retorna 0 para indicar sucesso
}

