using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Week3
{
    public class Task6
    {
        public string CharachterName;
        public int Level;
        public int HealthPoints;
        public int AttackPower;
        public int DefensePower;
        public int ExperiencePoints;
        public int Stamina;
        public string specialAbility;
        public int Inclevel()
        {
            return Level++;
        }
        public int healthpoints()
        {
            return HealthPoints = HealthPoints - DefensePower;
        }
        public int potionhealth()
        {
            return HealthPoints = 100;
        }
        public int potionstamina()
        {
            return Stamina = 100;
        }
        public int TotalPower()
        {
            return AttackPower + DefensePower;
        }
        public void Display()
        {
            Console.WriteLine("CharachterName\tLevel\tHealthPoints\tStamina");
            Console.WriteLine(CharachterName + "\t" + Level + "\t" + HealthPoints + "\t" + Stamina);
        }
    }
}