using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Week_03
{
    public class Task1
    {
        public string Name;
        public float MatricMarks;
        public float FscMarks;
        public float EcatMarks;
        public float Aggregate;
        public Task1()
        {
            Console.WriteLine("Default Constructor");
        }
        public Task1(Task1 student1)
        {
            this.Name = student1.Name;
            this.MatricMarks = student1.MatricMarks;
            this.FscMarks = student1.FscMarks;
            this.EcatMarks = student1.EcatMarks;
            this.Aggregate = student1.Aggregate;
        }
    }
}
