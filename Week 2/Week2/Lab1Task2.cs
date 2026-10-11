using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Week2
{
    public class Lab1Task2
    {
        //-----------Task 2--------------
        public string Name;
        public float MatricMarks;
        public float FScMarks;
        public float EcatMarks;
        public float Aggregate;
        public Lab1Task2()
        {
        }
        public Lab1Task2(Lab1Task2 student2)
        {
            this.Name = student2.Name;
            this.MatricMarks = student2.MatricMarks;
            this.FScMarks = student2.FScMarks;
            this.EcatMarks = student2.EcatMarks;
            this.Aggregate = student2.Aggregate;
        }
    }
}
