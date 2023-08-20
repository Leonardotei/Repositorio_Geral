using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CursoCSharp.Fundamentos
{
    class OperadoresAtribuicao
    {
        public static void Executar()
        {
            var num1 = 3;
            num1 = 7;       //  =    subistui o valor da váriavel
            num1 += 10;     //  +=   num1 = num1 + 10;
            num1 -= 3;      //  -=   num1 = num1 - 3;
            num1 *= 5;      //  *=   num1 = num1 * 5;
            num1 /= 2;      //  /=   num1 = num1 / 2;

            Console.WriteLine(num1);

            int a = 1;
            int b = a;
            Console.WriteLine($"{a} e {b}");

            a++;        // ++    a + 1;
            b--;        // --    b - 1;
            Console.WriteLine($"{a} e {b}");
        }
    }
}
