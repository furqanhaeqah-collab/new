using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Week3
{
    public class Task9
    {
        public double number1;
        public double number2;
        public Task9() { }
        public Task9(double n1, double n2)
        {
            number1 = n1;
            number2 = n2;
        }
        public double Add()
        {
            return number1 + number2;
        }
        public double Subtract()
        {
            return number1 - number2;
        }
        public double Multiply()
        {
            return number1 * number2;
        }
        public double Divide()
        {
            if (number2 != 0)
            {
                return number1 / number2;
            }
            else
            {
                return 0;
            }
        }
        public double Modulo()
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
        public double Sqrt1()
        {

            return Math.Sqrt(number1);
        }
        public double Sqrt2()
        {

            return Math.Sqrt(number2);
        }
        public double Expo1()
        {

            return Math.Exp(number1);
        }
        public double Expo2()
        {

            return Math.Exp(number2);
        }
        public double Logr1()
        {

            return Math.Log(number1);
        }
        public double Logr2()
        {

            return Math.Log(number2);
        }
        public double TrigSin1()
        {
            double radians = number1 * (Math.PI / 180.0);
            return Math.Sin(radians);
        }
        public double TrigSin2()
        {
            double radians = number2 * (Math.PI / 180.0);
            return Math.Sin(radians);
        }
        public double TrigCos1()
        {
            double radians = number1 * (Math.PI / 180.0);
            return Math.Cos(radians);
        }
        public double TrigCos2()
        {
            double radians = number2 * (Math.PI / 180.0);
            return Math.Cos(radians);
        }
        public double TrigTan1()
        {
            double radians = number1 * (Math.PI / 180.0);
            return Math.Tan(radians);
        }
        public double TrigTan2()
        {
            double radians = number1 * (Math.PI / 180.0);
            return Math.Tan(radians);
        }
    }
}
