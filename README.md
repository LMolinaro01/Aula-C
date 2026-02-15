# Aula de Programação: Fundamentos e C

## 1. Introdução à Programação

### O que é Programação?

Programação é a arte e ciência de instruir um computador a realizar tarefas específicas. Isso é feito através da escrita de um conjunto de instruções, conhecido como código-fonte, em uma linguagem de programação. O computador, por sua vez, executa essas instruções para resolver problemas, automatizar processos ou criar aplicações.

### Linguagens de Programação: Alto Nível vs. Baixo Nível

As linguagens de programação podem ser classificadas em dois tipos principais com base em seu nível de abstração em relação ao hardware do computador:

*   **Linguagens de Baixo Nível:** Estão mais próximas da linguagem que o computador entende diretamente (código de máquina). Exemplos incluem Assembly. Elas oferecem grande controle sobre o hardware, mas são mais difíceis de aprender e usar, e menos portáveis.
*   **Linguagens de Alto Nível:** São mais próximas da linguagem humana, utilizando sintaxe e conceitos mais abstratos. Exemplos incluem C, Python, Java, JavaScript. São mais fáceis de aprender, escrever e depurar, além de serem mais portáveis entre diferentes plataformas.

### Linguagem Compilada vs. Interpretada

A forma como o código-fonte é transformado em instruções executáveis pelo computador define se uma linguagem é compilada ou interpretada [1].

| Característica      | Linguagem Compilada                                                                 | Linguagem Interpretada                                                              | 
| :------------------ | :---------------------------------------------------------------------------------- | :---------------------------------------------------------------------------------- | 
| **Processo**        | O código-fonte é traduzido (compilado) para código de máquina antes da execução.    | O código-fonte é traduzido linha por linha durante a execução por um interpretador. | 
| **Execução**        | O programa executável resultante pode ser executado diretamente e de forma independente. | Requer um interpretador presente no sistema para executar o código-fonte.           | 
| **Velocidade**      | Geralmente mais rápida, pois a tradução é feita uma única vez.                      | Geralmente mais lenta, devido à tradução em tempo real a cada execução.            | 
| **Portabilidade**   | O executável é específico para a arquitetura e sistema operacional onde foi compilado. | O código-fonte é mais portável, desde que o interpretador esteja disponível.        | 
| **Depuração**       | Pode ser mais complexa, pois os erros são detectados na fase de compilação.         | Mais fácil, pois os erros são detectados em tempo de execução, linha por linha.    | 
| **Exemplos**        | C, C++, Go, Rust.                                                                   | Python, JavaScript, Ruby, PHP.                                                      | 

**Vantagens da Linguagem Compilada:**

*   **Performance:** Execução mais rápida devido à otimização do compilador e à tradução prévia para código de máquina.
*   **Controle de Hardware:** Maior controle sobre os recursos do sistema, ideal para sistemas embarcados e aplicações de alta performance.
*   **Segurança:** O código-fonte não é distribuído, apenas o executável, o que pode dificultar a engenharia reversa.

**Vantagens da Linguagem Interpretada:**

*   **Desenvolvimento Rápido:** Ciclo de desenvolvimento mais ágil, pois não há etapa de compilação.
*   **Portabilidade:** O mesmo código-fonte pode ser executado em diferentes plataformas sem recompilação.
*   **Flexibilidade:** Facilidade para prototipagem e scripts, com depuração mais interativa.

## 2. Fundamentos de Programação

### Variáveis e Tipos de Dados

Uma **variável** é um espaço nomeado na memória do computador usado para armazenar dados. Cada variável possui um **tipo de dado** que define o tipo de valor que ela pode armazenar (números inteiros, números decimais, caracteres, etc.) e a quantidade de memória que será alocada para ela.

Os tipos de dados básicos incluem:

*   **Inteiros:** Números sem casas decimais (ex: 5, -10, 1000).
*   **Ponto Flutuante:** Números com casas decimais (ex: 3.14, -0.5, 2.718).
*   **Caracteres:** Letras, símbolos ou dígitos (ex: 'a', 'Z', '!').
*   **Booleanos:** Valores verdadeiro ou falso (True/False).

### Estruturas de Controle Condicionais

As estruturas de controle condicionais permitem que o programa tome decisões e execute diferentes blocos de código com base em certas condições. As mais comuns são `if`, `else if` e `else`.

```c
// Exemplo em C
int idade = 18;

if (idade >= 18) {
    printf("Você é maior de idade.\n");
} else {
    printf("Você é menor de idade.\n");
}
```

