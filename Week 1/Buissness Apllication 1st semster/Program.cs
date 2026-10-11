using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices.ComTypes;
using System.Text;
using System.Threading.Tasks;

namespace Buissness_Apllication_1st_semster
{
    internal class Program
    {
        static void Main(string[] args) //---------------------------------------------------------------------------Main Function Start
        {
            while (true)
            {
                string mainOption = mainMenu();
                if (mainOption == "1")
                {
                    string w = who();
                    if (w == "ADMIN")
                    { // Code of Owner
                        string ownerOption = " ";
                        while (true) // ----------------------------------------- Start of while loop for Manager
                        {
                            ownerOption = OwnerMenu();
                            if (ownerOption == "1")
                            {
                                // Code for Add Users
                                addUserInput();
                            }
                            else if (ownerOption == "2")
                            {
                                // Code for View Users
                                viewUsers();
                            }
                            else if (ownerOption == "3")
                            {
                                // Code for Add Product
                                addProduct();
                            }
                            else if (ownerOption == "4")
                            {
                                // Code for Search Product
                                searchProduct();
                            }
                            else if (ownerOption == "5")
                            {
                                // Code for Update Product
                                UpdateProduct();
                            }
                            else if (ownerOption == "6")
                            {
                                // Code for View Product
                                viewProduct();
                            }
                            else if (ownerOption == "7")
                            {
                                // Code for Delete Product
                                deleteProduct();
                            }
                            else if (ownerOption == "8")
                            {
                                // Code for Add Sale on Product
                                addSaleOnProduct();
                            }
                            else if (ownerOption == "9")
                            {
                                // Code for view feedback
                                viewFeedback();
                            }
                            else if (ownerOption == "10")
                            {
                                // Code for Exit Admin Menu
                                exitMenu();
                                break;
                            }
                            else
                            {
                                // Code for invalid Option
                                Console.WriteLine("Invalid Option");
                            }
                            clearScreen();
                        } // ----------------------------------------- End of while loop for Manager
                    }
                }
                else if (mainOption == "2")
                { // Code for Customer
                    string customerOption = " ";
                    while (true) // ------------------------------ Start of While loop for Customer
                    {
                        customerOption = customerMenu();
                        if (customerOption == "1")
                        {
                            // Code for View Products
                            viewProduct();
                        }
                        else if (customerOption == "2")
                        {
                            // Code for Search Products
                            searchProduct();
                        }
                        else if (customerOption == "3")
                        {
                            // Code for Buy a Product
                            buyProduct();
                        }
                        else if (customerOption == "4")
                        {
                            // Code for Cancel Order
                            cancelOrder();
                        }
                        else if (customerOption == "5")
                        {
                            // Code for Send Feedback
                            sendFeedback();
                        }
                        else if (customerOption == "6")
                        {
                            // Code for View Feedback
                            viewFeedback();
                        }
                        else if (customerOption == "7")
                        {
                            // Code for Exit Customer Menu
                            exitMenu();
                            break;
                        }
                        else
                        {
                            // Code for Invalid Option
                            Console.WriteLine("Exiting Customer Menu");
                        }
                        clearScreen();
                    } // ------------------------------------------ End of While loop for Customer
                }
                else if (mainOption == "3")
                {
                    // Code for exit menu here
                    exitMenu();
                    break;
                }
                else
                {
                    // Code for Invalid Choice
                    Console.WriteLine("Worng Option selected ");
                }
                clearScreen();
            }
        } //---------------------------------------------------------------------------------------------Main Function End
        static string mainMenu() // ------------------------------- Function Implimentation Start
        {
            Console.WriteLine("------------------------------------------------------------");
            Console.WriteLine("--------------- M & S Brand Management System --------------");
            Console.WriteLine("------------------------------------------------------------");
            Console.WriteLine("1.Admin");
            Console.WriteLine("2.Customer");
            Console.WriteLine("3.Exit");
            Console.Write("Enter your choice: ");
            string mainOption = Console.ReadLine();
            return mainOption;
        }
        static string getField(string record, int field)
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
        static void mainHeader()
        {
            Console.WriteLine("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
            Console.WriteLine("Welcome to M & S Brand Management System ");
            Console.WriteLine("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        }
        static string who()
        {
            mainHeader();
            Console.Write("Enter username: ");
            string username = Console.ReadLine();
            Console.Write("Enter password: ");
            string password = Console.ReadLine();
            int index = 0;
            string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\UserRecord.txt";
            StreamReader UserFile = new StreamReader(path);
            string details;
            string[] username_array = new string[10];
            string[] password_array = new string[10];
            string[] role_array = new string[10];
            while ((details = UserFile.ReadLine()) != null)
            {
                username_array[index] = getField(details, 1);
                password_array[index] = getField(details, 2);
                role_array[index] = getField(details, 3);
                index++;
            }
            UserFile.Close();
            for (int i = 0; i < username_array.Length; i++)
            {
                if (username_array[i] == username && password_array[i] == password)
                {
                    return role_array[i];
                }
            }
            return "Wrong";
        }
        static string OwnerMenu()
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
        static string customerMenu()
        {
            mainHeader();
            Console.WriteLine("----Customer Menu----");
            Console.WriteLine("1.View Product");
            Console.WriteLine("2.Search Product");
            Console.WriteLine("3.Buy a Product");
            Console.WriteLine("4.Cancel Order");
            Console.WriteLine("5.Send Feedback");
            Console.WriteLine("6.View Feedback");
            Console.WriteLine("7.Exit");
            Console.Write("Enter your choice: ");
            string customer_choice = Console.ReadLine();
            return customer_choice;
        }
        static void addUserInput()
        {
            int countUser = 2;
            Console.WriteLine("---Add a new User---");
            Console.Write("Wnter username: ");
            string username = Console.ReadLine();
            Console.Write("Enter password: ");
            string password = Console.ReadLine();
            Console.Write("Enter role: ");
            string role = Console.ReadLine();
            if (countUser <= 10)
            {
                countUser++;
                string UserRecord = username + "," + password + "," + role + "\n";
                StreamWriter userFile = new StreamWriter("C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\UserRecord.txt");
                userFile.WriteLine(UserRecord);
                userFile.Flush();
                userFile.Close();
                Console.WriteLine("User entered successfully in the system");

            }
            else
            {
                Console.WriteLine("No more users can be added. Maximum limit reached.");
            }
            clearScreen();
        }
        static void viewUsers()
        {
            int index = 0;
            string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\UserRecord.txt";
            string userRecord;
            StreamReader userFile = new StreamReader(path);
            string[] username_array = new string[10];
            string[] password_array = new string[10];
            string[] role_array = new string[10];
            Console.WriteLine("Username\tPassword\tRecord");
            while ((userRecord = userFile.ReadLine()) != null)
            {
                username_array[index] = getField(userRecord, 1);
                password_array[index] = getField(userRecord, 2);
                role_array[index] = getField(userRecord, 3);
                Console.WriteLine(username_array[index] + "\t" + password_array[index] + "\t" + role_array[index]);
                index++;
            }
            userFile.Close();
            clearScreen();
        }
        static void addProduct()
        {
            // Code to Add Product
            Console.WriteLine("---Add a new Product---");
            Console.Write("Enter the product name: ");
            string product_name = Console.ReadLine();
            Console.Write("Enter product price: ");
            int product_price = int.Parse(Console.ReadLine());
            Console.Write("Enter product code: ");
            string product_code = Console.ReadLine();
            Console.Write("Enter availability of the product(Yes/No): ");
            string product_available = Console.ReadLine();
            Console.Write("Enter whether product is on sale (Yes/No): ");
            string product_sale_on = Console.ReadLine();
            float product_sale, product_discount;
            if (product_sale_on == "Yes")
            {
                Console.Write("Enter the amount of discount: ");
                float sale = float.Parse(Console.ReadLine());
                product_discount = (product_price * (sale / 100));
            }
            else
            {
                product_discount = 0;
            }
            clearScreen();
            product_sale = product_price - product_discount;
            addProductToFile(product_name, product_price, product_code, product_available, product_sale_on, product_sale);
        }
        static void addProductToFile(string product_name, int product_price, string product_code, string product_available, string product_sale_on, float product_sale)
        {
            int countProduct = 30;
            string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\ProductRecord.txt";
            string product_record = product_name + "," + product_price.ToString() + "," + product_code + "," + product_available + "," + product_sale_on + "," + product_sale.ToString() + "\n";
            countProduct++;
            StreamWriter productfile = new StreamWriter(path);
            productfile.WriteLine(product_record);
            productfile.Flush();
            productfile.Close();
        }
        static void searchProduct()
        {
            // Code to Search Product
            int TOTAL_PRODUCT = 50;
            int countProduct = 30;
            Console.Write("Enter the product code: ");
            string product_code = Console.ReadLine();
            int index = 0;
            string productRecord;
            string[] product_name_array = new string[TOTAL_PRODUCT];
            int[] product_price_array = new int[TOTAL_PRODUCT];
            string[] product_code_array = new string[TOTAL_PRODUCT];
            string[] product_available_array = new string[TOTAL_PRODUCT];
            string[] product_sale_on_array = new string[TOTAL_PRODUCT];
            float[] product_sale_array = new float[TOTAL_PRODUCT];
            string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\ProductRecord.txt";
            StreamReader productfile = new StreamReader(path);
            while ((productRecord = productfile.ReadLine()) != null)
            {
                product_name_array[index] = getField(productRecord, 1);
                string product_price = getField(productRecord, 2);
                product_price_array[index] = int.Parse(product_price);
                product_code_array[index] = getField(productRecord, 3);
                product_available_array[index] = getField(productRecord, 4);
                product_sale_on_array[index] = getField(productRecord, 5);
                string product_sale = getField(productRecord, 6);
                product_sale_array[index] = float.Parse(product_sale);
                index++;
            }
            bool is_found = false;
            int found_index = 0;
            for (int i = 0; i < countProduct; i++)
            {
                if (product_code_array[i] == product_code)
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
                Console.WriteLine(product_name_array[found_index]+"\t"+ product_price_array[found_index] + "\t"
                     + product_code_array[found_index] + "\t" + product_available_array[found_index] + "\t\t"
                     + product_sale_on_array[found_index] + "\t" + product_sale_array[found_index]);
            }
            clearScreen();
            productfile.Close();
        }
        static void UpdateProduct()
        {
            // Code to Update Product
            int TOTAL_PRODUCT = 50;
            int countProduct = 30;
            Console.Write("Enter the product code: ");
            string product_code = Console.ReadLine();
            int index = 0;
            string productRecord;
            string[] product_name_array = new string[TOTAL_PRODUCT];
            int[] product_price_array = new int[TOTAL_PRODUCT];
            string[] product_code_array = new string[TOTAL_PRODUCT];
            string[] product_available_array = new string[TOTAL_PRODUCT];
            string[] product_sale_on_array = new string[TOTAL_PRODUCT];
            float[] product_sale_array = new float[TOTAL_PRODUCT];
            string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\ProductRecord.txt";
            StreamReader productfile = new StreamReader(path);
            while ((productRecord = productfile.ReadLine()) != null)
            {
                product_name_array[index] = getField(productRecord, 1);
                string product_price = getField(productRecord, 2);
                product_price_array[index] = int.Parse(product_price);
                product_code_array[index] = getField(productRecord, 3);
                product_available_array[index] = getField(productRecord, 4);
                product_sale_on_array[index] = getField(productRecord, 5);
                string product_sale = getField(productRecord, 6);
                product_sale_array[index] = float.Parse(product_sale);
                index++;
            }
            bool is_found = false;
            int found_index = 0;
            for (int i = 0; i < countProduct; i++)
            {
                if (product_code_array[i] == product_code)
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
                string product_name = Console.ReadLine();
                Console.Write("Enter product price: ");
                int product_price = int.Parse(Console.ReadLine());
                Console.Write("Enter product code: ");
                string product_code_update = Console.ReadLine();
                Console.Write("Enter availability of the product: ");
                string product_available = Console.ReadLine();
                Console.Write("Enter whether product is on sale(Yes/No): ");
                string product_sale_on = Console.ReadLine();
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
                product_sale = product_price - product_discount;
                ProductToFile(found_index, product_name, product_price, product_code_update, product_available, product_sale_on, product_sale);
            }
            clearScreen();
        }
        static void ProductToFile(int found_index, string product_name, int product_price, string product_code_update, string product_available, string product_sale_on, float product_sale)
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
            product_name_array[index] = product_name;
            product_price_array[index] = product_price.ToString();
            product_code_array[index] = product_code_update;
            product_available_array[index] = product_available;
            product_sale_on_array[index] = product_sale_on;
            product_sale_array[index] = product_sale.ToString();
            string[] product_record = new string[TOTAL_PRODUCT];        
            for (int i = 0; i < countProduct; i++)
            {
                product_record[i] = product_name_array[i] + "," + product_price_array[i] + "," + product_code_array[i] + "," + product_available_array[i] + "," + product_sale_on_array[i] + "," + product_sale_array[i] + "\n";
                productfile.WriteLine(product_record[i]);
            }
            productfile.Flush();
            productfile.Close();
        }
        static void deleteProduct()
        {
            // Code to Delete Product
            int TOTAL_PRODUCT = 100;
            int countProduct = 30;
            Console.Write("Enter the product code: ");
            string product_code = Console.ReadLine();
            int index = 0;
            string productRecord;
            string[] product_name_array = new string[TOTAL_PRODUCT];
            int[] product_price_array = new int[TOTAL_PRODUCT];
            string[] product_code_array = new string[TOTAL_PRODUCT];
            string[] product_available_array = new string[TOTAL_PRODUCT];
            string[] product_sale_on_array = new string[TOTAL_PRODUCT];
            float[] product_sale_array = new float[TOTAL_PRODUCT];
            string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\ProductRecord.txt";
            StreamReader productfile = new StreamReader(path);
            while ((productRecord = productfile.ReadLine()) != null)
            {
                product_name_array[index] = getField(productRecord, 1);
                string product_price = getField(productRecord, 2);
                product_price_array[index] = int.Parse(product_price);
                product_code_array[index] = getField(productRecord, 3);
                product_available_array[index] = getField(productRecord, 4);
                product_sale_on_array[index] = getField(productRecord, 5);
                string product_sale = getField(productRecord, 6);
                product_sale_array[index] = float.Parse(product_sale);
                index++;
            }
            bool is_found = false;
            int found_index = 0;
            for (int i = 0; i < countProduct; i++)
            {
                if (product_code_array[i] == product_code)
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
                ProductToFile(found_index, product_name, product_price, product_code_delete, product_available, product_sale_on, product_sale);
            }
            clearScreen();
            productfile.Close();
        }
        static void addSaleOnProduct()
        {
            // Code to Add Product on sale
            int TOTAL_PRODUCT = 50;
            int countProduct = 30;
            Console.Write("Enter the product code: ");
            string product_code = Console.ReadLine();
            int index = 0;
            string productRecord;
            string[] product_name_array = new string[TOTAL_PRODUCT];
            int[] product_price_array = new int[TOTAL_PRODUCT];
            string[] product_code_array = new string[TOTAL_PRODUCT];
            string[] product_available_array = new string[TOTAL_PRODUCT];
            string[] product_sale_on_array = new string[TOTAL_PRODUCT];
            float[] product_sale_array = new float[TOTAL_PRODUCT];
            string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\ProductRecord.txt";
            StreamReader productfile = new StreamReader(path);
            while ((productRecord = productfile.ReadLine()) != null)
            {
                product_name_array[index] = getField(productRecord, 1);
                string product_price = getField(productRecord, 2);
                product_price_array[index] = int.Parse(product_price);
                product_code_array[index] = getField(productRecord, 3);
                product_available_array[index] = getField(productRecord, 4);
                product_sale_on_array[index] = getField(productRecord, 5);
                string product_sale = getField(productRecord, 6);
                product_sale_array[index] = float.Parse(product_sale);
                index++;
            }
            bool is_found = false;
            int found_index = 0;
            for (int i = 0; i < countProduct; i++)
            {
                if (product_code_array[i] == product_code)
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
                if (product_sale_on_array[found_index] == "No")
                {
                    string product_name = product_name_array[found_index];
                    int product_price = product_price_array[found_index];
                    string product_code_update = product_code_array[found_index];
                    string product_available = product_available_array[found_index];
                    Console.Write("Enter the amount of discount: ");
                    float discount = float.Parse(Console.ReadLine());
                    string product_sale_on = "Yes";
                    float product_sale = product_price_array[found_index] - (product_price_array[found_index] * (discount / 100));
                    ProductToFile(found_index, product_name, product_price, product_code_update, product_available, product_sale_on, product_sale);
                    Console.WriteLine("Name\t\tPrice\tCode\tAvalaibility\tOn Sale\tDiscounted price");
                    Console.WriteLine(product_name_array[found_index] + "\t" + product_price_array[found_index] + "\t"
                         + product_code_array[found_index] + "\t" + product_available_array[found_index] + "\t\t"
                         + product_sale_on + "\t" + product_sale);
                }
                else
                {
                    Console.WriteLine("Discount is already applied to the product.");
                }
            }
            clearScreen();
            productfile.Close();
        }
        static void viewProductMenu()
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
        }
        static void viewProduct()
        {
            int TOTAL_PRODUCT = 50;
            int countProduct = 30;
            while (true)
            {
                viewProductMenu();
                Console.Write("Enter your choice: ");
                int view_product_choice = int.Parse(Console.ReadLine());
                int index = 0;
                string productRecord;
                string[] product_name_array = new string[TOTAL_PRODUCT];
                int[] product_price_array = new int[TOTAL_PRODUCT];
                string[] product_code_array = new string[TOTAL_PRODUCT];
                string[] product_available_array = new string[TOTAL_PRODUCT];
                string[] product_sale_on_array = new string[TOTAL_PRODUCT];
                float[] product_sale_array = new float[TOTAL_PRODUCT];
                string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\ProductRecord.txt";
                StreamReader productfile = new StreamReader(path);
                while((productRecord = productfile.ReadLine()) != null)
                {
                    product_name_array[index] = getField(productRecord, 1);
                    string product_price = getField(productRecord, 2);
                    product_price_array[index] = int.Parse(product_price);
                    product_code_array[index] = getField(productRecord, 3);
                    product_available_array[index] = getField(productRecord, 4);
                    product_sale_on_array[index] = getField(productRecord, 5);
                    string product_sale = getField(productRecord, 6);
                    product_sale_array[index] = float.Parse(product_sale);
                    index++;
                }
                if (view_product_choice == 1)
                {
                    for (int view_index = 0; view_index < countProduct; view_index++)
                    {
                        Console.WriteLine("Name\t\tPrice\tCode\tAvalaibility\tOn Sale\tDiscounted Price");
                        Console.WriteLine(product_name_array[view_index] + "\t" + product_price_array[view_index] + "\t"
                             + product_code_array[view_index] + "\t" + product_available_array[view_index] + "\t\t"
                             + product_sale_on_array[view_index] + "\t" + product_sale_array[view_index]);
                    }
                    clearScreen();
                }
                else if (view_product_choice == 2)
                {
                    // Code for view categorized product
                    Console.Write("Enter the Category of the product: ");
                    string category = Console.ReadLine();
                    for (int product_no = 0; product_no < countProduct; product_no++)
                    {
                        if (category == "Clothes")
                        {
                            if (product_code_array[product_no][0] == 'C')
                            {
                                Console.WriteLine("Product Name\tProduct ID\tProduct Price\tProduct In Stock");
                                Console.WriteLine(product_name_array[product_no] + "\t" + product_code_array[product_no] + "\t"
                                     + product_price_array[product_no] + "\t" + product_available_array[product_no]);
                            }
                        }
                        else if (category == "Shoes")
                        {
                            if (product_code_array[product_no][0] == 'S')
                            {
                                Console.WriteLine("Product Name\tProduct ID\tProduct Price\tProduct In Stock");
                                Console.WriteLine(product_name_array[product_no] + "\t" + product_code_array[product_no] + "\t"
                                     + product_price_array[product_no] + "\t" + product_available_array[product_no]);
                            }
                        }
                        else if (category == "Jewellery")
                        {
                            if (product_code_array[product_no][0] == 'J')
                            {
                                Console.WriteLine("Product Name\tProduct ID\tProduct Price\tProduct In Stock");
                                Console.WriteLine(product_name_array[product_no] + "\t" + product_code_array[product_no] + "\t"
                                     + product_price_array[product_no] + "\t" + product_available_array[product_no]);
                            }
                        }
                        else
                        {
                            Console.WriteLine("Invalid Category");
                        }
                    }
                    clearScreen();
                }
                else if (view_product_choice == 3)
                {
                    // Code for view products from highest to lowest price
                    for (int bubblesort1 = 0; bubblesort1 < countProduct - 1; bubblesort1++)
                    {
                        for (int bubblesort2 = 0; bubblesort2 < countProduct - bubblesort1 - 1; bubblesort2++)
                        {
                            if (product_price_array[bubblesort2] < product_price_array[bubblesort2 + 1])
                            {
                                string swap_name = product_name_array[bubblesort2];
                                product_name_array[bubblesort2] = product_name_array[bubblesort2 + 1];
                                product_name_array[bubblesort2 + 1] = swap_name;
                                string swap_code = product_code_array[bubblesort2];
                                product_code_array[bubblesort2] = product_code_array[bubblesort2 + 1];
                                product_code_array[bubblesort2 + 1] = swap_code;
                                int swap_price = product_price_array[bubblesort2];
                                product_price_array[bubblesort2] = product_price_array[bubblesort2 + 1];
                                product_price_array[bubblesort2 + 1] = swap_price;
                                string swap_available = product_available_array[bubblesort2];
                                product_available_array[bubblesort2] = product_available_array[bubblesort2 + 1];
                                product_available_array[bubblesort2 + 1] = swap_available;
                            }
                        }
                    }
                    for (int sort = 0; sort < countProduct; sort++)
                    {
                        Console.WriteLine("Product Name\tProduct ID\tProduct Price\tProduct In Stock");
                        Console.WriteLine(product_name_array[sort] + "\t" + product_code_array[sort] + "\t"
                             + product_price_array[sort] + "\t" + product_available_array[sort]);
                    }
                    clearScreen();
                }
                else if (view_product_choice == 4)
                {
                    // Code for view product from lowest to highest price
                    for (int bubblesort1 = 0; bubblesort1 < countProduct; bubblesort1++)
                    {
                        for (int bubblesort2 = 0; bubblesort2 < countProduct - bubblesort1 - 1; bubblesort2++)
                        {
                            if (product_price_array[bubblesort2] > product_price_array[bubblesort2 + 1])
                            {
                                string swap_name = product_name_array[bubblesort2];
                                product_name_array[bubblesort2] = product_name_array[bubblesort1];
                                product_name_array[bubblesort1] = swap_name;
                                string swap_code = product_code_array[bubblesort2];
                                product_code_array[bubblesort2] = product_code_array[bubblesort1];
                                product_code_array[bubblesort1] = swap_code;
                                int swap_price = product_price_array[bubblesort2];
                                product_price_array[bubblesort2] = product_price_array[bubblesort1];
                                product_price_array[bubblesort1] = swap_price;
                                string swap_available = product_available_array[bubblesort2];
                                product_available_array[bubblesort2] = product_available_array[bubblesort1];
                                product_available_array[bubblesort1] = swap_available;
                            }
                        }
                    }
                    for (int sort = 0; sort < countProduct; sort++)
                    {
                        Console.WriteLine("Product Name\tProduct ID\tProduct Price\tProduct In Stock");
                        Console.WriteLine(product_name_array[sort] + "\t" + product_code_array[sort] + "\t"
                             + product_price_array[sort] + "\t" + product_available_array[sort]);
                    }
                    clearScreen();
                }
                else if (view_product_choice == 5)
                {
                    // Code to View Products on Sale
                    for (int view_index = 0; view_index < countProduct; view_index++)
                    {
                        if (product_sale_on_array[view_index] == "Yes")
                        {
                            Console.WriteLine("Name\t\tPrice\tCode\tAvalaibility\tOn Sale\tDiscounted Price");
                            Console.WriteLine(product_name_array[view_index] + "\t" + product_price_array[view_index] + "\t"
                                 + product_code_array[view_index] + "\t" + product_available_array[view_index] + "\t\t"
                                 + product_sale_on_array[view_index] + "\t" + product_sale_array[view_index]);
                        }
                    }
                    clearScreen();
                }
                else if (view_product_choice == 6)
                {
                    exitMenu();
                    break;
                }
                else
                {
                    Console.WriteLine("Invalid Choice");
                    clearScreen();
                }
                productfile.Close();
            }
        }
        static void buyProduct()
        {
            // Code for Bying
            int TOTAL_PRODUCT = 50;
            int countProduct = 30;
            int customerCount = 1;
            Console.Write("Enter the product code: ");
            string product_code = Console.ReadLine();
            int index = 0;
            string productRecord;
            string[] product_name_array = new string[TOTAL_PRODUCT];
            int[] product_price_array = new int[TOTAL_PRODUCT];
            string[] product_code_array = new string[TOTAL_PRODUCT];
            string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\ProductRecord.txt";
            StreamReader productfile = new StreamReader(path);
            while ((productRecord = productfile.ReadLine()) != null)
            {
                product_name_array[index] = getField(productRecord, 1);
                string product_price = getField(productRecord, 2);
                product_price_array[index] = int.Parse(product_price);
                product_code_array[index] = getField(productRecord, 3);
                index++;
            }
            bool is_found = false;
            int found_index = 0;
            for (int i = 0; i < countProduct; i++)
            {
                if (product_code_array[i] == product_code)
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
                Console.WriteLine("Product ID: \t" + product_code_array[found_index]);
                Console.WriteLine("Product name: \t" + product_name_array[found_index]);
                Console.WriteLine("Product price before coupon discount: \t" + product_price_array[found_index]);
                string customer_name;
                string customer_ph_no;
                string customer_postal_code;
                Console.WriteLine("Customer Credentials");
                Console.Write("Enter your Name: ");
                customer_name = Console.ReadLine();
                Console.Write("Enter your Phone No.: ");
                customer_ph_no = Console.ReadLine();
                Console.Write("Enter your postal code: ");
                customer_postal_code = Console.ReadLine();
                customerCount++;
                Console.WriteLine("Product ordered successfully");
                buyProductToFile(product_code, customer_name, customer_ph_no, customer_postal_code);
            }
            productfile.Close();
            clearScreen();
        }
        static void buyProductToFile(string product_code, string customer_name, string customer_ph_no, string customer_postal_code)
        {
            string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\CustomerRecord.txt";
            StreamWriter customerfile = new StreamWriter(path);
            string customerRecord;
            customerRecord = product_code + "," + customer_name + "," + customer_ph_no + "," + customer_postal_code + "\n";
            customerfile.WriteLine(customerRecord);
            customerfile.Close();
        }
        static void cancelOrder()
        {
            // Code for Track Order
            int customerCount = 1;
            int productCount = 30;
            int TOTAL_CUSTOMERS = 100;
            Console.WriteLine("Enter Customer Name: ");
            string customer_name = Console.ReadLine();
            int index = 0;
            string[] product_code_array = new string[customerCount];
            string[] customer_name_array = new string[customerCount];
            string[] customer_ph_no_array = new string[customerCount];
            string[] customer_postal_code_array = new string[customerCount];
            string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\CustomerRecord.txt";
            StreamReader customerfile = new StreamReader(path);
            string customerRecord;
            while ((customerRecord = customerfile.ReadLine())!=null)
            {
                product_code_array[index] = getField(customerRecord, 1);
                customer_name_array[index] = getField(customerRecord, 2);
                customer_ph_no_array[index] = getField(customerRecord, 2);
                customer_postal_code_array[index] = getField(customerRecord, 4);
                index++;
            }
            bool is_found = false;
            int found_index = 0;
            for (int i = 0; i < productCount; i++)
            {
                if (customer_name_array[i] == customer_name)
                {
                    is_found = true;
                    found_index = i;
                }
            }
            if (is_found == false)
            {
                Console.WriteLine("Invalid credentials");
                Console.WriteLine("Try again");
            }
            else
            {
                StreamWriter customerfile1 = new StreamWriter(path);
                string customerRecord1;
                product_code_array[found_index] = " ";
                customer_name_array[found_index] = " ";
                customer_ph_no_array[found_index] = " ";
                customer_postal_code_array[found_index] = " ";
                for (int i = 0; i < TOTAL_CUSTOMERS; i++)
                {
                    customerRecord1 = product_code_array[i] + "," + customer_name_array[i] + "," + customer_ph_no_array[i] + "," + customer_postal_code_array[i] + "\n";
                    customerfile1.WriteLine(customerRecord1);
                }
                customerfile.Close();
            }
            clearScreen();
        }
        static void sendFeedback()
        {
            // Code for Send Feedback
            int TOTAL_PRODUCT = 50;
            int countProduct = 30;
            Console.Write("Enter the product code: ");
            string product_code = Console.ReadLine();
            int index = 0;
            string productRecord;
            string[] product_code_array = new string[TOTAL_PRODUCT];
            string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\ProductRecord.txt";
            StreamReader productfile = new StreamReader(path);
            while ((productRecord = productfile.ReadLine()) != null)
            {
                product_code_array[index] = getField(productRecord, 3);
                index++;
            }
            bool is_found = false;
            int found_index = 0;
            for (int i = 0; i < countProduct; i++)
            {
                if (product_code_array[i] == product_code)
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
                Console.Write("Enter feedback: ");
                string product_feedback = Console.ReadLine();
                Console.Write("Enter rating: ");
                string product_rating = Console.ReadLine();
                FeedbackToFile(product_code, product_feedback, product_rating);
            }
            clearScreen();
            productfile.Close();
        }
        static void FeedbackToFile(string product_code, string product_feedback, string product_rating)
        {
            string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\FeedbackRecord.txt";
            StreamWriter feedbackfile = new StreamWriter(path);
            string feedback_record;
            feedback_record = product_code + "," + product_feedback + "," + product_rating + "\n";
            feedbackfile.WriteLine(feedback_record);
            feedbackfile.Close();
        }
        static void viewFeedback()
        {
            // Code for View Rating and feedback
            int customer_count = 5;
            Console.Write("Enter the Product ID: ");
            string product_code = Console.ReadLine();
            string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\FeedbackRecord.txt";
            string[] product_code_array = new string[customer_count];
            string[] product_feedback_array = new string[customer_count];
            string[] product_rating_array = new string[customer_count];
            int index = 0;
            string feedbackRecord;
            StreamReader feedbackfile = new StreamReader(path);
            while ((feedbackRecord = feedbackfile.ReadLine())!=null)
            {
                product_code_array[index] = getField(feedbackRecord, 1);
                product_feedback_array[index] = getField(feedbackRecord, 2);
                product_rating_array[index] = getField(feedbackRecord, 3);
                index++;
            }
            bool is_found = false;
            int found_index = 0;
            for (int i = 0; i < 5; i++)
            {
                if (product_code_array[i] == product_code)
                {
                    is_found = true;
                    found_index = i;
                }
            }
            if (is_found == false)
            {
                Console.WriteLine("Invalid credentials");
                Console.WriteLine("Try again");
            }
            else
            {
                Console.WriteLine("Product ID\tProduct Price\tProduct Rating\tProduct Feedback");
                Console.WriteLine(product_code_array[found_index] + "\t" + product_rating_array[found_index]
                     + "\t" + product_feedback_array[found_index]);
            }
            clearScreen();
            feedbackfile.Close();
        }
        static void clearScreen()
        {
            Console.WriteLine("Press any key to continue...");
            
        }
        static void exitMenu()
        {
            // Code to exit
            Console.WriteLine("Exiting the program...");
            
        } // ------------------------------- Function Implimentation End
    }
}
