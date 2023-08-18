using System;
using System.Globalization; 
// para ultilizar "CultureInfo.InvariantCulture", linha 18, com isso,
// o console entende tanto 'ponto' quanto 'vírgula' como seraprador decimal.

namespace CursoCSharp.Fundamentos
{
    class LendoDados
    {
        public static void Executar()
        {
            Console.Write("Qual seu nome? ");
            string nome = Console.ReadLine();

            Console.Write("Qual sua idade? ");
            int idade = int.Parse(Console.ReadLine()); // .Parse converte o valor texto, em valor int.

            Console.Write("Qual o seu salário? ");
            double salario = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);

            Console.WriteLine($"{nome} {idade} R${salario}");
        }
    }
}
