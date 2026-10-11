using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Security.Cryptography;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace Week3
{
    internal class Program
    {
        static void Main(string[] args)
        {
            ////----------------Task 1-----------------
            //Task1 s1 = new Task1();
            //s1.Name = "Haeqah";
            //Task1 s2 = new Task1(s1);
            //Console.WriteLine(s1.Name);
            //Console.WriteLine(s2.Name);

            //// Part 2

            //List<int> slist = new List<int>() { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
            //foreach(int i in slist)
            //{
            //    Console.WriteLine(i);
            //}
            //for(int i = 0; i < slist.Count; i++)
            //{
            //    Console.WriteLine(slist[i]);
            //}

            //Console.ReadKey();
            ////----------------Task 2-----------------
            //ClockType c1 = new ClockType();
            //Console.WriteLine("Empty Time" );
            //c1.DisplayTime();

            //ClockType h = new ClockType(8);
            //Console.WriteLine("Hour Time: ");
            //h.DisplayTime();

            //ClockType m = new ClockType(8,10);
            //Console.WriteLine("Minute Time: ");
            //m.DisplayTime();

            //ClockType f = new ClockType(8, 10, 10);
            //Console.WriteLine("Full Time: ");
            //f.DisplayTime();

            //f.incrementseconds();
            //Console.WriteLine("Full Time(incremented seconds): ");
            //f.DisplayTime();

            //f.incrementminutes();
            //Console.WriteLine("Full Time(incremented minutes): ");
            //f.DisplayTime();

            //f.incrementhours();
            //Console.WriteLine("Full Time(incremented hours): ");
            //f.DisplayTime();

            //bool check1 = f.isEqual(9,11,11);
            //Console.WriteLine("Check flag maually: " + check1);

            //ClockType cmp = new ClockType(10, 12, 0);
            //bool check2 = f.isEqual(cmp);
            //Console.WriteLine("Check flag through object: " + check2);

            ////----------------Task 3-----------------
            //Task3 t1 = new Task3(8, 25, 30);
            //t1.elaspedTime(t1);
            //t1.remainingTime(t1);

            ////----------------Task 4-----------------
            //Task4 p1 = new Task4();
            //Task4 p2 = new Task4();
            //List<Task4> plist = new List<Task4>();
            //while (true)
            //{
            //    int option = p1.Menu();
            //    if (option == 1)
            //    {
            //            p2 = Add();
            //            p1.Name = "Namal";
            //            p1.Category = "Novel";
            //            p1.Price = 2000;
            //            p1.StockQuantity = 20;
            //            p1.minStock = 18;
            //            plist.Add(p1);
            //            plist.Add(p2);
            //    }
            //    else if (option == 2)
            //    {
            //        p1.ViewProduct(plist);
            //    }
            //    else if (option == 3)
            //    {
            //        p1.ViewHighestUnitPrice(plist);
            //    }
            //    else if (option == 4)
            //    {
            //        p1.SaleTax(plist);
            //    }
            //    else if (option == 5)
            //    {
            //        p1.Orderedp(plist);
            //    }
            //    else if (option == 6)
            //    {
            //        Console.WriteLine("Exiting Program...");
            //        Console.ReadKey();
            //        break;
            //    }
            //    else
            //    {
            //        Console.WriteLine("Invalid Option");
            //    }
            //}

            ////----------------Task 5----------------
            //Task5 s1 = new Task5();
            //s1.StudentID = "S101";
            //s1.Name = "Amna";
            //s1.Department = "Computer Science";
            //s1.Semester = 2;
            //s1.marksOfSubject1 = 100;
            //s1.marksOfSubject2 = 78;
            //s1.marksOfSubject3 = 89;
            //s1.marksOfSubject4 = 96;
            //s1.marksOfSubject5 = 75;

            //s1.Details();

            //float tmarks = s1.TMarks();
            //Console.WriteLine("Total Marks: " + tmarks);

            //float amarks = s1.AMarks();
            //Console.WriteLine("Average Marks: " + amarks);

            //char grade = s1.Grade();
            //Console.WriteLine("Grade: " + grade);

            ////----------------Task 6----------------
            //Task6 c1 = new Task6();
            //c1.CharachterName = "Monster";
            //c1.Level = 1;
            //c1.HealthPoints = 100;
            //c1.AttackPower = 20;
            //c1.DefensePower = 70;
            //c1.ExperiencePoints = 5;
            //c1.Stamina = 100;
            //c1.specialAbility = "Hnads";

            //c1.Display();

            //c1.Inclevel();

            //int h = c1.healthpoints();
            //Console.WriteLine(h);

            //c1.Display();

            //c1.potionhealth();

            //c1.potionstamina();

            //int t = c1.TotalPower();
            //Console.WriteLine(t);

            //c1.Display();

            ////----------------Task 7----------------
            //Task7 myCar = new Task7();

            //myCar.CarName = "Racing Car";
            //myCar.Speed = 90;
            //myCar.Accelaration = 60;
            //myCar.FuelLevel = 100;
            //myCar.DamageLevel = 0;
            //myCar.Position = 0;
            //myCar.LapCount = 1;

            //myCar.DisplayStatus();

            //myCar.Accelerate(3);
            //myCar.Accelerate(4);

            //myCar.DisplayStatus();

            //myCar.CompleteLap();
            //myCar.Refuel();
            //myCar.Repair();

            //myCar.DisplayStatus();

            ////----------------Task 8----------------
            //Task8 c2 = new Task8(10,10);
            //while (true)
            //{
            //    Console.WriteLine("-------Menu--------");
            //    Console.WriteLine("1.Create single object of calculator");
            //    Console.WriteLine("2.Change Values of Attributes");
            //    Console.WriteLine("3.Add");
            //    Console.WriteLine("4.Subtract");
            //    Console.WriteLine("5.Multiply");
            //    Console.WriteLine("6.Divide");
            //    Console.WriteLine("7.Modulo");
            //    Console.WriteLine("8.Exit");
            //    Console.WriteLine("Enter option: ");
            //    int option = int.Parse(Console.ReadLine());
            //    if(option == 1)
            //    {
            //        Console.WriteLine("Enter numbers: ");
            //        c2.number1 = int.Parse(Console.ReadLine());
            //        c2.number2 = int.Parse(Console.ReadLine());
            //    }
            //    else if(option == 2)
            //    {
            //        c2.number1 = 10;
            //        c2.number1 = 5;
            //    }
            //    else if (option == 3)
            //    {
            //        int cal = c2.Add();
            //        Console.WriteLine("Output: " + cal);
            //    }
            //    else if (option == 4)
            //    {
            //        int cal = c2.Subtract();
            //        Console.WriteLine("Output: " + cal);
            //    }
            //    else if (option == 5)
            //    {
            //        int cal = c2.Multiply();
            //        Console.WriteLine("Output: " + cal);
            //    }
            //    else if (option == 6)
            //    {
            //        int cal = c2.Divide();
            //        Console.WriteLine("Output: " + cal);
            //    }
            //    else if (option == 7)
            //    {
            //        int cal = c2.Modulo();
            //        Console.WriteLine("Output: " + cal);
            //    }
            //    else if (option == 8)
            //    {
            //        Console.WriteLine("Exiting Program...");
            //        Console.ReadKey();
            //        break;
            //    }
            //    else
            //    {
            //        Console.WriteLine("Invalid Option");
            //    }
            //}

            ////----------------Task 9----------------
            //Task9 c3 = new Task9(10.0,10.0);
            //while (true)
            //{
            //    Console.WriteLine("-------Menu--------");
            //    Console.WriteLine("1.Create single object of calculator");
            //    Console.WriteLine("2.Change Values of Attributes");
            //    Console.WriteLine("3.Add");
            //    Console.WriteLine("4.Subtract");
            //    Console.WriteLine("5.Multiply");
            //    Console.WriteLine("6.Divide");
            //    Console.WriteLine("7.Modulo");
            //    Console.WriteLine("8.Exit");
            //    Console.WriteLine("Enter option: ");
            //    int option = int.Parse(Console.ReadLine());
            //    if(option == 1)
            //    {
            //        Console.WriteLine("Enter numbers: ");
            //        c3.number1 = double.Parse(Console.ReadLine());
            //        c3.number2 = double.Parse(Console.ReadLine());
            //    }
            //    else if(option == 2)
            //    {
            //        c3.number1 = 10.0;
            //        c3.number1 = 5.0;
            //    }
            //    else if (option == 3)
            //    {
            //        double cal = c3.Add();
            //        Console.WriteLine("Output: " + cal);
            //    }
            //    else if (option == 4)
            //    {
            //        double cal = c3.Subtract();
            //        Console.WriteLine("Output: " + cal);
            //    }
            //    else if (option == 5)
            //    {
            //        double cal = c3.Multiply();
            //        Console.WriteLine("Output: " + cal);
            //    }
            //    else if (option == 6)
            //    {
            //        double cal = c3.Divide();
            //        Console.WriteLine("Output: " + cal);
            //    }
            //    else if (option == 7)
            //    {
            //        double cal = c3.Modulo();
            //        Console.WriteLine("Output: " + cal);
            //    }
            //    else if (option == 8)
            //    {
            //        double cal1 = c3.Sqrt1();
            //        Console.WriteLine("Output: " + cal1);
            //        double cal2 = c3.Sqrt2();
            //        Console.WriteLine("Output: " + cal1);
            //    }
            //    else if (option == 9)
            //    {
            //        double cal1 = c3.Expo1();
            //        Console.WriteLine("Output: " + cal1);
            //        double cal1 = c3.Expo2();
            //        Console.WriteLine("Output: " + cal2);
            //    }
            //    else if (option == 10)
            //    {
            //        double cal1 = c3.Logr1();
            //        Console.WriteLine("Output: " + cal1);
            //        double cal2 = c3.Logr2();
            //        Console.WriteLine("Output: " + cal2);
            //    }
            //    else if (option == 11)
            //    {
            //        double cal11 = c3.TrigCos1();
            //        Console.WriteLine("Output: " + cal11);
            //        double cal12 = c3.TrigCos2();
            //        Console.WriteLine("Output: " + cal12);
            //        double cal21 = c3.TrigSin1();
            //        Console.WriteLine("Output: " + cal21);
            //        double cal22 = c3.TrigSin2();
            //        Console.WriteLine("Output: " + cal22);
            //        double cal31 = c3.TrigTan1();
            //        Console.WriteLine("Output: " + cal31);
            //        double cal32 = c3.TrigTan2();
            //        Console.WriteLine("Output: " + cal32);
            //
            //    }
            //    else if (option == 12)
            //    {
            //        Console.WriteLine("Exiting Program...");
            //        Console.ReadKey();
            //        break;
            //    }
            //    else
            //    {
            //        Console.WriteLine("Invalid Option");
            //    }
            //}

            ////----------------Task 10----------------
            //Task10 w1 = new Task10();
            //Console.WriteLine("Enter words: ");
            //w1.word1 = Console.ReadLine();
            //w1.word2 = Console.ReadLine();
            //while (true)
            //{
            //    Console.WriteLine("Enter Option (1 for word, 2 fro restart): ");
            //    int option = int.Parse(Console.ReadLine());
            //    if(option == 1)
            //    {
            //        while (!w1.game_over)
            //        {
            //            w1.check(w1);
            //            w1.word2 = w1.word1;
            //            w1.word1 = Console.ReadLine();
            //        }
            //    }
            //    else if(option == 2)
            //    {
            //        w1.restart();
            //    }
            //    else if(option == 3)
            //    {
            //        break;
            //    }
            //    else
            //    {
            //        Console.WriteLine("Invalid Option");
            //    }
            //}
            //if (w1.game_over)
            //{
            //    Console.WriteLine("Game Over...");
            //}

            ////----------------Task 11----------------
            //Task11 b1 = new Task11();
            //List<Task11> blist = new List<Task11>();
            //while (true)
            //{
            //    int option = b1.Menu();
            //    if(option == 1)
            //    {
            //        Console.WriteLine("Enter size of loop: ");
            //        int size = int.Parse(Console.ReadLine());
            //        for (int m = 0; m< size; m++)
            //        {
            //            b1 = Add();
            //            blist.Add(b1);
            //        }
            //    }
            //    else if(option == 2)
            //    {
            //        b1.bookDetails(blist);
            //    }
            //    else if(option == 3)
            //    {
            //        Console.WriteLine("Enter input: ");
            //        string book = Console.ReadLine();
            //        b1.getAuthor(book, blist);
            //    }
            //    else if(option == 4)
            //    {
            //        Console.WriteLine("Enter input: ");
            //        int book = int.Parse(Console.ReadLine());
            //        b1.sellCopies(book);
            //    }
            //    else if(option == 5)
            //    {
            //        Console.WriteLine("Enter input: ");
            //        int book = int.Parse(Console.ReadLine());
            //        b1.restock(book);
            //    }
            //    else if(option == 6)
            //    {
            //        int count = blist.Count;
            //        Console.WriteLine("Book List Length is: " + count);
            //    }
            //    else if(option == 7)
            //    {
            //        Console.WriteLine("Exiting Program....");
            //        Console.ReadKey();
            //        break;
            //    }
            //    else
            //    {
            //        Console.WriteLine("Invalid Option");
            //    }
            //}
        }
        //public static Task4 Add() //-------------------Task4---------------------------
        //{
        //    Task4 obj = new Task4();
        //    Console.WriteLine("Enter Name, Category, Price, Stock Quantity and Minimum Stock: ");
        //    obj.Name = Console.ReadLine();
        //    obj.Category = Console.ReadLine();
        //    obj.Price = int.Parse(Console.ReadLine());
        //    obj.StockQuantity = int.Parse(Console.ReadLine());
        //    obj.minStock = int.Parse(Console.ReadLine());
        //    return obj;
        //}
        //public static Task11 Add() //-------------------Task4---------------------------
        //{
        //    Task11 obj = new Task11();
        //    Console.WriteLine("Enter Name, Category, Price, Stock Quantity and Minimum Stock: ");
        //    obj.Title = Console.ReadLine();
        //    obj.Author = Console.ReadLine();
        //    obj.publicationYear = int.Parse(Console.ReadLine());
        //    obj.price = int.Parse(Console.ReadLine());
        //    obj.quantityInStock = int.Parse(Console.ReadLine());
        //    return obj;
        //}
    }
}
