using Buissness_Application.Model;
using Buissness_Application.Repositries;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Buissness_Application.Service
{
    public class FeedbackService
    {
        private readonly FeedbackRepositries _repositry;
        private List<FeedbackModel> FeedbackList;
        public FeedbackService()
        {
            _repositry = new FeedbackRepositries();
            FeedbackList = _repositry.GetData();
        }
        public void AddFeedbackService(FeedbackModel review)
        {
            _repositry.SaveObject(review);
        }
        public List<FeedbackModel> ViewFeedbackService()
        {
            return _repositry.GetData();
        }
        public FeedbackModel FindFeddbackService(string name)
        {
            FeedbackModel review = new FeedbackModel();
            foreach(var feedback in FeedbackList)
            {
                if(name == feedback.name)
                {
                    return feedback;
                }
            }
            return null;
        }
        public void DeleteFeedbackService(FeedbackModel review)
        {
            FeedbackList.Remove(review);
            _repositry.SaveList(FeedbackList);
        }
    }
}