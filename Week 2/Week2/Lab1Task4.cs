using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Week2
{
    public class Lab1Task4
    {
        //-----------Task 4--------------
        public int n1;
        public int n2;
        public string op;
        public int Calculator(int n1, int n2, string op)
        {
            if (op == "+")
            {
                return n1 + n2;
            }
            else if (op == "-")
            {
                return n1 - n2;
            }
            else if (op == "*")
            {
                return n1 * n2;
            }
            else if (op == "/")
            {
                return n1 / n2;
            }
            else
            {
                return 0;
            }
        }
    }
}
