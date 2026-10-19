using System;
using System.Collections.Generic;
using System.Diagnostics.Eventing.Reader;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Week_4
{
    public class PTask3Customer
    {
        public string Name;
        public string Address;
        public string Contact;
        public List<PTask3Product> plist;
        public PTask3Customer()
        {
            plist = new List<PTask3Product>();
        }
        public List<PTask3Product> addProducst(PTask3Product p)
        {
            plist.Add(p);
            return plist;
        }
        public List<PTask3Product> getProduct()
        {
            return plist;
        }
        public float Tax()
        {
            float Tax = 0;
            for (int i=0;i<plist.Count;i++)
            {
                Tax = Tax + plist[i].CalculateTax();
            }
            return Tax;
        }
    }
}
