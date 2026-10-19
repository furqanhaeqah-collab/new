using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Week_4
{
    public class Task3Player
    {
        public string Name;
        public float Armor;
        public float MaxEnergy;
        public float Energy;
        public float Maxhp;
        public float hp;
        public List<Task3Skill> Skilllist;
        public Task3Player(string Name, float hp, float Energy, float Armor)
        {
            this.Name = Name;
            this.hp = hp;
            this.Energy = Energy;
            this.Armor = Armor;
            Skilllist = new List<Task3Skill>();
        }
        public List<Task3Skill> learnSkill(Task3Skill skillset)
        {
            Skilllist.Add(skillset);
            return Skilllist;
        }
        public float AttackDamage()
        {
            float Damage = 0;
            Damage = Armor - hp;
            return Damage;
        }
        public float AttackEnergy()
        {
            for(int i = 0; i < Skilllist.Count; i++)
            {
                if (Energy < Skilllist[i].Cost) 
                {
                    return 0;
                }
                else
                {
                    Energy = Energy - Skilllist[i].Cost;
                }
            }
            return Energy;
        }
        public float AttackArmor(float enemy)
        {
            return Armor = Armor - enemy;
        }
    }

}