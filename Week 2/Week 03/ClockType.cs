using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Diagnostics.Eventing.Reader;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Threading.Tasks;

namespace Week_03
{
    public class ClockType
    {
        public int hours;
        public int minutes;
        public int seconds;
        public ClockType() { }
        public ClockType(int hours)
        {
            this.hours = hours; 
        }
        public ClockType(int hours, int minutes)
        {
            this.hours = hours;
            this.minutes = minutes;
        }
        public ClockType(int hours, int minutes, int seconds)
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
        public bool isEqual(int h,int m,int s)
        {
            if(hours == h && minutes == m && seconds == s)
            {
                return true;
            }
            else {
                return false;
            }
            
        }
        public bool isEqual(ClockType ct)
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
    }
}
