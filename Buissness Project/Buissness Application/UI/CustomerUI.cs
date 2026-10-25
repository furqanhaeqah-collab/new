using Buissness_Application.Model;
using Buissness_Application.Service;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.IO;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace Buissness_Application.UI
{
    public class CustomerUI
    {
        private readonly ProductService _PService;
        private readonly CustomerService _service;
        public CustomerUI()
        {
            _PService = new ProductService();
            _service = new CustomerService();
        }
        public void MainHeaderCustomerUI()
        {
            Console.WriteLine("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
            Console.WriteLine("Welcome to M & S Brand Management System ");
            Console.WriteLine("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        }
        public string CustomerMenuUI()
        {
            MainHeaderCustomerUI();
            Console.WriteLine("----Customer Menu----");
            Console.WriteLine("1.View Product");
            Console.WriteLine("2.Search Product");
            Console.WriteLine("3.Filter In Stock Products");
            Console.WriteLine("4.Buy a Product");
            Console.WriteLine("5.Cancel Order");
            Console.WriteLine("6.Send Feedback");
            Console.WriteLine("7.View Feedback");
            Console.WriteLine("8.Exit");
            Console.Write("Enter your choice: ");
            string customer_choice = Console.ReadLine();
            return customer_choice;
        }
        public void BuyProductUI(CustomerModel customer, List<ProductModel> productlist)
        {
            // Code for Bying
            Console.Write("Enter the product code: ");
            string code = Console.ReadLine();
            int i = _PService.FindProductService(code);
            productlist = _PService.ViewProductService();
            if (i == -1)
            {
                Console.WriteLine("No product found");
                Console.WriteLine("Invalid product code");
            }
            else
            {
                Console.WriteLine("Product ID: \t" + productlist[i].product_code);
                Console.WriteLine("Product name: \t" + productlist[i].product_name);
                Console.WriteLine("Product price: \t" + productlist[i].product_price);
                Console.WriteLine("Discounted prie: \t " + productlist[i].product_sale);
                if (productlist[i].product_sale != productlist[i].product_price)
                {
                    customer.ProductPrice = productlist[i].product_sale;
                }
                else
                {
                    customer.ProductPrice = productlist[i].product_price;
                }
                customer.ProductCode = productlist[i].product_code;
                Console.WriteLine("Customer Credentials");
                Console.Write("Enter your Phone No.: ");
                customer.ContactNo = Console.ReadLine();
                Console.Write("Enter your postal code: ");
                customer.PostalCode = int.Parse(Console.ReadLine());
                _service.AddCustomerCredentialsService(customer);
                Console.WriteLine("Product ordered successfully");
            }
        }
        public void CancelOrderUI()
        {
            // Code for Track Order
            Console.WriteLine("Enter Customer Name: ");
            string Name = Console.ReadLine();
            int i = _service.FindCustomerService(Name);
            if (i == -1)
            {
                Console.WriteLine("Invalid credentials");
                Console.WriteLine("Try again");
            }
            else
            {
                _service.DeleteCustomerService(i);
            }
        }
    }
}
