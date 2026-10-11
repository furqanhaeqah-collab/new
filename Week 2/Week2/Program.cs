using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Week2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //-------Lab Tasks File 1-----------

            //-----------Task 1-----------------
            Lab1Task1 student1 = new Lab1Task1();
            student1.Name = "Haeqah";
            student1.MatricMarks = 1021;
            student1.FScMarks = 1034;
            student1.EcatMarks = 265;
            Lab1Task1 student_1 = student1;
            student_1.Name = "Sadaf";
            student_1.Name = "Sarmad";
            Console.WriteLine(student1.Name);
            Console.WriteLine(student_1.Name);
            Console.ReadKey();

            //-----------Task 2-----------------
            Lab1Task2 student2 = new Lab1Task2();
            student2.Name = "Haeqah";
            student2.MatricMarks = 1100;
            student2.FScMarks = 1200;
            student2.EcatMarks = 400;
            student2.Aggregate = 99.9F;
            Console.ReadKey();

            //-----------Task 3--------------
            Lab1Task3 transaction1 = new Lab1Task3();
            transaction1.product_id = "P101";
            transaction1.product_name = "Emerald-ring";
            transaction1.amount = 10000;
            transaction1.date = "30/09/2026";
            transaction1.time = "11:00";
            Lab1Task3 transaction2 = new Lab1Task3();
            transaction2.product_id = transaction1.product_id;
            transaction2.product_name = transaction1.product_name;
            transaction2.amount = transaction1.amount;
            transaction2.date = transaction1.date;
            transaction2.time = transaction1.time;
            Console.WriteLine("Name: " + transaction1.product_name + " " + transaction2.product_name);
            transaction1.product_id = "P101";
            transaction1.product_name = "Red Shirt";
            transaction1.amount = 1000;
            transaction1.date = "30/09/26";
            transaction1.time = "11:30";
            transaction2.product_id = "P102";
            transaction2.product_name = "Heart-Pendant";
            transaction2.amount = 1500;
            transaction2.date = "30/09/2026";
            transaction2.time = "12:00";
            Console.WriteLine("POS: " + transaction1.product_name + " " + transaction1.time);
            Console.WriteLine("POS: " + transaction2.product_name + " " + transaction2.time);

            //-----------Task 4--------------
            Lab1Task4 o1 = new Lab1Task4();
            Console.Write("Enter two numbers and a operator: ");
            o1.n1 = int.Parse(Console.ReadLine());
            o1.n2 = int.Parse(Console.ReadLine());
            o1.op = Console.ReadLine();
            int result = o1.Calculator(o1.n1, o1.n2, o1.op);
            Console.WriteLine(result);

            //-----------Task 5--------------
            Lab1Task5 transaction = new Lab1Task5();
            List<Lab1Task5> history = new List<Lab1Task5>();
            transaction.balance = 1000000;
            while (true)
            {
                int option = transaction.ATM_Menu();
                if (option == 1)
                {
                    Console.Write("Enter the amount: ");
                    transaction.amount = float.Parse(Console.ReadLine());
                    transaction.balance = transaction.deposit();
                    transaction.option = option;
                    history.Add(new Lab1Task5
                    {
                        amount = transaction.amount,
                        balance = transaction.balance,
                        option = transaction.option
                    });
                }
                else if (option == 2)
                {
                    Console.Write("Enter the amount: ");
                    transaction.amount = float.Parse(Console.ReadLine());
                    transaction.balance = transaction.withdraw();
                    transaction.option = option;
                    history.Add(new Lab1Task5
                    {
                        amount = transaction.amount,
                        balance = transaction.balance,
                        option = transaction.option
                    });
                }
                else if (option == 3)
                {
                    transaction.balance = transaction.check_balance();
                    Console.WriteLine("Your Balance is: " + transaction.balance);
                }
                else if (option == 4)
                {
                    transaction.TransactionHistory(history);
                }
                else if (option == 5)
                {
                    break;
                }
                else
                {
                    Console.WriteLine("Invalid option");
                }
            }

            //-----------Task 6--------------
            List<Lab1Task6> stuname = new List<Lab1Task6>();
            Lab1Task6 SMS = new Lab1Task6();
            while (true)
            {
                Console.Clear();
                int option = SMS.StudentMenu();
                if (option == 1)
                {
                    Console.Write("Enter Student Name, Matric Marks, Fsc Marks and Ecat Marks: ");
                    SMS.StudentName = Console.ReadLine();
                    SMS.MatricMarks = float.Parse(Console.ReadLine());
                    SMS.FscMarks = float.Parse(Console.ReadLine());
                    SMS.EcatMarks = float.Parse(Console.ReadLine());
                    stuname.Add(new Lab1Task6
                    {
                        StudentName = SMS.StudentName,
                        MatricMarks = SMS.MatricMarks,
                        FscMarks = SMS.FscMarks,
                        EcatMarks = SMS.EcatMarks
                    });
                }
                else if (option == 2)
                {
                    SMS.ShowStudent(stuname);
                }
                else if (option == 3)
                {
                    SMS.CalculateAggregate(stuname);
                }
                else if (option == 4)
                {
                    SMS.TopStudents(stuname);
                }
                else if (option == 5)
                {
                    Console.WriteLine("Exiting the program.");
                    Console.ReadKey();
                    break;
                }
                else
                {
                    Console.WriteLine("Invalid option");
                }
            }

            //-----------Task 7--------------
            Lab1Task7 product = new Lab1Task7();
            List<Lab1Task7> productlist = new List<Lab1Task7>();
            while (true)
            {
                int option = product.ProductMenu();
                if (option == 1)
                {
                    Console.Write("Enter Product ID: ");
                    product.ID = Console.ReadLine();
                    Console.Write("Enter Product Nmae: ");
                    product.Name = Console.ReadLine();
                    Console.Write("Enter Product Price: ");
                    product.Price = int.Parse(Console.ReadLine());
                    Console.Write("Enter Product Category: ");
                    product.Category = Console.ReadLine();
                    Console.Write("Enter Product Brand Name: ");
                    product.BrandName = Console.ReadLine();
                    Console.Write("Enter Product Country: ");
                    product.Country = Console.ReadLine();
                    productlist.Add(new Lab1Task7
                    {
                        Name = product.Name,
                        ID = product.ID,
                        Price = product.Price,
                        Category = product.Category,
                        BrandName = product.BrandName,
                        Country = product.Country
                    });
                }
                else if (option == 2)
                {
                    product.ShowProduct(productlist);
                }
                else if (option == 3)
                {
                    float total = product.TotalStoreWorth(productlist);
                    Console.WriteLine("The Total Sum of Price of All the Products is: " + total);
                }
                else if (option == 4)
                {
                    Console.WriteLine("Exiting Program");
                    Console.ReadKey();
                    break;
                }
                else
                {
                    Console.WriteLine("Invalid Option");
                }
            }

            //---------------Task 8--------------
            string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 2\\Week2\\UserRecord.txt";
            Lab1Task8 obj = new Lab1Task8();
            List<Lab1Task8> userlist = new List<Lab1Task8>();
            while (true)
            {
                int option = obj.UserMenu();
                obj.ReadData(path, userlist);
                if (option == 1)
                {
                    Console.Write("Enter your username: ");
                    string n = Console.ReadLine();
                    Console.Write("Enter your password: ");
                    string p = Console.ReadLine();
                    obj.SignIn(userlist, n, p);
                }
                else if (option == 2)
                {
                    Console.Write("Enter your username: ");
                    string n = Console.ReadLine();
                    Console.Write("Enter your password: ");
                    string p = Console.ReadLine();
                    Console.Write("Enter your role: ");
                    string r = Console.ReadLine();
                    obj.SignUp(path, n, p, r);
                }
                else if (option == 3)
                {
                    Console.WriteLine("Exiting Program");
                    Console.ReadKey();
                    break;
                }
                else
                {
                    Console.WriteLine("Invalid option...");
                }
            }

            //-------Lab Tasks File 2-----------

            //-----------Task 1-----------------
            Lab2Task1Book book = new Lab2Task1Book();
            List<Lab2Task1Book> booklist = new List<Lab2Task1Book>();
            while (true)
            {
                int option = book.BookMenu();
                if (option == 1)
                {
                    Console.Write("Enter Book ID: ");
                    book.Id = Console.ReadLine();
                    Console.Write("Enter Book Title: ");
                    book.Title = Console.ReadLine();
                    Console.Write("Enter Author Name: ");
                    book.Author = Console.ReadLine();
                    booklist.Add(new Lab2Task1Book
                    {
                        Id = book.Id,
                        Title = book.Title,
                        Author = book.Author
                    });
                }
                else if (option == 2)
                {
                    book.displaybook(booklist);
                }
                else if (option == 3)
                {
                    book.removebook(booklist);
                }
                else if (option == 4)
                {
                    Console.WriteLine("Exiting Program");
                    Console.ReadKey();
                    break;
                }
                else
                {
                    Console.WriteLine("Invalid Option...");
                }
            }

            //-----------Task 2-----------------
            Lab2Task2 bank = new Lab2Task2("", "", 0);
            List<Lab2Task2> banklist = new List<Lab2Task2>();
            while (true)
            {
                int option = bank.BankMenu();
                if (option == 1)
                {
                    Console.Write("Enter account number: ");
                    bank.AccountNumber = Console.ReadLine();
                    Console.Write("Enter account holder name: ");
                    bank.HolderName = Console.ReadLine();
                    Console.Write("Enter initial balance: ");
                    bank.Balance = int.Parse(Console.ReadLine());
                    banklist.Add(new Lab2Task2
                    {
                        AccountNumber = bank.AccountNumber,
                        HolderName = bank.HolderName,
                        Balance = bank.Balance
                    });
                }
                else if (option == 2)
                {
                    Console.Write("Enter Account Number and Holder Name: ");
                    string accountNumber = Console.ReadLine();
                    string holderName = Console.ReadLine();
                    int found_index = -1;
                    bool found2 = false;
                    for (int i = 0; i < banklist.Count; i++)
                    {
                        if (accountNumber == banklist[i].AccountNumber && holderName == banklist[i].HolderName)
                        {
                            found_index = i;
                            found2 = true;
                        }
                    }
                    if (found2 == true)
                    {
                        Console.Write("Enter deposited amount: ");
                        int amount = int.Parse(Console.ReadLine());
                        bank.Balance = bank.deposit(amount, banklist);
                        banklist[found_index] = bank;
                    }
                }
                else if (option == 3)
                {
                    Console.Write("Enter Account Number and Holder Name: ");
                    string accountNumber = Console.ReadLine();
                    string holderName = Console.ReadLine();
                    int found_index = -1;
                    bool found2 = false;
                    for (int i = 0; i < banklist.Count; i++)
                    {
                        if (accountNumber == banklist[i].AccountNumber && holderName == banklist[i].HolderName)
                        {
                            found_index = i;
                            found2 = true;
                        }
                    }
                    if (found2 == true)
                    {
                        Console.Write("Enter withdrawn amount: ");
                        int amount = int.Parse(Console.ReadLine());
                        bank.Balance = bank.withdraw(amount, banklist);
                        banklist[found_index] = bank;
                    }
                }
                else if (option == 4)
                {
                    int b = bank.check_balance(banklist);
                    Console.WriteLine("Current Balance: " + b);
                }
                else if (option == 5)
                {
                    Console.WriteLine("Exiting Program");
                    Console.ReadKey();
                    break;
                }
                else
                {
                    Console.WriteLine("Invalid option");
                    Console.ReadKey();
                }
            }

            //-----------Task 3-----------------
            Lab2Task3Product product1 = new Lab2Task3Product("", "", 0);
            List<Lab2Task3Product> productlist1 = new List<Lab2Task3Product>();
            while (true)
            {
                int option = product1.ProductMenu();
                if (option == 1)
                {
                    Console.Write("Enter Product ID: ");
                    product1.ProductID = Console.ReadLine();
                    Console.Write("Enter Product Name: ");
                    product1.Name = Console.ReadLine();
                    Console.Write("Enter Product Price: ");
                    product1.Price = int.Parse(Console.ReadLine());
                    productlist1.Add(new Lab2Task3Product
                    {
                        ProductID = product1.ProductID,
                        Name = product1.Name,
                        Price = product1.Price
                    });
                }
                else if (option == 2)
                {
                    product1.ViewAllProducts(productlist1);
                }
                else if (option == 3)
                {
                    product1.SearchProduct(productlist1);
                }
                else if (option == 4)
                {
                    Console.WriteLine("Exiting Program");
                    Console.ReadKey();
                    break;
                }
                else
                {
                    Console.WriteLine("Invalid Option...");
                }
            }

            //-----------Task 4-----------------
            Lab2Task4Car car = new Lab2Task4Car("", "", 0);
            List<Lab2Task4Car> carlist = new List<Lab2Task4Car>();
            while (true)
            {
                int option = car.CarMenu();
                if (option == 1)
                {
                    Console.Write("Enter Car ID: ");
                    car.CarID = Console.ReadLine();
                    Console.Write("Enter Car ID: ");
                    car.Model = Console.ReadLine();
                    Console.Write("Enter Car ID: ");
                    car.Price = int.Parse(Console.ReadLine());
                    carlist.Add(new Lab2Task4Car
                    {
                        CarID = car.CarID,
                        Model = car.Model,
                        Price = car.Price
                    });
                }
                else if (option == 2)
                {
                    car.ViewAllCars(carlist);
                }
                else if (option == 3)
                {
                    car.SearchExpensiveCar(carlist);
                }
                else if (option == 4)
                {
                    Console.WriteLine("Exiting Program");
                    Console.ReadKey();
                    break;
                }
                else
                {
                    Console.WriteLine("Invalid Option...");
                }
            }

            //-----------Task 5-----------------
            Lab2Task5Movie movie = new Lab2Task5Movie("", "", 0);
            List<Lab2Task5Movie> movielist = new List<Lab2Task5Movie>();
            while (true)
            {
                int option = movie.MovieMenu();
                if (option == 1)
                {
                    Console.Write("Enter Movie ID: ");
                    movie.ID = Console.ReadLine();
                    Console.Write("Enter Movie Title: ");
                    movie.Title = Console.ReadLine();
                    Console.Write("Enter Movie Duration: ");
                    movie.Duration = int.Parse(Console.ReadLine());
                    movielist.Add(new Lab2Task5Movie
                    {
                        ID = movie.ID,
                        Title = movie.Title,
                        Duration = movie.Duration
                    });
                }
                else if (option == 2)
                {
                    movie.ViewAllMovies(movielist);
                }
                else if (option == 3)
                {
                    movie.SearchMovie(movielist);
                }
                else if (option == 4)
                {
                    Console.WriteLine("Exiting Program");
                    Console.ReadKey();
                    break;
                }
                else
                {
                    Console.WriteLine("Invalid Option...");
                }
            }

            //-----------Task 6-----------------
            Lab2Task6 book1 = new Lab2Task6("", "");
            List<Lab2Task6> listofbook = new List<Lab2Task6>();
            while (true)
            {
                int option = book1.BookMenu();
                if (option == 1)
                {
                    Console.Write("Enter Book Title: ");
                    book1.Title1 = Console.ReadLine();
                    Console.Write("Enter Book Author: ");
                    book1.Author1 = Console.ReadLine();
                    Console.Write("Enter Book Price: ");
                    book1.Price1 = int.Parse(Console.ReadLine());
                    listofbook.Add(new Lab2Task6
                    {
                        Title1 = book1.Title1,
                        Author1 = book1.Author1,
                        Price1 = book1.Price1
                    });
                }
                else if (option == 2)
                {
                    book1.UpdateBook(listofbook, book1);
                }
                else if (option == 3)
                {
                    book1.SearchBook(listofbook);
                }
                else if (option == 4)
                {
                    Console.WriteLine("Exiting Program");
                    Console.ReadKey();
                    break;
                }
                else
                {
                    Console.WriteLine("Invalid Option...");
                }
            }

            //-----------Task 7-----------------
            Lab2Task7 student = new Lab2Task7("", "", 0);
            List<Lab2Task7> studentlist = new List<Lab2Task7>();
            while (true)
            {
                int option = student.StudentMenu();
                if (option == 1)
                {
                    Console.Write("Enter Student ID: ");
                    student.ID = Console.ReadLine();
                    Console.Write("Enter Student Name: ");
                    student.name = Console.ReadLine();
                    Console.Write("Enter Student GPA: ");
                    student.GPA = int.Parse(Console.ReadLine());
                    studentlist.Add(new Lab2Task7
                    {
                        ID = student.ID,
                        name = student.name,
                        GPA = student.GPA
                    });
                }
                else if (option == 2)
                {
                    student.UpdateStudent(studentlist, student);
                }
                else if (option == 3)
                {
                    student.ViewTopStudent(studentlist);
                }
                else if (option == 4)
                {
                    Console.WriteLine("Exiting Program");
                    Console.ReadKey();
                    break;
                }
                else
                {
                    Console.WriteLine("Invalid Option");
                }
            }

            //-----------Task 8-----------------
            Medicine medicine = new Medicine("", "", "");
            List<Medicine> medicinelist = new List<Medicine>();
            string path11 = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 2\\Week2\\MedicineRecord.txt";
            while (true)
            {
                medicine.ReadData(path11, medicinelist);
                int option = medicine.Menu();
                if (option == 1)
                {
                    medicine.AddMedicine(medicinelist, medicine, path11);
                }
                else if (option == 2)
                {
                    medicine.displayMedicines(medicinelist, path11);
                }
                else if (option == 3)
                {
                    Console.WriteLine("Exiting Program");
                    Console.ReadKey();
                    break;
                }
                else
                {
                    Console.WriteLine("Invalid Option");
                }
            }
        }
    }
}
