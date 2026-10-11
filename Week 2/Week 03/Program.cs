using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices.ComTypes;
using System.Text;
using System.Threading.Tasks;

namespace Week_03
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

            //----------------Task 4-----------------
            Task4 p1 = new Task4();
            List<Task4> plist = new List<Task4>();
            while (true)
            {
                int option = p1.Menu();
                if(option == 1)
                {
                    for (int i = 0; i < plist.Count; i++)
                    {
                        Add();
                        plist.Add(new Task4
                        (
                            Name,
                            Category,
                            Price,


                        ));
                    }
                }
                else if(option == 2)
                {
                    p1.ViewProduct(plist);
                }
                else if(option == 3)
                {
                    p1.ViewHighestUnitPrice(plist);
                }
                else if(option == 4)
                {
                    p1.SaleTax(plist);
                }
                else if(option == 5)
                {
                    p1.Orderedp(plist);
                }
                else if(option == 6)
                {
                    Console.WriteLine("Exiting Program...");
                    Console.ReadKey();
                    break;
                }
            }
        }
        static Task4 Add()
        {
            Task4 obj = new Task4();
            Console.WriteLine();
            obj.Name = Console.ReadLine();
            obj.Category = Console.ReadLine();
            obj.Price = int.Parse(Console.ReadLine());
            obj.StockQuantity = int.Parse(Console.ReadLine());
            obj.minStock = int.Parse(Console.ReadLine());
            return obj;
        }
    }
}
