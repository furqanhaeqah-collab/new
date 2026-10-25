using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HomeTask1
{
    public class Owner
    {
        public void mainHeader()
        {
            Console.WriteLine("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
            Console.WriteLine("Welcome to M & S Brand Management System ");
            Console.WriteLine("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        }
        public string OwnerMenu()
        {
            mainHeader();
            Console.WriteLine("----Owner Menu----");
            Console.WriteLine("Owner Menu");
            Console.WriteLine("1.Add Users");
            Console.WriteLine("2.View Users");
            Console.WriteLine("3.Add Product");
            Console.WriteLine("4.Search Product");
            Console.WriteLine("5.Update Product");
            Console.WriteLine("6.View Product");
            Console.WriteLine("7.Delete Product");
            Console.WriteLine("8.Add Sale on Product");
            Console.WriteLine("9.View Customer Feedback");
            Console.WriteLine("10.Exit");
            Console.Write("Enter your choice: ");
            string owner_choice = Console.ReadLine();
            return owner_choice;
        }

    }
}
