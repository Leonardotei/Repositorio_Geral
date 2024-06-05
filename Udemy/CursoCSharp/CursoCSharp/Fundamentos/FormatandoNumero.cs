using System;
using System.Globalization;


namespace CursoCSharp.Fundamentos
{
    class FormatandoNumero
    {
        public static void Executar()
        {
            double valor = 15.175;
            Console.WriteLine(valor.ToString("F1")); // Arredonda o valor
            Console.WriteLine(valor.ToString("#.#")); // Delimita as casas de acordo com os #
            Console.WriteLine(valor.ToString("#.##"));
            Console.WriteLine(valor.ToString("C")); // Transforma em Real $
            Console.WriteLine(valor.ToString("P")); // Transforma em Porcentagem %

            CultureInfo cultura = new CultureInfo("pt-BR");
            Console.WriteLine(valor.ToString("C0", cultura)); 

            int inteiro = 256;
            Console.WriteLine(inteiro.ToString("D10")); // Preenche a váriavel com 0's até o número informado 
        }
    }
}
