// Libraries used
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

// ------------------------------- Function Prototype Start
void mainHeader();
void whoHeader();
string who();
void addUser(string username, string password, string role);
string adminMenu();
string customerMenu();
void clearScreen();
void addProduct();
void addProductToArray(string product_name, int product_price, string product_code, string product_available, string product_sale_on, float product_sale);
void searchProductAdmin();
void UpdateProduct();
void updateProductToArray(int found_index, string product_name, int product_price, string product_code, string product_available, string product_sale_on, float product_sale);
void deleteProduct();
void viewPrdouctAdminMenu();
void viewProductAdmin();
void addSaleOnProduct();
void viewFeedback();
void viewRating();
void showPendingOrders();
void showDelieveredOrders();
void updateOrderLocation();
void viewProductMenuCustomer();
void viewProductCustomer();
void searchProductCustomer();
void addproductinCart();
void buyProduct();
void trackOrder();
void sendFeedback();
void sendRating();
void viewRatingAndFeedback();
void exitMenu();
// ------------------------------- Function Prototype End

// ------------------------------- Data Structures Start
const int TOTAL_USER = 10;
int count_user = 0;
string username_array[TOTAL_USER];
string password_array[TOTAL_USER];
string role_array[TOTAL_USER];
const int TOTAL_PRODUCT = 1000;
int count_product = 30;
const int TOTAL_CUSTOMERS = 10000;
int customer_count = 0;
int cart_count = 0;
string product_code_array[TOTAL_PRODUCT] = {"C101", "C102", "C103", "C104", "C105", "C106", "C107", "C108", "C109",
                                            "C110", "S101", "S102", "S103", "S104", "S105",
                                            "S106", "S107", "S108", "S109", "S110", "J101", "J102", "J103",
                                            "J104", "J105", "J106", "J107", "J108", "J109", "J110"};
string product_name_array[TOTAL_PRODUCT] = {"Cotton Shirt", "Denim Jeans", "Leather Jacket", "Summer Kurta",
                                            "Wool Sweater", "Casual T-Shirt", "Formal Pants",
                                            "Silk Saree", "Hoodie", "Track Suit", "Running Shoes", "Sneakers", "Formal Shoes",
                                            "Sports Trainers", "Canvas Shoes", "Leather Boots", "Flip Flops", "Sandals",
                                            "High Tops", "Joggers", "Gold Necklace", "Silver Ring", "Diamond Earrings",
                                            "Pearl Bracelet", "Platinum Chain", "Anklet", "Nose Pin", "Bangles Set", "Pendant", "Wedding Ring"};
int product_price_array[TOTAL_PRODUCT] = {85000, 45000, 5000, 2500, 1500, 30000, 20000, 40000, 60000,
                                          7000, 5000, 4500, 6000, 5500, 2500, 8000, 1200, 2000, 4800, 5200,
                                          120000, 5000, 250000, 15000, 80000, 3000, 2000, 25000, 10000, 180000};
string product_available_array[TOTAL_PRODUCT] = {"Yes", "Yes", "No", "Yes", "Yes", "No", "Yes",
                                                 "Yes", "No", "Yes", "Yes", "Yes", "No", "Yes",
                                                 "Yes", "No", "Yes", "Yes", "Yes", "No", "Yes",
                                                 "Yes", "No", "Yes", "Yes", "Yes", "No", "Yes", "Yes", "No"};
string product_sale_on_array[TOTAL_PRODUCT] = {"Yes", "No", "Yes", "No", "Yes", "No", "Yes", "No",
                                               "Yes", "No", "Yes", "No", "Yes", "No", "Yes", "Yes",
                                               "No", "Yes", "No", "Yes", "Yes", "No", "Yes", "No",
                                               "Yes", "No", "Yes", "No", "Yes", "Yes"};
float product_sale_array[TOTAL_PRODUCT] = {10, 0, 15, 0, 5, 0, 20, 0, 10, 0, 10, 0, 20, 0,
                                           15, 20, 0, 10, 0, 15, 10, 0, 15, 0, 20, 0, 5, 0, 12, 15};
