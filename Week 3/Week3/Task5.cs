using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Week3
{
    public class Task5
    {
        public string StudentID;
        public string Name;
        public string Department;
        public int Semester;
        public float marksOfSubject1;
        public float marksOfSubject2;
        public float marksOfSubject3;
        public float marksOfSubject4;
        public float marksOfSubject5;
        public void Menu()
        {
            Console.WriteLine("-------Menu--------");
            Console.WriteLine("1.Total Marks");
            Console.WriteLine("2.Average Marks");
            Console.WriteLine("3.Grade of Student");
            Console.WriteLine("4.Student Details");
            Console.WriteLine("5.Exit");
            Console.WriteLine("Enter option: ");
            int option = int.Parse(Console.ReadLine());
        }
        public float TMarks()
        {
            return marksOfSubject1 + marksOfSubject2 + marksOfSubject3 + marksOfSubject4 + marksOfSubject5;
        }
        public float AMarks()
        {
            return ((marksOfSubject1 + marksOfSubject2 + marksOfSubject3 + marksOfSubject4 + marksOfSubject5) / 5);
        }
        public char Grade()
        {
            float marksg = marksOfSubject1 + marksOfSubject2 + marksOfSubject3 + marksOfSubject4 + marksOfSubject5;
            marksg = (marksg / 500) * 100;
            if (marksg <= 100 && marksg >= 80)
            {
                return 'A';
            }
            else if (marksg < 80 && marksg >= 70)
            {
                return 'B';
            }
            else if (marksg < 70 && marksg >= 60)
            {
                return 'C';
            }
            else if (marksg < 60 && marksg >= 50)
            {
                return 'D';
            }
            else if (marksg < 50 && marksg >= 40)
            {
                return 'E';
            }
            else
            {
                return 'F';
            }
        }
        public void Details()
        {
            Console.WriteLine("Student ID\tName\tDepartment\tSemester\tSubject 1\tSubject2\tSubject 3\tSubject 4\tSubject 5");
            Console.WriteLine(StudentID + "\t" + Name + "\t" + Department + "\t" + Semester + "\t" + marksOfSubject1 + "\t" + marksOfSubject2 + "\t" + marksOfSubject3 + "\t" + marksOfSubject4 + "\t" + marksOfSubject5);
        }
    }
}