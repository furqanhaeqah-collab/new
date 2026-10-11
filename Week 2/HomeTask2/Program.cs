using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace HomeTask2
{
    internal class Program
    {
        static void Main(string[] args)
        {
        Maze maze = new Maze();
        Player tank = new Player();
        Enemy enemy = new Enemy();
        Game game = new Game();
        game.Run(enemy, tank, maze);
        }
    }
}