## 3. Linguagem C

C é uma linguagem de programação de alto nível, mas que oferece um controle muito próximo ao hardware, sendo amplamente utilizada para desenvolvimento de sistemas operacionais, sistemas embarcados e aplicações de alta performance. É uma linguagem compilada.

### Tipos de Variáveis em C

Em C, os tipos de dados são definidos de forma explícita. Alguns dos tipos básicos incluem:

| Tipo de Dado | Descrição                                       | Faixa de Valores (típica)             | Formato `printf`/`scanf` |
| :----------- | :---------------------------------------------- | :------------------------------------ | :----------------------- |
| `char`       | Caractere único                                 | -128 a 127 ou 0 a 255                 | `%c`                     |
| `int`        | Inteiro                                         | -32,768 a 32,767 ou -2,147,483,648 a 2,147,483,647 | `%d` ou `%i`             |
| `float`      | Ponto flutuante de precisão simples             | ±3.4e-38 a ±3.4e+38 (6 casas decimais) | `%f`                     |
| `double`     | Ponto flutuante de precisão dupla               | ±1.7e-308 a ±1.7e+308 (15 casas decimais) | `%lf`                    |
| `void`       | Tipo sem valor (usado para ponteiros genéricos) | N/A                                   | N/A                      |

Modificadores como `short`, `long`, `signed` e `unsigned` podem ser usados para alterar a faixa de valores e o tamanho em memória dos tipos básicos.

### Declaração e Inicialização de Variáveis

Para declarar uma variável em C, você especifica o tipo seguido pelo nome da variável:

```c
int numero;
float preco;
char letra;
```

Você pode inicializar uma variável no momento da declaração:

```c
int contador = 0;
double pi = 3.14159;
char opcao = 'S';
```

### Operadores em C

C possui diversos operadores, incluindo:

*   **Aritméticos:** `+`, `-`, `*`, `/`, `%` (módulo)
*   **Relacionais:** `==` (igual a), `!=` (diferente de), `>`, `<`, `>=`, `<=`
*   **Lógicos:** `&&` (AND lógico), `||` (OR lógico), `!` (NOT lógico)
*   **Atribuição:** `=`, `+=`, `-=`, `*=` `/=`, `%=`
*   **Incremento/Decremento:** `++`, `--`

## 4. Estruturas de Repetição (Loops)

As estruturas de repetição permitem executar um bloco de código várias vezes. Em C, as principais são `for`, `while` e `do-while`.

### `for` Loop

O `for` loop é ideal quando o número de iterações é conhecido antecipadamente.

**Sintaxe:**

```c
for (inicialização; condição; atualização) {
    // Bloco de código a ser repetido
}
```

*   **Inicialização:** Executada uma única vez no início do loop (ex: `int i = 0;`).
*   **Condição:** Avaliada antes de cada iteração. Se for verdadeira, o bloco de código é executado. Se for falsa, o loop termina.
*   **Atualização:** Executada após cada iteração (ex: `i++;`).

**Exemplo:**

```c
for (int i = 0; i < 5; i++) {
    printf("Contador: %d\n", i);
}
// Saída:
// Contador: 0
// Contador: 1
// Contador: 2
// Contador: 3
// Contador: 4
```

**Vantagens:** Compacto e legível para iterações com contador definido.

### `while` Loop

O `while` loop é usado quando o número de iterações não é conhecido e o loop continua enquanto uma condição for verdadeira.

**Sintaxe:**

```c
while (condição) {
    // Bloco de código a ser repetido
}
```

*   **Condição:** Avaliada antes de cada iteração. Se for verdadeira, o bloco de código é executado. Se for falsa, o loop termina.

**Exemplo:**

```c
int contador = 0;
while (contador < 5) {
    printf("Contador: %d\n", contador);
    contador++;
}
// Saída:
// Contador: 0
// Contador: 1
// Contador: 2
// Contador: 3
// Contador: 4
```

**Vantagens:** Flexível para situações onde a condição de parada é mais complexa ou depende de eventos externos.

### `do-while` Loop

O `do-while` loop é semelhante ao `while`, mas garante que o bloco de código seja executado pelo menos uma vez, pois a condição é avaliada após a execução do bloco.

**Sintaxe:**

```c
do {
    // Bloco de código a ser repetido
} while (condição);
```

**Exemplo:**

