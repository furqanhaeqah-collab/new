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
void whoHeader();
string who();
void addUserInput();
string ownerMenu();
string managerMenu();
string customerMenu();
void clearScreen();
void viewUsers();
void updateUsers();
void updateUserToFile(int found_index, string username, string password, string role);
void deleteUsers();
void deleteUserToFile(int found_index, string username, string password, string role);
void addProduct();
void addProductToFile(string product_name, int product_price, string product_code, string product_available, string product_sale_on, float product_sale);
void searchProductAdmin();
void UpdateProduct();
void updateProductToFile(int found_index, string product_name, int product_price, string product_code, string product_available, string product_sale_on, float product_sale, string product_feedback, int product_rating, string order_status, int order_id);
void deleteProduct();
void deleteProductToFile(int found_index, string product_name, int product_price, string product_code, string product_available, string product_sale_on, float product_sale, string product_feedback, int product_rating, string order_status, int order_id);
void viewPrdouctManagerMenu();
void viewProductManager();
void addSaleOnProduct();
void addSaleOnProductToFile(int found_index, string product_name, int product_price, string product_code, string product_available, string product_sale_on, float product_sale, string product_feedback, int product_rating, string order_status, int order_id);
void viewFeedback();
void viewRating();
void showPendingOrders();
void showDelieveredOrders();
void updateOrderLocation();
void updateProductLocationToFile(int found_index, string product_name, int product_price, string product_code, string product_available, string product_sale_on, float product_sale, string product_feedback, int product_rating, string order_status, int order_id);
void viewProductMenuCustomer();
void viewProductCustomer();
void searchProductCustomer();
void addproductinCart();
void addCartProductToFile(string customer_cart, string customer_name);
void buyProduct();
void buyProductToFile(string product_code, string customer_name, string customer_ph_no, string customer_postal_code);
void trackOrder();
void sendFeedback();
void FeedbackToFile(string product_code, string product_feedback);
void sendRating();
void RatingToFile(string product_code, int product_rating);
void viewRatingAndFeedback();
void exitMenu();
// ------------------------------- Function Prototype End

// ------------------------------- Data Structures Start
const int TOTAL_USER = 10;
int count_user = 2;
string username_array[TOTAL_USER];
string password_array[TOTAL_USER];
string role_array[TOTAL_USER];
const int TOTAL_PRODUCT = 1000;
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
int product_rating_array[TOTAL_PRODUCT];
string order_status_array[TOTAL_PRODUCT];
int order_id_array[TOTAL_PRODUCT];
string coupon_code_array[TOTAL_PRODUCT];
int coupon_code_discount_array[TOTAL_PRODUCT];
int order_id_track_array[TOTAL_PRODUCT];
int product_price_after_coupon_discount_array[TOTAL_PRODUCT];
string customer_name_array[TOTAL_CUSTOMERS];
string customer_email_array[TOTAL_CUSTOMERS];
int customer_postal_code_array[TOTAL_CUSTOMERS];
string customer_cart_array[TOTAL_CUSTOMERS];
string customer_buy_array[TOTAL_CUSTOMERS];
// ------------------------------- Data Structures End

