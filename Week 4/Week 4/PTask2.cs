using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Threading.Tasks;

namespace Week_4
{
    public class PTask2
    {
        public string Title;
        public string Author;
        public int Pages;
        public List<string> Chapters;
        public int bookMarks;
        public int price;
        public bool isAvailable;
        public PTask2(string Title,string Author,int Pages, List<string>Chapters, int bookMarks, int price,bool isAvailable)
        {
            this.Title = Title;
            this.Author = Author;
            this.Pages = Pages;
            this.Chapters = Chapters;
            this.bookMarks = bookMarks;
            this.price = price;
            this.isAvailable = isAvailable;
        }
        public bool IsBookAvailable()
        {
            return isAvailable;
        }
        public string GetChapter(int chapterNumber)
        {
            if (chapterNumber >= 1 && chapterNumber <= Chapters.Count)
            {
                return Chapters[chapterNumber - 1];
            }
            return "Chapter not found.";
        }
        public int GetBookMark()
        {
            return bookMarks;
        }
    }
}
