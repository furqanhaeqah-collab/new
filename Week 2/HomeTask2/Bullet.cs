using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HomeTask2
{
    public class Bullet
    {
        public int X;
        public int Y;
        public bool IsActive = true;
        public Bullet(int x, int y)
        {
            X = x;
            Y = y;
            Draw();
        }
        public void Draw()
        {
            Console.SetCursorPosition(X, Y);
            Console.Write(".");
        }
        public void Erase()
        {
            Console.SetCursorPosition(X, Y);
            Console.Write(" ");
        }
        public void Move()
        {
            Erase();
            X++;
            if (X >= Maze.Width - 1)
            {
                IsActive = false;
            }  
            else
            {
                Draw();
            }
        }
    }
}
