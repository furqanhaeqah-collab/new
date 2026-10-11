using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HomeTask1
{
    public class Users
    {
        public string Username;
        public string Password;
        public string Role;
        public Users(string Username, string Password, string Role)
        {
            this.Username = Username;
            this.Password = Password;
            this.Role = Role;
        }
        public string mainMenu()
        {
            Console.WriteLine("------------------------------------------------------------");
            Console.WriteLine("--------------- M & S Brand Management System --------------");
            Console.WriteLine("------------------------------------------------------------");
            Console.WriteLine("1.Admin");
            Console.WriteLine("2.Customer");
            Console.WriteLine("3.Exit");
            Console.Write("Enter your choice: ");
            string mainOption = Console.ReadLine();
            return mainOption;
        }
        public string getField(string record, int field)
        {
            int commaCount = 1;
            string word = "";
            for (int i = 0; i < record.Length; i++)
            {
                if (record[i] == ',')
                {
                    commaCount++;
                }
                else if (commaCount == field)
                {
                    word = word + record[i];
                }
            }
            return word;
        }
        public void mainHeader()
        {
            Console.WriteLine("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
            Console.WriteLine("Welcome to M & S Brand Management System ");
            Console.WriteLine("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        }
        public string who(List<Users> userlist, Users user)
        {
            mainHeader();
            Console.Write("Enter username: ");
            string u = Console.ReadLine();
            Console.Write("Enter password: ");
            string p = Console.ReadLine();
            int index = 0;
            string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\UserRecord.txt";
            StreamReader UserFile = new StreamReader(path);
            string details;
            while ((details = UserFile.ReadLine()) != null)
            {
                user.Username = getField(details, 1);
                user.Password = getField(details, 2);
                user.Role = getField(details, 3);
                userlist.Add(new Users(user.Username, user.Password, user.Role));
                index++;
            }
            UserFile.Close();
            for (int i = 0; i < userlist.Count; i++)
            {
                if (userlist[i].Username == u && userlist[i].Password == p)
                {
                    return userlist[i].Role;
                }
            }
            return "Wrong";
        }
        public void addUserInput(List<Users> userlist)
        {
            Console.WriteLine("---Add a new User---");
            Console.Write("Wnter username: ");
            string u = Console.ReadLine();
            Console.Write("Enter password: ");
            string p = Console.ReadLine();
            Console.Write("Enter role: ");
            string r = Console.ReadLine();
            userlist.Add(new Users(u, p, r));
            string UserRecord = u + "," + p + "," + r + "\n";
            StreamWriter userFile = new StreamWriter("C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\UserRecord.txt");
            userFile.WriteLine(UserRecord);
            userFile.Flush();
            userFile.Close();
            Console.WriteLine("User entered successfully in the system");
        }
        public void viewUsers(List<Users> userlist, Users user)
        {
            int index = 0;
            string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\UserRecord.txt";
            string userRecord;
            StreamReader userFile = new StreamReader(path);
            Console.WriteLine("Username\tPassword\tRecord");
            while ((userRecord = userFile.ReadLine()) != null)
            {
                user.Username = getField(userRecord, 1);
                user.Password = getField(userRecord, 2);
                user.Role = getField(userRecord, 3);
                userlist.Add(new Users(user.Username, user.Password, user.Role));
            }
            userFile.Close();
        }
    }
}
