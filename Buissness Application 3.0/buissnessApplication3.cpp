// Libraries used
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
using namespace std;
// ------------------------------- Function Prototype Start
void mainHeader();
string mainMenu();
string getField(string record, int field);
string who();
string OwnerMenu();
string customerMenu();
void addUserInput();
void viewUsers();
void addProduct();
void addProductToFile(string product_name, int product_price, string product_code, string product_available, string product_sale_on, float product_sale);
void searchProduct();
void UpdateProduct();
void ProductToFile(int found_index, string product_name, int product_price, string product_code, string product_available, string product_sale_on, float product_sale);
void deleteProduct();
void viewProductMenu();
void viewProduct();
void addSaleOnProduct();
void buyProduct();
void cancelOrder();
void buyProductToFile(string product_code, string customer_name, string customer_ph_no, string customer_postal_code);
void sendFeedback();
void FeedbackToFile(string product_code, string product_feedback, string product_rating);
void viewFeedback();
void clearScreen();
void exitMenu();
// ------------------------------- Function Prototype End
// ------------------------------- Data Structures Start
const int TOTAL_USER = 5;
int count_user = 2;
string username_array[TOTAL_USER];
string password_array[TOTAL_USER];
string role_array[TOTAL_USER];
const int TOTAL_PRODUCT = 50;
int count_product = 30;
const int TOTAL_CUSTOMERS = 10000;
int customer_count = 0;
int cart_count = 0;
string product_code_array[TOTAL_PRODUCT];
string product_name_array[TOTAL_PRODUCT];
int product_price_array[TOTAL_PRODUCT];
string product_available_array[TOTAL_PRODUCT];
string product_sale_on_array[TOTAL_PRODUCT];
float product_sale_array[TOTAL_PRODUCT];
string product_feedback_array[TOTAL_PRODUCT];
string product_rating_array[TOTAL_PRODUCT];
string coupon_code_array[TOTAL_PRODUCT];
int coupon_code_discount_array[TOTAL_PRODUCT];
int product_price_after_coupon_discount_array[TOTAL_PRODUCT];
string customer_name_array[TOTAL_CUSTOMERS];
string customer_ph_no_array[TOTAL_CUSTOMERS];
string customer_postal_code_array[TOTAL_CUSTOMERS];
string customer_buy_array[TOTAL_CUSTOMERS];
// ------------------------------- Data Structures End

