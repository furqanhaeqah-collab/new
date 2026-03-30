#include <iostream>

#include <conio.h>

using namespace std;

main()
{
    int total_students = 100, index = 14;
    // Arrays for storing data
    string name_array[total_students] = {"Rimsha", "Kinza", "Ariba", "Ayesha", "Hina", "Fatima", "Zainab", "Iqra", "Sana", "Mahnoor", "Laiba", "Noor", "Anaya", "Mehak"};
    int age_array[total_students] = {18, 19, 19, 18, 20, 18, 19, 18, 20, 19, 18, 19, 18, 20};
    float matric_array[total_students] = {1021, 1024, 1060, 950, 980, 1005, 1030, 970, 990, 1010, 995, 1022, 985, 1000};
    float fsc_array[total_students] = {1034, 990, 1100, 850, 920, 1050, 1080, 970, 960, 1025, 1000, 1015, 980, 990};
    float ecat_array[total_students] = {300, 190, 350, 245, 270, 310, 330, 260, 280, 295, 275, 305, 265, 290};
    string pref1_array[total_students] = {"CS", "EE", "CE", "CS", "EE", "CS", "CE", "CS", "EE", "CE", "CS", "EE", "CS", "CE"};
    string pref2_array[total_students] = {"CE", "CS", "EE", "CE", "CS", "EE", "CS", "CE", "CS", "EE", "CE", "CS", "EE", "CS"};
    string pref3_array[total_students] = {"EE", "CE", "CS", "EE", "CE", "CE", "EE", "EE", "CE", "CS", "EE", "CE", "CE", "EE"};
    float aggr_array[total_students];  // Will be used later
    string seat_array[total_students]; // Will be used later
    while (true)
    {
        // Main header of University Mnagement System
        system("cls");
        cout << "----------------------------------" << endl;
        cout << "---UNIVERSITY MANAGEMENT SYSTEM---" << endl;
        cout << "----------------------------------" << endl;
        cout << endl;

        // Users Main Menu
        cout << "Users menu" << endl;
        cout << "1. Admin" << endl;
        cout << "2. Student" << endl;
        cout << "3. Exit to end" << endl;
        cout << "Enter your option: ";
        string user_choice;
        cin >> user_choice;

        // User chooses from 1-3 from user's menu
        cout << "Your choice is " << user_choice << endl;
        if (user_choice == "1")
        {
            // Write here the admin code
            for (int countattempt = 0; countattempt < 3; countattempt++)
            {
                system("cls");
                cout << "Welcome to University Management System" << endl
                     << "Admin Menu: Login attempt " << countattempt + 1 << endl;
                cout << "Enter username: ";
                string username;
                cin >> username;
                cout << "Enter password: ";
                int password;
                cin >> password;
                if (username == "admin" && password == 1234)
                {
                    cout << "Login Successfull" << endl;
                    cout << "Press any key to continue " << endl;
                    getch();

                    while (true)
                    {
                        system("cls");
                        // Code for the menu after successfull logindx
                        cout << "Admin Menu: " << endl;
                        cout << "1. Show all Students " << endl;
                        cout << "2. Search Student " << endl;
                        cout << "3. Update Student Record " << endl;
                        cout << "4. Generate Merit List " << endl;
                        cout << "5. Delete Student Record " << endl;
                        cout << "6. Exit" << endl;
                        cout << "Choose the option: ";
                        string admin_option;
                        cin >> admin_option;
                        if (admin_option == "1")
                        {
                            // Show Student record
                            cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (name_array[i] != "")
                                {
                                    cout << name_array[i] << "\t" << age_array[i] << "\t" << matric_array[i]
                                         << "\t" << fsc_array[i] << "\t" << ecat_array[i] << "\t" << pref1_array[i]
                                         << "\t" << pref2_array[i] << "\t" << pref3_array[i] << endl;
                                }
                            }
                        }
                        else if (admin_option == "2")
                        {
                            // Search student by name function
                            cout << "Enter the name you want to search: ";
                            string name;
                            cin >> name;
                            bool name_found = false;
                            int found_index = 0;
                            for (int i = 0; i < index; i++)
                            {
                                if (name_array[i] == name)
                                {
                                    name_found = true;
                                    found_index = i;
                                }
                            }
                            if (name_found == false)
                            {
                                cout << "Record not found against name " << name << endl;
                            }
                            else
                            {
                                cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;
                                cout << name_array[found_index] << "\t" << age_array[found_index] << "\t" << matric_array[found_index]
                                     << "\t" << fsc_array[found_index] << "\t" << ecat_array[found_index] << "\t" << pref1_array[found_index]
                                     << "\t" << pref2_array[found_index] << "\t" << pref3_array[found_index] << endl;
                            }
                        }
                        else if (admin_option == "3")
                        {
                            // Update Student record
                            cout << "Enter the name you want to update: ";
                            string name;
                            cin >> name;
                            bool name_found = false;
                            int found_index = 0;
                            for (int i = 0; i < index; i++)
                            {
                                if (name_array[i] == name)
                                {
                                    name_found = true;
                                    found_index = i;
                                }
                            }
                            if (name_found == true)
                            {
                                cout << "------Old Record------" << endl;
                                cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;
                                cout << name_array[found_index] << "\t" << age_array[found_index] << "\t" << matric_array[found_index]
                                     << "\t" << fsc_array[found_index] << "\t" << ecat_array[found_index] << "\t" << pref1_array[found_index]
                                     << "\t" << pref2_array[found_index] << "\t" << pref3_array[found_index] << endl;
                                cout << "Enter new record for update " << endl;
                                cout << "Enter your name: ";
                                string name;
                                cin >> name;
                                cout << "Enter your age: ";
                                int age;
                                cin >> age;
                                cout << "Enter your matric marks: ";
                                float matric;
                                cin >> matric;
                                cout << "Enter your FSC marks: ";
                                float fsc;
                                cin >> fsc;
                                cout << "Enter your ECAT marks: ";
                                float ecat;
                                cin >> ecat;

                                // Variables for storing preferences
                                string pref1;
                                string pref2;
                                string pref3;

                                // Loop for Preferences
                                while (true)
                                {
                                    cout << endl
                                         << "Enter CS,CE and EE in your preferences " << endl;
                                    cout << "Enter your 1st preference: ";
                                    cin >> pref1;
                                    if (pref1 == "CS" || pref1 == "CE" || pref1 == "EE")
                                    {
                                        break;
                                        // Loop breaks
                                    }
                                    else
                                    {
                                        cout << "Invalid choice. Please enter a CS,CE or EE as your choice" << endl;
                                        // Loop continues
                                    }
                                }
                                while (true)
                                {
                                    cout << endl
                                         << "Enter CS,CE and EE in your preferences " << endl;
                                    cout << "Enter your 2nd preference: ";
                                    cin >> pref2;
                                    if (pref2 == "CS" || pref2 == "CE" || pref2 == "EE")
                                    {
                                        break;
                                        // Loop breaks
                                    }
                                    else
                                    {
                                        cout << "Invalid choice. Please enter a CS,CE or EE as your choice" << endl;
                                        // Loop continues
                                    }
                                }
                                while (true)
                                {
                                    cout << endl
                                         << "Enter CS,CE and EE in your preferences " << endl;
                                    cout << "Enter your 3rd preference: ";
                                    cin >> pref3;
                                    if (pref3 == "CS" || pref3 == "CE" || pref3 == "EE")
                                    {
                                        break;
                                        // Loop breaks
                                    }
                                    else
                                    {
                                        cout << "Invalid choice. Please enter a CS,CE or EE as your choice" << endl;
                                        // Loop continues
                                    }
                                }

                                // Storing data in arrays
                                name_array[found_index] = name;
                                age_array[found_index] = age;
                                matric_array[found_index] = matric;
                                fsc_array[found_index] = fsc;
                                ecat_array[found_index] = ecat;
                                pref1_array[found_index] = pref1;
                                pref2_array[found_index] = pref2;
                                pref3_array[found_index] = pref3;
                            }
                            else
                            {
                                cout << "Record not found " << endl;
                            }
                        }
                        else if (admin_option == "4")
                        {
                            // Generate merit list
                            for (int i = 0; i < index; i++)
                            {
                                float aggr = (matric_array[i] / 1100 * 100 * 0.30) + (fsc_array[i] / 1200 * 100 * 0.40) + (ecat_array[i] / 400 * 100 * 0.3);
                                aggr_array[i] = aggr;
                            }
                            // Code to sort the data
                            for (int i = 0; i < index; i++)
                            {
                                for (int j = i + 1; j < index; j++)
                                {
                                    if (aggr_array[j] > aggr_array[i])
                                    {
                                        // Swaping of name
                                        string swap_name = name_array[j];
                                        name_array[j] = name_array[i];
                                        name_array[i] = swap_name;
                                        // Swapping of age
                                        int swap_age = age_array[j];
                                        age_array[j] = age_array[i];
                                        age_array[i] = swap_age;
                                        // Swaping of matric
                                        float swap_matric = matric_array[j];
                                        matric_array[j] = matric_array[i];
                                        matric_array[i] = swap_matric;
                                        // Swaping of fsc
                                        float swap_fsc = fsc_array[j];
                                        fsc_array[j] = fsc_array[i];
                                        fsc_array[i] = swap_fsc;
                                        // Swaping of Ecat
                                        float swap_ecat = ecat_array[j];
                                        ecat_array[j] = ecat_array[i];
                                        ecat_array[i] = swap_ecat;
                                        // Swapping of agrregate
                                        float swap_aggr = aggr_array[j];
                                        aggr_array[j] = aggr_array[i];
                                        aggr_array[i] = swap_aggr;
                                        // Swaping of pref1
                                        string swap_pref1 = pref1_array[j];
                                        pref1_array[j] = pref1_array[i];
                                        pref1_array[i] = swap_pref1;
                                        // Swaping of pref2
                                        string swap_pref2 = pref2_array[j];
                                        pref2_array[j] = pref2_array[i];
                                        pref2_array[i] = swap_pref2;
                                        // Swaping of pref3
                                        string swap_pref3 = pref3_array[j];
                                        pref3_array[j] = pref3_array[i];
                                        pref3_array[i] = swap_pref3;
                                    }
                                }
                            }
                            // To write whole data with aggregate
                            cout << "Sr. No\tName\tAge\tAggregate" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (name_array[i] != "")
                                {
                                    cout << i + 1 << "\t" << name_array[i] << "\t" << age_array[i] << "\t" << aggr_array[i] << endl;
                                }
                            }
                            // Show Selected students according to their preferences
                            int cs_seat = 5, ce_seat = 5, ee_seat = 5;
                            for (int i = 0; i < index; i++)
                            {
                                bool seat_assigned = false;
                                string prefs[3] = {pref1_array[i], pref2_array[i], pref3_array[i]};
                                for (int j = 0; j < 3 && seat_assigned == false; j++)
                                {
                                    if (prefs[j] == "CS" && cs_seat > 0)
                                    {
                                        seat_array[i] = "CS";
                                        cs_seat--;
                                        seat_assigned = true;
                                    }
                                    else if (prefs[j] == "CE" && ce_seat > 0)
                                    {
                                        seat_array[i] = "CE";
                                        ce_seat--;
                                        seat_assigned = true;
                                    }
                                    else if (prefs[j] == "EE" && ee_seat > 0)
                                    {
                                        seat_array[i] = "EE";
                                        ee_seat--;
                                        seat_assigned = true;
                                    }
                                }
                                if (seat_assigned == false)
                                {
                                    seat_array[i] = "Not Selected";
                                }
                            }
                            cout << "Sr.No\tName\tSeat" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (name_array[i] != "")
                                {
                                    cout << i + 1 << "\t" << name_array[i] << "\t" << seat_array[i] << endl;
                                }
                            }
                        }
                        else if (admin_option == "5")
                        {
                            // Delete Student Record by name
                            cout << "Enter the name you want to delete: ";
                            string name;
                            cin >> name;
                            bool name_found = false;
                            int found_index = 0;
                            for (int i = 0; i < index; i++)
                            {
                                if (name_array[i] == name)
                                {
                                    name_found = true;
                                    found_index = i;
                                }
                            }
                            if (name_found == true)
                            {
                                name_array[found_index] = "";
                                age_array[found_index] = 0;
                                matric_array[found_index] = 0;
                                fsc_array[found_index] = 0;
                                ecat_array[found_index] = 0;
                                pref1_array[found_index] = "";
                                pref2_array[found_index] = "";
                                pref3_array[found_index] = "";
                                cout << "Record of " << name << " deleted successfully " << endl;
                            }
                            else
                            {
                                cout << "Record not found " << endl;
                            }
                        }
                        else if (admin_option == "6")
                        {
                            // Exit Program
                            cout << "Logout successfull" << endl;
                            getch();
                            break;
                        }
                        else
                        {
                            cout << "Invalid option selected" << endl;
                        }
                        cout << "Press any key to continue " << endl;
                        getch();
                    }
                    break;
                }
                else
                {
                    cout << "Invalid username or password" << endl;
                }
                cout << "Press any key to continue" << endl;
                getch();
            }
        }
        else if (user_choice == "2")
        {
            system("cls");

            // Write here the student code
            cout << "Welcome to University Management System" << endl;
            cout << "Student Menu" << endl;

            // Write Student details here
            cout << "Enter your name: ";
            string name;
            cin >> name;
            cout << "Enter your age: ";
            int age;
            cin >> age;
            cout << "Enter your matric marks: ";
            float matric;
            cin >> matric;
            cout << "Enter your FSC marks: ";
            float fsc;
            cin >> fsc;
            cout << "Enter your ECAT marks: ";
            float ecat;
            cin >> ecat;

            // Variables for storing preferences
            string pref1;
            string pref2;
            string pref3;

            // Loop for Preferences
            while (true)
            {
                cout << endl
                     << "Enter CS,CE and EE in your preferences " << endl;
                cout << "Enter your 1st preference: ";
                cin >> pref1;
                if (pref1 == "CS" || pref1 == "CE" || pref1 == "EE")
                {
                    break;
                    // Loop breaks
                }
                else
                {
                    cout << "Invalid choice. Please enter a CS,CE or EE as your choice" << endl;
                    // Loop continues
                }
            }
            while (true)
            {
                cout << endl
                     << "Enter CS,CE and EE in your preferences " << endl;
                cout << "Enter your 2nd preference: ";
                cin >> pref2;
                if (pref2 == "CS" || pref2 == "CE" || pref2 == "EE")
                {
                    break;
                    // Loop breaks
                }
                else
                {
                    cout << "Invalid choice. Please enter a CS,CE or EE as your choice" << endl;
                    // Loop continues
                }
            }
            while (true)
            {
                cout << endl
                     << "Enter CS,CE and EE in your preferences " << endl;
                cout << "Enter your 3rd preference: ";
                cin >> pref3;
                if (pref3 == "CS" || pref3 == "CE" || pref3 == "EE")
                {
                    break;
                    // Loop breaks
                }
                else
                {
                    cout << "Invalid choice. Please enter a CS,CE or EE as your choice" << endl;
                    // Loop continues
                }
            }

            // Storing data in arrays
            name_array[index] = name;
            age_array[index] = age;
            matric_array[index] = matric;
            fsc_array[index] = fsc;
            ecat_array[index] = ecat;
            pref1_array[index] = pref1;
            pref2_array[index] = pref2;
            pref3_array[index] = pref3;
            index++;

            cout << "Congratulations! your data has been saved." << endl;
            // Run after data is saved successfully
            cout << "Press any key to continue" << endl;
            getch();
        }
        else if (user_choice == "3")
        {
            break;
            // The whole loop breaks when user enter 3
        }
        else
        {
            cout << "Invalid choice" << endl;
            getch();
            cout << "Press any key to continue" << endl;
        }
    } // End of the while loop
    cout << endl
         << "Thanks for using this software...." << endl;
}