using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;

namespace Week_4
{
    public class PTask5
    {
        public string name;
        public string memberId;
        public List<string> booksBought;
        public int numBooksBought;
        public float moneyInBank;
        public float amountSpent;
        public PTask5() { }
        public PTask5(string name, string memberId, float moneyInBank)
        {
            this.name = name;
            this.memberId = memberId;
            this.moneyInBank = moneyInBank;
            booksBought = new List<string>();
        }
        public void ShowMember()
        {
            Console.WriteLine("Name: " + name);
            Console.WriteLine("Member ID: " + memberId);
            Console.WriteLine("Money in Bank: " + moneyInBank);
            Console.WriteLine("Number of Books Bought: " + booksBought);
            Console.WriteLine("Total Amount Spent: " + memberId);
            Console.WriteLine("Books Bought:");
            if (booksBought.Count == 0)
            {
                Console.WriteLine("  None");
            }
            else
            {
                foreach (var b in booksBought)
                {
                    Console.WriteLine("- " + b);
                }
            }
        }
        public void BooksBought(string bookTitle, float cost)
        {
            booksBought.Add(bookTitle);
            numBooksBought++;
            amountSpent = amountSpent + cost;
        }
    }
}
