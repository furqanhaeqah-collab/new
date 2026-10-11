using System;
using System.Collections.Generic;
using System.Diagnostics.Tracing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Quiz_Practice
{
    //class Student
    //{
    //    public string name;
    //    public int age;
    //}
    internal class Program
    {
        static void Main(string[] args)
        {

            //// Question no 01
            //string path = "C:\\BSCS_2nd_Semester\\OOP Programming\\Week 1\\Words.txt";
            //StreamReader wordsfile = new StreamReader(path);
            //string Record = "";
            //string words = "";
            //while ((Record = wordsfile.ReadLine()) != null)
            //{
            //    words = getData(Record, 1);
            //}
            //int vowelCount = 0;
            //int consonantCount = 0;
            //for (int x = 0; x < words.Length; x++)
            //{
            //    if ((words[x] >= 'a' && words[x] <= 'z') || (words[x] >= 'A' && words[x] <= 'Z'))
            //    {
            //        if (words[x] == 'A' || words[x] == 'E' || words[x] == 'I' || words[x] == 'O' || words[x] == 'U'
            //            || words[x] == 'a' || words[x] == 'e' || words[x] == 'i' || words[x] == 'o' || words[x] == 'u')
            //        {
            //            vowelCount++;
            //        }
            //        else
            //        {
            //            consonantCount++;
            //        }
            //    }
            //}
            //Console.WriteLine(vowelCount + "," + consonantCount);

            //List<Student> stu = new List<Student>();
            //for (int i = 0; i < 9; i++)
            //{
            //    Student student = new Student();
            //    student.name = Console.ReadLine();
            //    student.age = int.Parse(Console.ReadLine());
            //    stu.Add(student);
            //}
            //for(int i = 0; i < stu.Count; i++)
            //{
            //    if (stu[i].name[0] == stu[i+1].name[0]){ }
            //    if (char.ToLower(stu[i].name[0]) == char.ToLower(stu[i + 1].name[0]))
            //    {
            //        // Your code here
            //    }
            //}
            
            //stu.Sort();
            //stu.Sort((y, x) => y.age.CompareTo(x));

            //// Question no 02

            //Console.Write("Enter a word: ");
            //string word = Console.ReadLine();
            //string result = repititeStringC(word);
            //Console.WriteLine(result);
        }
        //static string getData(string record, int field)
        //{
        //    int comma = 1;
        //    string word = "";
        //    for (int i = 0; i < record.Length; i++)
        //    {
        //        if (record[i] == ' ')
        //        {
        //            comma++;
        //        }
        //        else if (comma == field)
        //        {
        //            word = word + record[i];
        //        }
        //    }
        //    return word;
        //}
        //static string repititeStringC(string word)
        //{
        //    string once = "";
        //    for (int i = 0; i < word.Length; i++)
        //    {
        //        int reptitionCount = 0;
        //        for (int j = 0; j < word.Length; j++)
        //        {
        //            if (word[i] == word[j])
        //            {
        //                reptitionCount++;
        //            }
        //        }
        //        if (reptitionCount == 1)
        //        {
        //            once = once + word[i];
        //        }
        //    }
        //    return once;
        //}
    }
}
