# Tutorial Básico de C# 🚀

## 1. Estrutura Básica de um Programa C#

Todo programa C# segue esta estrutura fundamental:

```csharp
using System;

class MeuPrograma
{
    static void Main()
    {
        // Seu código aqui
    }
}
```

### Explicação:
- `using System;` - Importa funcionalidades básicas do C#
- `class` - Define uma classe (grupo de código)
- `Main()` - É o ponto de partida do programa
- `static void` - Método especial que é executado primeiro

---

## 2. Variáveis e Tipos de Dados

Variáveis são "caixas" que guardam informações.

```csharp
// Tipos comuns em C#
int idade = 25;              // Números inteiros
double preco = 19.99;        // Números com decimais
string nome = "Maria";      // Textos
bool ativo = true;          // Verdadeiro ou Falso
char letra = 'A';           // Um único caractere
```

### Regras para nomes de variáveis:
- Não pode ter espaços
- Não pode começar com número
- C# é sensível a maiúsculas/minúsculas (`Nome` ≠ `nome`)

---

## 3. Entrada e Saída (Input/Output)

### Saída - Mostrar mensagens:
```csharp
Console.Write("Olá!");           // Escreve na mesma linha
Console.WriteLine("Bom dia!");    // Escreve e pula linha
```

### Entrada - Ler dados do usuário:
```csharp
Console.Write("Digite seu nome: ");
string nome = Console.ReadLine();

Console.Write("Digite sua idade: ");
int idade = int.Parse(Console.ReadLine());
```

> **Dica:** Use `int.Parse()`, `double.Parse()` ou `Convert.ToInt32()` para converter texto em números.

---

## 4. Operadores Matemáticos

```csharp
int a = 10, b = 3;

int soma = a + b;        // 13
int subtracao = a - b;   // 7
int multiplicacao = a * b;  // 30
int divisao = a / b;    // 3
int resto = a % b;      // 1 (resto da divisão)
```

---

## 5. Condicionais (If/Else)

Usadas para tomar decisões no programa.

```csharp
int nota = 7;

if (nota >= 7)
{
    Console.WriteLine("Aprovado!");
}
else if (nota >= 5)
{
    Console.WriteLine("Recuperação!");
}
else
{
    Console.WriteLine("Reprovado!");
}
```

### Operadores de comparação:
- `==` Igual a
- `!=` Diferente de
- `>` Maior que
- `<` Menor que
- `>=` Maior ou igual
- `<=` Menor ou igual

---

## 6. Loops (Estruturas de Repetição)

### While - Repete enquanto condição for verdadeira:
```csharp
int contador = 1;

while (contador <= 5)
{
    Console.WriteLine("Contagem: " + contador);
    contador++;
}
```

### For - Repete um número específico de vezes:
```csharp
for (int i = 1; i <= 5; i++)
{
    Console.WriteLine("Número: " + i);
}
```

---

## 7. Exemplo Completo: Calculadora Simple

```csharp
using System;

class Calculadora
{
    static void Main()
    {
        Console.Write("Digite o primeiro número: ");
        double num1 = double.Parse(Console.ReadLine());

        Console.Write("Digite o segundo número: ");
        double num2 = double.Parse(Console.ReadLine());

        Console.WriteLine("\nResultados:");
        Console.WriteLine("Soma: " + (num1 + num2));
        Console.WriteLine("Subtração: " + (num1 - num2));
        Console.WriteLine("Multiplicação: " + (num1 * num2));
        Console.WriteLine("Divisão: " + (num1 / num2));
    }
}
```

---

## 8. Resumo Rápido

| Conceito | Exemplo |
|---------|---------|
| Declaração de variável | `int x = 10;` |
| Saída | `Console.WriteLine(x);` |
| Entrada | `int x = int.Parse(Console.ReadLine());` |
| If | `if (x > 5) { ... }` |
| While | `while (x > 0) { x--; }` |
| For | `for (int i = 0; i < 10; i++) { ... }` |

---

## Como Compilar e Executar

1. Salve o arquivo com extensão `.cs`
2. Abra o terminal na pasta do arquivo
3. Compile: `csc NomeDoArquivo.cs`
4. Execute: `NomeDoArquivo.exe`

Ou use um ambiente de desenvolvimento como Visual Studio ou VS Code com extensão C#.

---

## 9. Exercícios Práticos

### Exercício 1: Olá, Mundo!
Crie um programa que exiba "Olá, Mundo!" na tela.

### Exercício 2: Soma de Dois Números
Crie um programa que peça dois números ao usuário e mostre a soma.

