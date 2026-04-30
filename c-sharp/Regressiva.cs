using System;
class Program
{
    static void Main()
    {
        Console.WriteLine(" Começar contagem regressiva (s/n) ");
        string resposta = Console.ReadLine();

        if (resposta.ToLower() == "s")
        {
            for (int i = 10; i >= 0; i--)
            {
                Console.WriteLine(i);
            }
        }
    }
}