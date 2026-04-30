using System;
class Program
{
    static void Main()
    {
        int i;
        int r = 0;
        Console.WriteLine("Digite o primeiro: ");
        int n = int.Parse(Console.ReadLine());

        i = n/2;
        r = n-i*2;    //verifica se é impar ou par
        
        if (r == 0)
        {
            Console.Write("Par");
        }
        else
        {
            Console.Write("Impar");
        }
    }
}