// ------------------------------- Main Function Start
main()
{
    while (true)
    {
        system("cls");
        string mainOption = mainMenu();
        if (mainOption == "1")
        {
            system("cls");
            // Write login code here
            system("cls");
            string w = who();
            if (w == "OWNER")
            {
                // Code for Owner
                string ownerOption = " ";
                while (true) // ----------------------------------------- Start of while loop for Owner
                {
                    system("cls");
                    ownerOption = ownerMenu();
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
                        // Code for Update Users
                        updateUsers();
                    }
                    else if (ownerOption == "4")
                    {
                        // Code for Delete Users
                        deleteUsers();
                    }
                    else if (ownerOption == "5")
                    {
                        // Exit Menu Code
                        exitMenu();
                        break;
                    }
                    else
                    {
                        cout << "Worng option Selected" << endl;
                    }
                } // ----------------------------------------- End of while loop for Owner
            }
            else if (w == "MANAGER")
            {
                // Code for Manager
                string managerOption = " ";
                while (true) // ----------------------------------------- Start of while loop for Manager
                {
                    system("cls");
                    managerOption = managerMenu();
                    if (managerOption == "1")
                    {
                        // Code for Add Product
                        addProduct();
                    }
                    else if (managerOption == "2")
                    {
                        // Code for Search Product
                        searchProductAdmin();
                    }
                    else if (managerOption == "3")
                    {
                        // Code for Update Product
                        UpdateProduct();
                    }
                    else if (managerOption == "4")
                    {
                        // Code for View Product
                        system("Color 05");
                        viewProductManager();
                    }
                    else if (managerOption == "5")
                    {
                        // Code for Delete Product
                        deleteProduct();
                    }
                    else if (managerOption == "6")
                    {
                        // Code for Add Sale on Product
                        addSaleOnProduct();
                    }
                    else if (managerOption == "7")
                    {
                        // Code for Show Customer Feedback
                        viewFeedback();
                    }
                    else if (managerOption == "8")
                    {
                        // Code for Show Customer Rating
                        viewRating();
                    }
                    else if (managerOption == "9")
                    {
                        // Code for Show Pending Orders
                        showPendingOrders();
                    }
                    else if (managerOption == "10")
                    {
                        // Code for Show Delieverd Orders
                        showDelieveredOrders();
                    }
                    else if (managerOption == "11")
                    {
                        // Code for Update Order Status
                        updateOrderLocation();
                    }
                    else if (managerOption == "12")
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
        {
            // Write Customer Code here
            string customerOption = " ";
            while (true) // ------------------------------ Start of While loop for Customer
            {
                system("cls");
                customerOption = customerMenu();
                if (customerOption == "1")
                {
                    // Code for View Products
                    system("Color 06");
                    viewProductCustomer();
                }
                else if (customerOption == "2")
                {
                    // Code for Search Products
                    searchProductCustomer();
                }
                else if (customerOption == "3")
                {
                    // Code for Add Product in cart
                    addproductinCart();
                }
                else if (customerOption == "4")
                {
                    // Code for Buy a Product
                    buyProduct();
                }
                else if (customerOption == "5")
                {
                    // Code for Track Order
                    trackOrder();
                }
                else if (customerOption == "6")
                {
                    // Code for Send Feedback
                    sendFeedback();
                }
                else if (customerOption == "7")
                {
                    // Code for Send Rating
                    sendRating();
                }
                else if (customerOption == "8")
                {
                    // Code for View Rating
                    viewRatingAndFeedback();
                }
                else if (customerOption == "9")
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
}
// ------------------------------- Main Function Start

// ------------------------------- Function Implimentation Start
string mainMenu()
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
void updateUser()
{
    system("cls");
    cout << "Enter the username you want you update: ";
    string username;
    cin >> username;
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
    bool is_found = false;
    int found_index = 0;
    for (int i = 0; i < TOTAL_USER; i++)
    {
        if (username_array[i] == username)
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
        cout << "---Update an existing Product---" << endl;
        cout << "Enter the username: ";
        string username_update;
        cin >> username_update;
        cout << "Enter password: ";
        string user_password;
        cin >> user_password;
        cout << "Enter role: ";
        string user_role;
        cin >> user_role;
        updateUserToFile(found_index, username_update, user_password, user_role);
    }
    clearScreen();
    userfile.close();
}
void updateUserToFile(int found_index, string username, string password, string role)
{
    fstream userfile;
    userfile.open("UserRecord.txt", ios::out);
    username_array[found_index] = username;
    password_array[found_index] = password;
    role_array[found_index] = role;
    string product_record[TOTAL_PRODUCT];
    for (int i = 0; i < count_user; i++)
    {
        string userRecord[i] = username_array[i] + "," + password_array[i] + "," + role_array[i] + "\n";
        userfile << userRecord[i];
    }
    userfile.close();
}
void deleteUser()
{
    system("cls");
    cout << "Enter the username you want you update: ";
    string username;
    cin >> username;
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
    bool is_found = false;
    int found_index = 0;
    for (int i = 0; i < TOTAL_USER; i++)
    {
        if (username_array[i] == username)
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
        string username_update = " ";
        string user_password = " ";
        string user_role = " ";
        updateUserToFile(found_index, username_update, user_password, user_role);
    }
    clearScreen();
    userfile.close();
}
void deleteUserToFile(int found_index, string username, string password, string role)
{
    fstream userfile;
    userfile.open("UserRecord.txt", ios::out);
    username_array[found_index] = username;
    password_array[found_index] = password;
    role_array[found_index] = role;
    string product_record[TOTAL_PRODUCT];
    for (int i = 0; i < count_user; i++)
    {
        string userRecord[i] = username_array[i] + "," + password_array[i] + "," + role_array[i] + "\n";
        userfile << userRecord[i];
    }
    userfile.close();
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
void whoHeader()
{
    system("Color 01");
    cout << "============================================================" << endl
         << "============================================================" << endl
         << "        ~~~ WELCOME TO BRAND MANAGEMENT SYSTEM ~~~          " << endl
         << "============================================================" << endl
         << "============================================================" << endl;
}
string who()
{
    system("cls");
    whoHeader();
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
void mainHeader()
{
    // Buissness Application Pointer Head
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "~~~~~ M & S Brand Management System ~~~~~" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}
string ownerMenu()
{
    system("Color 0E");
    mainHeader();
    // Code for Owner Menu
    // 1.Add Users, 2.View Users, 3.Exit
    cout << "----Owner Menu----" << endl;
    cout << "Owner Menu" << endl
         << "1.Add Users" << endl
         << "2.View Users" << endl
         << "3.Update Users" << endl
         << "4.Delete Users" << endl
         << "5.Exit" << endl;
    cout << "Enter your choice: ";
    string owner_choice;
    cin >> owner_choice;
    return owner_choice;
}
string managerMenu()
{
    system("Color 03");
    mainHeader();
    // Code for Owner Menu
    // 1.Add product, 2.Search Product, 3.Update Product, 4.Delete Product, 5.View Product,
    // 6.Add sale on products, 7.Customer Feedback, 8.Show Customer Rating 9.Show Pending Order,
    // 10.Show Delievered Order 11.Update Order Location  12.Exit
    cout << "----Manager Menu----" << endl;
    cout << "Manager Menu" << endl
         << "1.Add Product" << endl
         << "2.Search Product" << endl
         << "3.Update Product" << endl
         << "4.View Product" << endl
         << "5.Delete Product" << endl
         << "6.Add sale on product" << endl
         << "7.Show Customer Feedback" << endl
         << "8.Show Customer Ratings" << endl
         << "9.Show Pending Orders" << endl
         << "10.Show Delievered Oders" << endl
         << "11.Update Order Status" << endl
         << "12.Exit" << endl;
    cout << "Enter your choice: ";
    string manager_choice;
    cin >> manager_choice;
    return manager_choice;
}
string customerMenu()
{
    system("Color 04");
    mainHeader();
    // Code for Customer Menu
    // 1.View Products, 2.Search Product, 3.Add product in cart, 4.Buy a Product, 5.Track Order
    // 6.Send Feedback, 7.Send Rating, 8.View Rating 9.Exit
    cout << "----Customer Menu----" << endl;
    cout << "1.View Product" << endl
         << "2.Search Product" << endl
         << "3.Add product to cart" << endl
         << "4.Buy a product" << endl
         << "5.Track Order" << endl
         << "6.Send Feedback" << endl
         << "7.Send Rating" << endl
         << "8.View Rating and Feedbacks" << endl
         << "9.Exit" << endl;
    cout << "Enter your choice: ";
    string customer_choice;
    cin >> customer_choice;
    return customer_choice;
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
void searchProductAdmin()
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
        string product_rating = getField(productRecord, 8);
        product_rating_array[index] = stoi(product_rating);
        order_status_array[index] = getField(productRecord, 9);
        string product_order_id = getField(productRecord, 10);
        order_id_array[index] = stoi(product_order_id);
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
        string product_feedback = product_feedback_array[found_index];
        int product_rating = product_rating_array[found_index];
        string order_status = order_status_array[found_index];
        int order_id = order_id_array[found_index];
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
        updateProductToFile(found_index, product_name, product_price, product_code, product_available, product_sale_on, product_sale, product_feedback, product_rating, order_status, order_id);
    }
    clearScreen();
}
void updateProductToFile(int found_index, string product_name, int product_price, string product_code, string product_available, string product_sale_on, float product_sale, string product_feedback, int product_rating, string order_status, int order_id)
{
    fstream productfile;
    productfile.open("ProductRecord.txt", ios::out);
    product_name_array[found_index] = product_name;
    product_price_array[found_index] = product_price;
    product_code_array[found_index] = product_code;
    product_available_array[found_index] = product_available;
    product_sale_on_array[found_index] = product_sale_on;
    product_sale_array[found_index] = product_sale;
    product_feedback_array[found_index] = product_feedback;
    product_rating_array[found_index] = product_rating;
    order_status_array[found_index] = order_status;
    order_id_array[found_index] = order_id;
    string product_record[TOTAL_PRODUCT];
    for (int i = 0; i < count_product; i++)
    {
        product_record[i] = product_name_array[i] + "," + to_string(product_price_array[i]) + "," + product_code_array[i] + "," + product_available_array[i] + "," + product_sale_on_array[i] + "," + to_string(product_sale_array[i]) + "," + product_feedback_array[i] + "," + to_string(product_rating_array[i]) + "," + order_status_array[i] + "," + to_string(order_id_array[i]) + "\n";
        productfile << product_record[i];
    }
    productfile.close();
}
void viewPrdouctManagerMenu()
{
    cout << "-------------------------------" << endl;
    cout << "--- View Product Admin Menu ---" << endl;
    cout << "-------------------------------" << endl;
    cout << "1.All Products" << endl
         << "2.In Stock Product" << endl
         << "3.Out of Stock Product" << endl
         << "4.Product on Sale" << endl
         << "5.Exit" << endl;
}
void viewProductManager()
{
    while (true)
    {
        system("cls");
        viewPrdouctManagerMenu();
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
            // Code to View All Products
            for (int view_index = 0; view_index < count_product; view_index++)
            {
                cout << "Name\t\tPrice\tCode\tAvalaibility\tOn Sale\tDiscounted Price" << endl;
                cout << product_name_array[view_index] << "\t" << product_price_array[view_index] << "\t"
                     << product_code_array[view_index] << "\t" << product_available_array[view_index] << "\t\t"
                     << product_sale_on_array[view_index] << "\t" << product_sale_array[view_index] << endl;
            }
        }
        else if (view_product_choice == 2)
        {

            // Code to View In-Stock Product
            for (int view_index = 0; view_index < count_product; view_index++)
            {
                if (product_available_array[view_index] == "Yes")
                {
                    cout << "Name\t\tPrice\tCode\tAvalaibility\tOn Sale\tDiscounted Price" << endl;
                    cout << product_name_array[view_index] << "\t" << product_price_array[view_index] << "\t"
                         << product_code_array[view_index] << "\t" << product_available_array[view_index] << "\t\t"
                         << product_sale_on_array[view_index] << "\t" << product_sale_array[view_index] << endl;
                }
                else
                {
                    cout << "The product is " << product_code_array[view_index] << " not In-Stock" << endl;
                }
            }
        }
        else if (view_product_choice == 3)
        {
            // Code to View Out of Stock Product
            for (int view_index = 0; view_index < count_product; view_index++)
            {
                if (product_available_array[view_index] == "No")
                {
                    cout << "Name\t\tPrice\tCode\tAvalaibility\tOn Sale\tDiscounted Price" << endl;
                    cout << product_name_array[view_index] << "\t" << product_price_array[view_index] << "\t"
                         << product_code_array[view_index] << "\t" << product_available_array[view_index] << "\t\t"
                         << product_sale_on_array[view_index] << "\t" << product_sale_array[view_index] << endl;
                }
                else
                {
                    cout << "The product " << product_code_array[view_index] << " is not Out of Stock..." << endl;
                }
            }
        }
        else if (view_product_choice == 4)
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
        }
        else if (view_product_choice == 5)
        {
            // Code to Exit
            exitMenu();
            break;
        }
        else
        {
            cout << "Invalid Choice" << endl;
        }
    }
    clearScreen();
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
        product_feedback_array[index] = getField(productRecord, 7);
        string product_rating = getField(productRecord, 8);
        product_rating_array[index] = stoi(product_rating);
        order_status_array[index] = getField(productRecord, 9);
        string product_order_id = getField(productRecord, 10);
        order_id_array[index] = stoi(product_order_id);
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
        string product_feedback = " ";
        int product_rating = 0;
        string order_status = " ";
        int order_id = 0;
        deleteProductToFile(found_index, product_name, product_price, product_code, product_available, product_sale_on, product_sale, product_feedback, product_rating, order_status, order_id);
    }
    clearScreen();
    productfile.close();
}
void deleteProductToFile(int found_index, string product_name, int product_price, string product_code, string product_available, string product_sale_on, float product_sale, string product_feedback, int product_rating, string order_status, int order_id)
{
    fstream productfile;
    productfile.open("ProductRecord.txt", ios::out);
    product_name_array[found_index] = product_name;
    product_price_array[found_index] = product_price;
    product_code_array[found_index] = product_code;
    product_available_array[found_index] = product_available;
    product_sale_on_array[found_index] = product_sale_on;
    product_sale_array[found_index] = product_sale;
    product_feedback_array[found_index] = product_feedback;
    product_rating_array[found_index] = product_rating;
    order_status_array[found_index] = order_status;
    order_id_array[found_index] = order_id;
    string product_record[TOTAL_PRODUCT];
    for (int i = 0; i < count_product; i++)
    {
        product_record[i] = product_name_array[i] + "," + to_string(product_price_array[i]) + "," + product_code_array[i] + "," + product_available_array[i] + "," + product_sale_on_array[i] + "," + to_string(product_sale_array[i]) + "," + product_feedback_array[i] + "," + to_string(product_rating_array[i]) + "," + order_status_array[i] + "," + to_string(order_id_array[i]) + "\n";
        productfile << product_record[i];
    }
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
        string product_rating = getField(productRecord, 8);
        product_rating_array[index] = stoi(product_rating);
        order_status_array[index] = getField(productRecord, 9);
        string product_order_id = getField(productRecord, 10);
        order_id_array[index] = stoi(product_order_id);
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
            string product_feedback = product_feedback_array[found_index];
            int product_rating = product_rating_array[found_index];
            string order_status = order_status_array[found_index];
            int order_id = order_id_array[found_index];
            cout << "Enter the amount of discount: ";
            float discount;
            cin >> discount;
            string product_sale_on = "Yes";
            float product_sale = product_price_array[found_index] - (product_price_array[found_index] * (discount / 100));
            addSaleOnProductToFile(found_index, product_name, product_price, product_code, product_available, product_sale_on, product_sale, product_feedback, product_rating, order_status, order_id);
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
void addSaleOnProductToFile(int found_index, string product_name, int product_price, string product_code, string product_available, string product_sale_on, float product_sale, string product_feedback, int product_rating, string order_status, int order_id)
{
    fstream productfile;
    productfile.open("ProductRecord.txt", ios::out);
    product_name_array[found_index] = product_name;
    product_price_array[found_index] = product_price;
    product_code_array[found_index] = product_code;
    product_available_array[found_index] = product_available;
    product_sale_on_array[found_index] = product_sale_on;
    product_sale_array[found_index] = product_sale;
    product_feedback_array[found_index] = product_feedback;
    product_rating_array[found_index] = product_rating;
    order_status_array[found_index] = order_status;
    order_id_array[found_index] = order_id;
    string product_record[TOTAL_PRODUCT];
    for (int i = 0; i < count_product; i++)
    {
        product_record[i] = product_name_array[i] + "," + to_string(product_price_array[i]) + "," + product_code_array[i] + "," + product_available_array[i] + "," + product_sale_on_array[i] + "," + to_string(product_sale_array[i]) + "," + product_feedback_array[i] + "," + to_string(product_rating_array[i]) + "," + order_status_array[i] + "," + to_string(order_id_array[i]) + "\n";
        productfile << product_record[i];
    }
    productfile.close();
}
void viewFeedback()
{
    // Code to View Customer Feedback
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
        product_code_array[index] = getField(productRecord, 3);
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
        // Code to view feedbacks
        cout << "Feedback on " << product_code_array[found_index] << " is: " << endl
             << product_feedback_array[found_index] << endl;
    }
    clearScreen();
    productfile.close();
}
void viewRating()
{
    // Code to Show Product Rating
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
        product_code_array[index] = getField(productRecord, 3);
        string rating = getField(productRecord, 8);
        product_rating_array[index] = stoi(rating);
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
        // Code to view feedbacks
        cout << "Rating of " << product_code_array[found_index] << " is: " << endl
             << product_rating_array[found_index] << endl;
    }
    clearScreen();
    productfile.close();
}
void showPendingOrders()
{
    system("cls");
    int index = 0;
    string productRecord;
    fstream productfile;
    productfile.open("ProductRecord.txt", ios::in);
    while (!productfile.eof())
    {
        getline(productfile, productRecord);
        product_code_array[index] = getField(productRecord, 3);
        order_status_array[index] = getField(productRecord, 9);
        index++;
    }
    while (count_product != 0)
    {
        if (order_status_array[count_product] == "Pending")
        {
            cout << "The order status of " << product_code_array[count_product] << " is Pending." << endl;
        }
        count_product--;
    }
    clearScreen();
    productfile.close();
}
void showDelieveredOrders()
{
    // Code to Show Delievered Orders
    system("cls");
    int index = 0;
    string productRecord;
    fstream productfile;
    productfile.open("ProductRecord.txt", ios::in);
    while (!productfile.eof())
    {
        getline(productfile, productRecord);
        product_code_array[index] = getField(productRecord, 3);
        order_status_array[index] = getField(productRecord, 9);
        index++;
    }
    while (count_product != 0)
    {
        if (order_status_array[count_product] == "Delivered")
        {
            cout << "The order status of " << product_code_array[count_product] << " is Delivered." << endl;
        }
        count_product--;
    }
    clearScreen();
    productfile.close();
}
void updateOrderLocation()
{
    // Code to Update Order Status
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
        string product_rating = getField(productRecord, 8);
        product_rating_array[index] = stoi(product_rating);
        order_status_array[index] = getField(productRecord, 9);
        string product_order_id = getField(productRecord, 10);
        order_id_array[index] = stoi(product_order_id);
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
        if (product_code_array[found_index] == product_code && (order_status_array[found_index] == "Pending" || order_status_array[found_index] == "Delivered"))
        {
            string product_name = product_name_array[found_index];
            int product_price = product_price_array[found_index];
            string product_code = product_code_array[found_index];
            string product_available = product_available_array[found_index];
            string product_sale_on = product_sale_on_array[found_index];
            float product_sale = product_sale_array[found_index];
            string product_feedback = product_feedback_array[found_index];
            int product_rating = product_rating_array[found_index];
            int order_id = order_id_array[found_index];
            cout << "Enter the current status of order: ";
            string order_status;
            cin >> order_status;
            updateProductLocationToFile(found_index, product_name, product_price, product_code, product_available, product_sale_on, product_sale, product_feedback, product_rating, order_status, order_id);
            cout << "Product ID\tPrice\tOrder Status" << endl;
            cout << product_code_array[found_index] << "\t\t" << product_price_array[found_index] << "\t" << order_status_array[found_index] << endl;
        }
        else
        {
            cout << product_code_array[found_index] << " has not been ordered." << endl;
        }
    }
    clearScreen();
    productfile.close();
}
void updateProductLocationToFile(int found_index, string product_name, int product_price, string product_code, string product_available, string product_sale_on, float product_sale, string product_feedback, int product_rating, string order_status, int order_id)
{
    fstream productfile;
    productfile.open("ProductRecord.txt", ios::out);
    product_name_array[found_index] = product_name;
    product_price_array[found_index] = product_price;
    product_code_array[found_index] = product_code;
    product_available_array[found_index] = product_available;
    product_sale_on_array[found_index] = product_sale_on;
    product_sale_array[found_index] = product_sale;
    product_feedback_array[found_index] = product_feedback;
    product_rating_array[found_index] = product_rating;
    order_status_array[found_index] = order_status;
    order_id_array[found_index] = order_id;
    string product_record[TOTAL_PRODUCT];
    for (int i = 0; i < count_product; i++)
    {
        product_record[i] = product_name_array[i] + "," + to_string(product_price_array[i]) + "," + product_code_array[i] + "," + product_available_array[i] + "," + product_sale_on_array[i] + "," + to_string(product_sale_array[i]) + "," + product_feedback_array[i] + "," + to_string(product_rating_array[i]) + "," + order_status_array[i] + "," + to_string(order_id_array[i]) + "\n";
        productfile << product_record[i];
    }
    productfile.close();
}
void viewProductMenuCustomer()
{
    cout << "----------------------------------" << endl;
    cout << "--- View Product Customer Menu ---" << endl;
    cout << "----------------------------------" << endl;
    cout << "1.All Products" << endl
         << "2.Catogerized Products" << endl
         << "3.View Prdoucts with prices(highest to lowest)" << endl
         << "4.View Prdoucts with prices(lowest to highest)" << endl
         << "5.Product on Sale" << endl
         << "6.Exit" << endl;
}
void viewProductCustomer()
{
    while (true)
    {
        system("cls");
        viewProductMenuCustomer();
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
            product_feedback_array[index] = getField(productRecord, 7);
            string product_rating = getField(productRecord, 8);
            product_rating_array[index] = stoi(product_rating);
            order_status_array[index] = getField(productRecord, 9);
            string product_order_id = getField(productRecord, 10);
            order_id_array[index] = stoi(product_order_id);
            index++;
        }
        if (view_product_choice == 1)
        {
            // Code to View All Products
            for (int view_index = 0; view_index < count_product; view_index++)
            {
                cout << "Name\t\tPrice\tCode\tAvalaibility\tOn Sale\tDiscounted Price" << endl;
                cout << product_name_array[view_index] << "\t" << product_price_array[view_index] << "\t"
                     << product_code_array[view_index] << "\t" << product_available_array[view_index] << "\t\t"
                     << product_sale_on_array[view_index] << "\t" << product_sale_array[view_index] << endl;
            }
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
        }
        else if (view_product_choice == 3)
        {
            // Code for view products from highest to lowest price
            system("cls");
            // Applying bubble sort sorting mechanism
            for (int bubblesort1 = 0; bubblesort1 < TOTAL_PRODUCT - 1; bubblesort1++)
            {
                for (int bubblesort2 = 0; bubblesort2 < TOTAL_PRODUCT - bubblesort2 - 1; bubblesort2++)
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

            // Code to view sorted products
            for (int sort = 0; sort < count_product; sort++)
            {
                cout << "Product Name\tProduct ID\tProduct Price\tProduct Availibility" << endl;
                cout << product_name_array[sort] << "\t" << product_code_array[sort] << "\t"
                     << product_price_array[sort] << "\t" << product_available_array[sort] << endl;
            }
        }
        else if (view_product_choice == 4)
        {
            // Code for view product from lowest to highest price
            system("cls");

            // Applying bubble sort sorting mechanism
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

            // Code to view sorted products
            for (int sort = 0; sort < count_product; sort++)
            {
                cout << "Product Name\tProduct ID\tProduct Price\tProduct Availibility" << endl;
                cout << product_name_array[sort] << "\t" << product_code_array[sort] << "\t"
                     << product_price_array[sort] << "\t" << product_available_array[sort] << endl;
            }
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
        }
        else if (view_product_choice == 6)
        {
            // Code to Exit
            exitMenu();
            break;
        }
        else
        {
            cout << "Invalid Choice" << endl;
        }
        productfile.close();
    }
    clearScreen();
}
void searchProductCustomer()
{
    // Code for Search Product
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
        product_available_array[index] = getField(productRecord, 4);
        product_sale_on_array[index] = getField(productRecord, 5);
        string product_sale = getField(productRecord, 6);
        product_sale_array[index] = stof(product_sale);
        product_feedback_array[index] = getField(productRecord, 7);
        string product_rating = getField(productRecord, 8);
        product_rating_array[index] = stoi(product_rating);
        order_status_array[index] = getField(productRecord, 9);
        string product_order_id = getField(productRecord, 10);
        order_id_array[index] = stoi(product_order_id);
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
        cout << "Product Name\tProduce ID\tPrice\tAvailability\tDiscounted Price" << endl;
        cout << product_name_array[found_index] << "\t" << product_code_array[found_index] << "\t" << product_price_array[found_index] << "\t"
             << product_available_array[found_index] << "\t" << product_sale_array[found_index] << endl;
    }
    clearScreen();
    productfile.close();
}
void addproductinCart()
{
    // Code for Add Product in Cart
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
        product_available_array[index] = getField(productRecord, 4);
        product_sale_on_array[index] = getField(productRecord, 5);
        string product_sale = getField(productRecord, 6);
        product_sale_array[index] = stof(product_sale);
        product_feedback_array[index] = getField(productRecord, 7);
        string product_rating = getField(productRecord, 8);
        product_rating_array[index] = stoi(product_rating);
        order_status_array[index] = getField(productRecord, 9);
        string product_order_id = getField(productRecord, 10);
        order_id_array[index] = stoi(product_order_id);
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
        cart_count++;
    }
    if (is_found == false)
    {
        cout << "Invalid credentials" << endl
             << "Try again" << endl;
    }
    else
    {
        string customer_cart = product_code_array[found_index];
        cout << "Enter your name: ";
        string customer_name;
        cin.ignore();
        getline(cin, customer_name);
        addCartProductToFile(customer_cart, customer_name);
        cout << "Product successfully added to cart" << endl;
    }
    clearScreen();
    productfile.close();
}
void addCartProductToFile(string customer_cart, string customer_name)
{
    fstream customerfile;
    customerfile.open("CustomerRecord.txt", ios::app);
    string customer_record;
    customer_record = customer_cart + "," + customer_name + "\n";
    customerfile << customer_record;
    customerfile.close();
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
        product_available_array[index] = getField(productRecord, 4);
        product_sale_on_array[index] = getField(productRecord, 5);
        string product_sale = getField(productRecord, 6);
        product_sale_array[index] = stof(product_sale);
        product_feedback_array[index] = getField(productRecord, 7);
        string product_rating = getField(productRecord, 8);
        product_rating_array[index] = stoi(product_rating);
        order_status_array[index] = getField(productRecord, 9);
        string product_order_id = getField(productRecord, 10);
        order_id_array[index] = stoi(product_order_id);
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
        // Cart Menu
        // Step 1:View Product ID
        // Step 2:View Product name
        // Step 3:View Product price
        // Step 4:Add a coupon
        // Step 5:View Discounted Price
        // Step 6:Place Order
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
    customerfile.open("CustomerRecord.txt", ios::app);
    string customer_record;
    customer_record = product_code + "," + customer_name + "," + customer_ph_no + "," + customer_postal_code + "\n";
    customerfile << customer_record;
    customerfile.close();
}
void trackOrder()
{
    // Code for Track Order
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
        product_available_array[index] = getField(productRecord, 4);
        product_sale_on_array[index] = getField(productRecord, 5);
        string product_sale = getField(productRecord, 6);
        product_sale_array[index] = stof(product_sale);
        product_feedback_array[index] = getField(productRecord, 7);
        string product_rating = getField(productRecord, 8);
        product_rating_array[index] = stoi(product_rating);
        order_status_array[index] = getField(productRecord, 9);
        string product_order_id = getField(productRecord, 10);
        order_id_array[index] = stoi(product_order_id);
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
        cout << "Enter your Order ID: ";
        int order_id;
        cin >> order_id;
        bool order_found = false;
        int found_order_index = 0;
        for (int order_no = 0; order_no < TOTAL_PRODUCT; order_no++)
        {
            if (order_id_array[order_no] == order_id)
            {
                order_found = true;
                found_order_index = order_no;
            }
        }
        if (order_found == false)
        {
            cout << "Order not found...." << endl;
        }
        else
        {
            cout << "Order Status is: " << order_status_array[found_index] << endl;
        }
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
        product_name_array[index] = getField(productRecord, 1);
        string product_price = getField(productRecord, 2);
        product_price_array[index] = stoi(product_price);
        product_code_array[index] = getField(productRecord, 3);
        product_available_array[index] = getField(productRecord, 4);
        product_sale_on_array[index] = getField(productRecord, 5);
        string product_sale = getField(productRecord, 6);
        product_sale_array[index] = stof(product_sale);
        product_feedback_array[index] = getField(productRecord, 7);
        string product_rating = getField(productRecord, 8);
        product_rating_array[index] = stoi(product_rating);
        order_status_array[index] = getField(productRecord, 9);
        string product_order_id = getField(productRecord, 10);
        order_id_array[index] = stoi(product_order_id);
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
        FeedbackToFile(product_code, product_feedback);
    }
    clearScreen();
    productfile.close();
}
void FeedbackToFile(string product_code, string product_feedback)
{
    fstream feedbackfile;
    feedbackfile.open("FeedbackAndRatingRecord.txt", ios::app);
    string feedback_record;
    feedback_record = product_code + "," + product_feedback + "\n";
    feedbackfile << feedback_record;
    feedbackfile.close();
}
void sendRating()
{
    // Code for Send Rating
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
        product_available_array[index] = getField(productRecord, 4);
        product_sale_on_array[index] = getField(productRecord, 5);
        string product_sale = getField(productRecord, 6);
        product_sale_array[index] = stof(product_sale);
        product_feedback_array[index] = getField(productRecord, 7);
        string product_rating = getField(productRecord, 8);
        product_rating_array[index] = stoi(product_rating);
        order_status_array[index] = getField(productRecord, 9);
        string product_order_id = getField(productRecord, 10);
        order_id_array[index] = stoi(product_order_id);
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
        cout << "Enter rating: ";
        int product_rating;
        cin >> product_rating;
        RatingToFile(product_code, product_rating);
    }
    clearScreen();
}
void RatingToFile(string product_code, int product_rating)
{
    fstream feedbackfile;
    feedbackfile.open("FeedbackAndRatingRecord.txt", ios::app);
    string feedback_record;
    feedback_record = product_code + "," + to_string(product_rating) + "\n";
    feedbackfile << feedback_record;
    feedbackfile.close();
}
void viewRatingAndFeedback()
{
    // Code for View Rating and feedback
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
        product_available_array[index] = getField(productRecord, 4);
        product_sale_on_array[index] = getField(productRecord, 5);
        string product_sale = getField(productRecord, 6);
        product_sale_array[index] = stof(product_sale);
        product_feedback_array[index] = getField(productRecord, 7);
        string product_rating = getField(productRecord, 8);
        product_rating_array[index] = stoi(product_rating);
        order_status_array[index] = getField(productRecord, 9);
        string product_order_id = getField(productRecord, 10);
        order_id_array[index] = stoi(product_order_id);
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
}
// ------------------------------- Function Implimentation End