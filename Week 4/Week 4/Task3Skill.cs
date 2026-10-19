using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Week_4
{
    public class Task3Skill
    {
        public string Name;
        public float Damage;
        public float Penetration;
        public float Cost;
        public float Heal;
        public string Description;
        public Task3Skill(string Name, float Damage, float Penetration, float Cost, float Heal, string Description)
        {
            this.Name = Name;
            this.Damage = Damage;
            this.Penetration = Penetration;
            this.Cost = Cost;
            this.Heal = Heal;
            this.Description = Description;
        }
    }
}
