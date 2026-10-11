using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Week3
{
    public class Task10
    {
        public string word1;
        public string word2;
        public bool game_over;
        public List<string> wordList;
        public Task10() { }
        public void check(Task10 ww1)
        {
            int len1 = word1.Length;
            char w1 = word1[len1 - 1];
            char w2 = word2[0];
            if(w1 == w2)
            {
                wordList.Add(ww1.word1);
                game_over = false;
            }
            else
            {
                game_over = true;
            }
        }
        public bool restart()
        {
            wordList.Clear();
            return game_over = false;
        }
    }
}
