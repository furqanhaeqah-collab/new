using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Week_4
{
    public class Task2Ship
    {
        public string number;
        public List<Task2Angle> anglelist;
        public Task2Ship(string number)
        {
            this.number = number;
            anglelist = new List<Task2Angle>();
        }
        public List<Task2Angle> AddList(Task2Angle a)
        {
            anglelist.Add(a);
            return anglelist;
        }
        public void ShowAngle()
        {
            for (int i = 0; i < anglelist.Count; i++)
            {
                Console.WriteLine("Longitude: " + anglelist[i].degreelong + "\u00b0" + anglelist[i].minutelong + "'" + anglelist[i].directionlong);
                Console.WriteLine("Longitude: " + anglelist[i].degreelat + "\u00b0" + anglelist[i].minutelat + "'" + anglelist[i].directionlat);
            }
        }
        public void CheckDirection(string name)
        {
            for(int i = 0;i < 1;i++)
            {
                if(name == number)
                {
                    Console.WriteLine("Ship: " + number);
                    Console.WriteLine("Output of latitude: ");
                    Console.WriteLine("Longitude: " + anglelist[i].degreelong + "\u00b0" + anglelist[i].minutelong + "'" + anglelist[i].directionlong );
                    Console.WriteLine("Output of longitude: ");
                    Console.WriteLine("Longitude: " + anglelist[i].degreelat + "\u00b0" + anglelist[i].minutelat + "'" + anglelist[i].directionlat );
                }
            }
        }
        public void ShowDirection()
        {
            Console.WriteLine("Ship Number: " +number);
            for (int i = 0; i < anglelist.Count; i++)
            {
                Console.WriteLine("Longitude: " + anglelist[i].degreelong + "\u00b0" + anglelist[i].minutelong + "'" + anglelist[i].directionlong);
                Console.WriteLine("Longitude: " + anglelist[i].degreelat + "\u00b0" + anglelist[i].minutelat + "'" + anglelist[i].directionlat);
            }
        }
    }
}
