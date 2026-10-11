using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Week2
{
    public class Lab1Task6
    {
        //---------------Task 6----------------
        public string StudentName;
        public float MatricMarks;
        public float FscMarks;
        public float EcatMarks;
        public float Aggregate;
        public int StudentMenu()
        {
            Console.WriteLine("----Student Menu----");
            Console.WriteLine("1.Add Student");
            Console.WriteLine("2.Show Student");
            Console.WriteLine("3.Calculate Aggregate");
            Console.WriteLine("4.Top Students");
            Console.WriteLine("5.Exit");
            Console.Write("Enter option: ");
            int option = int.Parse(Console.ReadLine());
            return option;
        }
        public void ShowStudent(List<Lab1Task6> stuname)
        {
            Console.WriteLine("Student Name" + "\t" + "Matric Marks" + "\t" + "FSc Marks" + "\t" + "Ecat Marks");
            for (int i = 0; i < stuname.Count; i++)
            {
                Console.WriteLine(stuname[i].StudentName + "\t\t\t" + stuname[i].MatricMarks + "\t\t\t" + stuname[i].FscMarks + "\t\t" + stuname[i].EcatMarks);
            }
            Console.ReadKey();
        }
        public void CalculateAggregate(List<Lab1Task6> stuname)
        {
            Console.WriteLine("Student Name" + "\t" + "Aggregate");
            for (int i = 0; i < stuname.Count; i++)
            {
                stuname[i].Aggregate = ((stuname[i].MatricMarks / 1100 * 0.3F) + (stuname[i].FscMarks / 1100 * 0.3F) + (stuname[i].EcatMarks / 400 * 0.4F)) * 100;
                Console.WriteLine(stuname[i].StudentName + "\t\t\t" + stuname[i].Aggregate);
            }
            Console.ReadKey();
        }
        public void TopStudents(List<Lab1Task6> stuname)
        {
            for (int i = 0; i < stuname.Count - 1; i++)
            {
                for (int j = 1; j < stuname.Count - i - 1; j++)
                {
                    stuname[i].Aggregate = ((stuname[i].MatricMarks / 1100 * 0.3F) + (stuname[i].FscMarks / 1100 * 0.3F) + (stuname[i].EcatMarks / 400 * 0.4F)) * 100;
                    if (stuname[j].Aggregate < stuname[j + 1].Aggregate)
                    {
                        float temp = stuname[j].Aggregate;
                        stuname[j].Aggregate = stuname[j + 1].Aggregate;
                        stuname[j + 1].Aggregate = temp;
                        string swap1 = stuname[i].StudentName;
                        stuname[j].StudentName = stuname[j + 1].StudentName;
                        stuname[j + 1].StudentName = swap1;
                        float swap2 = stuname[i].MatricMarks;
                        stuname[j].MatricMarks = stuname[j + 1].MatricMarks;
                        stuname[j + 1].MatricMarks = swap2;
                        float swap3 = stuname[i].FscMarks;
                        stuname[j].FscMarks = stuname[j + 1].FscMarks;
                        stuname[j + 1].FscMarks = swap3;
                        float swap4 = stuname[i].EcatMarks;
                        stuname[j].EcatMarks = stuname[j + 1].EcatMarks;
                        stuname[j + 1].EcatMarks = swap4;
                    }
                }
            }
            Console.WriteLine("Student Name" + "\t" + "Aggregate");
            for (int k = 0; k < 3; k++)
            {
                Console.WriteLine(stuname[k].StudentName + stuname[k].Aggregate);
            }
            Console.ReadKey();
        }
    }
}