main() // ------------------------------- Main Function Start
{
    while (true)
    {
        system("cls");
        string mainOption = mainMenu();
        if (mainOption == "1")
        {
            system("cls");
            string w = who();
            if (w == "OWNER" || "MANAGER")
            { // Code of Owner
                string ownerOption = " ";
                while (true) // ----------------------------------------- Start of while loop for Manager
                {
                    system("cls");
                    ownerOption = OwnerMenu();
                    if (ownerOption == "1")
                    {
                        // Code for Add Users
                        addUserInput();
                    }
                    else if (ownerOption == "2")
                    {
                        // Code for View Users
                        viewUsers();
                    }
                    else if (ownerOption == "3")
                    {
                        // Code for Add Product
                        addProduct();
                    }
                    else if (ownerOption == "4")
                    {
                        // Code for Search Product
                        searchProduct();
                    }
                    else if (ownerOption == "5")
                    {
                        // Code for Update Product
                        UpdateProduct();
                    }
                    else if (ownerOption == "6")
                    {
                        // Code for View Product
                        system("Color 05");
                        viewProduct();
                    }
                    else if (ownerOption == "7")
                    {
                        // Code for Delete Product
                        deleteProduct();
                    }
                    else if (ownerOption == "8")
                    {
                        // Code for Add Sale on Product
                        addSaleOnProduct();
                    }
                    else if (ownerOption == "9")
                    {
                        // Code for Exit Admin Menu
                        exitMenu();
                        break;
                    }
                    else
                    {
                        // Code for invalid Option
                        cout << "Invalid Option" << endl;
                        getch();
                    }
                    clearScreen();
                } // ----------------------------------------- End of while loop for Manager
            }
        }
        else if (mainOption == "2")
        { // Code for Customer
            string customerOption = " ";
            while (true) // ------------------------------ Start of While loop for Customer
            {
                system("cls");
                customerOption = customerMenu();
                if (customerOption == "1")
                {
                    // Code for View Products
                    system("Color 06");
                    viewProduct();
                }
                else if (customerOption == "2")
                {
                    // Code for Search Products
                    searchProduct();
                }
                else if (customerOption == "3")
                {
                    // Code for Buy a Product
                    buyProduct();
                }
                else if (customerOption == "4")
                {
                    // Code for Cancel Order
                    cancelOrder();
                }
                else if (customerOption == "5")
                {
                    // Code for Send Feedback
                    sendFeedback();
                }
                else if (customerOption == "6")
                {
                    // Code for View Feedback
                    viewFeedback();
                }
                else if (customerOption == "7")
                {
                    // Code for Exit Customer Menu
                    exitMenu();
                    break;
                }
                else
                {
                    // Code for Invalid Option
                    cout << "Invalid Option" << endl;
                    getch();
                }
                clearScreen();
            } // ------------------------------------------ End of While loop for Customer
        }
        else if (mainOption == "3")
        {
            // Code for exit menu here
            system("cls");
            exitMenu();
            break;
        }
        else
        {
            // Code for Invalid Choice
            cout << "Worng Option selected " << endl;
            getch();
        }
        clearScreen();
    }
} // ------------------------------- Main Function Start
string mainMenu() // ------------------------------- Function Implimentation Start
{
    system("Color 02");
    cout << "------------------------------------------------------------" << endl;
    cout << "--------------- M & S Brand Management System --------------" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "1.Admin    " << endl
         << "2.Customer " << endl
         << "3.Exit     " << endl;
    cout << "Enter your choice: ";
    string mainOption;
    cin >> mainOption;
    return mainOption;
}
string getField(string record, int field)
{
    int commaCount = 1;
    string word;
    for (int i = 0; i < record.length(); i++)
    {
        if (record[i] == ',')
        {
            commaCount++;
        }
        else if (commaCount == field)
        {
            word = word + record[i];
        }
    }
    return word;
}
void mainHeader()
{
    // Buissness Application Pointer Head
    system("cls");
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Welcome to M & S Brand Management System " << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}
string who()
{
    system("cls");
    mainHeader();
    system("Color 08");
    cout << "Enter username: ";
    string username;
    cin >> username;
    cout << "Enter password: ";
    string password;
    cin >> password;
    int index = 0;
    string userRecord;
    fstream userfile;
    userfile.open("UserRecord.txt", ios::in);
    while (!userfile.eof())
    {
        getline(userfile, userRecord);
        username_array[index] = getField(userRecord, 1);
        password_array[index] = getField(userRecord, 2);
        role_array[index] = getField(userRecord, 3);
        index++;
    }
    userfile.close();
    for (int i = 0; i < TOTAL_USER; i++)
    {
        if (username_array[i] == username && password_array[i] == password)
        {
            return role_array[i];
        }
    }
    return "Wrong";
    clearScreen();
}
string OwnerMenu()
{
    system("Color 03");
    mainHeader();
    cout << "----Owner Menu----" << endl;
    cout << "Owner Menu" << endl
         << "1.Add Users" << endl
         << "2.View Users" << endl
         << "3.Add Product" << endl
         << "4.Search Product" << endl
         << "5.Update Product" << endl
         << "6.View Product" << endl
         << "7.Delete Product" << endl
         << "8.Add Sale on Product" << endl
         << "9.Exit" << endl;
    cout << "Enter your choice: ";
    string owner_choice;
    cin >> owner_choice;
    return owner_choice;
}
string customerMenu()
{
    system("Color 04");
    mainHeader();
    cout << "----Customer Menu----" << endl;
    cout << "1.View Product" << endl
         << "2.Search Product" << endl
         << "3.Buy a Product" << endl
         << "4.Cancel Order" << endl
         << "5.Send Feedback" << endl
         << "6.View Feedback" << endl
         << "7.Exit" << endl;
    cout << "Enter your choice: ";
    string customer_choice;
    cin >> customer_choice;
    return customer_choice;
}
void addUserInput()
{
    system("cls");
    cout << "Enter username: ";
    string username;
    cin >> username;
    cout << "Enter password: ";
    string password;
    cin >> password;
    cout << "Enter role: ";
    string role;
    cin >> role;
    if (count_user <= 10)
    {
        count_user++;
        string userRecord = username + "," + password + "," + role + "\n";
        fstream userfile;
        userfile.open("UserRecord.txt", ios::app);
        userfile << userRecord;
        userfile.close();
        cout << "User entered successfully in the system" << endl;
    }
    else
    {
        cout << "No more space to add new users..." << endl;
    }
    clearScreen();
}
void viewUsers()
{
    system("cls");
    int index = 0;
    string userRecord;
    fstream userfile;
    userfile.open("UserRecord.txt", ios::in);
    cout << "Username\tPassword\tRole" << endl;
    while (!userfile.eof())
    {
        getline(userfile, userRecord);
        username_array[index] = getField(userRecord, 1);
        password_array[index] = getField(userRecord, 2);
        role_array[index] = getField(userRecord, 3);
        cout << username_array[index] << "\t"
             << password_array[index] << "\t"
             << role_array[index] << endl;
        index++;
    }

    userfile.close();
    clearScreen();
}
void addProduct()
{
    // Code to Add Product
    system("cls");
    cout << "---Add a new Product---" << endl;
    cout << "Enter the product name: ";
    string product_name;
    cin.ignore();
    getline(cin, product_name);
    cout << "Enter product price: ";
    int product_price;
    cin >> product_price;
    cout << "Enter product code: ";
    string product_code;
    cin.ignore();
    getline(cin, product_code);
    cout << "Enter availability of the product(Yes/No): ";
    string product_available;
    cin >> product_available;
    cout << "Enter whether product is on sale (Yes/No): ";
    string product_sale_on;
    cin >> product_sale_on;
    float product_sale, product_discount;
    if (product_sale_on == "Yes")
    {
        cout << "Enter the amount of discount: ";
        float sale;
        cin >> sale;
        product_discount = (product_price * (sale / 100));
    }
    else
    {
        product_discount = 0;
    }
    clearScreen();
    product_sale = product_price - product_discount;
    addProductToFile(product_name, product_price, product_code, product_available, product_sale_on, product_sale);
}
void addProductToFile(string product_name, int product_price, string product_code, string product_available, string product_sale_on, float product_sale)
{
    string product_record = product_name + "," + to_string(product_price) + "," + product_code + "," + product_available + "," + product_sale_on + "," + to_string(product_sale) + "\n";
    count_product++;
    fstream productfile;
    productfile.open("ProductRecord.txt", ios::app);
    productfile << product_record;
    productfile.close();
}
void searchProduct()
{
    // Code to Search Product
    system("cls");
    cout << "Enter the product code: ";
    string product_code;
    cin.ignore();
    getline(cin, product_code);
    int index = 0;
    string productRecord;
    fstream productfile;
    productfile.open("ProductRecord.txt", ios::in);
    while (!productfile.eof())
    {
        getline(productfile, productRecord);
        product_name_array[index] = getField(productRecord, 1);
        string product_price = getField(productRecord, 2);
        product_price_array[index] = stoi(product_price);
        product_code_array[index] = getField(productRecord, 3);
        product_available_array[index] = getField(productRecord, 4);
        product_sale_on_array[index] = getField(productRecord, 5);
        string product_sale = getField(productRecord, 6);
        product_sale_array[index] = stof(product_sale);
        index++;
    }
    bool is_found = false;
    int found_index = 0;
    for (int i = 0; i < count_product; i++)
    {
        if (product_code_array[i] == product_code)
        {
            is_found = true;
            found_index = i;
        }
    }
    if (is_found == false)
    {
        cout << "No product found" << endl
             << "Invalid product code" << endl;
    }
    else
    {
        cout << "Name\t\tPrice\tCode\tAvalaibility\tOn Sale\tDiscounted price" << endl;
        cout << product_name_array[found_index] << "\t" << product_price_array[found_index] << "\t"
             << product_code_array[found_index] << "\t" << product_available_array[found_index] << "\t\t"
             << product_sale_on_array[found_index] << "\t" << product_sale_array[found_index] << endl;
    }
    clearScreen();
    productfile.close();
}
void UpdateProduct()
{
    // Code to Update Product
    system("cls");
    cout << "Enter the product code: ";
    string product_code;
    cin.ignore();
    getline(cin, product_code);
    int index = 0;
    string productRecord;
    fstream productfile;
    productfile.open("ProductRecord.txt", ios::in);
    while (!productfile.eof())
    {
        getline(productfile, productRecord);
        product_name_array[index] = getField(productRecord, 1);
        string product_price = getField(productRecord, 2);
        product_price_array[index] = stoi(product_price);
        product_code_array[index] = getField(productRecord, 3);
        product_available_array[index] = getField(productRecord, 4);
        product_sale_on_array[index] = getField(productRecord, 5);
        string product_sale = getField(productRecord, 6);
        product_sale_array[index] = stof(product_sale);
        product_feedback_array[index] = getField(productRecord, 7);
        index++;
    }
    bool is_found = false;
    int found_index = 0;
    for (int i = 0; i < count_product; i++)
    {
        if (product_code_array[i] == product_code)
        {
            is_found = true;
            found_index = i;
        }
    }
    if (is_found == false)
    {
        cout << "No product found" << endl
             << "Invalid product code" << endl;
    }
    else
    {
        system("cls");
        cout << "---Update an existing Product---" << endl;
        cout << "Enter the product name: ";
        string product_name;
        cin.ignore();
        getline(cin, product_name);
        cout << "Enter product price: ";
        int product_price;
        cin >> product_price;
        cout << "Enter product code: ";
        string product_code;
        cin.ignore();
        getline(cin, product_code);
        cout << "Enter availability of the product: ";
        string product_available;
        cin >> product_available;
        cout << "Enter whether product is on sale(Yes/No): ";
        string product_sale_on;
        cin >> product_sale_on;
        float product_sale, product_discount;
        float sale;
        if (product_sale_on == "Yes")
        {
            cout << "Enter the amount of discount: ";
            cin >> sale;
            product_discount = (product_price * (sale / 100));
        }
        else
        {
            product_discount = 0;
        }
        product_sale = product_price - product_discount;
        ProductToFile(found_index, product_name, product_price, product_code, product_available, product_sale_on, product_sale);
    }
    clearScreen();
}
void ProductToFile(int found_index, string product_name, int product_price, string product_code, string product_available, string product_sale_on, float product_sale)
{
    fstream productfile;
    productfile.open("ProductRecord.txt", ios::out);
    product_name_array[found_index] = product_name;
    product_price_array[found_index] = product_price;
    product_code_array[found_index] = product_code;
    product_available_array[found_index] = product_available;
    product_sale_on_array[found_index] = product_sale_on;
    product_sale_array[found_index] = product_sale;
    string product_record[TOTAL_PRODUCT];
    for (int i = 0; i < count_product; i++)
    {
        product_record[i] = product_name_array[i] + "," + to_string(product_price_array[i]) + "," + product_code_array[i] + "," + product_available_array[i] + "," + product_sale_on_array[i] + "," + to_string(product_sale_array[i]) + "\n";
        productfile << product_record[i];
    }
    productfile.close();
}
void deleteProduct()
{
    // Code to Delete Product
    system("cls");
    cout << "Enter the product code: ";
    string product_code;
    cin.ignore();
    getline(cin, product_code);
    int index = 0;
    string productRecord;
    fstream productfile;
    productfile.open("ProductRecord.txt", ios::in);
    while (!productfile.eof())
    {
        getline(productfile, productRecord);
        product_name_array[index] = getField(productRecord, 1);
        string product_price = getField(productRecord, 2);
        product_price_array[index] = stoi(product_price);
        product_code_array[index] = getField(productRecord, 3);
        product_available_array[index] = getField(productRecord, 4);
        product_sale_on_array[index] = getField(productRecord, 5);
        string product_sale = getField(productRecord, 6);
        product_sale_array[index] = stof(product_sale);
        index++;
    }
    bool is_found = false;
    int found_index = 0;
    for (int i = 0; i < count_product; i++)
    {
        if (product_code_array[i] == product_code)
        {
            is_found = true;
            found_index = i;
        }
    }
    if (is_found == false)
    {
        cout << "No product found" << endl
             << "Invalid product code" << endl;
    }
    else
    {
        string product_name = " ";
        int product_price = 0;
        string product_code = " ";
        string product_available = " ";
        string product_sale_on = " ";
        float product_sale = 0;
        ProductToFile(found_index, product_name, product_price, product_code, product_available, product_sale_on, product_sale);
    }
    clearScreen();
    productfile.close();
}
void addSaleOnProduct()
{
    // Code to Add Product on sale
    system("cls");
    cout << "Enter the product code: ";
    string product_code;
    cin.ignore();
    getline(cin, product_code);
    int index = 0;
    string productRecord;
    fstream productfile;
    productfile.open("ProductRecord.txt", ios::in);
    while (!productfile.eof())
    {
        getline(productfile, productRecord);
        product_name_array[index] = getField(productRecord, 1);
        string product_price = getField(productRecord, 2);
        product_price_array[index] = stoi(product_price);
        product_code_array[index] = getField(productRecord, 3);
        product_available_array[index] = getField(productRecord, 4);
        product_sale_on_array[index] = getField(productRecord, 5);
        string product_sale = getField(productRecord, 6);
        product_sale_array[index] = stof(product_sale);
        product_feedback_array[index] = getField(productRecord, 7);
        index++;
    }
    bool is_found = false;
    int found_index = 0;
    for (int i = 0; i < count_product; i++)
    {
        if (product_code_array[i] == product_code)
        {
            is_found = true;
            found_index = i;
        }
    }
    if (is_found == false)
    {
        cout << "No product found" << endl
             << "Invalid product code" << endl;
    }
    else
    {
        if (product_sale_on_array[found_index] == "No")
        {
            string product_name = product_name_array[found_index];
            int product_price = product_price_array[found_index];
            string product_code = product_code_array[found_index];
            string product_available = product_available_array[found_index];
            cout << "Enter the amount of discount: ";
            float discount;
            cin >> discount;
            string product_sale_on = "Yes";
            float product_sale = product_price_array[found_index] - (product_price_array[found_index] * (discount / 100));
            ProductToFile(found_index, product_name, product_price, product_code, product_available, product_sale_on, product_sale);
            cout << "Name\t\tPrice\tCode\tAvalaibility\tOn Sale\tDiscounted price" << endl;
            cout << product_name_array[found_index] << "\t" << product_price_array[found_index] << "\t"
                 << product_code_array[found_index] << "\t" << product_available_array[found_index] << "\t\t"
                 << product_sale_on << "\t" << product_sale << endl;
            getch();
        }
        else
        {
            cout << "Discount is already applied to the product." << endl;
        }
    }
    clearScreen();
    productfile.close();
}
void viewProductMenu()
{
    cout << "----------------------------------" << endl;
    cout << "-------- View Product Menu -------" << endl;
    cout << "----------------------------------" << endl;
    cout << "1.All Products" << endl
         << "2.Catogerized Products" << endl
         << "3.View Prdoucts with prices(highest to lowest)" << endl
         << "4.View Prdoucts with prices(lowest to highest)" << endl
         << "5.Product on Sale" << endl
         << "6.Exit" << endl;
}
void viewProduct()
{
    while (true)
    {
        system("cls");
        viewProductMenu();
        cout << "Enter your choice: ";
        int view_product_choice;
        cin >> view_product_choice;
        int index = 0;
        string productRecord;
        fstream productfile;
        productfile.open("ProductRecord.txt", ios::in);
        while (!productfile.eof())
        {
            getline(productfile, productRecord);
            product_name_array[index] = getField(productRecord, 1);
            string product_price = getField(productRecord, 2);
            product_price_array[index] = stoi(product_price);
            product_code_array[index] = getField(productRecord, 3);
            product_available_array[index] = getField(productRecord, 4);
            product_sale_on_array[index] = getField(productRecord, 5);
            string product_sale = getField(productRecord, 6);
            product_sale_array[index] = stof(product_sale);
            index++;
        }
        if (view_product_choice == 1)
        {
            for (int view_index = 0; view_index < count_product; view_index++)
            {
                cout << "Name\t\tPrice\tCode\tAvalaibility\tOn Sale\tDiscounted Price" << endl;
                cout << product_name_array[view_index] << "\t" << product_price_array[view_index] << "\t"
                     << product_code_array[view_index] << "\t" << product_available_array[view_index] << "\t\t"
                     << product_sale_on_array[view_index] << "\t" << product_sale_array[view_index] << endl;
            }
            clearScreen();
        }
        else if (view_product_choice == 2)
        {
            // Code for view categorized product
            system("cls");
            cout << "Enter the Category of the product: ";
            string category;
            cin >> category;
            for (int product_no = 0; product_no < count_product; product_no++)
            {
                if (category == "Clothes")
                {
                    if (product_code_array[product_no][0] == 'C')
                    {
                        cout << "Product Name\tProduct ID\tProduct Price\tProduct In Stock" << endl;
                        cout << product_name_array[product_no] << "\t" << product_code_array[product_no] << "\t"
                             << product_price_array[product_no] << "\t" << product_available_array[product_no] << endl;
                    }
                }
                else if (category == "Shoes")
                {
                    if (product_code_array[product_no][0] == 'S')
                    {
                        cout << "Product Name\tProduct ID\tProduct Price\tProduct In Stock" << endl;
                        cout << product_name_array[product_no] << "\t" << product_code_array[product_no] << "\t"
                             << product_price_array[product_no] << "\t" << product_available_array[product_no] << endl;
                    }
                }
                else if (category == "Jewellery")
                {
                    if (product_code_array[product_no][0] == 'J')
                    {
                        cout << "Product Name\tProduct ID\tProduct Price\tProduct In Stock" << endl;
                        cout << product_name_array[product_no] << "\t" << product_code_array[product_no] << "\t"
                             << product_price_array[product_no] << "\t" << product_available_array[product_no] << endl;
                    }
                }
                else
                {
                    cout << "Invalid Category" << endl;
                }
            }
            clearScreen();
        }
        else if (view_product_choice == 3)
        {
            // Code for view products from highest to lowest price
            system("cls");
            for (int bubblesort1 = 0; bubblesort1 < count_product - 1; bubblesort1++)
            {
                for (int bubblesort2 = 0; bubblesort2 < count_product - bubblesort1 - 1; bubblesort2++)
                {
                    if (product_price_array[bubblesort2] < product_price_array[bubblesort2 + 1])
                    {
                        string swap_name = product_name_array[bubblesort2];
                        product_name_array[bubblesort2] = product_name_array[bubblesort2 + 1];
                        product_name_array[bubblesort2 + 1] = swap_name;
                        string swap_code = product_code_array[bubblesort2];
                        product_code_array[bubblesort2] = product_code_array[bubblesort2 + 1];
                        product_code_array[bubblesort2 + 1] = swap_code;
                        int swap_price = product_price_array[bubblesort2];
                        product_price_array[bubblesort2] = product_price_array[bubblesort2 + 1];
                        product_price_array[bubblesort2 + 1] = swap_price;
                        string swap_available = product_available_array[bubblesort2];
                        product_available_array[bubblesort2] = product_available_array[bubblesort2 + 1];
                        product_available_array[bubblesort2 + 1] = swap_available;
                    }
                }
            }
            for (int sort = 0; sort < count_product; sort++)
            {
                cout << "Product Name\tProduct ID\tProduct Price\tProduct Availibility" << endl;
                cout << product_name_array[sort] << "\t" << product_code_array[sort] << "\t"
                     << product_price_array[sort] << "\t" << product_available_array[sort] << endl;
            }
            clearScreen();
        }
        else if (view_product_choice == 4)
        {
            // Code for view product from lowest to highest price
            system("cls");
            for (int bubblesort1 = 0; bubblesort1 < count_product; bubblesort1++)
            {
                for (int bubblesort2 = 0; bubblesort2 < count_product - bubblesort1 - 1; bubblesort2++)
                {
                    if (product_price_array[bubblesort2] > product_price_array[bubblesort2 + 1])
                    {
                        string swap_name = product_name_array[bubblesort2];
                        product_name_array[bubblesort2] = product_name_array[bubblesort1];
                        product_name_array[bubblesort1] = swap_name;
                        string swap_code = product_code_array[bubblesort2];
                        product_code_array[bubblesort2] = product_code_array[bubblesort1];
                        product_code_array[bubblesort1] = swap_code;
                        int swap_price = product_price_array[bubblesort2];
                        product_price_array[bubblesort2] = product_price_array[bubblesort1];
                        product_price_array[bubblesort1] = swap_price;
                        string swap_available = product_available_array[bubblesort2];
                        product_available_array[bubblesort2] = product_available_array[bubblesort1];
                        product_available_array[bubblesort1] = swap_available;
                    }
                }
            }
            for (int sort = 0; sort < count_product; sort++)
            {
                cout << "Product Name\tProduct ID\tProduct Price\tProduct Availibility" << endl;
                cout << product_name_array[sort] << "\t" << product_code_array[sort] << "\t"
                     << product_price_array[sort] << "\t" << product_available_array[sort] << endl;
            }
            clearScreen();
        }
        else if (view_product_choice == 5)
        {
            // Code to View Products on Sale
            for (int view_index = 0; view_index < count_product; view_index++)
            {
                if (product_sale_on_array[view_index] == "Yes")
                {
                    cout << "Name\t\tPrice\tCode\tAvalaibility\tOn Sale\tDiscounted Price" << endl;
                    cout << product_name_array[view_index] << "\t" << product_price_array[view_index] << "\t"
                         << product_code_array[view_index] << "\t" << product_available_array[view_index] << "\t\t"
                         << product_sale_on_array[view_index] << "\t" << product_sale_array[view_index] << endl;
                }
            }
            clearScreen();
        }
        else if (view_product_choice == 6)
        {
            exitMenu();
            break;
        }
        else
        {
            cout << "Invalid Choice" << endl;
            clearScreen();
        }
        productfile.close();
    }
}
void buyProduct()
{
    // Code for Bying
    system("cls");
    cout << "Enter the Product ID: ";
    string product_code;
    cin.ignore();
    getline(cin, product_code);
    int index = 0;
    string productRecord;
    fstream productfile;
    productfile.open("ProductRecord.txt", ios::in);
    while (!productfile.eof())
    {
        getline(productfile, productRecord);
        product_name_array[index] = getField(productRecord, 1);
        string product_price = getField(productRecord, 2);
        product_price_array[index] = stoi(product_price);
        product_code_array[index] = getField(productRecord, 3);
        index++;
    }
    int found_index = 0;
    bool is_found = false;
    for (int i = 0; i < count_product; i++)
    {
        if (product_code_array[i] == product_code)
        {
            found_index = i;
            is_found = true;
        }
    }
    if (is_found == false)
    {
        cout << "Invalid credentials" << endl
             << "Try again" << endl;
    }
    else
    {
        system("cls");
        cout << "Product ID: \t" << product_code_array[found_index] << endl;
        cout << "Product name: \t" << product_name_array[found_index] << endl;
        cout << "Product price before coupon discount: \t" << product_price_array[found_index] << endl;
        cout << "Enter a Coupon code: ";
        string coupon_code;
        cin >> coupon_code;
        int coupon_index = 0;
        string couponRecord;
        fstream couponfile;
        couponfile.open("CouponDiscountRecord.txt", ios::in);
        while (!couponfile.eof())
        {
            getline(couponfile, couponRecord);
            coupon_code_array[coupon_index] = getField(couponRecord, 1);
            string coupon_discount = getField(couponRecord, 2);
            coupon_code_discount_array[coupon_index] = stoi(coupon_discount);
            coupon_index++;
        }
        bool is_found_code = false;
        int found_code_index = 0;
        for (int i = 0; i < TOTAL_PRODUCT; i++)
        {
            if (coupon_code_array[i] == coupon_code)
            {
                found_code_index = i;
                is_found_code = true;
            }
        }
        if (is_found_code == false)
        {
            cout << "Invalid coupon code" << endl;
            getch();
        }
        else
        {
            string customer_name;
            string customer_ph_no;
            string customer_postal_code;
            int product_price_after_coupon_discount = product_price_array[found_index] - (product_price_array[found_index] * (coupon_code_discount_array[found_code_index] / 100));
            cout << "Customer Credentials" << endl;
            cout << "Enter your Name: ";
            cin >> customer_name;
            cout << "Enter your Phone No.: ";
            cin >> customer_ph_no;
            cout << "Enter your postal code: ";
            cin >> customer_postal_code;
            cout << "Product ID:\t" << customer_buy_array[found_index] << endl;
            customer_count++;
            cout << "Enter the price after discount: " << product_price_after_coupon_discount << endl;
            cout << "Product ordered successfully" << endl;
            clearScreen();
            buyProductToFile(product_code, customer_name, customer_ph_no, customer_postal_code);
        }
        couponfile.close();
    }
    productfile.close();
    clearScreen();
}
void buyProductToFile(string product_code, string customer_name, string customer_ph_no, string customer_postal_code)
{
    fstream customerfile;
    string customerRecord;
    customerfile.open("CustomerRecord.txt", ios::app);
    customerRecord = product_code + "," + customer_name + "," + customer_ph_no + "," + customer_postal_code + "\n";
    customerfile << customerRecord;
    customerfile.close();
}
void cancelOrder()
{
    // Code for Track Order
    system("cls");
    cout << "Enter Customer Name: ";
    string customer_name;
    cin.ignore();
    getline(cin, customer_name);
    int index = 0;
    fstream customerfile;
    string customerRecord;
    customerfile.open("CustomerRecord.txt", ios::in);
    while (!customerfile.eof())
    {
        getline(customerfile, customerRecord);
        product_code_array[index] = getField(customerRecord, 1);
        customer_name_array[index] = getField(customerRecord, 2);
        customer_ph_no_array[index] = getField(customerRecord, 2);
        customer_postal_code_array[index] = getField(customerRecord, 4);
        index++;
    }
    bool is_found = false;
    int found_index;
    for (int i = 0; i < count_product; i++)
    {
        if (customer_name_array[i] == customer_name)
        {
            is_found = true;
            found_index = i;
        }
    }
    if (is_found == false)
    {
        cout << "Invalid credentials" << endl
             << "Try again" << endl;
    }
    else
    {
        fstream customerfile;
        string customerRecord;
        customerfile.open("CustomerRecord.txt", ios::app);
        product_code_array[found_index] = " ";
        customer_name_array[found_index] = " ";
        customer_ph_no_array[found_index] = " ";
        customer_postal_code_array[found_index] = " ";
        for(int i =0; i<TOTAL_CUSTOMERS;i++)
        {
            customerRecord = product_code_array[i] + "," + customer_name_array[i] + "," + customer_ph_no_array[i] + "," + customer_postal_code_array[i] + "\n";
            customerfile << customerRecord;
        }
        customerfile.close();
    }
    clearScreen();
}
void sendFeedback()
{
    // Code for Send Feedback
    system("cls");
    cout << "Enter the Product ID: ";
    string product_code;
    cin.ignore();
    getline(cin, product_code);
    int index = 0;
    string productRecord;
    fstream productfile;
    productfile.open("ProductRecord.txt", ios::in);
    while (!productfile.eof())
    {
        getline(productfile, productRecord);
        product_code_array[index] = getField(productRecord, 3);
        product_feedback_array[index] = getField(productRecord, 7);
        string product_rating = getField(productRecord, 8);
        product_rating_array[index] = stoi(product_rating);
        index++;
    }
    bool is_found = false;
    int found_index;
    for (int i = 0; i < count_product; i++)
    {
        if (product_code_array[i] == product_code)
        {
            is_found = true;
            found_index = i;
        }
    }
    if (is_found == false)
    {
        cout << "Invalid credentials" << endl
             << "Try again" << endl;
    }
    else
    {
        cout << "Enter feedback: ";
        string product_feedback;
        cin.ignore();
        getline(cin, product_feedback);
        cout << "Enter rating: ";
        string product_rating;
        cin >> product_rating;
        FeedbackToFile(product_code, product_feedback, product_rating);
    }
    clearScreen();
    productfile.close();
}
void FeedbackToFile(string product_code, string product_feedback, string product_rating)
{
    fstream feedbackfile;
    feedbackfile.open("FeedbackAndRatingRecord.txt", ios::app);
    string feedback_record;
    feedback_record = product_code + "," + product_feedback + "," + product_rating + "\n";
    feedbackfile << feedback_record;
    feedbackfile.close();
}
void viewFeedback()
{
    // Code for View Rating and feedback
    system("cls");
    cout << "Enter the Product ID: ";
    string product_code;
    cin.ignore();
    getline(cin, product_code);
    int index = 0;
    string feedbackRecord;
    fstream feedbackfile;
    feedbackfile.open("FeedbackAndRatingRecord.txt", ios::in);
    while (!feedbackfile.eof())
    {
        getline(feedbackfile, feedbackRecord);
        product_code_array[index] = getField(feedbackRecord, 1);
        product_feedback_array[index] = getField(feedbackRecord, 2);
        product_rating_array[index] = getField(feedbackRecord, 3);
        index++;
    }
    bool is_found = false;
    int found_index;
    for (int i = 0; i < count_product; i++)
    {
        if (product_code_array[i] == product_code)
        {
            is_found = true;
            found_index = i;
        }
    }
    if (is_found == false)
    {
        cout << "Invalid credentials" << endl
             << "Try again" << endl;
    }
    else
    {
        cout << "Product ID\tProduct Price\tProduct Rating\tProduct Feedback" << endl;
        cout << product_code_array[found_index] << "\t" << product_rating_array[found_index]
             << "\t" << product_feedback_array[found_index] << endl;
    }
    clearScreen();
}
void clearScreen()
{
    cout << "Press any key to continue..." << endl;
    getch();
}
void exitMenu()
{
    // Code to exit
    cout << "Exiting Menu" << endl;
    getch();
} // ------------------------------- Function Implimentation End