```c
int numero;
do {
    printf("Digite um número positivo: ");
    scanf("%d", &numero);
} while (numero <= 0);
printf("Número digitado: %d\n", numero);
```

**Vantagens:** Útil quando a primeira execução do bloco de código é necessária independentemente da condição.

### Diferenças entre `for` e `while`

| Característica      | `for` Loop                                                              | `while` Loop                                                                |
| :------------------ | :---------------------------------------------------------------------- | :-------------------------------------------------------------------------- |
| **Uso Comum**       | Quando o número de iterações é conhecido ou facilmente determinável.    | Quando o número de iterações é desconhecido e depende de uma condição.      |
| **Estrutura**       | Inicialização, condição e atualização são agrupadas na mesma linha.     | A condição é definida no início; inicialização e atualização são separadas. |
| **Variável de Controle** | Geralmente tem uma variável de controle explícita e local ao loop.      | A variável de controle precisa ser declarada e atualizada fora do cabeçalho do loop. |
| **Legibilidade**    | Mais conciso para loops baseados em contagem.                           | Mais flexível para loops baseados em condições arbitrárias.                 |

**Qual é mais pesado (performance/complexidade)?**

Em termos de **complexidade assintótica**, para o mesmo problema, não há uma diferença inerente de 
performance ou **complexidade** entre `for` e `while` [2]. Um compilador otimizado geralmente produzirá código de máquina idêntico ou muito similar para ambos, desde que realizem a mesma tarefa. A escolha entre `for` e `while` é mais uma questão de **legibilidade e adequação** ao problema.

*   **`for`:** Mais adequado quando você tem um contador claro e um número definido de iterações.
*   **`while`:** Mais adequado quando a condição de parada é mais abstrata e não diretamente ligada a um contador.

### Variável de Controle

A **variável de controle** é uma variável utilizada em loops para controlar o número de iterações ou a condição de término do loop. Em um `for` loop, a variável de controle é frequentemente inicializada, testada e atualizada dentro do cabeçalho do loop (ex: `int i = 0; i < 10; i++`). Em um `while` loop, a variável de controle é geralmente inicializada antes do loop e atualizada dentro do corpo do loop.

## 5. Endereço de Memória e Ponteiros

### Endereço de Memória

Todo dado armazenado na memória do computador ocupa um ou mais bytes, e cada byte possui um **endereço único**. Esse endereço é como o número de uma casa em uma rua, permitindo que o computador localize e acesse os dados. Quando declaramos uma variável, o sistema operacional aloca um espaço na memória para ela e associa um endereço a esse espaço.

### Ponteiros

Um **ponteiro** é uma variável especial que armazena o **endereço de memória** de outra variável, em vez de armazenar um valor diretamente [3]. Eles são fundamentais em C para manipulação direta de memória, alocação dinâmica e passagem de parâmetros por referência.

**Declaração de Ponteiros:**

Para declarar um ponteiro, usa-se o asterisco (`*`) antes do nome da variável:

```c
int *ptr; // Declara um ponteiro para um inteiro
char *nome; // Declara um ponteiro para um caractere (ou string)
```

**Operadores de Ponteiros:**

*   **`&` (Operador de Endereço):** Retorna o endereço de memória de uma variável.
*   **`*` (Operador de Desreferência):** Acessa o valor armazenado no endereço apontado pelo ponteiro.

**Exemplo de Uso de Ponteiros:**

```c
#include <stdio.h>

int main() {
    int valor = 10; // Declara uma variável inteira
    int *ptr;       // Declara um ponteiro para um inteiro

    ptr = &valor;   // Atribui o endereço de 'valor' ao ponteiro 'ptr'

    printf("Valor da variável: %d\n", valor);         // Saída: 10
    printf("Endereço de 'valor': %p\n", &valor);      // Saída: (um endereço de memória)
    printf("Valor do ponteiro: %p\n", ptr);           // Saída: (o mesmo endereço de memória)
    printf("Valor apontado por 'ptr': %d\n", *ptr);   // Saída: 10

    *ptr = 20;      // Altera o valor apontado por 'ptr' (e, portanto, o valor de 'valor')
    printf("Novo valor da variável: %d\n", valor);    // Saída: 20

    return 0;
}
```

**Vantagens dos Ponteiros:**

*   **Alocação Dinâmica de Memória:** Permitem alocar memória em tempo de execução, o que é crucial para estruturas de dados como listas encadeadas e árvores.
*   **Passagem por Referência:** Funções podem modificar o valor de variáveis passadas como argumento, em vez de apenas trabalhar com cópias.
*   **Eficiência:** Acesso direto à memória pode resultar em código mais eficiente para certas operações.
*   **Manipulação de Arrays:** Ponteiros e arrays são intimamente relacionados em C, permitindo uma manipulação flexível de coleções de dados.

