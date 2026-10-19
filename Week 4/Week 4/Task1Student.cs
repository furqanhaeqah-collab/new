using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace Week_4
{
    public class Task1Student
    {
        public string name;
        public int age;
        public double fscMarks;
        public double ecatMarks;
        public double merit;
        public List<Task1Degree> preferences;
        public List<Task1Subject> regSubject;
        public Task1Degree regDegree;
        public Task1Student(string name, int age, double fscMarks, double ecatMarks, List<Task1Degree> preferences)
        {
            this.name = name;
            this.age = age;
            this.fscMarks = fscMarks;
            this.ecatMarks = ecatMarks;
            this.preferences = preferences;
            regSubject = new List<Task1Subject>();
        }
        public Task1Student(string name,int age, double fscMarks,double ecatMarks, double merit, List<Task1Degree> preferences)
        {
            this.name = name;
            this.age = age;
            this.fscMarks = fscMarks;
            this.ecatMarks = ecatMarks;
            this.merit = merit;
            this.preferences = preferences;
            regSubject = new List<Task1Subject>();
        }
        public int getCreditHours()
        {
            int count = 0;
            for(int i = 0; i < regSubject.Count; i++)
            {
                count = count + regSubject[i].creditHours;
            }
            return count;
        }
        public float calculateFee()
        {
            float fee = 0;
            if(regDegree != null)
            {
                for(int i = 0; i < regSubject.Count; i++)
                {
                    fee = fee + regSubject[i].subjectFees;
                }
            }
            return fee;
        }
        public void calculateMerit()
        {
            this.merit = ((fscMarks / 1100) * 0.45F) + ((ecatMarks / 400) * 0.55F) * 100; 
        }
        public bool regStudentSubject(Task1Subject s)
        {
            int CH = getCreditHours();
            if(regDegree != null && regDegree.isSubjectExists(s) && CH + s.creditHours <= 9)
            {
                regSubject.Add(s);
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}
