using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Permissions;
using System.Text;
using System.Threading.Tasks;

namespace Week2
{
    public class Lab2Task6
    {
        public string Title1;
        public string Author1;
        public int Price1;
        public Lab2Task6(string Title1,string Author1)
        {
            this.Title1 = Title1;
            this.Author1 = Author1;
        }
        public Lab2Task6() { }
        public int BookMenu()
        {
            Console.WriteLine("----Book Menu----");
            Console.WriteLine("1. Add Book");
            Console.WriteLine("2. Update Books");
            Console.WriteLine("3. Search Books");
            Console.WriteLine("4. Exit");
            Console.Write("Enter your option: ");
            int option = int.Parse(Console.ReadLine());
            return option;
        }
        public void UpdateBook(List<Lab2Task6>listofbook, Lab2Task6 book1)
        {
            Console.Write("Enter the title of the book to update: ");
            string title = Console.ReadLine();
            for(int i = 0; i < listofbook.Count; i++)
            {
                if (title == listofbook[i].Title1)
                {
                    Console.Write("Enter new title: ");
                    Title1 = Console.ReadLine();
                    Console.Write("Enter new author: ");
                    Author1 = Console.ReadLine();
                    Console.Write("Enter new price: ");
                    Price1 = int.Parse(Console.ReadLine());
                    listofbook[i] = book1;
                    Console.WriteLine("Book updated successfully.");
                }
                else
                {
                    Console.WriteLine("Book not found.");
                }
            }
        }
        public void SearchBook(List<Lab2Task6> listofbook)
        {
            Console.Write("Enter the title of the book to search: ");
            string title = Console.ReadLine();
            for (int i = 0; i < listofbook.Count; i++)
            {
                if (title == listofbook[i].Title1)
                {
                    Console.WriteLine("Book found.");
                    Console.WriteLine("Title: " + listofbook[i].Title1);
                    Console.WriteLine("Author: " + listofbook[i].Author1);
                    Console.WriteLine("Price: " + listofbook[i].Price1);
                }
                else
                {
                    Console.WriteLine("Book not found.");
                }
            }
        }
    }
}
