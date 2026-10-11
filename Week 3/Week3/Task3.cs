using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Week3
{
    public class Task3
    {
        public int hours;
        public int minutes;
        public int seconds;
        public Task3() { }
        public Task3(int hours)
        {
            this.hours = hours;
        }
        public Task3(int hours, int minutes)
        {
            this.hours = hours;
            this.minutes = minutes;
        }
        public Task3(int hours, int minutes, int seconds)
        {
            this.hours = hours;
            this.minutes = minutes;
            this.seconds = seconds;
        }
        public void DisplayTime()
        {
            Console.WriteLine(hours + "," + minutes + "," + seconds);
        }
        public int incrementseconds()
        {
            seconds++;
            return seconds;
        }
        public int incrementminutes()
        {
            minutes++;
            return minutes;
        }
        public int incrementhours()
        {
            hours++;
            return hours;
        }
        public bool isEqual(int h, int m, int s)
        {
            if (hours == h && minutes == m && seconds == s)
            {
                return true;
            }
            else
            {
                return false;
            }

        }
        public bool isEqual(Task3 ct)
        {
            if (hours == ct.hours && minutes == ct.minutes && seconds == ct.seconds)
            {
                return true;
            }
            else
            {
                return false;
            }

        }
        public void elaspedTime(Task3 et)
        {
            Console.WriteLine(hours + "," + minutes + "," + seconds);
        }
        public void remainingTime(Task3 rt)
        {
            hours = 24 - hours;
            minutes = 60 - minutes;
            seconds = 60 - seconds;
            Console.WriteLine(hours + "," + minutes + "," + seconds);
        }
    }
}
