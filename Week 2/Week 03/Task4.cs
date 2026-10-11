using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Security.Cryptography;
using System.Text;
using System.Threading.Tasks;

namespace Week_03
{
    public class Task4
    {
        public string Name;
        public string Category;
        public int Price;
        public int StockQuantity;
        public int minStock;
        public Task4() { }
        public Task4(string Name, string Category, int Price, int StockQuantit, int minStock)
        {
            this.Name = Name;
            this.Category = Category;
            this.Price = Price;
            this.StockQuantity = StockQuantit;
            this.minStock = minStock;
        }
        public int Menu()
        {
            Console.WriteLine("--------Main Menu---------");
            Console.WriteLine("1.Add Product");
            Console.WriteLine("2.View Product");
            Console.WriteLine("3.View Highest Unit Price");
            Console.WriteLine("4.View Sales Tax");
            Console.WriteLine("5.View Products to be ordered");
            Console.WriteLine("6.Exit");
            int option = int.Parse(Console.ReadLine());
            return option;
        }
        public void ViewProduct(List<Task4> productlist)
        {
            Console.WriteLine("Nmae\tCategory\tPrice\tQuantity");
            for(int i = 0; i < productlist.Count; i++)
            {
                Console.WriteLine(productlist[i].Name + "," + productlist[i].Category + "," + productlist[i].Price + "," + productlist[i].StockQuantity);
            }
        }
        public void ViewHighestUnitPrice(List<Task4> productlist)
        {
            int price = productlist[0].Price;
            for (int i = 0; i < productlist.Count; i++)
            {
                if (productlist[i].Price > price)
                {
                    price = productlist[i].Price;
                }
            }
            Console.WriteLine("Highest Unit price is: " + price);
        }
        public void SaleTax(List<Task4> productlist)
        {
            double SalesTax = 0;
            for (int i = 0; i < productlist.Count; i++)
            {
                int price = productlist[i].Price;
                if (productlist[i].Category == "Groceries")
                {
                    SalesTax = price * 0.1;
                    Console.WriteLine(productlist[i].Name + "," +  SalesTax);
                }
                if (productlist[i].Category == "Fresh Fruits")
                {
                    SalesTax = price * 0.05;
                    Console.WriteLine(productlist[i].Name + "," + SalesTax);
                }
                else
                {
                    SalesTax = price * 0.15;
                    Console.WriteLine(productlist[i].Name + "," + SalesTax);
                }
            }
        }
        public void Orderedp(List<Task4> productlist)
        {
            for (int i = 0; i < productlist.Count; i++)
            {
                if (productlist[i].StockQuantity < productlist[i].minStock)
                {
                    Console.WriteLine(productlist[i].Name + "is to be ordered.");
                }
            }
        }
    }
}
