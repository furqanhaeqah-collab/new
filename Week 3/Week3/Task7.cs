using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Week3
{
    public class Task7
    {
        public string CarName;
        public int Speed;
        public int Accelaration;
        public int FuelLevel;
        public int DamageLevel;
        public int Position;
        public int LapCount;
        public void Accelerate(int time)
        {
            if (FuelLevel <= 0)
            {
                Console.WriteLine(CarName + " is out of fuel and cannot accelerate!");
                Speed = 0;
                return;
            }

            if (DamageLevel >= 100)
            {
                Console.WriteLine(CarName + " is completely wrecked and cannot drive!");
                Speed = 0;
                return;
            }
            Position = Position + (Speed * time);
            FuelLevel = FuelLevel - (5 * time);
            if(DamageLevel > 80 && Speed > 100)
            {
                Console.WriteLine(CarName + " can hit an obstacle!");
                DamageLevel++;
            }
        }
        public int Refuel()
        {
            return FuelLevel = 100;
        }
        public int Repair()
        {
            return DamageLevel = 0;
        }
        public int CompleteLap()
        {
            return LapCount++;
        }
        public void DisplayStatus()
        {
            Console.WriteLine("==============================");
            Console.WriteLine(" CAR STATUS: " + CarName);
            Console.WriteLine("==============================");
            Console.WriteLine($" Speed        : " + Speed + " km/h");
            Console.WriteLine($" Acceleration : " + Accelaration + " m/s²");
            Console.WriteLine($" Fuel Level   : " + FuelLevel);
            Console.WriteLine($" Damage Level : " + DamageLevel);
            Console.WriteLine($" Position     : " + Position + " meters");
            Console.WriteLine($" Lap Count    : " + LapCount);
            Console.WriteLine("==============================");
        }
    }
}
