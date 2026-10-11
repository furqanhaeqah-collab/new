using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HomeTask1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Users user = new Users("","","");
            List<Users> userlist = new List<Users>();
            Product product = new Product("",0,"","","",0);
            List<Product> productlist = new List<Product>();
            Owner owner = new Owner();
            Customer customer = new Customer();
            List<Customer> customerlist = new List<Customer>();
            List<Customer> feedbacklist = new List<Customer>();
            Customer feedback = new Customer();
            while (true)
            {
                string mainOption = user.mainMenu();
                if (mainOption == "1")
                {
                    string w = user.who(userlist, user);
                    if (w == "ADMIN")
                    { // Code of Owner
                        string ownerOption = " ";
                        while (true) // ----------------------------------------- Start of while loop for Manager
                        {
                            ownerOption = owner.OwnerMenu();
                            if (ownerOption == "1")
                            {
                                // Code for Add Users
                                user.addUserInput(userlist);
                            }
                            else if (ownerOption == "2")
                            {
                                // Code for View Users
                                user.viewUsers(userlist, user);
                            }
                            else if (ownerOption == "3")
                            {
                                // Code for Add Product
                                product.addProduct(product, productlist);
                            }
                            else if (ownerOption == "4")
                            {
                                // Code for Search Product
                                product.searchProduct(product, productlist);
                            }
                            else if (ownerOption == "5")
                            {
                                // Code for Update Product
                                product.UpdateProduct(product, productlist);
                            }
                            else if (ownerOption == "6")
                            {
                                // Code for View Product
                                product.viewProduct(product,productlist);
                            }
                            else if (ownerOption == "7")
                            {
                                // Code for Delete Product
                                product.deleteProduct(product, productlist);
                            }
                            else if (ownerOption == "8")
                            {
                                // Code for Add Sale on Product
                                product.addSaleOnProduct(product, productlist);
                            }
                            else if (ownerOption == "9")
                            {
                                // Code for view feedback
                                customer.viewFeedback(feedback, feedbacklist);
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
                        customerOption = customer.customerMenu();
                        if (customerOption == "1")
                        {
                            // Code for View Products
                            product.viewProduct(product, productlist);
                        }
                        else if (customerOption == "2")
                        {
                            // Code for Search Products
                            product.searchProduct(product, productlist);
                        }
                        else if (customerOption == "3")
                        {
                            // Code for Buy a Product
                            customer.buyProduct(product, productlist, customer, customerlist);
                        }
                        else if (customerOption == "4")
                        {
                            // Code for Cancel Order
                            customer.cancelOrder(product, productlist, customer, customerlist);
                        }
                        else if (customerOption == "5")
                        {
                            // Code for Send Feedback
                            customer.sendFeedback(product, customerlist, feedbacklist);
                        }
                        else if (customerOption == "6")
                        {
                            // Code for View Feedback
                            customer.viewFeedback(feedback,feedbacklist);
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
        }
        static void clearScreen()
        {
            Console.WriteLine("Press any key to continue...");
            Console.ReadKey();
            Console.Clear();
        }
        static void exitMenu()
        {
            // Code to exit
            Console.WriteLine("Exiting the program...");

        }
    }
}
