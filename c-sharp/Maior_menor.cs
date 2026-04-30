using System;
class Program
{
    static void Main()
    {
        Console.Write("Digite o primeiro numero: ");
        int n1 = int.Parse(Console.ReadLine());
        Console.Write("Digite o segundo numero: ");
        int n2 = int.Parse(Console.ReadLine());
        if (n1 > n2)
        {
            Console.WriteLine("O primeiro numero é maior: " + n1);
        }
        else
        {
            Console.WriteLine("O segundo numero é maior: " + n2);
        }
    }
}