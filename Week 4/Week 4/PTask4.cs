using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Week_4
{
    public class PTask4
    {
        public string title;
        public string[] authors = new string[4];
        public int numAuthors;
        public string publisher;
        public string isbn;
        public float price;
        public int stock;
        public int yearOfPublication;
        public PTask4() { }
        public PTask4(string title, string[] auths, int numAuthors, string publisher, string isbn, float price, int stock, int yearOfPublication)
        {
            this.title = title;
            authors = auths;
            this.numAuthors = numAuthors;
            this.publisher = publisher;
            this.isbn = isbn;
            this.price = price;
            this.stock = stock;
            this.yearOfPublication = yearOfPublication;
        }
    }
}
