using Buissness_Application.Model;
using Buissness_Application.Repositries;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Claims;
using System.Text;
using System.Threading.Tasks;

namespace Buissness_Application.Service
{
    public class UserService
    {
        private readonly UserRepositries _repositry;
        public UserService()
        {
            _repositry = new UserRepositries();
        }
        public void AddUserService(UserModel user)
        {
            _repositry.SaveObject(user);
            List<UserModel> UserList = new List<UserModel>();
            UserList = _repositry.GetData();
            UserList.Add(user);
        }
        public List<UserModel> ViewUserService()
        {
            List<UserModel> UserList = new List<UserModel>();
            UserList = _repositry.GetData();
            return UserList;
        }
        public string FindUser(string u, string p)
        {
            List<UserModel> UserList = new List<UserModel>();
            UserList = _repositry.GetData();
            foreach (var i in UserList)
            {
                if (i.Username == u && i.Password == p)
                {
                    return i.Role;
                }
            }
            return null;
        }
    }
}
