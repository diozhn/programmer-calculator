# Calculadora em C

Este é um projeto desenvolvido como parte do curso de formação C/C++ oferecido pela DIO (Digital Innovation One). O objetivo deste projeto é criar uma calculadora em linguagem C que realiza operações aritméticas básicas e operações bit a bit no modo programador.

## Funcionalidades

### Modo Aritmético

A calculadora suporta as seguintes operações aritméticas básicas:
- Adição (`+`)
- Subtração (`-`)
- Multiplicação (`*`)
- Divisão (`/`)

### Modo Programador

No modo programador, a calculadora realiza operações bit a bit:
- AND (`&`)
- OR (`|`)
- XOR (`^`)
- NOT (`~`)

## Como Usar

1. Compile o código fonte utilizando um compilador de C (por exemplo, `gcc`):

```sh
gcc calculadora.c -o calculadora
```

2. Execute o programa:

```sh
./calculadora
```

3. Escolha o modo de operação:
   - Digite `1` para Modo Aritmético.
   - Digite `2` para Modo Programador.

### Exemplos de Uso

#### Modo Aritmético

Digite a operação no formato: `número1 operador número2`

Exemplo: `4.5 + 2.3`

Operadores válidos: `+`, `-`, `*`, `/`

#### Modo Programador

Digite a operação no formato: `número1 operador número2`

Exemplo: `5 & 3`

Operadores válidos: `&`, `|`, `^`, `~`

## Estrutura do Código

### Funções para Operações Básicas

- `double sum(double a, double b);`
- `double subtract(double a, double b);`
- `double multiply(double a, double b);`
- `double slice(double a, double b);`

### Funções para Operações Bit a Bit

- `int bitwise_and(int a, int b);`
- `int bitwise_or(int a, int b);`
- `int bitwise_xor(int a, int b);`
- `int bitwise_not(int a);`

### Função Principal

A função `main` gerencia a entrada do usuário, chama as funções apropriadas com base no operador fornecido e imprime o resultado.

## Requisitos

- Compilador C (por exemplo, `gcc`)
- Sistema operacional que suporte a compilação e execução de programas em C

## Sobre o Curso

Este projeto foi desenvolvido como parte do curso de formação em C/C++ da DIO (Digital Innovation One). O curso visa fornecer uma compreensão sólida dos conceitos e técnicas da linguagem C, preparando os alunos para o desenvolvimento de aplicativos e sistemas eficientes.

## Licença

Este projeto é de uso livre para fins educacionais e pessoais.
