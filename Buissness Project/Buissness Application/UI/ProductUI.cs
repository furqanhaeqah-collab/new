using Buissness_Application.Model;
using Buissness_Application.Service;
using System;
using System.Collections.Generic;
using System.Data.Odbc;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace Buissness_Application.UI
{
    public class ProductUI
    {
        private readonly ProductService _service;
        public ProductUI()
        {
            _service = new ProductService();
        }
        public void AddProductUI(ProductModel product)
        {
            // Code to Take Input for Add Product
            Console.WriteLine("---Add a new Product---");
            Console.Write("Enter the product name: ");
            product.product_name = Console.ReadLine();
            Console.Write("Enter product price: ");
            product.product_price = float.Parse(Console.ReadLine());
            Console.Write("Enter product code: ");
            product.product_code = Console.ReadLine();
            Console.Write("Enter availability of the product(Yes/No): ");
            product.product_available = Console.ReadLine();
            Console.Write("Enter the quantity of Stock: ");
            product.quantity = int.Parse(Console.ReadLine());
            Console.Write("Enter whether product is on sale (Yes/No): ");
            product.product_sale_on = Console.ReadLine();
            if (product.product_sale_on == "Yes")
            {
                Console.WriteLine("Enter the dsicount you want to apply: ");
                int product_discount = int.Parse(Console.ReadLine());
                product.product_discount = product_discount;
                product.product_sale = product.product_price - (product.product_price * (product.product_discount / 100));
            }
            _service.AddProductService(product);
            Console.WriteLine("Product Added Successfully");
            Console.ReadKey();
        }
        public void UpdateProductUI(ProductModel product)
        {
            // Code to Take Input for Update Product
            Console.Write("Enter the product code: ");
            string code = Console.ReadLine();
            int i = _service.FindProductService(code);
            if (i == -1)
            {
                Console.WriteLine("No product found");
                Console.WriteLine("Invalid product code");
            }
            else
            {
                Console.WriteLine("---Update an existing Product---");
                Console.Write("Enter the product name: ");
                product.product_name = Console.ReadLine();
                Console.Write("Enter product price: ");
                product.product_price = float.Parse(Console.ReadLine());
                Console.Write("Enter product code: ");
                product.product_code = Console.ReadLine();
                Console.Write("Enter availability of the product: ");
                product.product_available = Console.ReadLine();
                Console.Write("Enter the quantity of Stock: ");
                product.quantity = int.Parse(Console.ReadLine());
                Console.Write("Enter whether product is on sale(Yes/No): ");
                product.product_sale_on = Console.ReadLine();
                if (product.product_sale_on == "Yes")
                {
                    Console.Write("Enter the percentage of sale: ");
                    int product_discount = int.Parse(Console.ReadLine());
                    product.product_discount = product_discount;
                    product.product_sale = product.product_price - (product.product_price * (product.product_discount / 100));
                }
                else
                {
                    product.product_discount = 0;
                    product.product_sale = product.product_price;
                }
                _service.UpdateProductService(product, i);
                Console.WriteLine("Product Updated Successfully");
                Console.ReadKey();
            }
        }
        public void SearchProductUI(List<ProductModel> productlist)
        {
            // Code to Take Input for Search Product
            Console.Write("Enter the product code: ");
            string code = Console.ReadLine();
            int i = _service.FindProductService(code);
            if (i == -1)
            {
                Console.WriteLine("No product found");
                Console.WriteLine("Invalid product code");
            }
            else
            {
                productlist = _service.ViewProductService();
                Console.WriteLine("Name\t\tPrice\tCode\tAvalaibility\tQuantity\tOn Sale\tDiscounted price");
                Console.WriteLine(productlist[i].product_name + "\t" + productlist[i].product_price + "\t"
                     + productlist[i].product_code + "\t" + productlist[i].product_available + "\t\t"
                     + productlist[i].quantity + "\t\t" + productlist[i].product_sale_on + "\t" + productlist[i].product_sale);
            }
            Console.ReadKey();
        }
        public void DeleteProductUI()
        {
            // Code to Delete Product
            Console.Write("Enter the product code: ");
            string code = Console.ReadLine();
            int i = _service.FindProductService(code);
            if (i == -1)
            {
                Console.WriteLine("No product found");
                Console.WriteLine("Invalid product code");
            }
            else
            {
                _service.DeleteProductService(i);
                Console.WriteLine("Product Deleted Successfully");
            }
            Console.ReadKey();
        }
        public void AddSaleOnProductUI()
        {
            // Code to Add sale on product
            Console.Write("Enter the product code: ");
            string code = Console.ReadLine();
            int i = _service.FindProductService(code);
            if (i == -1)
            {
                Console.WriteLine("No product found");
                Console.WriteLine("Invalid product code");
            }
            else
            {
                Console.Write("Enter the amount of discount: ");
                int product_sale = int.Parse(Console.ReadLine());
                bool update_status  = _service.AddSaleService(i, product_sale);
                if(update_status == false)
                {
                    Console.WriteLine("Discount is already applied to the product.");
                }
                else
                {
                    Console.WriteLine("Discount  Applied now!");
                }
            }
            Console.ReadKey();
        }
        public void RemoveSaleOnProductUI()
        {
            // Code to Remove sale on product
            Console.Write("Enter the product code: ");
            string code = Console.ReadLine();
            int i = _service.FindProductService(code);
            if (i == -1)
            {
                Console.WriteLine("No product found");
                Console.WriteLine("Invalid product code");
            }
            else
            {
                bool delete_status = _service.RemoveSaleService(i);
                if (delete_status == false)
                {
                    Console.WriteLine("No Disscount is previously applied");
                }
                else
                {
                    Console.WriteLine("Discount  Removed now!");
                }
            }
            Console.ReadKey();
        }
        public int ViewProductMenuUI()
        {
            Console.WriteLine("----------------------------------");
            Console.WriteLine("-------- View Product Menu -------");
            Console.WriteLine("----------------------------------");
            Console.WriteLine("1.All Products");
            Console.WriteLine("2.Catogerized Products");
            Console.WriteLine("3.View Prdoucts with prices(highest to lowest)");
            Console.WriteLine("4.View Prdoucts with prices(lowest to highest)");
            Console.WriteLine("5.Product on Sale");
            Console.WriteLine("6.Exit");
            Console.Write("Enter your choice: ");
            int view_product_choice = int.Parse(Console.ReadLine());
            return view_product_choice;
        }
        public void ViewAllProductUI(List<ProductModel> ProductList)
        {
            Console.Clear();
            ProductList = _service.ViewProductService();
            Console.WriteLine("Name\t\tPrice\tCode\tAvalaibility\tOn Sale\tPercentage Discount\tDiscounted Price");
            for (int view_index = 0; view_index < ProductList.Count; view_index++)
            {
                Console.WriteLine(ProductList[view_index].product_name + "\t" + ProductList[view_index].product_price + "\t"
                     + ProductList[view_index].product_code + "\t" + ProductList[view_index].product_available + "\t\t"
                     + ProductList[view_index].product_sale_on + "\t" + ProductList[view_index].product_discount + "\t" 
                     + ProductList[view_index].product_sale);
            }
            Console.ReadKey();
        }
        public void ViewCategorizedProductUI(List<ProductModel> ProductList)
        {
            Console.Clear();
            ProductList = _service.ViewProductService();
            Console.Write("Enter the Category of the product: ");
            string category = Console.ReadLine();
            if(category == "Clothes" || category == "Shoes" || category == "Jewellery")
            {
                for (int product_no = 0; product_no < ProductList.Count; product_no++)
                {
                    string product_code = ProductList[product_no].product_code;
                    if (category == "Clothes" && product_code[0] == 'C')
                    {
                        Console.WriteLine("Product Name\tProduct ID\tProduct Price\tProduct In Stock");
                        Console.WriteLine(ProductList[product_no].product_name + "\t" + ProductList[product_no].product_code + "\t"
                             + ProductList[product_no].product_price + "\t" + ProductList[product_no].product_available);
                    }
                    else if (category == "Shoes" && product_code[0] == 'S')
                    {
                        Console.WriteLine("Product Name\tProduct ID\tProduct Price\tProduct In Stock");
                        Console.WriteLine(ProductList[product_no].product_name + "\t" + ProductList[product_no].product_code + "\t"
                             + ProductList[product_no].product_price + "\t" + ProductList[product_no].product_available);
                    }
                    else if (category == "Jewellery" && product_code[0] == 'J')
                    {
                        Console.WriteLine("Product Name\tProduct ID\tProduct Price\tProduct In Stock");
                        Console.WriteLine(ProductList[product_no].product_name + "\t" + ProductList[product_no].product_code + "\t"
                             + ProductList[product_no].product_price + "\t" + ProductList[product_no].product_available);
                    }
                }
                Console.ReadKey();
            }
            else
            {
                Console.WriteLine("No such category available");
            }
        }
        public void ViewSortedDescProductsUI(List<ProductModel> ProductList)
        {
            Console.Clear();
            ProductList = _service.ViewSortedDescProductService(ProductList);
            for (int sort = 0; sort < ProductList.Count; sort++)
            {
                Console.WriteLine("Product Name\tProduct ID\tProduct Price\tProduct In Stock");
                Console.WriteLine(ProductList[sort].product_name + "\t" + ProductList[sort].product_code + "\t"
                     + ProductList[sort].product_price + "\t" + ProductList[sort].product_available);
            }
            Console.ReadKey();
        }
        public void ViewSortedAscProductUI(List<ProductModel> ProductList)
        {
            Console.Clear();
            ProductList = _service.ViewSortedAscProductService(ProductList);
            for (int sort = 0; sort < ProductList.Count; sort++)
            {
                Console.WriteLine("Product Name\tProduct ID\tProduct Price\tProduct In Stock");
                Console.WriteLine(ProductList[sort].product_name + "\t" + ProductList[sort].product_code + "\t"
                     + ProductList[sort].product_price + "\t" + ProductList[sort].product_available);
            }
            Console.ReadKey();
        }
        public void ViewSaleProductUI(List<ProductModel> ProductList)
        {
            Console.Clear();
            ProductList = _service.ViewProductService();
            for (int view_index = 0; view_index < ProductList.Count; view_index++)
            {
                if (ProductList[view_index].product_sale_on == "Yes")
                {
                    Console.WriteLine("Name\t\tPrice\tCode\tOn Sale\tDiscounted Price");
                    Console.WriteLine(ProductList[view_index].product_name + "\t" + ProductList[view_index].product_price + "\t"
                         + ProductList[view_index].product_code + "\t\t" + ProductList[view_index].product_sale_on 
                         + "\t" + ProductList[view_index].product_sale);
                }
            }
            Console.ReadKey();
        }
        public void InStockProduct(List<ProductModel> ProductList)
        {
            Console.Clear();
            ProductList = _service.ViewProductService();
            for (int view_index = 0; view_index < ProductList.Count; view_index++)
            {
                if (ProductList[view_index].product_available == "Yes")
                {
                    Console.WriteLine("Name\t\tAvailability\t\tStock Quantity");
                    Console.WriteLine(ProductList[view_index].product_name + "\t\t" + ProductList[view_index].product_available + "\t\t"
                         + ProductList[view_index].quantity);
                }
            }
            Console.ReadKey();
        }
        public void ExitProgram()
        {
            Console.WriteLine("Exiting Program");
            Console.ReadKey();
        }
        public void InvalidOption()
        {
            Console.WriteLine("Invalid Choice");
            Console.ReadKey();
        }
    }
}
