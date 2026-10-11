using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Week2
{
    public class Lab2Task1Book
    {
        public string Id;
        public string Title;
        public string Author;
        public int BookMenu()
        {
            Console.WriteLine("1. Add Book");
            Console.WriteLine("2. Display Book");
            Console.WriteLine("3.Remove Book");
            Console.WriteLine("4. Exit");
            Console.Write("Enter your choice: ");
            int choice = int.Parse(Console.ReadLine());
            return choice;
        }
        public void displaybook(List<Lab2Task1Book> booklist)
        {
            Console.WriteLine("Book ID" + "\t" + "Book Title" + "\t" + "Book Author");
            for(int i = 0; i < booklist.Count; i++)
            {
                Console.WriteLine(booklist[i].Id + "\t" + booklist[i].Title + "\t" + booklist[i].Author);
            }
            Console.ReadKey();
        }
        public void removebook(List<Lab2Task1Book> booklist)
        {
            Console.Write("Enter the Book ID to remove: ");
            string id = Console.ReadLine();
            int foundindex = -1;
            bool found = false;
            for(int i = 0; i < booklist.Count; i++)
            {
                if (booklist[i].Id == id)
                {
                    foundindex = i;
                    found = true;
                }
            }
            if(found == true)
            {
                booklist.RemoveAt(foundindex);
            }
        }
    }
}
