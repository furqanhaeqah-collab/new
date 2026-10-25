using Buissness_Application.Model;
using Buissness_Application.Repositries;
using Buissness_Application.UI;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace Buissness_Application.Service
{
    public class CustomerService
    {
        private readonly CustomerRepositries _repositry;
        public CustomerService()
        {
            _repositry = new CustomerRepositries();
        }
        public void AddCustomerCredentialsService(CustomerModel customer)
        {
            _repositry.SaveObject(customer);
        }
        public List<CustomerModel> CustomerList()
        {
            return _repositry.GetData();
        }
        public int FindCustomerService(string Name)
        {
            List<CustomerModel> CustomerList = new List<CustomerModel>();
            CustomerList = _repositry.GetData();
            for (int i = 0; i < CustomerList.Count; i++)
            {
                if (CustomerList[i].CustomerName == Name)
                {
                    return i;
                }
            }
            return -1;
        }
        public void DeleteCustomerService(int i)
        {
            List<CustomerModel> CustomerList = new List<CustomerModel>();
            CustomerModel customer = new CustomerModel();
            _repositry.ClearData();
            customer = CustomerList[i];
            CustomerList.Remove(customer);
            _repositry.SaveList(CustomerList);
        }
    }
}
