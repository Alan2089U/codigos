using System;
class Program
{
    static void Main()
    {
        int i;
        int c = 0;
        Console.WriteLine("Digite um ano: ");
        int ano = int.Parse(Console.ReadLine());
        i = ano / 4;
        c = ano-i*4;
        if (c == 0)
        { Console.WriteLine("Ano bissexto");}
        else
        {Console.WriteLine("Não é bissexto");}
    }
}