using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Week2
{
    public class Lab1Task5
    {
        //---------------Task 5----------------
        public float balance;
        public float amount;
        public int option;
        public int ATM_Menu()
        {
            Console.WriteLine("----ATM Menu----");
            Console.WriteLine("1.Deposit Amount");
            Console.WriteLine("2.Withdraw Amount");
            Console.WriteLine("3.Check Balance");
            Console.WriteLine("4.Check Transaction History");
            Console.WriteLine("5.Exit");
            Console.Write("Enter your option: ");
            option = int.Parse(Console.ReadLine());
            return option;
        }
        public float deposit()
        {
            balance += amount;
            return balance;
        }
        public float withdraw()
        {
            if (amount > balance)
            {
                Console.WriteLine("Insufficient balance");
                return balance;
            }
            else
            {
                balance -= amount;
                return balance;
            }
        }
        public float check_balance()
        {
            return balance;
        }
        public void TransactionHistory(List<Lab1Task5> history)
        {
            Console.WriteLine("Balance" + "\t" + "Option" + "\t" + "Amount");
            for (int i = 0; i < history.Count(); i++)
            {
                int choice = history[i].option;
                if (choice == 1)
                {
                    Console.WriteLine(history[i].balance + "\t" + "Deposit" + "\t" + history[i].amount);
                }
                else if (choice == 2)
                {
                    Console.WriteLine(history[i].balance + "\t" + "Withdraw" + "\t" + history[i].amount);
                }
                else
                {
                    Console.WriteLine("No Transaction History....");
                }
            }
        }
    }
}
