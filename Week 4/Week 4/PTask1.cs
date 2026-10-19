using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Permissions;
using System.Security.Policy;
using System.Text;
using System.Threading.Tasks;

namespace Week_4
{
    public class PTask1
    {
        public string name;
        public int rollNumber;
        public float cgpa;
        public float matricMarks;
        public float fscMarks;
        public float ecatMarks;
        public string homeTown;
        public bool isHostelite;
        public bool isTakingScholarship;
        public PTask1() { }
        public PTask1(string name,int rollNumber, float cgpa, float matricMarks, float fscMarks, float ecatMarks, string homeTown, bool isHostelite,bool isTakingScholarship) 
        {
            this.name = name;
            this.rollNumber = rollNumber;
            this.cgpa = cgpa;
            this.matricMarks = matricMarks;
            this.ecatMarks = ecatMarks;
            this.fscMarks = fscMarks;
            this.homeTown = homeTown;
            this.isHostelite = isHostelite;
            this.isTakingScholarship = isTakingScholarship;
        }
        public float calculateMerit()
        {
            float merit = ((matricMarks/1100*100) * 0.1F + (fscMarks/1100 * 100) * 0.4F + (ecatMarks/400 * 100) * 0.5F);
            return merit;
        }
        public bool isEligibleforScholorship(float merit)
        {
            if (isTakingScholarship == false)
            {
                if (merit >= 80)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return true;
            }
            
        }
    }
}