string product_feedback_array[TOTAL_PRODUCT] = {"Excellent quality and very comfortable.", "Good fabric but a bit expensive.", "Average stitching, expected better.",
                                                "Very stylish and perfect fit.", "Color faded after one wash.", "Highly recommended, worth the price.",
                                                "Size was not accurate.", "Material is soft and breathable.", "Design is nice but delivery was late.",
                                                "Amazing product, will buy again.", "Very comfortable for daily use.", "Stylish and affordable.",
                                                "Good quality but size issue.", "Perfect for sports activities.", "Lightweight and durable.",
                                                "Excellent leather finish.", "Cheap but not long lasting.", "Comfortable for summer wear.",
                                                "Trendy design, loved it.", "Great cushioning and support.","The design is elegant.", 
                                                "Great quality for the price.", "Lightweight and comfortable to wear.",
                                                "The shine and finish give it a premium feel.", "Beautiful piece.",
                                                "Packaging was neat and perfect for gifting.", "The color and polish have held up well.",
                                                "Stylish and trendy, but durability could be improved.", "Overall a lovely accessory"};
int product_rating_array[TOTAL_PRODUCT] = {5, 4, 3, 5, 2, 5, 3, 4, 3, 5, 5, 4, 3, 5,
                                           2, 5, 3, 4, 3, 5, 5, 4, 5, 4, 5, 4, 3, 5, 4, 5};
string order_status_array[TOTAL_PRODUCT] = {"Delivered", "Pending", "Delivered", "Delivered", "Pending", "Pending", "Delivered", "Pending", "Delivered", "Delivered",
                                            "Pending", "Delivered", "Pending", "Pending", "Delivered", "Delivered", "Pending", "Delivered", "Pending", "Delivered",
                                            "Pending", "Delivered", "Delivered", "Pending", "Delivered", "Pending", "Pending", "Delivered", "Delivered", "Pending"};
int order_id_array[TOTAL_PRODUCT] = {1023, 1024, 2045, 3024, 4024, 3098, 4567, 1342, 1674, 5123, 3423, 6789, 3423, 7345, 2323, 8456,
                                     9567, 4223, 1124, 1122, 5224, 2233, 5024, 3344, 2343, 4455, 5566, 2323, 6677, 7788};
string coupon_code_array[TOTAL_PRODUCT] = {"SAVE10A", "DISC20B", "OFFER30C", "SALE40D", "DEAL50E", "PROMO60F", "CUT70G", "LESS80H", "OFF90I", "BUY100J",
                                           "SAVE11K", "DISC22L", "OFFER33M", "SALE44N", "DEAL55O", "PROMO66P", "CUT77Q", "LESS88R", "OFF99S", "BUY10T",
                                           "SAVE21U", "DISC32V", "OFFER43W", "SALE54X", "DEAL65Y", "PROMO76Z", "CUT87A1", "LESS98B2", "OFF19C3", "BUY20D4",
                                           "SAVE31E5", "DISC42F6", "OFFER53G7", "SALE64H8", "DEAL75I9", "PROMO86J0", "CUT97K1", "LESS18L2", "OFF29M3", "BUY30N4",
                                           "SAVE41O5", "DISC52P6", "OFFER63Q7", "SALE74R8", "DEAL85S9", "PROMO96T0", "CUT17U1", "LESS28V2", "OFF39W3", "BUY40X4",
                                           "SAVE51Y5", "DISC62Z6", "OFFER73A7", "SALE84B8", "DEAL95C9", "PROMO06D0", "CUT27E1", "LESS38F2", "OFF49G3", "BUY50H4",
                                           "SAVE61I5", "DISC72J6", "OFFER83K7", "SALE94L8", "DEAL05M9", "PROMO16N0", "CUT37O1", "LESS48P2", "OFF59Q3", "BUY60R4",
                                           "SAVE71S5", "DISC82T6", "OFFER93U7", "SALE04V8", "DEAL15W9", "PROMO26X0", "CUT47Y1", "LESS58Z2", "OFF69A3", "BUY70B4",
                                           "SAVE81C5", "DISC92D6", "OFFER03E7", "SALE14F8", "DEAL25G9", "PROMO36H0", "CUT57I1", "LESS68J2", "OFF79K3", "BUY80L4",
                                           "SAVE91M5", "DISC02N6", "OFFER13O7", "SALE24P8", "DEAL35Q9"};
