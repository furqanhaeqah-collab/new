using Buissness_Application.Model;
using Buissness_Application.Service;
using Buissness_Application.UI;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Buissness_Application
{
    public class Program
    {
        private static readonly ProductUI _ProductUI = new ProductUI();
        private static readonly CustomerUI _CustomerUI = new CustomerUI();
        private static readonly UserUI _UserUI = new UserUI();
        private static readonly FeedbackUI _FeedbackUI = new FeedbackUI();
        public static ProductModel product = new ProductModel();
        public static List<ProductModel> ProductList = new List<ProductModel>();
        public static CustomerModel customer = new CustomerModel();
        public static UserModel user = new UserModel();
        static void Main(string[] args)
        {
            while (true)
            {
                Console.Clear();
                string mainOption = _UserUI.MainMenuUI();
                if (mainOption == "1")
                {
                    Console.Clear();
                    string w = _UserUI.UserWhoUI();
                    if (w == "ADMIN" || w == "MANAGER" || w == "EMPLOYEE")
                    { 
                        // Code of Owner
                        while (true) // ----------------------------------------- Start of while loop for Admin
                        {
                            Console.Clear();
                            string ownerOption = _UserUI.OwnerMenuUI();
                            if (ownerOption == "1")
                            {
                                // Code for Add Users
                                Console.Clear();
                                _UserUI.AddUserUI(user);
                            }
                            else if (ownerOption == "2")
                            {
                                // Code for View Users
                                Console.Clear();
                                _UserUI.ViewUsersUI();
                            }
                            else if (ownerOption == "3")
                            {
                                // Code for Add Product
                                Console.Clear();
                                _ProductUI.AddProductUI(product);
                            }
                            else if (ownerOption == "4")
                            {
                                // Code for Search Product
                                Console.Clear();
                                _ProductUI.SearchProductUI(ProductList);
                            }
                            else if (ownerOption == "5")
                            {
                                // Code for Update Product
                                Console.Clear();
                                _ProductUI.UpdateProductUI(product);
                            }
                            else if (ownerOption == "6")
                            {
                                // Code for View Product
                                while (true)
                                {
                                    Console.Clear();
                                    int option = _ProductUI.ViewProductMenuUI();
                                    if (option == 1)
                                    {
                                        Console.Clear();
                                        _ProductUI.ViewAllProductUI(ProductList);
                                    }
                                    else if (option == 2)
                                    {
                                        Console.Clear();
                                        _ProductUI.ViewCategorizedProductUI(ProductList);
                                    }
                                    else if (option == 3)
                                    {
                                        Console.Clear();
                                        _ProductUI.ViewSortedDescProductsUI(ProductList);
                                    }
                                    else if (option == 4)
                                    {
                                        Console.Clear();
                                        _ProductUI.ViewSortedAscProductUI(ProductList);
                                    }
                                    else if (option == 5)
                                    {
                                        Console.Clear();
                                        _ProductUI.ViewSaleProductUI(ProductList);
                                    }
                                    else if (option == 6)
                                    {
                                        Console.Clear();
                                        _ProductUI.ExitProgram();
                                        break;
                                    }
                                    else
                                    {
                                        Console.Clear();
                                        _ProductUI.InvalidOption();
                                    }
                                }
                            }
                            else if (ownerOption == "7")
                            {
                                // Code for Delete Product
                                Console.Clear();
                                _ProductUI.DeleteProductUI();
                            }
                            else if (ownerOption == "8")
                            {
                                // Code for Add Sale on Product
                                Console.Clear();
                                _ProductUI.AddSaleOnProductUI();
                            }
                            else if (ownerOption == "9")
                            {
                                // Code for Remove Sale on Product
                                Console.Clear();
                                _ProductUI.RemoveSaleOnProductUI();
                            }
                            else if (ownerOption == "10")
                            {
                                // Code for View Feedback
                                Console.Clear();
                                _FeedbackUI.ViewFeedback();
                            }
                            else if (ownerOption == "11")
                            {
                                // Code for Exit Admin Menu
                                Console.Clear();
                                _ProductUI.ExitProgram();
                                break;
                            }
                            else
                            {
                                // Code for invalid Option
                                _ProductUI.InvalidOption();
                            }
                        } // ----------------------------------------- End of while loop for Manager
                    }
                    else
                    {
                        Console.Clear();
                        _ProductUI.InvalidOption();
                    }
                }
                else if (mainOption == "2")
                { // Code for Customer
                    string customerOption = " ";
                    while (true) // ------------------------------ Start of While loop for Customer
                    {
                        customerOption = _CustomerUI.CustomerMenuUI();
                        if (customerOption == "1")
                        {
                            // Code for View Products
                            while (true)
                            {
                                int option = _ProductUI.ViewProductMenuUI();
                                if (option == 1)
                                {
                                    Console.Clear();
                                    _ProductUI.ViewAllProductUI(ProductList);
                                }
                                else if (option == 2)
                                {
                                    Console.Clear();
                                    _ProductUI.ViewCategorizedProductUI(ProductList);
                                }
                                else if (option == 3)
                                {
                                    Console.Clear();
                                    _ProductUI.ViewSortedDescProductsUI(ProductList);
                                }
                                else if (option == 4)
                                {
                                    Console.Clear();
                                    _ProductUI.ViewSortedAscProductUI(ProductList);
                                }
                                else if (option == 5)
                                {
                                    Console.Clear();
                                    _ProductUI.ViewSaleProductUI(ProductList);
                                }
                                else if (option == 6)
                                {
                                    Console.Clear();
                                    _ProductUI.ExitProgram();
                                    break;
                                }
                                else
                                {
                                    Console.Clear();
                                    _ProductUI.InvalidOption();
                                }
                            }
                        }
                        else if (customerOption == "2")
                        {
                            // Code for Search Products
                            Console.Clear();
                            _ProductUI.SearchProductUI(ProductList);
                        }
                        else if (customerOption == "3")
                        {
                            // Code for View In Stock Product
                            Console.Clear();
                            _ProductUI.InStockProduct(ProductList);
                        }
                        else if (customerOption == "4")
                        {
                            // Code for Buy a Product
                            Console.Clear();
                            _CustomerUI.BuyProductUI(customer, ProductList);
                        }
                        else if (customerOption == "5")
                        {
                            // Code for Cancel Order
                            Console.Clear();
                            _CustomerUI.CancelOrderUI();
                        }
                        else if (customerOption == "6")
                        {
                            // Code for Send Feedback
                            Console.Clear();
                            _FeedbackUI.SendFeedbackUI();
                        }
                        else if (customerOption == "7")
                        {
                            // Code for View Feedback
                            Console.Clear();
                            _FeedbackUI.ViewFeedback();
                        }
                        else if (customerOption == "8")
                        {
                            // Code for View Feedback
                            Console.Clear();
                            _FeedbackUI.SearchFeedback();
                        }
                        else if (customerOption == "9")
                        {
                            // Code for View Feedback
                            Console.Clear();
                            _FeedbackUI.DeleteFeedback();
                        }
                        else if (customerOption == "10")
                        {
                            // Code for Exit Customer Menu
                            Console.Clear();
                            _ProductUI.ExitProgram();
                            break;
                        }
                        else
                        {
                            // Code for Invalid Option
                            Console.Clear();
                            _ProductUI.InvalidOption();
                        }
                    } // ------------------------------------------ End of While loop for Customer
                }
                else if (mainOption == "3")
                {
                    // Code for exit menu here
                    Console.Clear();
                    _ProductUI.ExitProgram();
                    break;
                }
                else
                {
                    // Code for Invalid Choice
                    Console.Clear();
                    _ProductUI.InvalidOption();
                }
            }
            //  Code for view Product
            Console.Read();
        }
    }
}
