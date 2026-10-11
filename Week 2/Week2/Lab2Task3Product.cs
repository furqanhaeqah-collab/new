using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Week2
{
    public class Lab2Task3Product
    {
        public string ProductID;
        public string Name;
        public int Price;
        public Lab2Task3Product() { }
        public Lab2Task3Product(string ProductID, string Name, int Price)
        {
            this.ProductID = ProductID;
            this.Name = Name;
            this.Price = Price;
        }
        public int ProductMenu()
        {
            Console.WriteLine("----Product Menu----");
            Console.WriteLine("1.Add Product");
            Console.WriteLine("2.View All Products");
            Console.WriteLine("3.Search Product");
            Console.WriteLine("4.Exit");
            Console.Write("Enter your option: ");
            int option = int.Parse(Console.ReadLine());
            return option;
        }
        public void ViewAllProducts(List<Lab2Task3Product> productlist)
        {
            Console.WriteLine("ProductID\tName\tPrice");
            for(int i = 0; i < productlist.Count; i++)
            {
                Console.WriteLine(productlist[i].ProductID+ "\t" + productlist[i].Name + "\t" + productlist[i].Price);
            }
        }
        public void SearchProduct(List<Lab2Task3Product> productlist)
        {
            Console.Write("Enter Product ID: ");
            string productID = Console.ReadLine();
            int found_index = -1;
            bool found = false;
            for (int i = 0; i < productlist.Count; i++)
            {
                if (productID == productlist[i].ProductID)
                {
                    found_index = i;
                    found = true;
                    break;
                }
            }
            if (found == true)
            {
                Console.WriteLine("Product Found: " + productlist[found_index].Name + " Price: " + productlist[found_index].Price);
            }
            else
            {
                Console.WriteLine("Product Not Found");
            }
        }
    }
}
