using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Week3
{
    public class Task11
    {
        public string Title;
        public string Author;
        public int publicationYear;
        public int price;
        public int quantityInStock;
        public Task11() { }
        public Task11(string Title,string Author, int publicationYear, int price, int quantityInStock)
        {
            this.Title = Title;
            this.Author = Author;
            this.publicationYear = publicationYear;
            this.price = price;
            this.quantityInStock = quantityInStock;
        }
        public int Menu()
        {
            Console.WriteLine("-------Menu--------");
            Console.WriteLine("1.Create single object of calculator");
            Console.WriteLine("2.Change Values of Attributes");
            Console.WriteLine("3.Add");
            Console.WriteLine("4.Subtract");
            Console.WriteLine("5.Multiply");
            Console.WriteLine("6.Divide");
            Console.WriteLine("8.Exit");
            Console.WriteLine("Enter option: ");
            int option = int.Parse(Console.ReadLine());
            return option;
        }
        public void getTitle(List<Task11>blist)
        {
            for(int i = 0; i < blist.Count; i++)
            {
                Console.WriteLine("Book Title: " + blist[i].Title);
            }
        }
        public void getAuthor(string book, List<Task11> blist)
        {
            for (int i = 0; i < blist.Count; i++)
            {
                if(book == blist[i].Title)
                {
                    Console.WriteLine("Book Author: " + blist[i].Author);
                }
            }
        }
        public void getPublicationYear(List<Task11> blist)
        {
            for (int i = 0; i < blist.Count; i++)
            {
                Console.WriteLine("Book Publication Year: " + blist[i].publicationYear);
            }
        }
        public void getPrice(List<Task11> blist)
        {
            for (int i = 0; i < blist.Count; i++)
            {
                Console.WriteLine("Book Price: " + blist[i].price);
            }
        }
        public int sellCopies(int numOfCopies)
        {
            if(numOfCopies <= quantityInStock)
            {
                return quantityInStock = quantityInStock - numOfCopies;
            }
            else
            {
                Console.WriteLine("Not enough copies available");
                return quantityInStock;
            }
        }
        public int restock(int addCopies)
        {
            return quantityInStock = quantityInStock + addCopies;
        }
        public void bookDetails(List<Task11> blist)
        {
            Console.WriteLine("----------------------------------");
            Console.WriteLine("Book Details:");
            Console.WriteLine("----------------------------------");
            Console.WriteLine("Title\tAuthor\tPublication Year\tPrice\tQuantity In Stock");
            Console.WriteLine("----------------------------------");
            for (int i =0; i < blist.Count;i++)
            {
                Console.WriteLine("----------------------------------");
                Console.WriteLine(blist[i].Title + "\t" + blist[i].Author + "\t" + blist[i].publicationYear 
                    + "\t" + blist[i].price + "\t" + blist[i].quantityInStock);
                Console.WriteLine("----------------------------------");
            }
        }
    }
}
