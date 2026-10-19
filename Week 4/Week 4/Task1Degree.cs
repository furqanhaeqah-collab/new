using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.ExceptionServices;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace Week_4
{
    public class Task1Degree
    {
        public string degreeName;
        public float degreeDuration;
        public List<Task1Subject> subjects;
        public int seats;
        public Task1Degree(string degreeName, float degreeDuration, int seats)
        {
            this.degreeName = degreeName;
            this.degreeDuration = degreeDuration;
            this.seats = seats;
            subjects = new List<Task1Subject>();
        }
        public int calculateCreditHours()
        {
            int count = 0;
            for (int i = 0; i < subjects.Count; i++)
            {
                count += subjects[i].creditHours;
            }
            return count;
        }
        public bool AddSubject(Task1Subject s)
        {
            int creditHours = calculateCreditHours();
            if(creditHours + s.creditHours <= 20)
            {
                subjects.Add(s);
                return true;
            }
            else
            {
                return false;
            }
        }
        public bool isSubjectExists(Task1Subject sub)
        {
            for(int i = 0; i < subjects.Count; i++)
            {
                if (subjects[i].code == sub.code)
                {
                    return true;
                }
            }
            return false;
        }
    }
}
