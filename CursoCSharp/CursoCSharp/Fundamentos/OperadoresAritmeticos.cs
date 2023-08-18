using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Schema;

namespace CursoCSharp.Fundamentos
{
    class OperadoresAritmeticos
    {
        public static void Executar()
        {
            // Preço com desconto
            var preco = 1_000.0;
            var imposto = 355;
            var desconto = 0.1;

            double total = preco + imposto;
            var totalComDesconto = total - (total * desconto);
            Console.WriteLine("O preço inicial é de {0}.\nCom Impostos: {1}\n" +
                "Com desconto: {2}", preco, total, totalComDesconto);

            //IMC
            double peso = 91.2;
            double altura = 1.82;
            double imc = peso / Math.Pow(altura, 2); // Math.Pow (váriavel , número que será elevado)
            Console.WriteLine(imc.ToString("#.##"), $"IMC é {imc}.");

            // Número Par/Impar
            int par = 24;
            int impar = 55;

            Console.WriteLine("{0}/2 tem resto {1}", par, par % 2);             
            Console.WriteLine("{0}/2 tem resto {1}", impar, impar % 2);
            /* par % 2 - pega o número da variável, divide por 2 e reotna a sobra.
            Se for par retorna 0.
            Se dor impar, retorna 1. */
        }
    }
}
