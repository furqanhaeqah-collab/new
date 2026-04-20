// Libraries name
#include <iostream>
#include <conio.h>
using namespace std;

// Main Function
main()
{
    int length = 100;
    int index = 30;
    int count = 0;
    int cart_count = 0;
    string product_code_array[length] = {"C101", "C102", "C103", "C104", "C105", "C106", "C107", "C108", "C109",
                                         "C110", "S101", "S102", "S103", "S104", "S105",
                                         "S106", "S107", "S108", "S109", "S110", "J101", "J102", "J103",
                                         "J104", "J105", "J106", "J107", "J108", "J109", "J110"};
    string product_name_array[length] = {"Cotton Shirt", "Denim Jeans", "Leather Jacket", "Summer Kurta",
                                         "Wool Sweater", "Casual T-Shirt", "Formal Pants",
                                         "Silk Saree", "Hoodie", "Track Suit", "Running Shoes", "Sneakers", "Formal Shoes",
                                         "Sports Trainers", "Canvas Shoes", "Leather Boots", "Flip Flops", "Sandals",
                                         "High Tops", "Joggers", "Gold Necklace", "Silver Ring", "Diamond Earrings",
                                         "Pearl Bracelet", "Platinum Chain", "Anklet", "Nose Pin", "Bangles Set", "Pendant", "Wedding Ring"};
    int product_price_array[length] = {85000, 45000, 5000, 2500, 1500, 30000, 20000, 40000, 60000,
                                       7000, 5000, 4500, 6000, 5500, 2500, 8000, 1200, 2000, 4800, 5200,
                                       120000, 5000, 250000, 15000, 80000, 3000, 2000, 25000, 10000, 180000};
    string product_available_array[length] = {"Yes", "Yes", "No", "Yes", "Yes", "No", "Yes",
                                              "Yes", "No", "Yes", "Yes", "Yes", "No", "Yes",
                                              "Yes", "No", "Yes", "Yes", "Yes", "No", "Yes",
                                              "Yes", "No", "Yes", "Yes", "Yes", "No", "Yes", "Yes", "No"}; // In-Stock or Out-of-Stock
    string product_sale_on_array[length] = {"Yes", "No", "Yes", "No", "Yes", "No", "Yes", "No",
                                            "Yes", "No", "Yes", "No", "Yes", "No", "Yes", "Yes",
                                            "No", "Yes", "No", "Yes", "Yes", "No", "Yes", "No",
                                            "Yes", "No", "Yes", "No", "Yes", "Yes"}; // "Yes" if product is on sale and "No" if product is not on sale
    float product_sale_array[length] = {10, 0, 15, 0, 5, 0, 20, 0, 12, 0, 10, 0, 20, 0,
                                        15, 25, 0, 10, 0, 18, 10, 0, 15, 0, 20, 0, 5, 0, 12, 18}; // How much discount will be given

    string product_feedback_array[length] = {"Excellent quality and very comfortable.", "Good fabric but a bit expensive.", "Average stitching, expected better.",
                                             "Very stylish and perfect fit.", "Color faded after one wash.", "Highly recommended, worth the price.",
                                             "Size was not accurate.", "Material is soft and breathable.", "Design is nice but delivery was late.",
                                             "Amazing product, will buy again.", "Very comfortable for daily use.", "Stylish and affordable.",
                                             "Good quality but size issue.", "Perfect for sports activities.", "Lightweight and durable.",
                                             "Excellent leather finish.", "Cheap but not long lasting.", "Comfortable for summer wear.",
                                             "Trendy design, loved it.", "Great cushioning and support."};
    int product_rating_array[length] = {5, 4, 3, 5, 2, 5, 3, 4, 3, 5, 5, 4, 3, 5,
                                        2, 5, 3, 4, 3, 5, 5, 4, 5, 4, 5, 4, 3, 5, 4, 5};
    string order_status_array[length] = {"Delivered", "Pending", "Delivered", "Delivered", "Pending", "Pending", "Delivered", "Pending", "Delivered", "Delivered",
                                         "Pending", "Delivered", "Pending", "Pending", "Delivered", "Delivered", "Pending", "Delivered", "Pending", "Delivered",
                                         "Pending", "Delivered", "Delivered", "Pending", "Delivered", "Pending", "Pending", "Delivered", "Delivered", "Pending"};
    int order_id_array[length] = {1023, 1024, 2045, 3024, 4024, 3098, 4567, 1342, 1674, 5123, 3423, 6789, 3423, 7345, 2323, 8456,
                                  9567, 4223, 1124, 1122, 5224, 2233, 5024, 3344, 2343, 4455, 5566, 2323, 6677, 7788};
    string coupon_code_array[length] = {"SAVE10A", "DISC20B", "OFFER30C", "SALE40D", "DEAL50E", "PROMO60F", "CUT70G", "LESS80H", "OFF90I", "BUY100J",
                                        "SAVE11K", "DISC22L", "OFFER33M", "SALE44N", "DEAL55O", "PROMO66P", "CUT77Q", "LESS88R", "OFF99S", "BUY10T",
                                        "SAVE21U", "DISC32V", "OFFER43W", "SALE54X", "DEAL65Y", "PROMO76Z", "CUT87A1", "LESS98B2", "OFF19C3", "BUY20D4",
                                        "SAVE31E5", "DISC42F6", "OFFER53G7", "SALE64H8", "DEAL75I9", "PROMO86J0", "CUT97K1", "LESS18L2", "OFF29M3", "BUY30N4",
                                        "SAVE41O5", "DISC52P6", "OFFER63Q7", "SALE74R8", "DEAL85S9", "PROMO96T0", "CUT17U1", "LESS28V2", "OFF39W3", "BUY40X4",
                                        "SAVE51Y5", "DISC62Z6", "OFFER73A7", "SALE84B8", "DEAL95C9", "PROMO06D0", "CUT27E1", "LESS38F2", "OFF49G3", "BUY50H4",
                                        "SAVE61I5", "DISC72J6", "OFFER83K7", "SALE94L8", "DEAL05M9", "PROMO16N0", "CUT37O1", "LESS48P2", "OFF59Q3", "BUY60R4",
                                        "SAVE71S5", "DISC82T6", "OFFER93U7", "SALE04V8", "DEAL15W9", "PROMO26X0", "CUT47Y1", "LESS58Z2", "OFF69A3", "BUY70B4",
                                        "SAVE81C5", "DISC92D6", "OFFER03E7", "SALE14F8", "DEAL25G9", "PROMO36H0", "CUT57I1", "LESS68J2", "OFF79K3", "BUY80L4",
                                        "SAVE91M5", "DISC02N6", "OFFER13O7", "SALE24P8", "DEAL35Q9"}; // If code matches with the code in the system the specific discount will be given
    int coupon_code_discount_array[length] = {12, 25, 7, 45, 30, 18, 9, 50, 22, 14, 35, 28, 6, 40, 19, 33, 11, 48, 27, 16,
                                              42, 23, 8, 37, 20, 15, 44, 29, 10, 31, 17, 46, 13, 26, 38, 21, 5, 34, 24, 47,
                                              32, 36, 41, 43, 39, 49, 18, 27, 35, 12, 9, 22, 30, 14, 33, 7, 45, 25, 11, 40,
                                              28, 6, 19, 48, 16, 42, 23, 8, 37, 20, 15, 44, 29, 10, 31, 17, 46, 13, 26, 38,
                                              21, 5, 34, 24, 47, 32, 36, 41, 43, 39, 49, 18, 27, 35, 12, 9, 22, 30, 14, 33};
    int order_id_track_array[length] = {1021, 2034, 3098, 4567, 5123, 6789, 7345, 8456, 9567, 1122, 2233, 3344, 4455, 5566, 6677, 7788, 8899, 9901, 1203, 2314,
                                        3425, 4536, 5647, 6758, 7869, 8970, 9081, 1092, 2103, 3214, 4325, 5436, 6547, 7658, 8769, 9870, 1981, 2092, 3103, 4214,
                                        5325, 6436, 7547, 8658, 9769, 1870, 2981, 3092, 4103, 5214, 6325, 7436, 8547, 9658, 1769, 2870, 3981, 4092, 5103, 6214,
                                        7325, 8436, 9547, 1658, 2769, 3870, 4981, 5092, 6103, 7214, 8325, 9436, 1547, 2658, 3769, 4870, 5981, 6092, 7103, 8214,
                                        9325, 1436, 2547, 3658, 4769, 5870, 6981, 7092, 8103, 9214, 1325, 2436, 3547, 4658, 5769, 6870, 7981, 8092, 9103, 1024};
    int product_price_after_coupon_discount_array[length];
    string customer_name_array[length];
    string customer_email_array[length];
    int customer_postal_code_array[length];
    string customer_cart_array[length];
    string customer_buy_array[length];
    while (true)
    {
        system("cls"); // Clears the menu for new execution

        // Buissness Application Pointer Head
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "~~~ Clothing Brand Management System ~~~" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

        // Brand Menu
        cout << "User Menu" << endl;
        cout << "1.Owner" << endl;
        cout << "2.Customer" << endl;
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        // Choice from user menu
        cout << "Your choice is: " << choice << endl;
        if (choice == 1)
        {
            // Write here owner code
            // Login credentials
            string username;
            int password;
            for (int count_attempt = 0; count_attempt < 3; count_attempt++)
            {
                system("cls");
                cout << "------ Welcome to clothing brand management system ------" << endl
                     << " Owner Menu: " << "Login attempts: " << count_attempt + 1 << endl;
                cout << "Enter username: ";
                cin >> username;
                cout << "Enter password: ";
                cin >> password;
                if (username == "admin" && password == 1234)
                {
                    cout << "Login Successfull" << endl;
                    cout << "Press any key to continue" << endl;
                    getch();

                    while (true)
                    {

                        // Code for Owner Menu
                        // 1.Add product, 2.Search Product, 3.Update Product, 4.Delete Product, 5.View Product,
                        // 6.Add sale on products, 7.Customer Feedback, 8.Show Pending Order,
                        // 9.Show Delievered Order 10.Update Order Location 11.Exit
                        system("cls");
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
                        int owner_choice;
                        cin >> owner_choice;
                        if (owner_choice == 1)
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
                            cout << "The discounted price: " << product_sale << endl;
                            product_name_array[index] = product_name;
                            product_price_array[index] = product_price;
                            product_code_array[index] = product_code;
                            product_available_array[index] = product_available;
                            product_sale_on_array[index] = product_sale_on;
                            product_sale_array[index] = product_sale;
                            index++;
                        }
                        else if (owner_choice == 2)
                        {

                            // Code to Search Product
                            system("cls");
                            cout << "Enter the code of product you want to search: ";
                            string product_code;
                            cin.ignore();
                            getline(cin, product_code);
                            bool is_found = false;
                            int found_index = 0;
                            for (int i = 0; i < index; i++)
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
                        else if (owner_choice == 3)
                        {

                            // Code to Update Product
                            system("cls");
                            cout << "Enter the code of product you want to update: ";
                            string product_code;
                            cin.ignore();
                            getline(cin, product_code);
                            bool is_found = false;
                            int found_index = 0;
                            for (int i = 0; i < index; i++)
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
                                cout << "The discounted price: " << product_sale << endl;
                                product_name_array[index] = product_name;
                                product_price_array[index] = product_price;
                                product_code_array[index] = product_code;
                                product_available_array[index] = product_available;
                                product_sale_on_array[index] = product_sale_on;
                                product_sale_array[index] = product_sale;
                                index++;
                            }
                        }
                        else if (owner_choice == 4)
                        {

                            // Code to View Products
                            // View Produt Menu
                            // 1. All Products
                            // 2. In-Stock Product
                            // 3. Out of Stck Product
                            // 4. Product on sale
                            while (true)
                            {
                                system("cls");
                                cout << "---View Product---" << endl;
                                cout << "1.All Products" << endl
                                     << "2.In Stock Product" << endl
                                     << "3.Out of Stock Product" << endl
                                     << "4.Product on Sale" << endl
                                     << "5.Exit" << endl;
                                cout << "Enter your choice: ";
                                int view_product_choice;
                                cin >> view_product_choice;
                                if (view_product_choice == 1)
                                {
                                    // Code to View All Products
                                    for (int view_index = 0; view_index < index; view_index++)
                                    {
                                        cout << "Name\t\tPrice\tCode\tAvalaibility\tOn Sale\tDiscounted Price" << endl;
                                        cout << product_name_array[view_index] << "\t" << product_price_array[view_index] << "\t"
                                             << product_code_array[view_index] << "\t" << product_available_array[view_index] << "\t\t"
                                             << product_sale_on_array[view_index] << "\t" << product_sale_array[view_index] << endl;
                                        getch();
                                    }
                                }
                                else if (view_product_choice == 2)
                                {

                                    // Code to View In-Stock Product
                                    for (int view_index = 0; view_index < index; view_index++)
                                    {
                                        if (product_available_array[view_index] == "Yes")
                                        {
                                            cout << "Name\t\tPrice\tCode\tAvalaibility\tOn Sale\tDiscounted Price" << endl;
                                            cout << product_name_array[view_index] << "\t" << product_price_array[view_index] << "\t"
                                                 << product_code_array[view_index] << "\t" << product_available_array[view_index] << "\t\t"
                                                 << product_sale_on_array[view_index] << "\t" << product_sale_array[view_index] << endl;
                                            getch();
                                        }
                                    }
                                }
                                else if (view_product_choice == 3)
                                {

                                    // Code to View Out of Stock Product
                                    for (int view_index = 0; view_index < index; view_index++)
                                    {
                                        if (product_available_array[view_index] == "No")
                                        {
                                            cout << "Name\t\tPrice\tCode\tAvalaibility\tOn Sale\tDiscounted Price" << endl;
                                            cout << product_name_array[view_index] << "\t" << product_price_array[view_index] << "\t"
                                                 << product_code_array[view_index] << "\t" << product_available_array[view_index] << "\t\t"
                                                 << product_sale_on_array[view_index] << "\t" << product_sale_array[view_index] << endl;
                                            getch();
                                        }
                                    }
                                }
                                else if (view_product_choice == 4)
                                {

                                    // Code to View Products on Sale
                                    for (int view_index = 0; view_index < index; view_index++)
                                    {
                                        if (product_sale_on_array[view_index] == "Yes")
                                        {
                                            cout << "Name\t\tPrice\tCode\tAvalaibility\tOn Sale\tDiscounted Price" << endl;
                                            cout << product_name_array[view_index] << "\t" << product_price_array[view_index] << "\t"
                                                 << product_code_array[view_index] << "\t" << product_available_array[view_index] << "\t\t"
                                                 << product_sale_on_array[view_index] << "\t" << product_sale_array[view_index] << endl;
                                            getch();
                                        }
                                    }
                                }
                                else if (view_product_choice == 5)
                                {

                                    // Code to Exit
                                    cout << "Exiting view Product Menu" << endl;
                                    getch();
                                }
                                else
                                {
                                    cout << "Invalid Choice" << endl;
                                }
                            }
                        }
                        else if (owner_choice == 5)
                        {

                            // Code to Delete Product
                            system("cls");
                            cout << "Enter the code of product you want to delete: ";
                            string product_code;
                            cin.ignore();
                            getline(cin, product_code);
                            bool is_found = false;
                            int found_index = 0;
                            for (int i = 0; i < index; i++)
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
                                product_name_array[found_index] = "";
                                product_price_array[found_index] = 0;
                                product_code_array[found_index] = "";
                                product_sale_on_array[found_index] = "";
                                product_sale_array[found_index] = 0;
                                product_feedback_array[found_index] = "";
                            }
                        }
                        else if (owner_choice == 6)
                        {

                            // Code to Add Product on sale
                            system("cls");
                            cout << "Enter the code of product you want to put sale on: ";
                            string product_code;
                            cin.ignore();
                            getline(cin, product_code);
                            bool is_found = false;
                            int found_index = 0;
                            for (int i = 0; i < index; i++)
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
                                break;
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
                                    int discount = ((product_price_array[found_index] - product_sale_array[found_index]) / product_price_array[found_index]);
                                    cout << discount << " discount is already applied to the product." << endl;
                                    getch();
                                }
                            }
                        }
                        else if (owner_choice == 7)
                        {

                            // Code to View Customer Feedback
                            system("cls");
                            cout << "Enter the code of the product of which you want to view feedback: ";
                            string product_code;
                            cin.ignore();
                            getline(cin, product_code);
                            bool is_found = false;
                            int found_index = 0;
                            for (int i = 0; i < index; i++)
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
                                break;
                            }
                            else
                            {

                                // Code to view feedbacks
                                cout << "Feedback on " << product_code_array[found_index] << " is: " << endl
                                     << product_feedback_array[found_index] << endl;
                            }
                        }
                        else if (owner_choice == 8)
                        {

                            // Code to Show Product Rating
                            system("cls");
                            cout << "Enter the code of the product of which you want to view ratings: ";
                            string product_code;
                            cin.ignore();
                            getline(cin, product_code);
                            bool is_found = false;
                            int found_index = 0;
                            for (int i = 0; i < index; i++)
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
                        else if (owner_choice == 9)
                        {

                            // Code to Show pending Orders
                            system("cls");
                            while (index != 0)
                            {
                                if (order_status_array[index] == "Pending")
                                {
                                    cout << "The order status of " << product_code_array[index] << " is Pending." << endl;
                                }
                                index--;
                            }
                            getch();
                        }
                        else if (owner_choice == 10)
                        {

                            // Code to Show Delievered Orders
                            system("cls");
                            while (index != 0)
                            {
                                if (order_status_array[index] == "Delivered")
                                {
                                    cout << "The order status of " << product_code_array[index] << " is Delivered." << endl;
                                }
                                index--;
                            }
                            getch();
                        }
                        else if (owner_choice == 11)
                        {

                            // Code to Update Order Status
                            system("cls");
                            cout << "Enter the code of the product of which you want to update: ";
                            string product_code;
                            cin.ignore();
                            getline(cin, product_code);
                            bool is_found = false;
                            int found_index = 0;
                            for (int i = 0; i < index; i++)
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
                        else if (owner_choice == 12)
                        {

                            // Code to exit
                            cout << "Exiting Owner Menu" << endl;
                            getch();
                            break;
                        }
                        else
                        {

                            // Code for worng choice
                            cout << "Invalid option selected" << endl;
                        }
                        cout << "Press any key to continue" << endl;
                        getch();
                    }
                    break;
                }
                else
                {

                    // For worng credentials
                    cout << "Invalid Username or password" << endl;
                }
                cout << "Press any key to continue" << endl;
                getch();
            }
        }

        // If Choice is 2 from System Menu
        else if (choice == 2)
        {
            system("cls");
            cout << "Enter your name: ";
            string customer_name;
            cin.ignore();
            getline(cin, customer_name);
            cout << "Enter your email(format @gmail.com): ";
            string customer_email;
            cin >> customer_email;
            customer_name_array[count] = customer_name;
            customer_email_array[count] = customer_email;
            count++;
            while (true)
            {

                // Code for Customer Menu
                // 1.View Products, 2.Search Product, 3.Add product in cart, 4.Buy a Product, 5.Go to Cart 6.Track Order
                // 7.Send Feedback, 8.Send Rating, 9.View Rating 10.Exit
                system("cls");
                cout << "----Customer Menu----" << endl;
                cout << "1.View Product" << endl
                     << "2.Search Product" << endl
                     << "3.Add product to cart" << endl
                     << "4.View Cart" << endl
                     << "5.View categorized product" << endl
                     << "6.View Prdoucts with prices sorted(highest to lowest)" << endl
                     << "7.View Prdoucts with prices sorted(lowest to highest)" << endl
                     << "8.Track Order" << endl
                     << "9.Send Feedback" << endl
                     << "10.Send Rating" << endl
                     << "11.View Rating and Feedbacks" << endl
                     << "12.Exit" << endl;
                cout << "Enter your choice: ";
                int customer_choice = 0;
                cin >> customer_choice;
                if (customer_choice == 1)
                {

                    // Code for View All Products
                    system("cls");
                    for (int number = 0; number < index; number++)
                    {
                        cout << "Product Name\tProduce ID\tPrice\tAvailability\tDiscounted Price" << endl;
                        cout << product_name_array[number] << "\t" << product_code_array[number] << "\t" << product_price_array[number] << "\t"
                             << product_available_array[number] << "\t" << product_sale_array[number] << endl;
                        getch();
                    }
                }
                else if (customer_choice == 2)
                {

                    // Code for Search Product
                    system("cls");
                    cout << "Enter the Product ID: ";
                    string product_code;
                    cin.ignore();
                    getline(cin, product_code);
                    bool is_found = false;
                    int found_index;
                    for (int i = 0; i < index; i++)
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
                else if (customer_choice == 3)
                {

                    // Code for Add Product in Cart
                    system("cls");
                    cout << "Enter the Product ID: ";
                    string product_code;
                    cin.ignore();
                    getline(cin, product_code);
                    int found_index = 0;
                    bool is_found = false;
                    for (int i = 0; i < index; i++)
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
                else if (customer_choice == 4)
                {

                    // Code for Go to Cart
                    system("cls");
                    cout << "Enter the Product ID: ";
                    string product_code;
                    cin.ignore();
                    getline(cin, product_code);
                    int found_index = 0;
                    bool is_found = false;
                    for (int i = 0; i < index; i++)
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
                        for (int i = 0; i < length; i++)
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
                            for (int i = 0; i < count; i++)
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
                            }
                            cout << "Enter the price after discount: " << product_price_after_coupon_discount_array[found_code_index] << endl;
                            customer_buy_array[found_index] = product_code_array[found_index];
                            cout << "Product ordered successfully" << endl;
                            cout << "Your order ID is: " << order_id_track_array[found_index] << endl;
                            getch();
                        }
                    }
                }
                else if (customer_choice == 5)
                {

                    // Code for view categorized product
                    system("cls");
                    cout << "Enter the Category of the product: ";
                    string category;
                    cin >> category;
                    for (int product_no = 0; product_no < index; product_no++)
                    {
                        if (category == "Clothes")
                        {
                            if (product_code_array[product_no][0] == 'C')
                            {
                                cout << "Product Name\tProduct ID\tProduct Price\tProduct In Stock" << endl;
                                cout << product_name_array[product_no] << "\t" << product_code_array[product_no] << "\t"
                                     << product_price_array << "\t" << product_available_array[product_no] << endl;
                            }
                        }
                        else if (category == "Shoes")
                        {
                            if (product_code_array[product_no][0] == 'S')
                            {
                                cout << "Product Name\tProduct ID\tProduct Price\tProduct In Stock" << endl;
                                cout << product_name_array[product_no] << "\t" << product_code_array[product_no] << "\t"
                                     << product_price_array << "\t" << product_available_array[product_no] << endl;
                            }
                        }
                        else if (category == "Jewellery")
                        {
                            if (product_code_array[product_no][0] == 'J')
                            {
                                cout << "Product Name\tProduct ID\tProduct Price\tProduct In Stock" << endl;
                                cout << product_name_array[product_no] << "\t" << product_code_array[product_no] << "\t"
                                     << product_price_array << "\t" << product_available_array[product_no] << endl;
                            }
                        }
                    }
                }
                else if (customer_choice == 6)
                {

                    // Code for view products from highest to lowest price
                    system("cls");

                    // Applying bubble sort sorting mechanism
                    for (int bubblesort1 = 0; bubblesort1 < length - 1; bubblesort1++)
                    {
                        for (int bubblesort2 = 0; bubblesort2 < length - bubblesort2 - 1; bubblesort2++)
                        {
                            if (product_price_array[bubblesort2] < product_price_array[bubblesort2 + 1])
                            {
                                int swap_price = product_price_array[bubblesort2];
                                product_price_array[bubblesort2] = product_price_array[bubblesort2 + 1];
                                product_price_array[bubblesort2 + 1] = swap_price;
                            }
                        }
                    }

                    // Code to view sorted products
                    for (int sort = 0; sort < index; sort++)
                    {
                        cout << "Product Name\tProduct ID\tProduct Price\tProduct Availibility" << endl;
                        cout << product_name_array[sort] << "\t" << product_code_array[sort] << "\t"
                             << product_price_array[sort] << "\t" << product_available_array[sort] << endl;
                    }
                    getch();
                }
                else if (customer_choice == 7)
                {

                    // Code for view product from lowest to highest price
                    system("cls");

                    // Applying bubble sort sorting mechanism
                    for (int bubblesort1 = 0; bubblesort1 < length - 1; bubblesort1++)
                    {
                        for (int bubblesort2 = 0; bubblesort2 < length - bubblesort1 - 1; bubblesort2++)
                        {
                            if (product_price_array[bubblesort2] > product_price_array[bubblesort2+1])
                            {
                                int swap_price = product_price_array[bubblesort2];
                                product_price_array[bubblesort2] = product_price_array[bubblesort2 + 1];
                                product_price_array[bubblesort2 + 1] = swap_price;
                            }
                        }
                    }

                    // Code to view sorted products
                    for (int sort = 0; sort < index; sort++)
                    {
                        cout << "Product Name\tProduct ID\tProduct Price\tProduct Availibility" << endl;
                        cout << product_name_array[sort] << "\t" << product_code_array[sort] << "\t"
                             << product_price_array[sort] << "\t" << product_available_array[sort] << endl;
                    }
                    getch();
                }
                else if (customer_choice == 8)
                {

                    // Code for Track Order
                    system("cls");
                    cout << "Enter the Product ID you want to search: ";
                    string product_code;
                    cin.ignore();
                    getline(cin, product_code);
                    bool is_found = false;
                    int found_index;
                    for (int i = 0; i < index; i++)
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
                        for (int order_no = 0; order_no < length; order_no++)
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
                            getch();
                        }
                        else
                        {
                            cout << "Order Status is: " << order_status_array[found_index] << endl;
                        }
                    }
                }
                else if (customer_choice == 9)
                {

                    // Code for Send Feedback
                    system("cls");
                    cout << "Enter the Product ID you want to send feedback of: ";
                    string product_code;
                    cin.ignore();
                    getline(cin, product_code);
                    bool is_found = false;
                    int found_index;
                    for (int i = 0; i < index; i++)
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
                    }
                }
                else if (customer_choice == 10)
                {

                    // Code for Send Rating
                    system("cls");
                    cout << "Enter the Product ID you want to send rating of: ";
                    string product_code;
                    cin.ignore();
                    getline(cin, product_code);
                    bool is_found = false;
                    int found_index;
                    for (int i = 0; i < index; i++)
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
                    }
                }
                else if (customer_choice == 11)
                {

                    // Code for View Rating and feedback
                    system("cls");
                    cout << "Enter the Product ID you want to send feedback of: ";
                    string product_code;
                    cin.ignore();
                    getline(cin, product_code);
                    bool is_found = false;
                    int found_index;
                    for (int i = 0; i < index; i++)
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
                }
                else if (customer_choice == 12)
                {

                    // Code for exit
                    system("cls");
                    cout << "Exiting Customer Menu" << endl;
                    getch();
                    break;
                }
                else
                {

                    // code for invalid choice
                    system("cls");
                    cout << "Invalid Choice" << endl;
                }
                cout << "Press any key to continue..." << endl;
                getch();
            }
        }

        // If chice is 3 from System Menu#
        else if (choice == 3)
        {
            cout << "Exiting the Program" << endl;
            cout << "Press any key to continue...";
            getch();
            break;
        }

        // If choice is any other number
        else
        {
            cout << "Invalid Choice" << endl
                 << "Try again Later...." << endl
                 << "Press any key to continue" << endl;
            getch();
        }
    }
}