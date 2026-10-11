using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Week3
{
    public class Task8
    {
        public int number1;
        public int number2;
        public Task8() { }
        public Task8(int n1,int n2)
        {
            number1 = n1;
            number2 = n2;
        }
        public int Add()
        {
            return number1 + number2;
        }
        public int Subtract()
        {
            return number1 - number2;
        }
        public int Multiply()
        {
            return number1 * number2;
        }
        public int Divide()
        {
            if(number2 != 0)
            {
                return number1 / number2;
            }
            else
            {
                return 0;
            }
        }
        public int Modulo()
        {
            if (number2 != 0)
            {
                return number1 % number2;
            }
            else
            {
                return 0;
            }
        }
    }
}
