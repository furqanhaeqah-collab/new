using Buissness_Application.Model;
using Buissness_Application.Repositries;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Buissness_Application.Service
{
    public class FeedbackService
    {
        private readonly FeedbackRepositries _repositry;
        public FeedbackService()
        {
            _repositry = new FeedbackRepositries();
        }
        public void AddFeedbackService(FeedbackModel review)
        {
            _repositry.SaveObject(review);
        }
        public List<FeedbackModel> ViewFeedbackService()
        {
            return _repositry.GetData();
        }
        public int FindFeddbackService(string name)
        {
            List<FeedbackModel> FeedbackList = new List<FeedbackModel>();
            FeedbackList = _repositry.GetData();
            for(int i = 0; i < FeedbackList.Count; i++)
            {
                if(name == FeedbackList[i].name)
                {
                    return i;
                }
            }
            return -1;
        }
        public void DeleteFeedbackService(int i)
        {
            List<FeedbackModel> FeedbackList = new List<FeedbackModel>();
            FeedbackModel review = new FeedbackModel();
            FeedbackList = _repositry.GetData();
            review = FeedbackList[i];
            FeedbackList.Remove(review);
            _repositry.SaveList(FeedbackList);
        }
    }
}