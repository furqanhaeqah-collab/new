using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Week2
{
    public class Lab1Task7
    {
        public string ID;
        public string Name;
        public float Price;
        public string Category;
        public string BrandName;
        public string Country;
        public int ProductMenu()
        {
            Console.WriteLine("Product Menu");
            Console.WriteLine("1.Add Product");
            Console.WriteLine("2.Show Product");
            Console.WriteLine("3.Total Store Worth");
            Console.WriteLine("4.Exit");
            int option = int.Parse(Console.ReadLine());
            return option;
        }
        public void ShowProduct(List<Lab1Task7> productlist)
        {
            Console.WriteLine("Product Name" + "\t" + "Product ID" + "\t" + "Product Price" + "\t" + "Product Category" + "t" + "Brand Name" + "\t" + "Country");
            for (int i = 0; i < productlist.Count; i++)
            {
                Console.WriteLine(productlist[i].Name + "\t" + productlist[i].ID + "\t" + productlist[i].Price + "\t" + productlist[i].Category + "\t" + productlist[i].BrandName + "\t" + productlist[i].Country);
            }
        }
        public float TotalStoreWorth(List<Lab1Task7> productlist)
        {
            float sum = 0;
            for (int i = 0; i < productlist.Count; i++)
            {
                sum = sum + productlist[i].Price;
            }
            return sum;
        }
    }
}
