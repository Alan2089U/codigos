using System;
class Program
{
    static void Main()
    {
        string prossiga = "s";
        double soma = 0.0;
        int contador = 0;

        while (prossiga.ToLower() == "s")
        {
            Console.Write("Digite um numero: ");
            double numero = double.Parse(Console.ReadLine());

            contador++;
            soma += numero;

            Console.Write("Continuar? (s/n): ");
            prossiga = Console.ReadLine();
        }
        if (contador > 0)
        {
            double media = soma / contador;
            Console.WriteLine("\nContagem: " + contador);
            Console.WriteLine("Soma: " + soma);
            Console.WriteLine("Media: " + media);
        }
        else
        {
            Console.WriteLine("Nao ha numeros.");
        }
    }
}