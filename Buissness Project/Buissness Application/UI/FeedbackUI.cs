using Buissness_Application.Model;
using Buissness_Application.Repositries;
using Buissness_Application.Service;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Buissness_Application.UI
{
    public class FeedbackUI
    {
        private readonly FeedbackService _service;
        private List<FeedbackModel> FeedbackList;
        public FeedbackUI()
        {
            _service = new FeedbackService();
            FeedbackList = _service.ViewFeedbackService();
        }
        public void SendFeedbackUI()
        {
            // Code for Send Feedback
            FeedbackModel review = new FeedbackModel();
            Console.Write("Enter rating: ");
            review.rating = float.Parse(Console.ReadLine());
            Console.Write("Enter feedback: ");
            review.feedback = Console.ReadLine();
            Console.Write("Enter your name: ");
            review.name = Console.ReadLine();
            _service.AddFeedbackService(review);
        }
        public void ViewFeedback()
        {
            // Code for View Rating and feedback
            Console.WriteLine("Product Rating\tProduct Feedback\tName");
            for (int i = 0; i < FeedbackList.Count; i++)
            {
                Console.WriteLine(FeedbackList[i].rating + "\t" + FeedbackList[i].feedback + "\tby:" + FeedbackList[i].name);
            }
            Console.ReadKey();
        }
        public void SearchFeedback(FeedbackModel review)
        {
            Console.Write("Enter your name: ");
            string name = Console.ReadLine();
            review = _service.FindFeddbackService(name);
            if(review == null)
            {
                Console.WriteLine("Invalid name");
                Console.WriteLine("No record found under this name: " + name);
            }
            else
            {
                Console.WriteLine("Product Rating\tProduct Feedback\tName");
                Console.WriteLine(review.rating + "\t" + review.feedback + "\tby:" + review.name);
            }
            Console.ReadKey();
        }
        public void DeleteFeedback(FeedbackModel review)
        {
            Console.Write("Enter your name: ");
            string name = Console.ReadLine();
            review = _service.FindFeddbackService(name);
            if (review == null)
            {
                Console.WriteLine("Invalid name");
                Console.WriteLine("No record found under this name: " + name);
            }
            else
            {
                _service.DeleteFeedbackService(review);
                Console.WriteLine("Feedback deleted successfully");
            }
            Console.ReadKey();
        }
    }
}
