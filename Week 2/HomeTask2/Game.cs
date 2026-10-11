using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace HomeTask2
{
    public class Game
    {
        public List<Bullet> bullets = new List<Bullet>();
        public int score = 0;
        public int timer = 0;
        public void PrintScore()
        {
            Console.SetCursorPosition(47, 8);
            Console.Write("Score: " + score);
        }

        public void HandleInput(Player tank)
        {
            while (Console.KeyAvailable)
            {
                ConsoleKey key = Console.ReadKey(true).Key;

                if (key == ConsoleKey.LeftArrow) { tank.Move(-1, 0); }
                if (key == ConsoleKey.RightArrow) { tank.Move(1, 0); }
                if (key == ConsoleKey.UpArrow) { tank.Move(0, -1); }
                if (key == ConsoleKey.DownArrow) { tank.Move(0, 1); }
                if (key == ConsoleKey.Spacebar)
                {
                    bullets.Add(new Bullet(tank.X + 6, tank.Y));
                }
            }
        }
        public void MoveBullets()
        {
            foreach (Bullet b in bullets)
            {
                b.Move();
            }
        }
        public void CheckBulletHits(Enemy enemy)
        {
            foreach (Bullet b in bullets)
            {
                if (b.IsActive && enemy.IsHit(b.X + 1, b.Y))
                {
                    score++;
                    b.Erase();
                    b.IsActive = false;
                }
            }
            bullets.RemoveAll(b => !b.IsActive);
        }
        public void Run(Enemy enemy, Player tank, Maze maze)
        {
            Console.OutputEncoding = Encoding.UTF8;
            Console.CursorVisible = false;
            Console.Clear();
            maze.Print();
            tank.Draw();
            enemy.Draw();
            while (true)
            {
                PrintScore();
                HandleInput(tank);
                if (timer == 3)
                {
                    enemy.Move();
                    timer = 0;
                }
                MoveBullets();
                CheckBulletHits(enemy);
                timer++;
                Thread.Sleep(90);
            }
        }
    }
}
