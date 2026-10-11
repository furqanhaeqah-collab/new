using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HomeTask1
{
    public class Product
    {
        public string product_name;
        public float product_price;
        public string product_code;
        public string product_available;
        public string product_sale_on;
        public float product_sale;
        public Product (string product_name, float product_price, string product_code, string product_available, string product_sale_on, float product_sale)
        {
            this.product_name = product_name;
            this.product_price = product_price;
            this.product_code = product_code;
            this.product_available = product_available;
            this.product_sale_on = product_sale_on;
            this.product_sale = product_sale;
        }
        public string getField(string record, int field)
        {
            int commaCount = 1;
            string word = "";
            for (int i = 0; i < record.Length; i++)
            {
                if (record[i] == ',')
                {
                    commaCount++;
                }
                else if (commaCount == field)
                {
                    word = word + record[i];
                }
            }
            return word;
        }
        public void addProduct(Product product, List<Product>productlist)
        {
            // Code to Add Product
            Console.WriteLine("---Add a new Product---");
            Console.Write("Enter the product name: ");
            product.product_name = Console.ReadLine();
            Console.Write("Enter product price: ");
            product.product_price = float.Parse(Console.ReadLine());
            Console.Write("Enter product code: ");
            product.product_code = Console.ReadLine();
            Console.Write("Enter availability of the product(Yes/No): ");
            product.product_available = Console.ReadLine();
            Console.Write("Enter whether product is on sale (Yes/No): ");
            product.product_sale_on = Console.ReadLine();
            float product_sale, product_discount;
            if (product.product_sale_on == "Yes")
            {
                Console.Write("Enter the amount of discount: ");
                float sale = float.Parse(Console.ReadLine());
                product_discount = (product.product_price * (sale / 100));
            }
            else
            {
                product_discount = 0;
            }
            product.product_sale = product.product_price - product_discount;
            productlist.Add(new Product(product.product_name, product.product_price, product.product_code, product.product_available, product.product_sale_on, product.product_sale));
            string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\ProductRecord.txt";
            string product_record = product.product_name + "," + product.product_price.ToString() + "," + product.product_code + "," + product.product_available + "," + product.product_sale_on + "," + product.product_sale.ToString() + "\n";
            StreamWriter productfile = new StreamWriter(path);
            productfile.WriteLine(product_record);
            productfile.Flush();
            productfile.Close();
        }
        public void searchProduct(Product product, List<Product> productlist)
        {
            // Code to Search Product
            Console.Write("Enter the product code: ");
            string product_code = Console.ReadLine();
            string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\ProductRecord.txt";
            string productRecord;
            StreamReader productfile = new StreamReader(path);
            int i = 0;
            while ((productRecord = productfile.ReadLine()) != null)
            {
                product.product_name = getField(productRecord, 1);
                string product_price = getField(productRecord, 2);
                product.product_price = float.Parse(product_price);
                product.product_code = getField(productRecord, 3);
                product.product_available = getField(productRecord, 4);
                product.product_sale_on = getField(productRecord, 5);
                string product_sale = getField(productRecord, 6);
                product.product_sale = float.Parse(product_sale);
                productlist[i].product_name = product.product_name;
                productlist[i].product_price = product.product_price;
                productlist[i].product_code = product.product_code;
                productlist[i].product_available = product.product_available;
                productlist[i].product_sale_on = product.product_sale_on;
                productlist[i].product_sale = product.product_sale;
                i++;
            }
            bool is_found = false;
            int found_index = 0;
            for (int j = 0; j < productlist.Count; j++)
            {
                if (productlist[i].product_code == product_code)
                {
                    is_found = true;
                    found_index = i;
                }
            }
            if (is_found == false)
            {
                Console.WriteLine("No product found");
                Console.WriteLine("Invalid product code");
            }
            else
            {
                Console.WriteLine("Name\t\tPrice\tCode\tAvalaibility\tOn Sale\tDiscounted price");
                Console.WriteLine(productlist[found_index].product_name + "\t" + productlist[found_index].product_price + "\t"
                     + productlist[found_index].product_code + "\t" + productlist[found_index].product_available + "\t\t"
                     + productlist[found_index].product_sale_on + "\t" + productlist[found_index].product_sale);
            }
            productfile.Close();
        }
        static void ProductToFile(int found_index,Product product)
        {
            int TOTAL_PRODUCT = 50;
            int countProduct = 30;
            int index = found_index;
            string[] product_name_array = new string[TOTAL_PRODUCT];
            string[] product_price_array = new string[TOTAL_PRODUCT];
            string[] product_code_array = new string[TOTAL_PRODUCT];
            string[] product_available_array = new string[TOTAL_PRODUCT];
            string[] product_sale_on_array = new string[TOTAL_PRODUCT];
            string[] product_sale_array = new string[TOTAL_PRODUCT];
            string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\ProductRecord.txt";
            StreamWriter productfile = new StreamWriter(path);
            product_name_array[index] = product.product_name;
            product_price_array[index] = product.product_price.ToString();
            product_code_array[index] = product.product_code;
            product_available_array[index] = product.product_available;
            product_sale_on_array[index] = product.product_sale_on;
            product_sale_array[index] = product.product_sale.ToString();
            string[] product_record = new string[TOTAL_PRODUCT];
            for (int i = 0; i < countProduct; i++)
            {
                product_record[i] = product_name_array[i] + "," + product_price_array[i] + "," + product_code_array[i] + "," + product_available_array[i] + "," + product_sale_on_array[i] + "," + product_sale_array[i] + "\n";
                productfile.WriteLine(product_record[i]);
            }
            productfile.Flush();
            productfile.Close();
        }
        public void UpdateProduct(Product product, List<Product> productlist)
        {
            // Code to Update Product
            Console.Write("Enter the product code: ");
            string product_code = Console.ReadLine();
            int index = 0;
            string productRecord;
            string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\ProductRecord.txt";
            StreamReader productfile = new StreamReader(path);
            while ((productRecord = productfile.ReadLine()) != null)
            {
                product.product_name = getField(productRecord, 1);
                string product_price = getField(productRecord, 2);
                product.product_price = float.Parse(product_price);
                product.product_code = getField(productRecord, 3);
                product.product_available = getField(productRecord, 4);
                product.product_sale_on = getField(productRecord, 5);
                string product_sale = getField(productRecord, 6);
                product.product_sale = float.Parse(product_sale);
                productlist[index].product_name = product.product_name;
                productlist[index].product_price = product.product_price;
                productlist[index].product_code = product.product_code;
                productlist[index].product_available = product.product_available;
                productlist[index].product_sale_on = product.product_sale_on;
                productlist[index].product_sale = product.product_sale;
                index++;
            }
            bool is_found = false;
            int found_index = 0;
            for (int i = 0; i < productlist.Count; i++)
            {
                if (productlist[i].product_code == product_code)
                {
                    is_found = true;
                    found_index = i;
                }
            }
            if (is_found == false)
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
                Console.Write("Enter whether product is on sale(Yes/No): ");
                product.product_sale_on = Console.ReadLine();
                float product_sale, product_discount;
                float sale;
                if (product_sale_on == "Yes")
                {
                    Console.Write("Enter the amount of discount: ");
                    sale = float.Parse(Console.ReadLine());
                    product_discount = (product_price * (sale / 100));
                }
                else
                {
                    product_discount = 0;
                }
                product.product_sale = product.product_price - product_discount;
                productlist[found_index] = product;
                ProductToFile(found_index, product);
            }
        }
        public void deleteProduct(Product product, List<Product> productlist)
        {
            // Code to Delete Product
            Console.Write("Enter the product code: ");
            string product_code = Console.ReadLine();
            int index = 0;
            string productRecord;
            string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\ProductRecord.txt";
            StreamReader productfile = new StreamReader(path);
            while ((productRecord = productfile.ReadLine()) != null)
            {
                product.product_name = getField(productRecord, 1);
                string product_price = getField(productRecord, 2);
                product.product_price = float.Parse(product_price);
                product.product_code = getField(productRecord, 3);
                product.product_available = getField(productRecord, 4);
                product.product_sale_on = getField(productRecord, 5);
                string product_sale = getField(productRecord, 6);
                product.product_sale = float.Parse(product_sale);
                productlist[index].product_name = product.product_name;
                productlist[index].product_price = product.product_price;
                productlist[index].product_code = product.product_code;
                productlist[index].product_available = product.product_available;
                productlist[index].product_sale_on = product.product_sale_on;
                productlist[index].product_sale = product.product_sale;
                index++;
            }
            bool is_found = false;
            int found_index = 0;
            for (int i = 0; i < productlist.Count; i++)
            {
                if (productlist[i].product_code == product_code)
                {
                    is_found = true;
                    found_index = i;
                }
            }
            if (is_found == false)
            {
                Console.WriteLine("No product found");
                Console.WriteLine("Invalid product code");
            }
            else
            {
                string product_name = " ";
                int product_price = 0;
                string product_code_delete = " ";
                string product_available = " ";
                string product_sale_on = " ";
                float product_sale = 0;
                productlist[found_index] = product;
                ProductToFile(found_index, product);

            }
            productfile.Close();
        }
        public void addSaleOnProduct(Product product, List<Product> productlist)
        {
            // Code to Add Product on sale
            Console.Write("Enter the product code: ");
            string product_code = Console.ReadLine();
            int index = 0;
            string productRecord;
            string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\ProductRecord.txt";
            StreamReader productfile = new StreamReader(path);
            while ((productRecord = productfile.ReadLine()) != null)
            {
                product.product_name = getField(productRecord, 1);
                string product_price = getField(productRecord, 2);
                product.product_price = float.Parse(product_price);
                product.product_code = getField(productRecord, 3);
                product.product_available = getField(productRecord, 4);
                product.product_sale_on = getField(productRecord, 5);
                string product_sale = getField(productRecord, 6);
                product.product_sale = float.Parse(product_sale);
                productlist[index].product_name = product.product_name;
                productlist[index].product_price = product.product_price;
                productlist[index].product_code = product.product_code;
                productlist[index].product_available = product.product_available;
                productlist[index].product_sale_on = product.product_sale_on;
                productlist[index].product_sale = product.product_sale;
                index++;
            }
            bool is_found = false;
            int found_index = 0;
            for (int i = 0; i < productlist.Count; i++)
            {
                if (productlist[i].product_code == product_code)
                {
                    is_found = true;
                    found_index = i;
                }
            }
            if (is_found == false)
            {
                Console.WriteLine("No product found");
                Console.WriteLine("Invalid product code");
            }
            else
            {
                if (productlist[found_index].product_sale_on == "No")
                {
                    string product_name = productlist[found_index].product_name;
                    float product_price = productlist[found_index].product_price;
                    string product_code_update = productlist[found_index].product_code;
                    string product_available = productlist[found_index].product_available;
                    Console.Write("Enter the amount of discount: ");
                    float discount = float.Parse(Console.ReadLine());
                    string product_sale_on = "Yes";
                    float product_sale = product_price - (product_price * (discount / 100));
                    ProductToFile(found_index, product);
                    Console.WriteLine("Name\t\tPrice\tCode\tAvalaibility\tOn Sale\tDiscounted price");
                    Console.WriteLine(product_name + "\t" + product_price + "\t"
                         + product_code_update + "\t" + product_available + "\t\t"
                         + product_sale_on + "\t" + product_sale);
                }
                else
                {
                    Console.WriteLine("Discount is already applied to the product.");
                }
            }
            productfile.Close();
        }
        public int viewProductMenu()
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
        public void viewProduct(Product product, List<Product> productlist)
        {
            while (true)
            {
                int view_product_choice = viewProductMenu();
                int index = 0;
                string productRecord;
                string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\ProductRecord.txt";
                StreamReader productfile = new StreamReader(path);
                while ((productRecord = productfile.ReadLine()) != null)
                {
                    product.product_name = getField(productRecord, 1);
                    string product_price = getField(productRecord, 2);
                    product.product_price = float.Parse(product_price);
                    product.product_code = getField(productRecord, 3);
                    product.product_available = getField(productRecord, 4);
                    product.product_sale_on = getField(productRecord, 5);
                    string product_sale = getField(productRecord, 6);
                    product.product_sale = float.Parse(product_sale);
                    productlist[index].product_name = product.product_name;
                    productlist[index].product_price = product.product_price;
                    productlist[index].product_code = product.product_code;
                    productlist[index].product_available = product.product_available;
                    productlist[index].product_sale_on = product.product_sale_on;
                    productlist[index].product_sale = product.product_sale;
                    index++;
                }
                if (view_product_choice == 1)
                {
                    for (int view_index = 0; view_index < productlist.Count; view_index++)
                    {
                        Console.WriteLine("Name\t\tPrice\tCode\tAvalaibility\tOn Sale\tDiscounted Price");
                        Console.WriteLine(productlist[view_index].product_name + "\t" + productlist[view_index].product_price + "\t"
                             + productlist[view_index].product_code + "\t" + productlist[view_index].product_available + "\t\t"
                             + productlist[view_index].product_sale_on + "\t" + productlist[view_index].product_sale);
                    }
                }
                else if (view_product_choice == 2)
                {
                    // Code for view categorized product
                    Console.Write("Enter the Category of the product: ");
                    string category = Console.ReadLine();
                    for (int product_no = 0; product_no < productlist.Count; product_no++)
                    {
                        string product_code = productlist[product_no].product_code;
                        if (category == "Clothes")
                        {
                            if (product_code[0] == 'C')
                            {
                                Console.WriteLine("Product Name\tProduct ID\tProduct Price\tProduct In Stock");
                                Console.WriteLine(productlist[product_no].product_name + "\t" + productlist[product_no].product_code + "\t"
                                     + productlist[product_no].product_price + "\t" + productlist[product_no].product_available);
                            }
                        }
                        else if (category == "Shoes")
                        {
                            if (product_code[0] == 'S')
                            {
                                Console.WriteLine("Product Name\tProduct ID\tProduct Price\tProduct In Stock");
                                Console.WriteLine(productlist[product_no].product_name + "\t" + productlist[product_no].product_code + "\t"
                                     + productlist[product_no].product_price + "\t" + productlist[product_no].product_available);
                            }
                        }
                        else if (category == "Jewellery")
                        {
                            if (product_code[0] == 'J')
                            {
                                Console.WriteLine("Product Name\tProduct ID\tProduct Price\tProduct In Stock");
                                Console.WriteLine(productlist[product_no].product_name + "\t" + productlist[product_no].product_code + "\t"
                                     + productlist[product_no].product_price + "\t" + productlist[product_no].product_available);
                            }
                        }
                        else
                        {
                            Console.WriteLine("Invalid Category");
                        }
                    }
                }
                else if (view_product_choice == 3)
                {
                    // Code for view products from highest to lowest price
                    for (int bubblesort1 = 0; bubblesort1 < productlist.Count- 1; bubblesort1++)
                    {
                        for (int bubblesort2 = 0; bubblesort2 < productlist.Count - bubblesort1 - 1; bubblesort2++)
                        {
                            if (productlist[bubblesort2].product_price < productlist[bubblesort2 + 1].product_price)
                            {
                                string swap_name = productlist[bubblesort2].product_name;
                                productlist[bubblesort2].product_name = productlist[bubblesort2 + 1].product_name;
                                productlist[bubblesort2 + 1].product_name = swap_name;
                                string swap_code = productlist[bubblesort2].product_code;
                                productlist[bubblesort2].product_code = productlist[bubblesort2 + 1].product_code;
                                productlist[bubblesort2 + 1].product_code = swap_code;
                                float swap_price = productlist[bubblesort2].product_price;
                                productlist[bubblesort2].product_price = productlist[bubblesort2 + 1].product_price;
                                productlist[bubblesort2 + 1].product_price = swap_price;
                                string swap_available = productlist[bubblesort2].product_available;
                                productlist[bubblesort2].product_available = productlist[bubblesort2 + 1].product_available;
                                productlist[bubblesort2+1].product_available = swap_available;
                            }
                        }
                    }
                    for (int sort = 0; sort < productlist.Count; sort++)
                    {
                        Console.WriteLine("Product Name\tProduct ID\tProduct Price\tProduct In Stock");
                        Console.WriteLine(productlist[sort].product_name + "\t" + productlist[sort].product_code + "\t"
                             + productlist[sort].product_price + "\t" + productlist[sort].product_available);
                    }
                }
                else if (view_product_choice == 4)
                {
                    // Code for view product from lowest to highest price
                    for (int bubblesort1 = 0; bubblesort1 < productlist.Count; bubblesort1++)
                    {
                        for (int bubblesort2 = 0; bubblesort2 < productlist.Count - bubblesort1 - 1; bubblesort2++)
                        {
                            if (productlist[bubblesort2].product_price > productlist[bubblesort2 + 1].product_price)
                            {
                                string swap_name = productlist[bubblesort2].product_name;
                                productlist[bubblesort2].product_name = productlist[bubblesort2 + 1].product_name;
                                productlist[bubblesort2 + 1].product_name = swap_name;
                                string swap_code = productlist[bubblesort2].product_code;
                                productlist[bubblesort2].product_code = productlist[bubblesort2 + 1].product_code;
                                productlist[bubblesort2 + 1].product_code = swap_code;
                                float swap_price = productlist[bubblesort2].product_price;
                                productlist[bubblesort2].product_price = productlist[bubblesort2 + 1].product_price;
                                productlist[bubblesort2 + 1].product_price = swap_price;
                                string swap_available = productlist[bubblesort2].product_available;
                                productlist[bubblesort2].product_available = productlist[bubblesort2 + 1].product_available;
                                productlist[bubblesort2 + 1].product_available = swap_available;
                            }
                        }
                    }
                    for (int sort = 0; sort < productlist.Count; sort++)
                    {
                        Console.WriteLine("Product Name\tProduct ID\tProduct Price\tProduct In Stock");
                        Console.WriteLine(productlist[sort].product_name + "\t" + productlist[sort].product_code + "\t"
                             + productlist[sort].product_price + "\t" + productlist[sort].product_available);
                    }
                }
                else if (view_product_choice == 5)
                {
                    // Code to View Products on Sale
                    for (int view_index = 0; view_index < productlist.Count; view_index++)
                    {
                        if (productlist[view_index].product_sale_on == "Yes")
                        {
                            Console.WriteLine("Name\t\tPrice\tCode\tAvalaibility\tOn Sale\tDiscounted Price");
                            Console.WriteLine(productlist[view_index].product_name + "\t" + productlist[view_index].product_price + "\t"
                                 + productlist[view_index].product_code + "\t" + productlist[view_index].product_available + "\t\t"
                                 + productlist[view_index].product_sale_on + "\t" + productlist[view_index].product_sale);
                        }
                    }
                }
                else if (view_product_choice == 6)
                {
                    Console.WriteLine("Exiting Program");
                    Console.ReadKey();
                    break;
                }
                else
                {
                    Console.WriteLine("Invalid Choice");
                }
                productfile.Close();
            }
        }
    }
}
