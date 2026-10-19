using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Policy;
using System.Text;
using System.Threading.Tasks;

namespace Week_4
{
    public class Task2Angle
    {
        public int degreelong;
        public int degreelat;
        public float minutelong;
        public float minutelat;
        public char directionlat;
        public char directionlong;
        public Task2Angle() { }
        public Task2Angle(int degreelong,int degreelat, float minutelong, float minutelat, char directionlat, char directionlong)
        {
            this.degreelong = degreelong;
            this.degreelat = degreelat;
            this.minutelong = minutelong;
            this.minutelat = minutelat;
            this.directionlat = directionlat;
            this.directionlong = directionlong;
        }
    }
}
