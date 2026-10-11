using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Week2
{
    public class Lab1Task8
    {
        public string name;
        public string password;
        public string role;
        public int UserMenu()
        {
            Console.WriteLine("----User Menu-----");
            Console.WriteLine("1.Sign In");
            Console.WriteLine("2.Sign Up");
            Console.WriteLine("3.Exit");
            Console.Write("Enter your option: ");
            int option = int.Parse(Console.ReadLine());
            return option;
        }
        public string ParseDataComma(string record, int field)
        {
            int comma = 1;
            string item = "";
            for (int x = 0; x < record.Length; x++)
            {
                if (record[x] == ',')
                {
                    comma++;
                }
                else if (comma == field)
                {
                    item = item + record[x];
                }
            }
            return item;
        }
        public void ReadData(string path, List<Lab1Task8> userlist)
        {
            if (File.Exists(path))
            {
                StreamReader fileVariable = new StreamReader(path);
                string record;
                while ((record = fileVariable.ReadLine()) != null)
                {
                    Lab1Task8 credentials = new Lab1Task8();
                    credentials.name = ParseDataComma(record, 1);
                    credentials.password = ParseDataComma(record, 2);
                    credentials.role = ParseDataComma(record, 3);
                    userlist.Add(new Lab1Task8
                    {
                        name = credentials.name,
                        password = credentials.password,
                        role = credentials.role
                    });
                }
                fileVariable.Close();
            }
            else
            {
                Console.WriteLine("Not Exists");
            }
        }
        public void SignIn(List<Lab1Task8> userlist, string n, string p)
        {
            bool found = false;
            for (int i = 0; i < userlist.Count; i++)
            {
                if (userlist[i].name == n && userlist[i].password == p)
                {
                    Console.WriteLine("Login Successful" + userlist[i].role);
                    found = true;
                }
            }
            if(!found)
            {
                Console.WriteLine("Invalid Credentials");
            }
        }
        public void SignUp(string path, string n, string p, string r)
        {
            StreamWriter file = new StreamWriter(path, true);
            file.WriteLine(n + "," + p + "," + r);
            file.Flush();
            file.Close();
        }
    }
}
