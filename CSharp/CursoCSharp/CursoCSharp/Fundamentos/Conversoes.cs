using System;
using System.Collections.Generic;
using System.Text;

namespace CursoCSharp.Fundamentos
{
    class Conversoes
    {
        public static void Executar()
        {
            // CONVERSÕES:

            #region [int - double]

            /* Convertendo valor int para double, implicitamente,
            pois int é menor que o double, e não a possibilidade de perca de dados. */
            int inteiro = 10;
            double quebrado = inteiro;
            Console.WriteLine(quebrado);
            #endregion

            #region [double - int]

            /* Convertendo valor double para int, deve ser feito desta forma, 
            que indica que o programador sabe da possivel perca*/
            double nota = 9.7;
            int notaTruncada = (int)nota;
            Console.WriteLine("Nota truncada: {0}", notaTruncada);
            #endregion

            #region [string - int]

            Console.Write("Digite sua idade:");
            string idadeString = Console.ReadLine();

            // Modo 1
            int idadeInteiro = int.Parse(idadeString);
            Console.WriteLine("Idade inserida: {0}", idadeInteiro);

            // Modo 2
            idadeInteiro = Convert.ToInt32(idadeString);
            Console.WriteLine("Resultado: {0}", idadeInteiro);

            // Modo 3
            Console.Write("Digite o primeiro número: ");
            string palavra = Console.ReadLine();
            int numero1;
            int.TryParse(palavra, out numero1);
            Console.WriteLine("Resultado 1: {0}", numero1);

            // Modo 3 refatorado
            Console.Write("Digite o segundo número: ");
            int.TryParse(Console.ReadLine(), out int numero2);
            Console.WriteLine("Resultado 2: {0}", numero2);
            #endregion

        }
    }
}
