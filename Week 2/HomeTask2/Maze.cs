using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HomeTask2
{
    public class Maze
    {
        public const int Width = 45;
        public const int Height = 18;

        public void Print()
        {
            for (int y = 0; y < Height; y++)
            {
                Console.SetCursorPosition(0, y);
                if (y == 0 || y == Height - 1)
                {
                    Console.Write(new string('#', Width));
                }
                else
                {
                    Console.Write("#" + new string(' ', Width - 2) + "#");
                }
                    
            }
        }
    }
}