### Exercício 3: Par ou Ímpar
Crie um programa que peça um número ao usuário e diga se é par ou ímpar.

### Exercício 4: Maior de Dois Números
Crie um programa que peça dois números e mostre o maior deles.

### Exercício 5: Contagem Regressiva
Crie um programa que faz uma contagem regressiva de 10 até 0.

### Exercício 6: Tabuada
Crie um programa que mostre a tabuada de um número digitado pelo usuário (de 1 a 10).

### Exercício 7: Média de Notas
Crie um programa que peça 3 notas ao usuário e calcule a média.

### Exercício 8: Calculadora Simples
Crie uma calculadora que permita somar, subtrair, multiplicar ou dividir dois números.

---

## 10. Gabarito dos Exercícios

### Exercício 1 - Olá, Mundo!
```csharp
using System;

class OlaMundo
{
    static void Main()
    {
        Console.WriteLine("Olá, Mundo!");
    }
}
```

### Exercício 2 - Soma de Dois Números
```csharp
using System;

class SomaDoisNumeros
{
    static void Main()
    {
        Console.Write("Digite o primeiro número: ");
        double num1 = double.Parse(Console.ReadLine());

        Console.Write("Digite o segundo número: ");
        double num2 = double.Parse(Console.ReadLine());

        double soma = num1 + num2;
        Console.WriteLine("A soma é: " + soma);
    }
}
```

### Exercício 3 - Par ou Ímpar
```csharp
using System;

class ParOuImpar
{
    static void Main()
    {
        Console.Write("Digite um número: ");
        int numero = int.Parse(Console.ReadLine());

        if (numero % 2 == 0)
        {
            Console.WriteLine("É par!");
        }
        else
        {
            Console.WriteLine("É ímpar!");
        }
    }
}
```

### Exercício 4 - Maior de Dois Números
```csharp
using System;

class MaiorNumero
{
    static void Main()
    {
        Console.Write("Digite o primeiro número: ");
        int num1 = int.Parse(Console.ReadLine());

        Console.Write("Digite o segundo número: ");
        int num2 = int.Parse(Console.ReadLine());

        if (num1 > num2)
        {
            Console.WriteLine("O maior é: " + num1);
        }
        else
        {
            Console.WriteLine("O maior é: " + num2);
        }
    }
}
```

### Exercício 5 - Contagem Regressiva
```csharp
using System;

class ContagemRegressiva
{
    static void Main()
    {
        for (int i = 10; i >= 0; i--)
        {
            Console.WriteLine(i);
        }
        Console.WriteLine("Fogo!");
    }
}
```

### Exercício 6 - Tabuada
```csharp
using System;

class Tabuada
{
    static void Main()
    {
        Console.Write("Digite um número: ");
        int numero = int.Parse(Console.ReadLine());

        for (int i = 1; i <= 10; i++)
        {
            Console.WriteLine(numero + " x " + i + " = " + (numero * i));
        }
    }
}
```

### Exercício 7 - Média de Notas
```csharp
using System;

class MediaNotas
{
    static void Main()
    {
        Console.Write("Digite a primeira nota: ");
        double nota1 = double.Parse(Console.ReadLine());

        Console.Write("Digite a segunda nota: ");
        double nota2 = double.Parse(Console.ReadLine());

        Console.Write("Digite a terceira nota: ");
        double nota3 = double.Parse(Console.ReadLine());

        double media = (nota1 + nota2 + nota3) / 3;
        Console.WriteLine("A média é: " + media);
    }
}
```

### Exercício 8 - Calculadora Simples
```csharp
using System;

class Calculadora
{
    static void Main()
    {
        Console.Write("Digite o primeiro número: ");
        double num1 = double.Parse(Console.ReadLine());

        Console.Write("Digite o segundo número: ");
        double num2 = double.Parse(Console.ReadLine());

        Console.WriteLine("Escolha uma operação: + - * /");
        string operacao = Console.ReadLine();

        if (operacao == "+")
        {
            Console.WriteLine("Resultado: " + (num1 + num2));
        }
        else if (operacao == "-")
        {
            Console.WriteLine("Resultado: " + (num1 - num2));
        }
        else if (operacao == "*")
        {
            Console.WriteLine("Resultado: " + (num1 * num2));
        }
        else if (operacao == "/")
        {
            Console.WriteLine("Resultado: " + (num1 / num2));
        }
    }
}
```

---

Pratique bastante esses exercícios para dominar os conceitos básicos de C#! 💪
