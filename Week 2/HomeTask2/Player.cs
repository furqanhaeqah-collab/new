using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HomeTask2
{
    public class Player
    {
        public int X = 5;
        public int Y = 5;
        public string[] shape = { "███-->", "0 0   " };
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
        public void Move(int dx, int dy)
        {
            int newX = X + dx;
            int newY = Y + dy;
            if (newX >= 1 && newX + 5 <= Maze.Width - 2 &&
                newY >= 1 && newY + 1 <= Maze.Height - 2){
                Erase();
                X = newX;
                Y = newY;
                Draw();
            }
        }
    }
}
