using System;

namespace CursoCSharp.Fundamentos
{
    class NotacaoPonto
    {
        public static void Executar()
        {
            /*
             *  .ToUpper - deixa em MAIÚSCULO.
             *  .Insert(*número*, "palavra") - o *número* indica a posição, 
             *      e a "palavra" que ira inserir nesta posição.
             *  .Replace - Substitui uma palavra por outra.
             */
            var saudacao = "olá".ToUpper().Insert(3, " World!").Replace("World!", "Mundo!");
            
            Console.WriteLine(saudacao);

            // .Length - retorna quandidade de letras que tem a palavra
            Console.WriteLine("Teste".Length);

            string valorImportante = null;
            // quando variável = null (vazio), não conseguimos usar a notação, e a tentativa ocorrerá em erro
            // para evitar tal erro, ultiliza-se '?', conforme abaixo 
            Console.WriteLine(valorImportante?.Length);
        }
    }
}
