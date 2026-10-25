using Buissness_Application.Model;
using Buissness_Application.Repositries;
using Buissness_Application.UI;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Buissness_Application.Service
{
    public class ProductService
    {
        private readonly ProductRepositries _repositry;
        public ProductService()
        {
            _repositry = new ProductRepositries();
        }
        public void AddProductService(ProductModel product)
        {
            _repositry.SaveObject(product);
            List<ProductModel> ProductList = new List<ProductModel>();
            ProductList = _repositry.GetData();
            ProductList.Add(product);
        }
        public int FindProductService(string code)
        {
            List<ProductModel> ProductList = new List<ProductModel>();
            ProductList = _repositry.GetData();
            for (int i = 0; i < ProductList.Count; i++)
            {
                if (ProductList[i].product_code == code)
                {
                    return i;
                }
            }
            return -1;
        }
        public void UpdateProductService(ProductModel product, int i)
        {
            List<ProductModel> ProductList = new List<ProductModel>();
            ProductList = _repositry.GetData();
            ProductList[i] = product;
            _repositry.SaveList(ProductList);
        }
        public ProductModel SearchProductService(int found, string code)
        {
            List<ProductModel> ProductList = new List<ProductModel>();
            ProductList = _repositry.GetData();
            bool isFound = false;
            for (int i = 0; i < ProductList.Count; i++)
            {
                if (ProductList[i].product_code == code)
                {
                    found = i;
                    isFound = true;
                }
            }
            if (isFound == false)
            {
                return null;
            }
            else
            {
                return ProductList[found];
            }
        }
        public void DeleteProductService(int i)
        {
            List<ProductModel> ProductList = new List<ProductModel>();
            ProductModel product = new ProductModel();
            ProductList = _repositry.GetData();
            product = ProductList[i];
            ProductList.Remove(product);
            _repositry.SaveList(ProductList);
        }
        public bool AddSaleService(int i, int product_discount)
        {
            List<ProductModel> ProductList = new List<ProductModel>();
            ProductList = _repositry.GetData();
            if (ProductList[i].product_sale_on == "No")
            {
                ProductList[i].product_sale_on = "Yes";
                ProductList[i].product_discount = product_discount;
                ProductList[i].product_sale = ProductList[i].product_price - (ProductList[i].product_price * (product_discount / 100));
                _repositry.SaveList(ProductList);
                return true;
            }
            else
            {
                return false;
            }
        }
        public bool RemoveSaleService(int i)
        {
            List<ProductModel> ProductList = new List<ProductModel>();
            ProductList = _repositry.GetData();
            if (ProductList[i].product_sale_on == "Yes")
            {
                ProductList[i].product_sale_on = "No";
                ProductList[i].product_discount = 0;
                ProductList[i].product_sale = ProductList[i].product_price;
                _repositry.SaveList(ProductList);
                return true;
            }
            else
            {
                return false;
            }
        }
        public List<ProductModel> ViewProductService()
        {
            return _repositry.GetData();
        }
        public List<ProductModel> ViewSortedDescProductService(List<ProductModel> ProductList)
        {
            ProductList = _repositry.GetData();
            return  ProductList = ProductList.OrderByDescending(p => p.product_price).ToList();
        }
        public List<ProductModel> ViewSortedAscProductService(List<ProductModel> ProductList)
        {
            ProductList = _repositry.GetData();
            return ProductList = ProductList.OrderBy(p => p.product_price).ToList();
        }
    }
}
