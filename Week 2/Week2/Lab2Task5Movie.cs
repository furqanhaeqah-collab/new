using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Threading.Tasks;

namespace Week2
{
    public class Lab2Task5Movie
    {
        public string ID;
        public string Title;
        public int Duration;
        public Lab2Task5Movie(string ID, string Title, int Duration)
        {
            this.ID = ID;
            this.Title = Title;
            this.Duration = Duration;
        }
        public Lab2Task5Movie() { }
        public int MovieMenu()
        {
            Console.WriteLine("----Movie Menu----");
            Console.WriteLine("1.Add Movie");
            Console.WriteLine("2.View All Movies");
            Console.WriteLine("3.Search Movies");
            Console.WriteLine("4.Exit");
            Console.Write("Enter your option: ");
            int option = int.Parse(Console.ReadLine());
            return option;
        }
        public void ViewAllMovies(List<Lab2Task5Movie> movielist)
        {
            Console.WriteLine("Movie ID\tTitle\tDuration");
            for (int i = 0; i < movielist.Count; i++)
            {
                Console.WriteLine(movielist[i].ID + "\t" + movielist[i].Title + "\t" + movielist[i].Duration);
            }
        }
        public void SearchMovie(List<Lab2Task5Movie> movielist)
        {
            Console.Write("Enter Movie ID: ");
            string Id = Console.ReadLine();
            int foundindex3 = -1;
            bool found = false;
            for (int i = 0; i < movielist.Count; i++)
            {
                if (Id == movielist[i].ID)
                {
                    foundindex3 = i;
                    found = true;
                    break;
                }
            }
            if (found == true)
            {
                Console.WriteLine("Movie Found: " + movielist[foundindex3].Title + " Duration: " + movielist[foundindex3].Duration);
            }
            else
            {
                Console.WriteLine("Movie Not Found");
            }
        }
    }
}
