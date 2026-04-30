using System;
class Program
{
    static void Main()
    {
        Console.WriteLine("Digite um numero: ");
        int Numero = int.Parse(Console.ReadLine());

        for (int i = 10; i >= 0; i--)
        {
            Console.WriteLine(Numero + " X " + i + "=" + (Numero * i));
        }
    }
}