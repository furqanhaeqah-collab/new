using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Week2
{
    public class Lab2Task7
    {
        public string ID;
        public string name;
        public float GPA;
        public Lab2Task7(string ID, string name, float GPA)
        {
            this.ID = ID;
            this.name = name;
            this.GPA = GPA;
        }
        public Lab2Task7() { }
        public int StudentMenu()
        {
            Console.WriteLine("1. Add Student");
            Console.WriteLine("2. Update Student");
            Console.WriteLine("3. View Top Students");
            Console.WriteLine("4. Exit");
            Console.Write("Enter your choice: ");
            int choice = int.Parse(Console.ReadLine());
            return choice;
        }
        public void UpdateStudent(List<Lab2Task7> studentlist, Lab2Task7 student)
        {
            Console.Write("Enter Student ID: ");
            string id = Console.ReadLine();
            int foundindex = -1;
            bool found = false;
            for (int i = 0; i < studentlist.Count; i++)
            {
                if (id == studentlist[i].ID)
                {
                    foundindex = i;
                    found = true;
                }
            }
            if (found == true)
            {
                Console.Write("Enter Student ID: ");
                student.ID = Console.ReadLine();
                Console.Write("Enter Student Name: ");
                student.name = Console.ReadLine();
                Console.Write("Enter Student GPA: ");
                student.GPA = int.Parse(Console.ReadLine());
                studentlist[foundindex] = student;
            }
            else
            {
                Console.WriteLine("No student found");
            }
        }
        public void ViewTopStudent(List<Lab2Task7> studentlist)
        {
            Console.WriteLine("Student ID\tStudent Name\tGPA");
            for (int i = 0; i < studentlist.Count; i++)
            {
                if (studentlist[i].GPA > 3.5)
                {
                    Console.WriteLine(studentlist[i].ID + "\t" + studentlist[i].name + "\t" + studentlist[i].GPA);
                }
            }
        }
    }
}
