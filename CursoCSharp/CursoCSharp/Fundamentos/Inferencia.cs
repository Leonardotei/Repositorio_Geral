using System;

namespace CursoCSharp.Fundamentos
{
    class Inferencia
    {
        public static void Executar()
        {
            /*ao ultilizar a váriavel 'var', e atribuindo um valor(seja ele números ou letras)
             *não é possivel mudar posteriormente*/

            var nome = "Leonardo";
            // nome = 123  X
            Console.WriteLine(nome);

            //int idade;
            var idade = 23;
            Console.WriteLine(idade);

            int a;
            a = 3;

            int b = 2;

            Console.WriteLine(a + b);
        }
    }
}