int coupon_code_discount_array[TOTAL_PRODUCT] = {12, 25, 7, 45, 30, 18, 9, 50, 22, 14, 35, 28, 6, 40, 19, 33, 11, 48, 27, 16,
                                                 42, 23, 8, 37, 20, 15, 44, 29, 10, 31, 17, 46, 13, 26, 38, 21, 5, 34, 24, 47,
                                                 32, 36, 41, 43, 39, 49, 18, 27, 35, 12, 9, 22, 30, 14, 33, 7, 45, 25, 11, 40,
                                                 28, 6, 19, 48, 16, 42, 23, 8, 37, 20, 15, 44, 29, 10, 31, 17, 46, 13, 26, 38,
                                                 21, 5, 34, 24, 47, 32, 36, 41, 43, 39, 49, 18, 27, 35, 12, 9, 22, 30, 14, 33};
int order_id_track_array[TOTAL_PRODUCT] = {1021, 2034, 3098, 4567, 5123, 6789, 7345, 8456, 9567, 1122, 2233, 3344, 4455, 5566, 6677, 7788, 8899, 9901, 1203, 2314,
                                           3425, 4536, 5647, 6758, 7869, 8970, 9081, 1092, 2103, 3214, 4325, 5436, 6547, 7658, 8769, 9870, 1981, 2092, 3103, 4214,
                                           5325, 6436, 7547, 8658, 9769, 1870, 2981, 3092, 4103, 5214, 6325, 7436, 8547, 9658, 1769, 2870, 3981, 4092, 5103, 6214,
                                           7325, 8436, 9547, 1658, 2769, 3870, 4981, 5092, 6103, 7214, 8325, 9436, 1547, 2658, 3769, 4870, 5981, 6092, 7103, 8214,
                                           9325, 1436, 2547, 3658, 4769, 5870, 6981, 7092, 8103, 9214, 1325, 2436, 3547, 4658, 5769, 6870, 7981, 8092, 9103, 1024};
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
    addUser("Admin", "1234", "ADMIN");
    addUser("Ayesha", "1234", "CUSTOMER");
    while (true)
    {
        string w = who();
        if (w == "ADMIN")
        {
            // Code for Admin Menu
            string adminOption = " ";
            while (true) // ----------------------------------------- Start of while loop for Admin
            {
                system("cls");
                adminOption = adminMenu();
                if (adminOption == "1")
                {
                    // Code for Add Product
                    addProduct();
                }
                else if (adminOption == "2")
                {
                    // Code for Search Product
                    searchProductAdmin();
                }
                else if (adminOption == "3")
                {
                    // Code for Update Product
                    UpdateProduct();
                }
                else if (adminOption == "4")
                {
                    // Code for View Product
                    viewProductAdmin();
                }
                else if (adminOption == "5")
                {
                    // Code for Delete Product
                    deleteProduct();
                }
                else if (adminOption == "6")
                {
                    // Code for Add Sale on Product
                    addSaleOnProduct();
                }
                else if (adminOption == "7")
                {
                    // Code for Show Customer Feedback
                    viewFeedback();
                }
                else if (adminOption == "8")
                {
                    // Code for Show Customer Rating
                    viewRating();
                }
                else if (adminOption == "9")
                {
                    // Code for Show Pending Orders
                    showPendingOrders();
                }
                else if (adminOption == "10")
                {
                    // Code for Show Delieverd Orders
                    showDelieveredOrders();
                }
                else if (adminOption == "11")
                {
                    // Code for Update Order Status
                    updateOrderLocation();
                }
                else if (adminOption == "12")
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
            } // ----------------------------------------- End of while loop for Admin
        }
        else if (w == "CUSTOMER")
        {
            string customerOption = " ";
            while (true) // ------------------------------ Start of While loop for Customer
            {
                system("cls");
                customerOption = customerMenu();
                if (customerOption == "1")
                {
                    // Code for View Products
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
        else if (w == "Exit")
        {
            // Code for Exit Program
            exitMenu();
            break;
        }
        else
        {
            cout << "Worng Username or Password" << endl;
            getch();
        }
    }
}
// ------------------------------- Main Function End

// ------------------------------- Function Implimentation Start
void whoHeader()
{
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
    cout << "Enter username: ";
    string username;
    cin >> username;
    cout << "Enter password: ";
    string password;
    cin >> password;
    cout << "Enter whether you want to Continue or Exit: ";
    string status;
    cin >> status;
    for (int i = 0; i < TOTAL_USER; i++)
    {
        if (username_array[i] == username && password_array[i] == password && status == "Continue")
        {
            return role_array[i];
        }
        else if (username_array[i] == username && password_array[i] == password && status == "Exit")
        {
            return status;
        }
    }
    return "Wrong";
}
void addUser(string username, string password, string role)
{
    if (count_user <= 10)
    {
        username_array[count_user] = username;
        password_array[count_user] = password;
        role_array[count_user] = role;
        count_user++;
    }
    else
    {
        cout << "No more space to add new users..." << endl;
    }
}
void mainHeader()
{
    // Buissness Application Pointer Head
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "  ~~~~~  Brand Management System ~~~~~  " << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}
string adminMenu()
{
    mainHeader();
    // Code for Owner Menu
    // 1.Add product, 2.Search Product, 3.Update Product, 4.Delete Product, 5.View Product,
    // 6.Add sale on products, 7.Customer Feedback, 8.Show Customer Rating 9.Show Pending Order,
    // 10.Show Delievered Order 11.Update Order Location  12.Exit
    cout << "----Owner Menu----" << endl;
    cout << "Owner Menu" << endl
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
    string owner_choice;
    cin >> owner_choice;
    return owner_choice;
}
string customerMenu()
{
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
void clearScreen()
{
    cout << "Press any key to continue..." << endl;
    getch();
    system("cls");
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
    product_sale = product_price - product_discount;
    addProductToArray(product_name, product_price, product_code, product_available, product_sale_on, product_sale);
}
void addProductToArray(string product_name, int product_price, string product_code, string product_available, string product_sale_on, float product_sale)
{
    product_name_array[count_product] = product_name;
    product_price_array[count_product] = product_price;
    product_code_array[count_product] = product_code;
    product_available_array[count_product] = product_available;
    product_sale_on_array[count_product] = product_sale_on;
    product_sale_array[count_product] = product_sale;
    count_product++;
}
// 1.Add product, 2.Search Product, 3.Update Product, 4.Delete Product, 5.View Product,
// 6.Add sale on products, 7.Customer Feedback, 8.Show Customer Rating 9.Show Pending Order,
// 10.Show Delievered Order 11.Update Order Location  12.Exit
void searchProductAdmin()
{
    // Code to Search Product
    system("cls");
    cout << "Enter the product code: ";
    string product_code;
    cin.ignore();
    getline(cin, product_code);
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
        getch();
    }
    else
    {
        cout << "Name\t\tPrice\tCode\tAvalaibility\tOn Sale\tDiscounted price" << endl;
        cout << product_name_array[found_index] << "\t" << product_price_array[found_index] << "\t"
             << product_code_array[found_index] << "\t" << product_available_array[found_index] << "\t\t"
             << product_sale_on_array[found_index] << "\t" << product_sale_array[found_index] << endl;
    }
}
void UpdateProduct()
{
    // Code to Update Product
    system("cls");
    cout << "Enter the product code: ";
    string product_code;
    cin.ignore();
    getline(cin, product_code);
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
        getch();
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
        updateProductToArray(found_index, product_name, product_price, product_code, product_available, product_sale_on, product_sale);
    }
}
void updateProductToArray(int found_index, string product_name, int product_price, string product_code, string product_available, string product_sale_on, float product_sale)
{
    product_name_array[found_index] = product_name;
    product_price_array[found_index] = product_price;
    product_code_array[found_index] = product_code;
    product_available_array[found_index] = product_available;
    product_sale_on_array[found_index] = product_sale_on;
    product_sale_array[found_index] = product_sale;
}
void deleteProduct()
{
    // Code to Delete Product
    system("cls");
    cout << "Enter the product code: ";
    string product_code;
    cin.ignore();
    getline(cin, product_code);
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
        getch();
    }
    else
    {
        product_name_array[found_index] = " ";
        product_price_array[found_index] = 0;
        product_code_array[found_index] = " ";
        product_sale_on_array[found_index] = " ";
        product_sale_array[found_index] = 0;
        product_feedback_array[found_index] = " ";
    }
}
void viewPrdouctAdminMenu()
{
    cout << "---View Product---" << endl;
    cout << "1.All Products" << endl
         << "2.In Stock Product" << endl
         << "3.Out of Stock Product" << endl
         << "4.Product on Sale" << endl
         << "5.Exit" << endl;
}
void viewProductAdmin()
{
    while (true)
    {
        system("cls");
        viewPrdouctAdminMenu();
        cout << "Enter your choice: ";
        int view_product_choice;
        cin >> view_product_choice;
        if (view_product_choice == 1)
        {
            // Code to View All Products
            for (int view_index = 0; view_index < count_product; view_index++)
            {
                int product_discounted_price_array[view_index];
                if (product_sale_on_array[view_index] == "Yes")
                {
                    product_discounted_price_array[view_index] = product_price_array[view_index] - (product_price_array[view_index] * (product_sale_array[view_index] / 100));
                }
                else
                {
                    product_discounted_price_array[view_index] = 0;
                }
                cout << "Name\t\tPrice\tCode\tAvalaibility\tOn Sale\tDiscounted Price" << endl;
                cout << product_name_array[view_index] << "\t" << product_price_array[view_index] << "\t"
                     << product_code_array[view_index] << "\t" << product_available_array[view_index] << "\t\t"
                     << product_sale_on_array[view_index] << "\t" << product_discounted_price_array[view_index] << endl;
            }
        }
        else if (view_product_choice == 2)
        {

            // Code to View In-Stock Product
            for (int view_index = 0; view_index < count_product; view_index++)
            {
                if (product_available_array[view_index] == "Yes")
                {
                    int product_discounted_price_array[view_index];
                    if (product_sale_on_array[view_index] == "Yes")
                    {
                        product_discounted_price_array[view_index] = product_price_array[view_index] - (product_price_array[view_index] * (product_sale_array[view_index] / 100));
                    }
                    else
                    {
                        product_discounted_price_array[view_index] = 0;
                    }
                    cout << "Name\t\tPrice\tCode\tAvalaibility\tOn Sale\tDiscounted Price" << endl;
                    cout << product_name_array[view_index] << "\t" << product_price_array[view_index] << "\t"
                         << product_code_array[view_index] << "\t" << product_available_array[view_index] << "\t\t"
                         << product_sale_on_array[view_index] << "\t" << product_discounted_price_array[view_index] << endl;
                }
                else
                {
                    cout << "No product is In-Stock" << endl;
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

                    int product_discounted_price_array[view_index];
                    if (product_sale_on_array[view_index] == "Yes")
                    {
                        product_discounted_price_array[view_index] = product_price_array[view_index] - (product_price_array[view_index] * (product_sale_array[view_index] / 100));
                    }
                    else
                    {
                        product_discounted_price_array[view_index] = 0;
                    }
                    cout << "Name\t\tPrice\tCode\tAvalaibility\tOn Sale\tDiscounted Price" << endl;
                    cout << product_name_array[view_index] << "\t" << product_price_array[view_index] << "\t"
                         << product_code_array[view_index] << "\t" << product_available_array[view_index] << "\t\t"
                         << product_sale_on_array[view_index] << "\t" << product_discounted_price_array[view_index] << endl;
                }
                else
                {
                    cout << "No product is Out of Stock..." << endl;
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
                    int product_discounted_price_array[view_index];
                    product_discounted_price_array[view_index] = product_price_array[view_index] - (product_price_array[view_index] * (product_sale_array[view_index] / 100));
                    cout << "Name\t\tPrice\tCode\tAvalaibility\tOn Sale\tDiscounted Price" << endl;
                    cout << product_name_array[view_index] << "\t" << product_price_array[view_index] << "\t"
                         << product_code_array[view_index] << "\t" << product_available_array[view_index] << "\t\t"
                         << product_sale_on_array[view_index] << "\t" << product_discounted_price_array[view_index] << endl;
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
        clearScreen();
    }
}
void addSaleOnProduct()
{
    // Code to Add Product on sale
    system("cls");
    cout << "Enter the product code: ";
    string product_code;
    cin.ignore();
    getline(cin, product_code);
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
        getch();
    }
    else
    {
        if (product_sale_on_array[found_index] == "No")
        {
            cout << "Enter the amount of discount: ";
            float discount;
            cin >> discount;
            product_sale_on_array[found_index] = "Yes";
            product_sale_array[found_index] = product_price_array[found_index] - (product_price_array[found_index] * (discount / 100));
            cout << "Name\t\tPrice\tCode\tAvalaibility\tOn Sale\tDiscounted price" << endl;
            cout << product_name_array[found_index] << "\t" << product_price_array[found_index] << "\t"
                 << product_code_array[found_index] << "\t" << product_available_array[found_index] << "\t\t"
                 << product_sale_on_array[found_index] << "\t" << product_sale_array[found_index] << endl;
            getch();
        }
        else
        {
            cout << "Discount is already applied to the product." << endl;
            getch();
        }
    }
}
void viewFeedback()
{
    // Code to View Customer Feedback
    system("cls");
    cout << "Enter the product code: ";
    string product_code;
    cin.ignore();
    getline(cin, product_code);
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
        getch();
    }
    else
    {
        // Code to view feedbacks
        cout << "Feedback on " << product_code_array[found_index] << " is: " << endl
             << product_feedback_array[found_index] << endl;
    }
}
void viewRating()
{
    // Code to Show Product Rating
    system("cls");
    cout << "Enter the product code: ";
    string product_code;
    cin.ignore();
    getline(cin, product_code);
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
        getch();
    }
    else
    {
        // Code to view feedbacks
        cout << "Rating of " << product_code_array[found_index] << " is: " << endl
             << product_rating_array[found_index] << endl;
    }
}
void showPendingOrders()
{
    system("cls");
    while (count_product != 0)
    {
        if (order_status_array[count_product] == "Pending")
        {
            cout << "The order status of " << product_code_array[count_product] << " is Pending." << endl;
        }
        count_product--;
    }
    getch();
}
void showDelieveredOrders()
{
    // Code to Show Delievered Orders
    system("cls");
    while (count_product != 0)
    {
        if (order_status_array[count_product] == "Delivered")
        {
            cout << "The order status of " << product_code_array[count_product] << " is Delivered." << endl;
        }
        count_product--;
    }
    getch();
}
void updateOrderLocation()
{
    // Code to Update Order Status
    system("cls");
    cout << "Enter the product code: ";
    string product_code;
    cin.ignore();
    getline(cin, product_code);
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
        getch();
    }
    else
    {
        if (product_code_array[found_index] == product_code && (order_status_array[found_index] == "Pending" || order_status_array[found_index] == "Delivered"))
        {
            cout << "Enter the current status of order: ";
            string order_status;
            cin >> order_status;
            order_status_array[found_index] = order_status;
            cout << "Product ID\tPrice\tOrder Status" << endl;
            cout << product_code_array[found_index] << "\t\t" << product_price_array[found_index] << "\t" << order_status_array[found_index] << endl;
        }
        else
        {
            cout << product_code_array[found_index] << " has not been ordered." << endl;
        }
    }
}
void viewProductMenuCustomer()
{
    cout << "---View Product---" << endl
         << "1.All Products" << endl
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
        if (view_product_choice == 1)
        {
            // Code to View All Products
            for (int view_index = 0; view_index < count_product; view_index++)
            {
                int product_discounted_price_array[view_index];
                if (product_sale_on_array[view_index] == "Yes")
                {
                    product_discounted_price_array[view_index] = product_price_array[view_index] - (product_price_array[view_index] * (product_sale_array[view_index] / 100));
                }
                else
                {
                    product_discounted_price_array[view_index] = 0;
                }
                cout << "Name\t\tPrice\tCode\tAvalaibility\tOn Sale\tDiscounted Price" << endl;
                cout << product_name_array[view_index] << "\t" << product_price_array[view_index] << "\t"
                     << product_code_array[view_index] << "\t" << product_available_array[view_index] << "\t\t"
                     << product_sale_on_array[view_index] << "\t" << product_discounted_price_array[view_index] << endl;
            }
            getch();
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
                getch();
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
            getch();
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
                    if (product_price_array[bubblesort2] > product_price_array[bubblesort2+1])
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
            getch();
        }
        else if (view_product_choice == 5)
        {
            // Code to View Products on Sale
            for (int view_index = 0; view_index < count_product; view_index++)
            {
                if (product_sale_on_array[view_index] == "Yes")
                {
                    int product_discounted_price_array[view_index];
                    product_discounted_price_array[view_index] = product_price_array[view_index] - (product_price_array[view_index] * (product_sale_array[view_index] / 100));
                    cout << "Name\t\tPrice\tCode\tAvalaibility\tOn Sale\tDiscounted Price" << endl;
                    cout << product_name_array[view_index] << "\t" << product_price_array[view_index] << "\t"
                         << product_code_array[view_index] << "\t" << product_available_array[view_index] << "\t\t"
                         << product_sale_on_array[view_index] << "\t" << product_discounted_price_array[view_index] << endl;
                }
            }
            getch();
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
        clearScreen();
    }
}
void searchProductCustomer()
{
    // Code for Search Product
    system("cls");
    cout << "Enter the Product ID: ";
    string product_code;
    cin.ignore();
    getline(cin, product_code);
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
        getch();
    }
    else
    {
        cout << "Product Name\tProduce ID\tPrice\tAvailability\tDiscounted Price" << endl;
        cout << product_name_array[found_index] << "\t" << product_code_array[found_index] << "\t" << product_price_array[found_index] << "\t"
             << product_available_array[found_index] << "\t" << product_sale_array[found_index] << endl;
        getch();
    }
}
void addproductinCart()
{
    // Code for Add Product in Cart
    system("cls");
    cout << "Enter the Product ID: ";
    string product_code;
    cin.ignore();
    getline(cin, product_code);
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
        getch();
    }
    else
    {
        customer_cart_array[found_index] = product_code_array[found_index];
        cout << "Product successfully added to cart" << endl;
        getch();
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
        getch();
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
            product_price_after_coupon_discount_array[found_code_index] = product_price_array[found_code_index] - (product_price_array[found_code_index] * (coupon_code_discount_array[found_code_index] / 100));
            for (int i = 0; i < TOTAL_PRODUCT; i++)
            {
                cout << "Customer Credentials" << endl;
                cout << "Enter your Name: ";
                cin >> customer_name_array[i];
                cout << "Enter your Email: ";
                cin >> customer_email_array[i];
                cout << "@gmail.com" << endl;
                cout << "Enter your postal code: ";
                cin >> customer_postal_code_array[i];
                cout << "Product ID:\t" << customer_buy_array[found_index] << endl;
                customer_count++;
            }
            cout << "Enter the price after discount: " << product_price_after_coupon_discount_array[found_code_index] << endl;
            customer_buy_array[found_index] = product_code_array[found_index];
            cout << "Product ordered successfully" << endl;
            cout << "Your order ID is: " << order_id_track_array[found_index] << endl;
            getch();
        }
    }
}
void trackOrder()
{
    // Code for Track Order
    system("cls");
    cout << "Enter the Product ID: ";
    string product_code;
    cin.ignore();
    getline(cin, product_code);
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
        getch();
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
            if (order_id_track_array[order_no] == order_id)
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
        getch();
    }
}
void sendFeedback()
{
    // Code for Send Feedback
    system("cls");
    cout << "Enter the Product ID: ";
    string product_code;
    cin.ignore();
    getline(cin, product_code);
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
        getch();
    }
    else
    {
        cout << "Enter feedback: ";
        string product_feedback;
        cin.ignore();
        getline(cin, product_feedback);
        product_feedback_array[found_index] = product_feedback;
        getch();
    }
}
void sendRating()
{
    // Code for Send Rating
    system("cls");
    cout << "Enter the Product ID: ";
    string product_code;
    cin.ignore();
    getline(cin, product_code);
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
        getch();
    }
    else
    {
        cout << "Enter rating: ";
        int product_rating;
        cin >> product_rating;
        product_rating_array[found_index] = product_rating;
        getch();
    }
}
void viewRatingAndFeedback()
{
    // Code for View Rating and feedback
    system("cls");
    cout << "Enter the Product ID: ";
    string product_code;
    cin.ignore();
    getline(cin, product_code);
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
        getch();
    }
    else
    {
        cout << "Product ID\tProduct Price\tProduct Rating\tProduct Feedback" << endl;
        cout << product_code_array[found_index] << "\t" << product_price_array[found_index] << "\t"
             << product_rating_array[found_index] << "\t" << product_feedback_array[found_index] << endl;
    }
    getch();
}
void exitMenu()
{
    // Code to exit
    cout << "Exiting Menu" << endl;
    getch();
}
// ------------------------------- Function Implimentation End