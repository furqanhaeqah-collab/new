using Microsoft.SqlServer.Server;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.IO;
using System.Linq;
using System.Runtime.Remoting.Services;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace Week_1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //------Week 01 Previous Task Revision-----------

            //------Input/Output & Variable Declaration------

            //-------------------Task 01---------------------
            Console.WriteLine("Hello World");
            //-----------------------------------------------

            //-------------------Task 02---------------------
            Console.Write("Enter your name: ");
            string name = Console.ReadLine();
            Console.WriteLine("Welcome" + name);
            //-----------------------------------------------

            //-------------------Task 03---------------------
            int n1 = 5;
            int n2 = 10;
            int sum = n1 + n2;
            Console.WriteLine("Output:" + sum);
            //-----------------------------------------------

            //-------------------Task 04----------------------
            Console.WriteLine("I am a student");
            //------------------------------------------------

            //--------------If-else Statement-----------------

            //-------------------Task 01----------------------
            Console.Write("Enter a number: ");
            int num = int.Parse(Console.ReadLine());
            if (num % 2 == 0)
            {
                Console.WriteLine("It is an even number");
            }
            else
            {
                Console.WriteLine("It is an odd number");
            }
            //------------------------------------------------

            //-------------------Task 02----------------------
            int num1;
            Console.Write("Enter a number: ");
            num1 = int.Parse(Console.ReadLine());
            int num2;
            Console.Write("Enter a number: ");
            num2 = int.Parse(Console.ReadLine());
            int num3;
            Console.Write("Enter a number: ");
            num3 = int.Parse(Console.ReadLine());
            if (num1 > num2 && num1 > num3)
            {
                Console.WriteLine("Largest: " + num1);
            }
            else if (num2 > num1 && num2 > num3)
            {
                Console.WriteLine("Largest: " + num2);
            }
            else if (num3 > num1 && num3 > num2)
            {
                Console.WriteLine("Largest: " + num3);
            }
            //------------------------------------------------

            //-------------------Task 03----------------------
            string word1;
            Console.Write("Enter 1st Word: ");
            word1 = Console.ReadLine();
            string word2;
            Console.Write("Enter 2nd Word: ");
            word2 = Console.ReadLine();
            if (word1 == word2)
            {
                Console.WriteLine("Yes");
            }
            else
            {
                Console.WriteLine("No");
            }
            //------------------------------------------------

            //-------------------Task 04----------------------
            string password;
            Console.Write("Enter 1st Word: ");
            password = Console.ReadLine();
            string check = "login12345";
            if (password == check)
            {
                Console.WriteLine("Correct Password");
            }
            else
            {
                Console.WriteLine("Incorrect Password");
            }
            //------------------------------------------------

            //----------------------Loops---------------------

            //--------------------Task 01---------------------
            for (int z = 0; z <= 5; z++)
            {
                Console.WriteLine("Welcome to OOP Class -- written by for loop");
            }
            //------------------------------------------------

            //--------------------Task 02---------------------
            int xy = 5;
            while (xy > 0)
            {
                Console.WriteLine("Welcome to OOP Class -- written by while loop");
                xy--;
            }
            //------------------------------------------------

            //--------------------Task 03---------------------
            int input = 0;
            int sum1 = 0;
            while (input != -1)
            {
                Console.Write("Enter number: ");
                input = int.Parse(Console.ReadLine());
                sum1 = sum1 + input;
            }
            Console.WriteLine("Sum: " + sum1);
            //------------------------------------------------

            //--------------------Task 04---------------------
            string a;
            Console.Write("Enter a string: ");
            a = Console.ReadLine();
            for (int b = 0; b <= 5; b++)
            {
                Console.WriteLine("Welcome " + a);
            }
            //--------------------------------------------------

            //------------------New Lab Tasks-------------------

            //------------Week 1 Lab Task File 02---------------

            //------------------Lab Task 1----------------------
            Console.WriteLine("Hello World");
            //--------------------------------------------------


            //------------------Lab Task 2----------------------
            Console.WriteLine("Hello World!");
            Console.WriteLine("Hello World!");
            //--------------------------------------------------

            //------------------Lab Task 3----------------------
            int variable1 = 9;
            Console.WriteLine("Value: " + variable1);
            //--------------------------------------------------

            //------------------Lab Task 4----------------------
            string variable2 = "Hello Haeqah!";
            Console.WriteLine("Value: " + variable2);
            //--------------------------------------------------

            //------------------Lab Task 5----------------------
            char variable3 = 'c';
            Console.WriteLine("Value: " + variable3);
            //--------------------------------------------------

            //------------------Lab Task 6----------------------
            float variable4 = 3.5F;
            Console.WriteLine("Value: " + variable4);
            //--------------------------------------------------

            //------------------Lab Task 7----------------------
            Console.Write("Enter a number: ");
            int n = int.Parse(Console.ReadLine());
            Console.WriteLine("Number is: " + n);
            //--------------------------------------------------

            //------------------Lab Task 8----------------------
            Console.Write("Enter a number: ");
            float num_ = float.Parse(Console.ReadLine());
            Console.WriteLine("Number is: " + num_);
            //--------------------------------------------------

            //------------------Lab Task 9----------------------
            Console.Write("Enter the length of the square: ");
            float len = float.Parse(Console.ReadLine());
            float area = len * len;
            Console.WriteLine("The area of the square is: " + area);
            //--------------------------------------------------

            //------------Week 1 Lab Task File 03---------------

            //------------------Lab Task 10---------------------
            Console.Write("Enter your Marks: ");
            int marks = int.Parse(Console.ReadLine());
            if (marks > 50)
            {
                Console.WriteLine("You are Passed");
            }
            else
            {
                Console.WriteLine("You are Failed");
            }
            //--------------------------------------------------

            //------------------Lab Task 11---------------------
            for (int m = 0; m < 5; m++)
            {
                Console.WriteLine("Welcome Jack -- written by for loop");
            }
            //--------------------------------------------------

            //------------------Lab Task 12---------------------
            int i = 0;
            while (i <= 5)
            {
                Console.WriteLine("Welcome Jack");
                i++;
            }
            //--------------------------------------------------

            //------------------Lab Task 13---------------------
            int _num_ = 0;
            int Sum = 0;
            while (_num_ != -1)
            {
                Console.Write("Enter a number: ");
                _num_ = int.Parse(Console.ReadLine());
                Sum = Sum + _num_;
            }
            Console.WriteLine("Sum: " + Sum);
            //--------------------------------------------------

            //------------------Lab Task 14---------------------
            int number;
            int Sum1 = 0;
            do
            {
                Console.Write("Enter a number: ");
                number = int.Parse(Console.ReadLine());
                Sum1 = Sum1 + number;
            }
            while (number != -1);
            Sum1 = Sum1 + 1;
            Console.WriteLine("Sum: " + Sum1);
            //--------------------------------------------------

            //------------------Lab Task 15---------------------
            int[] array_num = new int[3];
            for (int g = 0; g < 3; g++)
            {
                Console.Write("Enter a number: ");
                array_num[i] = int.Parse(Console.ReadLine());
            }
            int largest_num = -1;
            for (int h = 0; h < 3; h++)
            {
                if (array_num[i] > largest_num)
                {
                    largest_num = array_num[i];
                }
            }
            Console.WriteLine("Largest: " + largest_num);
            //--------------------------------------------------

            //------------------Lab Task 16---------------------
            Console.Write("Enter Lily age: ");
            int lily_age = int.Parse(Console.ReadLine());
            Console.Write("Enter Price of Washing Machine: ");
            int machine_price = int.Parse(Console.ReadLine());
            Console.Write("Enter Price of each Toy: ");
            int toy_price = int.Parse(Console.ReadLine());
            int even_amount = 0;
            int even_years_money = 10;
            int odd_amount = 0;
            int x = 1;
            int count = 0;
            for (int s = 1; s <= lily_age; s++)
            {
                if (s % 2 == 0)
                {
                    even_amount = (even_amount + (even_years_money * x));
                    x++;
                    count++;
                }
                else
                {
                    odd_amount = odd_amount + toy_price;
                }
            }
            even_amount = even_amount - count;
            int total_amount = even_amount + odd_amount;
            int total_years_money = total_amount - machine_price;
            if (total_years_money >= 0)
            {
                Console.WriteLine("Yes" + total_years_money);
            }
            else
            {
                total_years_money = -1 * total_years_money;
                Console.WriteLine("No" + total_years_money);
            }
            //--------------------------------------------------

            //------------Week 1 Lab Task File 04---------------

            //------------------Lab Task 1----------------------
            Console.Write("Enter 1st Number: ");
            int number1 = int.Parse(Console.ReadLine());
            Console.Write("Enter 1st Number: ");
            int number2 = int.Parse(Console.ReadLine());
            int result = Add(number1, number2);
            Console.WriteLine("Output: " + result);
            //--------------------------------------------------

            //------------------Lab Task 2----------------------
            string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\FileHandlinglearn.txt";
            if (File.Exists(path))
            {
                StreamReader FileHandling0 = new StreamReader(path);
                string record;
                while ((record = FileHandling0.ReadLine()) != null)
                {
                    Console.WriteLine(record);
                }
                FileHandling0.Close();
            }
            else
            {
                Console.WriteLine("File Doesn't Exists");
            }
            //--------------------------------------------------

            //------------------Lab Task 3----------------------
            string path10 = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\FileHandlinglearn.txt";
            StreamWriter FileHandling = new StreamWriter(path10, true);
            FileHandling.WriteLine("Haeqah");
            FileHandling.Flush();
            FileHandling.Close();
            //--------------------------------------------------

            //------------------Lab Task 4----------------------
            string path11 = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\LoginFile.txt";
            string[] names = new string[5];
            string[] password11 = new string[5];
            int option;
            do
            {
                ReadData(path11, names, password11);
                Console.Clear();
                option = Menu();
                Console.Clear();
                if (option == 1)
                {
                    Console.WriteLine("Enter Name: ");
                    string n0 = Console.ReadLine();
                    Console.WriteLine("Enter Password: ");
                    string p = Console.ReadLine();
                    SignIn(n0, p, names, password11);
                }
                else if (option == 2)
                {
                    Console.WriteLine("Enter New Name: ");
                    string n9 = Console.ReadLine();
                    Console.WriteLine("Enter New Password: ");
                    string p = Console.ReadLine();
                    SignUp(path, n9, p);
                }
            }
            while (option < 3);
            //--------------------------------------------------

            //------------------Lab Task 5----------------------
            Console.Write("Enter the least amount of orders: ");
            int minOrders = int.Parse(Console.ReadLine());
            Console.Write("Enter the least amount of price: ");
            int  minPrice = int.Parse(Console.ReadLine());
            string FilePath = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\Customers.txt";
            string[] name1 = new string[2];
            int[] orders_data = new int[2];
            string[] price_data = new string[2];
            int totalCustomers = OrdersDetails(FilePath, name1, orders_data, price_data);
            int count1 = 0;
            for (int m = 0; m < totalCustomers; m++)
            {
                string BracketremovedPrices = price_data[m].Replace("[", "").Replace("]", "");
                string[] Prices = BracketremovedPrices.Split(',');
                for (int j = 0; j < Prices.Length; j++)
                {
                    if (int.Parse(Prices[j]) >= minPrice)
                    {
                        count1++;
                    }
                }
                if (count1 >= minOrders)
                {
                    Console.WriteLine(name[m]);
                }
            }
            //--------------------------------------------------
        }
        static string ParseDataSpace(string record1, int field1)
        {
            int space = 1;
            string item1 = "";
            for (int w = 0; w < record1.Length; w++)
            {
                if (record1[w] == ' ')
                {
                    space++;
                }
                else if (space == field1)
                {
                    item1 = item1 + record1[w];
                }
            }
            return item1;
        }
        static int OrdersDetails(string FilePath, string[] name, int[] orders_data, string[] price_data)
        {
            int index = 0;
            if (File.Exists(FilePath))
            {
                StreamReader customer_file = new StreamReader(FilePath);
                string details;
                while ((details = customer_file.ReadLine()) != null)
                {
                    name[index] = ParseDataSpace(details, 1);
                    orders_data[index] = int.Parse(ParseDataSpace(details, 2));
                    price_data[index] = ParseDataSpace(details, 3);
                    index++;
                }
                customer_file.Close();
            }
            return index;
        }
        static int Add(int number1, int number2)
        {
            return number1 + number2;
        }
        static int Menu()
        {
            Console.WriteLine("1. SignIn");
            Console.WriteLine("2. SignUp");
            Console.Write("Enter option: ");
            int option = int.Parse(Console.ReadLine());
            return option;
        }
        static string ParseDataComma(string record, int field)
        {
            int comma = 1;
            string item = "";
            for (int x = 0; x < record.Length; x++)
            {
                if (record[x] == ',')
                {
                    comma++;
                }
                else if (comma == field)
                {
                    item = item + record[x];
                }
            }
            return item;
        }
        static void ReadData(string path, string[] names, string[] password)
        {
            int x = 0;
            if (File.Exists(path))
            {
                StreamReader fileVariable = new StreamReader(path);
                string record;
                while ((record = fileVariable.ReadLine()) != null)
                {
                    names[x] = ParseDataComma(record, 1);
                    password[x] = ParseDataComma(record, 2);
                    x++;
                    if (x >= 5)
                    {
                        break;
                    }
                }
                fileVariable.Close();
            }
            else
            {
                Console.WriteLine("Not Exists");
            }
        }
        static void SignIn(string n, string p, string[] names, string[] password)
        {
            bool flag = false;
            for (int x = 0; x < 5; x++)
            {
                if (n == names[x] && p == password[x])
                {
                    Console.WriteLine("Valid User");
                    flag = true;
                }
            }
            if (flag == false)
            {
                Console.WriteLine("Invalid User");
            }
            Console.ReadKey();
        }
        static void SignUp(string path, string n, string p)
        {
            StreamWriter file = new StreamWriter(path, true);
            file.WriteLine(n + "," + p);
            file.Flush();
            file.Close();
        }
    }
}
