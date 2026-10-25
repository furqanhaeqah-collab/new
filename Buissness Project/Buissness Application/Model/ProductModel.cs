using Buissness_Application.UI;
using System;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Buissness_Application.Model
{
    public class ProductModel
    {
        public string product_name;
        public float product_price;
        public string product_code;
        public string product_available;
        public int quantity;
        public string product_sale_on;
        public int product_discount;
        public float product_sale;
        public ProductModel () { }
        public ProductModel (string product_name, float product_price, string product_code, string product_available, int quantity, string product_sale_on, int product_discount, float product_sale)
        {
            this.product_name = product_name;
            this.product_price = product_price;
            this.product_code = product_code;
            this.product_available = product_available;
            this.quantity = quantity;
            this.product_sale_on = product_sale_on;
            this.product_discount = product_discount;
            this.product_sale = product_sale;
        }
        public override string ToString()
        {
            return product_name + "," + product_price + "," + product_code + "," + product_available + "," + quantity + "," + product_sale_on + "," + product_discount + "," + product_sale;
        }
    }
}
