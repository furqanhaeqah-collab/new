using System;
using System.Collections.Generic;
using System.ComponentModel.Design;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace Week_4
{
    public class Program
    {
        //static List<Task1Student> studentlist = new List<Task1Student>();
        //static List<Task1Degree> programlist = new List<Task1Degree>();
        //static List<Task3Skill> skilllist = new List<Task3Skill>();
        static void Main(string[] args)
        {
            ////--------------------------------
            ////------------Week 4--------------
            ////--------------------------------

            ////-----------Manual 1-------------

            ////----------Task 1----------------
            //int option;
            //do
            //{
            //    option = Menu();
            //    clearScreen();
            //    if (option == 1)
            //    {
            //        if (programlist.Count > 0)
            //        {
            //            Task1Student s = takeInputForStudent();
            //            addIntoStudentList(s);
            //        }
            //    }
            //    else if (option == 2)
            //    {
            //        Task1Degree d = takeInputForDegree();
            //        addIntoDegreeList(d);
            //    }
            //    else if (option == 3)
            //    {
            //        List<Task1Student> sortedStudentList = new List<Task1Student>();
            //        sortedStudentList = sortStudentsByMerit();
            //        giveAdmission(sortedStudentList);
            //        printStudents();
            //    }
            //    else if (option == 4)
            //    {
            //        viewRegisteredStudents();
            //    }
            //    else if (option == 5)
            //    {
            //        string degName;
            //        Console.Write("Enter Degree Name: ");
            //        degName = Console.ReadLine();
            //        viewStudentInDegree(degName);
            //    }
            //    else if (option == 6)
            //    {
            //        Console.Write("Enter the Student Name: ");
            //        string name = Console.ReadLine();
            //        Task1Student s = StudentPresent(name);
            //        if (s != null)
            //        {
            //            viewSubjects(s);
            //            registerSubjects(s);
            //        }
            //    }
            //    else if (option == 7)
            //    {
            //        calculateFeeForAll();
            //    }
            //    clearScreen();
            //}
            //while (option != 8);
            //Console.ReadKey();

            ////----------Task 2----------------
            //Task2Ship sh = new Task2Ship("");

            //while (true)
            //{
            //    int shipoption = ShipMenu();
            //    if (shipoption == 1)
            //    {
            //        Console.WriteLine("Enter Ship Number: ");
            //        sh.number = Console.ReadLine();
            //    }
            //    else if (shipoption == 2)
            //    {
            //        AddAngle(sh);
            //    }
            //    else if (shipoption == 3)
            //    {
            //        sh.ShowAngle();
            //    }
            //    else if (shipoption == 4)
            //    {
            //        Console.WriteLine("Enter ship number: ");
            //        string num = Console.ReadLine();
            //        sh.CheckDirection(num);
            //    }
            //    else if (shipoption == 5)
            //    {
            //        sh.ShowDirection();
            //    }
            //    else if (shipoption == 6)
            //    {
            //        break;
            //    }
            //    else
            //    {
            //        Console.WriteLine("Invalid option");
            //    }
            //}

            ////------------Task 3--------------
            //Task3Player skill1 = new Task3Player("",0,0,0);

            //while (true)
            //{
            //    int Gameoption = GameMenu();
            //    if (Gameoption == 1)
            //    {
            //        AddPlayer();
            //    }
            //    else if (Gameoption == 2)
            //    {
            //        AddSkill();
            //    }
            //    else if (Gameoption == 3)
            //    {
            //        Task3Skill sk1 = new Task3Skill("",0,0,0,0,"");
            //        sk1 = AddSkill();
            //        skill1.learnSkill(sk1);
            //    }
            //    else if (Gameoption == 4)
            //    {
            //        Console.WriteLine("Enter opponent energy: ");
            //        float energy = float.Parse(Console.ReadLine());
            //        float armor = skill1.AttackArmor(energy);
            //        float damage = skill1.AttackDamage();
            //        float energy = skill1.AttackEnergy();
            //        Console.WriteLine("Energy, Damage & Armor: " + energy + " " + damage + " " + armor);
            //    }
            //    else if (Gameoption == 5)
            //    {
            //        break;
            //    }
            //    else
            //    {
            //        Console.WriteLine("Invalid option");
            //    }
            //}

            ////-----------Manual 2-------------

            ////--------Practice Task 1---------
            //PTask1 ref_var = new PTask1("Amna",01,3.0F,1040,1045,380,"Multan",true,false);
            //float  merit = ref_var.calculateMerit();
            //bool check = ref_var.isEligibleforScholorship(merit);
            //if(check == true)
            //{
            //    Console.WriteLine("The student with " + merit + " is eligible for scholorship");
            //}
            //else
            //{
            //    Console.WriteLine("The student with " + merit + " is not eligible for scholorship");
            //}

            ////--------Practice Task 2---------
            //List<string> sampleChapters = new List<string> { "Introduction", "Getting Started", "Advanced C#", "Conclusion" };

            //PTask2 myBook = new PTask2("C# Programming", "Ali", 250, sampleChapters, 45, 30, true);

            //Console.WriteLine("Book Title: " + myBook.Title);
            //Console.WriteLine("Is the book available? " + myBook.IsBookAvailable());
            //Console.WriteLine("Bookmark is on page: " + myBook.GetBookMark());
            //Console.WriteLine("Chapter 2 name: " + myBook.GetChapter(2));

            ////--------Practice Task 3---------
            //PTask3Customer cus = new PTask3Customer();
            //cus.Name = "Sadaf";
            //cus.Address = "Sahiwal";
            //cus.Contact = "03455555555";
            //Console.WriteLine("Customer Details: " + cus.Name + " " + cus.Address + " " + cus.Contact);

            //PTask3Product p2 = new PTask3Product();
            //p2.Name = "Red Saree";
            //p2.Category = "Clothes";
            //p2.Price = 2999;
            //cus.addProducst(p2);

            //PTask3Product p3 = new PTask3Product();
            //p3.Name = "Black Abaya";
            //p3.Category = "Clothes";
            //p3.Price = 1500;
            //cus.addProducst(p3);

            //List<PTask3Product> plist = new List<PTask3Product>();
            //plist = cus.getProduct();
            //for(int i = 0; i < plist.Count; i++)
            //{
            //    Console.WriteLine("Name\t\tCategory\t\tPrice");
            //    Console.WriteLine(plist[i].Name  + "\t" + plist[i].Category + "\t" + plist[i].Price);
            //}

            //float tax = cus.Tax();
            //Console.WriteLine("Tax: " + tax);

            ////--------Practice Task 4---------
            //List<PTask4> books = new List<PTask4>();
            //List<PTask5> members = new List<PTask5>();
            //PTask5 member = new PTask5();
            //int bookCount = 0;
            //int choice;
            //do
            //{
            //    Console.WriteLine("--- LIBRARY MANAGEMENT SYSTEM ---");
            //    Console.WriteLine("1. Add a Book");
            //    Console.WriteLine("2. Search for a Book by Title");
            //    Console.WriteLine("3. Search for a Book by ISBN");
            //    Console.WriteLine("4. Update Stock of a Book");
            //    Console.WriteLine("5. Add a Member");
            //    Console.WriteLine("6. Search Member");
            //    Console.WriteLine("7. Update Member");
            //    Console.WriteLine("8. Buy Books");
            //    Console.WriteLine("9. Show All Members");
            //    Console.WriteLine("10. Exit");
            //    Console.Write("Enter your choice: ");
            //    choice = int.Parse(Console.ReadLine());
            //    if(choice == 1)
            //    {
            //        if (bookCount >= 100)
            //        {
            //            Console.WriteLine("Inventory is full (Max 100 books)!");
            //            break;
            //        }
            //        else
            //        {
            //            Console.Write("Enter title: ");
            //            string title = Console.ReadLine();
            //            Console.Write("Enter number of authors (up to 4): ");
            //            int nAuth = int.Parse(Console.ReadLine());
            //            string[] auths = new string[Math.Min(nAuth, 4)];
            //            for (int i = 0; i < auths.Length; i++)
            //            {
            //                Console.Write($"Enter author {i + 1}: ");
            //                auths[i] = Console.ReadLine();
            //            }
            //            Console.Write("Enter publisher: ");
            //            string publisher = Console.ReadLine();
            //            Console.Write("Enter ISBN: ");
            //            string isbn = Console.ReadLine();
            //            Console.Write("Enter price: ");
            //            float price = float.Parse(Console.ReadLine());
            //            Console.Write("Enter stock quantity: ");
            //            int stock = int.Parse(Console.ReadLine());
            //            Console.Write("Enter year of publication: ");
            //            int year = int.Parse(Console.ReadLine());
            //            books[bookCount] = new PTask4(title, auths, nAuth, publisher, isbn, price, stock, year);
            //            bookCount++;
            //            Console.WriteLine("Book added successfully!");
            //        }
            //    }
            //    else if(choice == 2)
            //    {
            //        Console.WriteLine("Enter book Title: ");
            //        string title = Console.ReadLine();
            //        for(int i = 0; i < books.Count; i++)
            //        {
            //            if (books[i].title == title)
            //            {
            //                Console.WriteLine(books[i].title + " " + books[i].price + " " + books[i].isbn);
            //            }
            //        }
            //    }
            //    else if (choice == 3)
            //    {
            //        Console.WriteLine("Enter book isbn: ");
            //        string isbn = Console.ReadLine();
            //        for (int i = 0; i < books.Count; i++)
            //        {
            //            if (books[i].isbn == isbn)
            //            {
            //                Console.WriteLine(books[i].title + " " + books[i].price + " " + books[i].isbn);
            //            }
            //        }
            //    }
            //    else if (choice == 4)
            //    {
            //        Console.WriteLine("Enter book title: ");
            //        string title = Console.ReadLine();
            //        for (int i = 0; i < books.Count; i++)
            //        {
            //            if (books[i].title == title)
            //            {
            //                Console.WriteLine("Enter the number of stock: ");
            //                books[i].stock = int.Parse(Console.ReadLine());
            //            }
            //        }
            //    }
            //    else if (choice == 5)
            //    {
            //        Console.Write("Enter member name: ");
            //        string name = Console.ReadLine();
            //        Console.Write("Enter member ID: ");
            //        string id = Console.ReadLine();
            //        Console.Write("Enter money in bank: ");
            //        float bank = float.Parse(Console.ReadLine());
            //        members.Add(new PTask5(name, id, bank));
            //        Console.WriteLine("Member added successfully!");
            //    }
            //    else if (choice == 6)
            //    {
            //        Console.WriteLine("Enter your ID: ");
            //        string ID = Console.ReadLine();
            //        for (int i = 0; i < members.Count; i++)
            //        {
            //            if (members[i].memberId == ID)
            //            {
            //                members[i].ShowMember();
            //            }
            //        }
            //    }
            //    else if (choice == 7)
            //    {
            //        Console.WriteLine("Enter your ID: ");
            //        string ID = Console.ReadLine();
            //        for (int i = 0; i < members.Count; i++)
            //        {
            //            if (members[i].memberId == ID)
            //            {
            //                Console.Write("Enter member name: ");
            //                string name = Console.ReadLine();
            //                Console.Write("Enter member ID: ");
            //                string id = Console.ReadLine();
            //                Console.Write("Enter money in bank: ");
            //                float bank = float.Parse(Console.ReadLine());
            //                members.Add(new PTask5(name, id, bank));
            //                Console.WriteLine("Member updated successfully!");
            //            }
            //        }
            //    }
            //    else if (choice == 8)
            //    {
            //        Console.Write("Enter name or ID of the member: ");
            //        PTask5 temp = new PTask5();
            //        string ID = Console.ReadLine();
            //        foreach (var m in members)
            //        {
            //            if (m.name == ID || m.memberId == ID)
            //            {
            //                temp = m;
            //                break;
            //            }
            //        }
            //        if (temp != null)
            //        {
            //            Console.Write("Enter book title bought: ");
            //            string bookTitle = Console.ReadLine();
            //            Console.Write("Enter cost of book: ");
            //            float cost = float.Parse(Console.ReadLine());
            //            temp.BooksBought(bookTitle, cost);
            //            Console.WriteLine("Record updated successfully!");
            //        }
            //        else
            //        {
            //            Console.WriteLine("Member not found.");
            //        }
            //    }
            //    else if (choice == 9)
            //    {
            //        for(int i = 0; i < members.Count; i++)
            //        {
            //            members[i].ShowMember();
            //        }
            //    }
            //    else if (choice == 10)
            //    {
            //        break;
            //    }
            //} 
            //while (choice < 11);
        }
        //static int GameMenu()
        //{
        //    int option;
        //    Console.WriteLine("1. Add Player");
        //    Console.WriteLine("2. Add Skill");
        //    Console.WriteLine("3. Learn Skill");
        //    Console.WriteLine("4. Attck");
        //    Console.WriteLine("5. Exit");
        //    Console.Write("Enter Option: ");
        //    option = int.Parse(Console.ReadLine());
        //    return option;
        //}
        //static void AddPlayer()
        //{
        //    Console.WriteLine("Enter Details for Player: ");
        //    Console.Write("Enter Name: ");
        //    string Name = Console.ReadLine();
        //    Console.WriteLine("Enter Health Point: ");
        //    float hp = float.Parse(Console.ReadLine());
        //    Console.WriteLine("Enter Energy: ");
        //    float Energy = float.Parse(Console.ReadLine());
        //    Console.WriteLine("Enter Armor: ");
        //    float Armor = float.Parse(Console.ReadLine());
        //    Task3Player p1 = new Task3Player(Name, hp, Energy, Armor);
        //}
        //static Task3Skill AddSkill()
        //{
        //    Console.WriteLine("Enter Details for Skill: ");
        //    Console.Write("Enter Name: ");
        //    string Name = Console.ReadLine();
        //    Console.WriteLine("Enter Damage: ");
        //    float damage = float.Parse(Console.ReadLine());
        //    Console.WriteLine("Enter Penetration: ");
        //    float penetration = float.Parse(Console.ReadLine());
        //    Console.WriteLine("Enter Cost: ");
        //    float Cost = float.Parse(Console.ReadLine());
        //    Console.WriteLine("Enter Heal: ");
        //    float Heal = float.Parse(Console.ReadLine());
        //    Console.Write("Enter Description: ");
        //    string Description = Console.ReadLine();
        //    Task3Skill p1 = new Task3Skill(Name, damage, penetration, Cost, Heal, Description);
        //    return p1;
        //}
        //static int ShipMenu()
        //{
        //    int option;
        //    Console.WriteLine("1. Add Ship");
        //    Console.WriteLine("2. Add Angles");
        //    Console.WriteLine("3. View Angles");
        //    Console.WriteLine("4. View Ship Details by name");
        //    Console.WriteLine("5. View Ship Details");
        //    Console.WriteLine("6. Exit");
        //    Console.Write("Enter Option: ");
        //    option = int.Parse(Console.ReadLine());
        //    return option;
        //}
        //static void AddAngle(Task2Ship sh)
        //{
        //    Console.WriteLine("Enter Details for Longitude and Latitude: ");
        //    Console.WriteLine("Enter degree in longitude: ");
        //    int dlong = int.Parse(Console.ReadLine());
        //    Console.WriteLine("Enter minutes in longitude: ");
        //    float mlong = float.Parse(Console.ReadLine());
        //    Console.WriteLine("Enter direction in longitude: ");
        //    char dirlong = char.Parse(Console.ReadLine());
        //    Console.WriteLine("Enter degree in longitude: ");
        //    int dlat = int.Parse(Console.ReadLine());
        //    Console.WriteLine("Enter minutes in longitude: ");
        //    float mlat = float.Parse(Console.ReadLine());
        //    Console.WriteLine("Enter direction in longitude: ");
        //    char dirlat = char.Parse(Console.ReadLine());
        //    Task2Angle a = new Task2Angle(dlong, dlat, mlong, mlat, dirlat, dirlong);
        //    sh.AddList(a);
        //}
        //static Task1Student StudentPresent(string name)
        //{
        //    foreach(Task1Student s in studentlist)
        //    {
        //        if(name == s.name && s.regDegree != null)
        //        {
        //            return s;
        //        }
        //    }
        //    return null;
        //}
        //static void calculateFeeForAll()
        //{
        //    foreach (Task1Student s in studentlist)
        //    {
        //        if(s.regDegree != null)
        //        {
        //            Console.WriteLine(s.name + " has " + s.calculateFee() + " fees");
        //        }
        //    }
        //}
        //static void registerSubjects(Task1Student s)
        //{
        //    Console.WriteLine("Enter how many subjects you want to register");
        //    int count = int.Parse(Console.ReadLine());
        //    for(int x = 0; x < count; x++)
        //    {
        //        Console.WriteLine("Enter the subject Code");
        //        string code = Console.ReadLine();
        //        bool Flag = false;
        //        foreach(Task1Subject sub in s.regDegree.subjects)
        //        {
        //            if(code == sub.code && !(s.regSubject.Contains(sub)))
        //            {
        //                s.regStudentSubject(sub);
        //                Flag = true;
        //                break;
        //            }
        //        }
        //        if(Flag == false)
        //        {
        //            Console.WriteLine("Enter Valid Course");
        //            x--;
        //        }
        //    }
        //}
        //static List<Task1Student> sortStudentsByMerit()
        //{
        //    List<Task1Student> sortedStudentList = new List<Task1Student>();
        //    foreach(Task1Student s in studentlist)
        //    {
        //        s.calculateMerit();
        //    }
        //    sortedStudentList = studentlist.OrderByDescending(o => o.merit).ToList();
        //    return sortedStudentList;
        //}
        //static void giveAdmission(List<Task1Student> sortedStudentList)
        //{
        //    foreach(Task1Student s in sortedStudentList)
        //    {
        //        foreach(Task1Degree d in s.preferences)
        //        {
        //            if (d.seats > 0 && s.regDegree == null)
        //            {
        //                s.regDegree = d;
        //                d.seats--;
        //                break;
        //            }
        //        }
        //    }
        //}
        //static void printStudents()
        //{
        //    foreach (Task1Student s in studentlist)
        //    {
        //        if (s.regDegree != null)
        //        {
        //            Console.WriteLine(s.name + " got Admission in " + s.regDegree.degreeName);
        //        }
        //        else
        //        {
        //            Console.WriteLine(s.name + " did not get Admission");
        //        }
        //    }
        //}
        //static void clearScreen()
        //{
        //    Console.WriteLine("Press any key to Continue..");
        //    Console.ReadKey();
        //    Console.Clear();
        //}
        //static void viewStudentInDegree(string degName)
        //{
        //    Console.WriteLine("Name\tFSC\tEcat\tAge");
        //    foreach (Task1Student s in studentlist)
        //    {
        //        if (s.regDegree != null)
        //        {
        //            if (degName == s.regDegree.degreeName)
        //            {
        //                Console.WriteLine(s.name + "\t" + s.fscMarks + "\t" + s.ecatMarks + "\t" + s.age);
        //            }
        //        }
        //    }
        //}
        //static void viewRegisteredStudents()
        //{
        //    Console.WriteLine("Name\tFSC\tEcat\tAge");
        //    foreach (Task1Student s in studentlist)
        //    {
        //        if (s.regDegree != null)
        //        {
        //            Console.WriteLine(s.name + "\t" + s.fscMarks + "\t" + s.ecatMarks + "\t" + s.age);
        //        }
        //    }
        //}
        //static void addIntoDegreeList(Task1Degree d)
        //{
        //    programlist.Add(d);
        //}
        //static Task1Degree takeInputForDegree()
        //{
        //    string degreeName;
        //    float degreeDuration;
        //    int seats;
        //    Console.Write("Enter Degree Name: ");
        //    degreeName = Console.ReadLine();
        //    Console.Write("Enter Degree Duration: ");
        //    degreeDuration = float.Parse(Console.ReadLine());
        //    Console.Write("Enter Seats for Degree: ");
        //    seats = int.Parse(Console.ReadLine());
        //    Task1Degree degProg = new Task1Degree(degreeName, degreeDuration, seats);
        //    Console.Write("Enter How many Subjects to Enter: ");
        //    int count = int.Parse(Console.ReadLine());
        //    for (int x = 0; x < count; x++)
        //    {
        //        degProg.AddSubject(takeInputForSubject());
        //    }
        //    return degProg;
        //}
        //static Task1Subject takeInputForSubject()
        //{
        //    string code;
        //    string type;
        //    int creditHours;
        //    int subjectFees;
        //    Console.Write("Enter Subject Code: ");
        //    code = Console.ReadLine();
        //    Console.Write("Enter Subject Type: ");
        //    type = Console.ReadLine();
        //    Console.Write("Enter Subject Credit Hours: ");
        //    creditHours = int.Parse(Console.ReadLine());
        //    Console.Write("Enter Subject Fees: ");
        //    subjectFees = int.Parse(Console.ReadLine());
        //    Task1Subject sub = new Task1Subject(code, type, creditHours, subjectFees);
        //    return sub;
        //}
        //static void addIntoStudentList(Task1Student s)
        //{
        //    studentlist.Add(s);
        //}
        //static Task1Student takeInputForStudent()
        //{
        //    string name;
        //    int age;
        //    double fscMarks;
        //    double ecatMarks;
        //    List<Task1Degree> preferences = new List<Task1Degree>();
        //    Console.Write("Enter Student Name: ");
        //    name = Console.ReadLine();
        //    Console.Write("Enter Student Age: ");
        //    age = int.Parse(Console.ReadLine());
        //    Console.Write("Enter Student FSc Marks: ");
        //    fscMarks = double.Parse(Console.ReadLine());
        //    Console.Write("Enter Student Ecat Marks: ");
        //    ecatMarks = double.Parse(Console.ReadLine());
        //    Console.WriteLine("Available Degree Programs");
        //    viewDegreePrograms();
        //    Console.Write("Enter how many preferences to Enter: ");
        //    int Count = int.Parse(Console.ReadLine());
        //    for (int x = 0; x < Count; x++)
        //    {
        //        string degName = Console.ReadLine();
        //        bool flag = false;
        //        foreach(Task1Degree dp in programlist)
        //        {
        //            if (degName == dp.degreeName && !(preferences.Contains(dp)))
        //            {
        //                preferences.Add(dp);
        //                flag = true;
        //            }
        //        }
        //        if (flag == false)
        //        {
        //            Console.WriteLine("Enter Valid Degree Program Name");
        //            x--;
        //        }
        //    }
        //    Task1Student s = new Task1Student(name, age, fscMarks, ecatMarks, preferences);
        //    return s;
        //}
        //static void viewDegreePrograms()
        //{
        //    foreach(Task1Degree dp in programlist)
        //    {
        //        Console.WriteLine(dp.degreeName);
        //    }
        //}
        //static void header()
        //{
        //    Console.WriteLine("**************************************************");
        //    Console.WriteLine("                      UAMS                        ");
        //    Console.WriteLine("**************************************************");
        //}
        //static void viewSubjects(Task1Student s)
        //{
        //    if(s.regDegree != null)
        //    {
        //        Console.WriteLine("Sub Code\tSub Type");
        //        foreach (Task1Subject sub in s.regDegree.subjects)
        //        {
        //            Console.WriteLine(sub.code + "\t\t" + sub.type);
        //        }
        //    }
        //}
        //static int Menu()
        //{
        //    header();
        //    int option;
        //    Console.WriteLine("1. Add Student");
        //    Console.WriteLine("2. Add Degree Program");
        //    Console.WriteLine("3. Generate Merit");
        //    Console.WriteLine("4. View Registered Students");
        //    Console.WriteLine("5. View Students of a Specific Program");
        //    Console.WriteLine("6. Register Subjects for a Specific Student");
        //    Console.WriteLine("7. Calculate Fees for all Registered Students");
        //    Console.WriteLine("8. Exit");
        //    Console.Write("Enter Option: ");
        //    option = int.Parse(Console.ReadLine());
        //    return option;
        //}
    }
}