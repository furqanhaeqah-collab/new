using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Week_4
{
    public class PTask3Product
    {
        public string Name;
        public string Category;
        public float Price;
        public float CalculateTax()
        {
            float Tax = 0;
            if (Price < 5000 && Price > 0)
            {
                Tax = Price * 0.05F;
            }
            else if(Price >= 5000 && Price < 10000)
            {
                Tax = Price * 0.1F;
            }
            else if(Price > 10000 && Price < 100000)
            {
                Tax = Price * 0.2F;
            }
            else
            {
                Tax = Price * 0.4F;
            }
            return Tax;
        }
    }
}
