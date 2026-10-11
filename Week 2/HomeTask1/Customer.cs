using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HomeTask1
{
    public class Customer
    {
        public string name;
        public string ph_no;
        public string postal_code;
        public string product_code;
        public string feedback;
        public string rating;
        public Customer( ) { }
        public Customer(string name, string ph_no, string postal_code,string product_code)
        {
            this.name = name;
            this.ph_no = ph_no;
            this.postal_code = postal_code;
            this.product_code = product_code;
        }
        public void mainHeader()
        {
            Console.WriteLine("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
            Console.WriteLine("Welcome to M & S Brand Management System ");
            Console.WriteLine("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        }
        public string customerMenu()
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
        public void buyProduct(Product product, List<Product> productlist, Customer customer, List<Customer>customerlist)
        {
            // Code for Bying
            int customerCount = 1;
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
                product.product_price = int.Parse(product_price);
                product.product_code = getField(productRecord, 3);
                productlist[index].product_name = product.product_name;
                productlist[index].product_price = product.product_price;
                productlist[index].product_code = product.product_code;
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
                Console.WriteLine("Product ID: \t" + productlist[found_index].product_code);
                Console.WriteLine("Product name: \t" + productlist[found_index].product_name);
                Console.WriteLine("Product price before coupon discount: \t" + productlist[found_index].product_price);
                customer.product_code = productlist[found_index].product_code;
                Console.WriteLine("Customer Credentials");
                Console.Write("Enter your Name: ");
                customer.name = Console.ReadLine();
                Console.Write("Enter your Phone No.: ");
                customer.ph_no = Console.ReadLine();
                Console.Write("Enter your postal code: ");
                customer.postal_code = Console.ReadLine();
                customerlist.Add(new Customer(customer.product_code, customer.name, customer.ph_no,customer.postal_code));
                Console.WriteLine("Product ordered successfully");
                buyProductToFile(customer,product);
            }
            productfile.Close();
        }
        public void buyProductToFile(Customer customer, Product product)
        {
            string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\CustomerRecord.txt";
            StreamWriter customerfile = new StreamWriter(path,true);
            string customerRecord;
            customerRecord = product.product_code + "," + customer.name + "," + customer.ph_no + "," + customer.postal_code + "\n";
            customerfile.WriteLine(customerRecord);
            customerfile.Close();
        }
        public void cancelOrder(Product product, List<Product> productlist, Customer customer, List<Customer> customerlist)
        {
            // Code for Track Order
            Console.WriteLine("Enter Customer Name: ");
            string customer_name = Console.ReadLine();
            int index = 0;
            string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\CustomerRecord.txt";
            StreamReader customerfile = new StreamReader(path);
            string customerRecord;
            while ((customerRecord = customerfile.ReadLine()) != null)
            {
                customer.product_code = getField(customerRecord, 1);
                customer.name = getField(customerRecord, 2);
                customer.ph_no = getField(customerRecord, 3);
                customer.postal_code = getField(customerRecord, 4);
                customerlist[index].product_code = customer.product_code;
                customerlist[index].name = customer.name;
                customerlist[index].ph_no = customer.ph_no;
                customerlist[index].postal_code = customer.postal_code;
                index++;
            }
            bool is_found = false;
            int found_index = 0;
            for (int i = 0; i < customerlist.Count; i++)
            {
                if (customerlist[i].name == customer_name)
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
                StreamWriter customerfile1 = new StreamWriter(path,true);
                string customerRecord1;
                customerlist[found_index].product_code = "";
                customerlist[found_index].name = "";
                customerlist[found_index].ph_no = "";
                customerlist[found_index].postal_code = "";
                for (int i = 0; i < customerlist.Count; i++)
                {
                    customerRecord1 = customerlist[i].product_code + "," + customerlist[i].name + "," + customerlist[i].ph_no + "," + customerlist[i].postal_code + "\n";
                    customerfile1.WriteLine(customerRecord1);
                }
                customerfile.Close();
            }
        }
        public void sendFeedback(Product product, List<Customer>customerlist, List<Customer>feedbacklist)
        {
            // Code for Send Feedback
            Console.Write("Enter the product code: ");
            string product_code = Console.ReadLine();
            int index = 0;
            string productRecord;
            string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\ProductRecord.txt";
            StreamReader productfile = new StreamReader(path);
            while ((productRecord = productfile.ReadLine()) != null)
            {
                product.product_code = getField(productRecord, 3);
                customerlist.Add(new Customer { product_code = product.product_code });
                index++;
            }
            bool is_found = false;
            int found_index = 0;
            for (int i = 0; i < customerlist.Count; i++)
            {
                if (customerlist[i].product_code == product_code)
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
                string code = customerlist[found_index].product_code;
                Console.Write("Enter feedback: ");
                string product_feedback = Console.ReadLine();
                Console.Write("Enter rating: ");
                string product_rating = Console.ReadLine();
                feedbacklist.Add(new Customer {product_code = code, feedback = product_feedback, rating = product_rating });
                FeedbackToFile(product_code, product_feedback, product_rating);
            }
            productfile.Close();
        }
        public void FeedbackToFile(string product_code, string product_feedback, string product_rating)
        {
            string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\FeedbackRecord.txt";
            StreamWriter feedbackfile = new StreamWriter(path);
            string feedback_record;
            feedback_record = product_code + "," + product_feedback + "," + product_rating + "\n";
            feedbackfile.WriteLine(feedback_record);
            feedbackfile.Close();
        }
        public void viewFeedback(Customer feedback, List<Customer> feedbacklist)
        {
            // Code for View Rating and feedback
            int customer_count = 5;
            Console.Write("Enter the Product ID: ");
            string product_code = Console.ReadLine();
            string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\FeedbackRecord.txt";
            int index = 0;
            string feedbackRecord;
            StreamReader feedbackfile = new StreamReader(path);
            while ((feedbackRecord = feedbackfile.ReadLine()) != null)
            {
                feedback.product_code = getField(feedbackRecord, 1);
                feedback.feedback = getField(feedbackRecord, 2);
                feedback.rating = getField(feedbackRecord, 3);
                feedbacklist.Add(new Customer { product_code = feedback.product_code, feedback = feedback.feedback, rating = feedback.rating });
            }
            bool is_found = false;
            int found_index = 0;
            for (int i = 0; i < 5; i++)
            {
                if (feedbacklist[i].product_code == product_code)
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
                Console.WriteLine(feedbacklist[found_index].product_code + "\t" + feedbacklist[found_index].rating
                     + "\t" + feedbacklist[found_index].feedback);
            }
            feedbackfile.Close();
        }
    }
}
