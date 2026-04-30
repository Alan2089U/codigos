using System;
class Program
{
    static void Main()
    {
        Console.Write("Digite o primeiro numero: ");
        int maior = int.Parse(Console.ReadLine());
        string continuar = "s";
        while (continuar.ToLower() == "s")
        {
            Console.Write("Digite um numero: ");
            int numero = int.Parse(Console.ReadLine());
            if (numero > maior)
            {
                maior = numero;
            }
            Console.Write("Deseja continuar? (s/n): ");
            continuar = Console.ReadLine();
        }
        Console.WriteLine("\nMaior numero digitado: " + maior);
    }
}