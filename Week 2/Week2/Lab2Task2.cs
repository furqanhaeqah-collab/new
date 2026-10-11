using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Week2
{
    public class Lab2Task2
    {
        public string AccountNumber;
        public string HolderName;
        public int Balance;
        public Lab2Task2(string AccountNumber,string HolderName, int Balance)
        {
            this.AccountNumber = AccountNumber;
            this.HolderName = HolderName;
            this.Balance = Balance;
        }
        public Lab2Task2() { }
        public int BankMenu()
        {
            Console.WriteLine("----Bank Menu----");
            Console.WriteLine("1.Add Account");
            Console.WriteLine("2.Deposit Amount");
            Console.WriteLine("3.Withdraw Amount");
            Console.WriteLine("4.Check Balance");
            Console.WriteLine("5.Exit");
            Console.Write("Enter your option: ");
            int option = int.Parse(Console.ReadLine());
            return option;
        }
        public int deposit(int amount, List<Lab2Task2> banklist)
        {
            Balance += amount;
            return Balance;
        }
        public int withdraw(int amount, List<Lab2Task2> banklist)
        {
            if (amount > Balance)
            {
                Console.WriteLine("Insufficient balance");
                return Balance;
            }
            else
            {
                Balance -= amount;
                return Balance;
            }
        }
        public int check_balance(List<Lab2Task2> banklist)
        {
            Console.Write("Enter Account Number and Holder Name: ");
            string accountNumber = Console.ReadLine();
            string holderName = Console.ReadLine();
            int found_index = -1;
            bool found2 = false;
            for (int i = 0; i < banklist.Count; i++)
            {
                if (accountNumber == banklist[i].AccountNumber && holderName == banklist[i].HolderName)
                {
                    found_index = i;
                    found2 = true;
                }
            }
            if (found2 == true)
            {

                return banklist[found_index].Balance;
            }
            else
            {
                return 0;
            }
        }
    }
}
