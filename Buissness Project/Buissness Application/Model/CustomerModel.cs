using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Buissness_Application.Model
{
    public class CustomerModel
    {
        public string CustomerName;
        public string Address;
        public string ContactNo;
        public int PostalCode;
        public string ProductCode;
        public float ProductPrice;
        public CustomerModel () { }
        public CustomerModel (string CustomerName, string Address, string ContactNo, int PostalCode, string ProductCode, float ProductPrice)
        {
            this.CustomerName = CustomerName;
            this.Address = Address;
            this.ContactNo = ContactNo;
            this.PostalCode = PostalCode;
            this.ProductCode = ProductCode;
            this.ProductPrice = ProductPrice;
        }
        public override string ToString()
        {
            return CustomerName + "," + Address + "," + ContactNo + "," + PostalCode + "," + ProductCode + "," + ProductPrice;
        }
    }
}
