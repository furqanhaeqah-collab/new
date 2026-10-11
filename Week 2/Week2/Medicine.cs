using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Threading.Tasks;

namespace Week2
{
    public class Medicine
    {
        public string Title;
        public string ExpiryDate;
        public string Price;
        public Medicine(string Title, string ExpiryDate, string Price)
        {
            this.Title = Title;
            this.ExpiryDate = ExpiryDate;
            this.Price = Price;
        }
        public int Menu()
        {
            Console.WriteLine("1. Add Medicine");
            Console.WriteLine("2. View Medicines");
            Console.WriteLine("3. Exit");
            Console.Write("Enter your choice: ");
            int choice = int.Parse(Console.ReadLine());
            return choice;
        }
        public string ParseDataComma(string record, int field)
        {
            int comma = 1;
            string item = "";
            for (int x = 0; x < record.Length; x++)
            {
                if (record[x] == ',')
                {
                    comma++;
                }
                else if (comma == field)
                {
                    item = item + record[x];
                }
            }
            return item;
        }
        public void ReadData(string path, List<Medicine> medicinelist)
        {
            if (File.Exists(path))
            {
                StreamReader fileVariable = new StreamReader(path);
                string record;
                while ((record = fileVariable.ReadLine()) != null)
                {
                    Medicine credentials = new Medicine("","","");
                    credentials.Title = ParseDataComma(record, 1);
                    credentials.ExpiryDate = ParseDataComma(record, 2);
                    credentials.Price = ParseDataComma(record, 3);
                    medicinelist.Add(new Medicine(credentials.Title, credentials.ExpiryDate, credentials.Price));
                }
                fileVariable.Close();
            }
            else
            {
                Console.WriteLine("Not Exists");
            }
        }
        public void AddMedicine(List<Medicine> medicinelist, Medicine medicine, string path)
        {
            Console.Write("Enter medicine title: ");
            medicine.Title = Console.ReadLine();
            Console.Write("Enter expiry date (dd/MM/yyyy): ");
            medicine.ExpiryDate = Console.ReadLine();
            Console.Write("Enter price: ");
            medicine.Price = Console.ReadLine();
            StreamWriter MedicineFile = new StreamWriter(path, true);
            MedicineFile.WriteLine(medicine.Title + "," + medicine.ExpiryDate + "," + medicine.Price);
            MedicineFile.Flush();
            MedicineFile.Close();
            Console.WriteLine("Medicine added successfully!");
        }
        public void displayMedicines(List<Medicine> medicinelist,string path)
        {
            Console.WriteLine("List of Medicines:");
            for(int i=0;i<medicinelist.Count;i++)
            {
                Console.WriteLine($"Title: {medicinelist[i].Title}, Expiry Date: {medicinelist[i].ExpiryDate}, Price: {medicinelist[i].Price}");
            }
        }
    }
}
