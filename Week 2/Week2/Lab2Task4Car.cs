using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Week2
{
    public class Lab2Task4Car
    {
        public string CarID;
        public string Model;
        public int Price;
        public Lab2Task4Car(string CarID, string Model, int Price)
        {
            this.CarID = CarID;
            this.Model = Model;
            this.Price = Price;
        }
        public Lab2Task4Car() { }
        public int CarMenu()
        {
            Console.WriteLine("----Car Menu----");
            Console.WriteLine("1.Add Car");
            Console.WriteLine("2.View All Cars");
            Console.WriteLine("3.Search Expensive Car");
            Console.WriteLine("4.Exit");
            Console.Write("Enter your option: ");
            int option = int.Parse(Console.ReadLine());
            return option;
        }
        public void ViewAllCars(List<Lab2Task4Car> carlist)
        {
            Console.WriteLine("CarID\tModel\tPrice");
            for (int i = 0; i < carlist.Count; i++)
            {
                Console.WriteLine(carlist[i].CarID + "\t" + carlist[i].Model + "\t" + carlist[i].Price);
            }
        }
        public void SearchExpensiveCar(List<Lab2Task4Car> carlist)
        {
            int maxPrice = 0;
            string expensiveCarModel = "";
            string CarIdexpensive = "";
            for(int i = 0; i < carlist.Count(); i++)
            {
                if (carlist[i].Price > maxPrice)
                {
                    maxPrice = carlist[i].Price;
                    expensiveCarModel = carlist[i].Model;
                    CarIdexpensive = carlist[i].CarID;
                }
            }
            Console.WriteLine("Most Expensive Car is:" + "\t" + maxPrice + "\t" + CarIdexpensive + "\t" + expensiveCarModel);
        }
    }
}