## 6. Arrays e Matrizes

### Arrays (Vetores)

Um **array** (ou vetor) é uma coleção de elementos do mesmo tipo de dado, armazenados em posições de memória contíguas. Cada elemento é acessado por um índice (posição), que geralmente começa em 0.

**Declaração de Arrays:**

```c
int numeros[5]; // Declara um array de 5 inteiros
char vogais[3] = {'a', 'e', 'i'}; // Declara e inicializa um array de caracteres
```

**Acesso a Elementos:**

```c
numeros[0] = 10; // Atribui 10 ao primeiro elemento
int primeiro = numeros[0]; // Acessa o primeiro elemento
```

### Matrizes (Arrays Multidimensionais)

Uma **matriz** é um array de arrays, ou seja, uma coleção bidimensional (ou multidimensional) de elementos do mesmo tipo. É comumente usada para representar tabelas ou grades.

**Declaração de Matrizes:**

```c
int matriz[3][3]; // Declara uma matriz 3x3 de inteiros

// Inicialização
int tabuleiro[2][2] = {{1, 2}, {3, 4}};
```

**Acesso a Elementos:**

```c
matriz[0][0] = 1; // Atribui 1 ao elemento na primeira linha e primeira coluna
int elemento = matriz[1][2]; // Acessa o elemento na segunda linha e terceira coluna
```

### Diferenças, Utilidades e Vantagens

| Característica | Array (Vetor)                                                                 | Matriz (Array Multidimensional)                                               |
| :------------- | :---------------------------------------------------------------------------- | :---------------------------------------------------------------------------- |
| **Dimensão**   | Unidimensional (uma única linha ou coluna de dados).                          | Bidimensional ou multidimensional (linhas e colunas, ou mais dimensões).      |
| **Estrutura**  | Lista linear de elementos.                                                    | Tabela ou grade de elementos.                                                 |
| **Uso Comum**  | Listas de itens, sequências de dados, filas, pilhas.                          | Representação de imagens, jogos (tabuleiros), dados tabulares, gráficos.      |
| **Vantagens**  | Simples de usar para coleções lineares, acesso rápido por índice.             | Ideal para dados com estrutura de grade, facilita a organização de dados complexos. |

## 7. Complexidade de Algoritmos

A **complexidade de algoritmos** é uma medida da quantidade de recursos (tempo e espaço de memória) que um algoritmo consome em função do tamanho da entrada. É expressa usando a notação Big O (O()), que descreve o comportamento do algoritmo no pior caso, à medida que o tamanho da entrada cresce.

**Exemplos de Complexidade:**

*   **O(1) - Complexidade Constante:** O tempo de execução é o mesmo, independentemente do tamanho da entrada (ex: acessar um elemento em um array pelo índice).
*   **O(log n) - Complexidade Logarítmica:** O tempo de execução cresce logaritmicamente com o tamanho da entrada (ex: busca binária).
*   **O(n) - Complexidade Linear:** O tempo de execução cresce linearmente com o tamanho da entrada (ex: percorrer um array).
*   **O(n log n) - Complexidade Linear-Logarítmica:** Comum em algoritmos de ordenação eficientes (ex: Merge Sort, Quick Sort).
*   **O(n²) - Complexidade Quadrática:** O tempo de execução cresce quadraticamente com o tamanho da entrada (ex: loops aninhados, Bubble Sort).
*   **O(2^n) - Complexidade Exponencial:** O tempo de execução dobra a cada adição à entrada (ex: alguns problemas de força bruta).

**Importância:** Entender a complexidade é crucial para escrever código eficiente, especialmente ao lidar com grandes volumes de dados, pois um algoritmo com complexidade alta pode se tornar inviável rapidamente.

## Referências

[1] Onstrider. *Qual a diferença entre linguagem compilada e interpretada?* Disponível em: <https://www.onstrider.com/pt/blog/linguagem-compilada-e-interpretada>

[2] Stack Overflow. *C++ performance, for versus while*. Disponível em: <https://stackoverflow.com/questions/2879145/c-performance-for-versus-while>

[3] Linguagem C. *Ponteiros em C - Linguagem C*. Disponível em: <https://linguagemc.com.br/ponteiros-em-c/>
