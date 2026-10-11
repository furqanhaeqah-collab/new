using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HomeTask2
{
    public class Enemy
    {
        public int X = 30;
        public int Y = 10;
        public const int Width = 6;
        public const int Height = 4;
        public int direction = 1;
        public string[] shape = { "   ---", "<==(-)", "   \\@/", "   ***" };
        public void Draw()
        {
            for (int i = 0; i < shape.Length; i++)
            {
                Console.SetCursorPosition(X, Y + i);
                Console.Write(shape[i]);
            }
        }
        public void Erase()
        {
            for (int i = 0; i < shape.Length; i++)
            {
                Console.SetCursorPosition(X, Y + i);
                Console.Write("      ");
            }
        }
        public void Move()
        {
            int newY = Y + direction;
            if (newY < 1 || newY + Height - 1 > Maze.Height - 2)
            {
                direction = -direction;
            }
            else
            {
                Erase();
                Y = newY;
                Draw();
            }
        }
        public bool IsHit(int x, int y)
        {
            return x >= X && x < X + Width && y >= Y && y < Y + Height;
        }
    }
}
