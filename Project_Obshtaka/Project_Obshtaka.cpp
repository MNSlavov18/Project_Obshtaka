// Project_Obshtaka.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct CUSTOMER
{
    int Id;
    string Username;
    string Password;
    string First_Name;
    string Last_Name;
    string Address;
    string Student_Name;
    int Year_of_student;
};

bool isAdmin(string UsernName, string pass)
{
    string admin = "admin";
    string adminPass = "adminpass";
        if (UsernName == admin and adminPass == pass)
        {
            cout << "Correct Password!\nAccess Granted!"<<endl;
            return true;
        }
        else
        {
            cout << "Wrong Password! "<<endl;
            return false;
        }
}
void input(CUSTOMER& customer)
{
    cin >> customer.Id;
    cin >> customer.Username;
    cin >> customer.Password;
    cin >> customer.First_Name;
    cin >> customer.Last_Name;
    cin >> customer.Address;
    cin >> customer.Student_Name;
    cin>> customer.Year_of_student;
}

void showCustomer(CUSTOMER& customer)
{
    cout << customer.Id <<" " << customer.Username <<  " " << customer.Password << " " << customer.First_Name << " " << customer.Last_Name << " " << customer.Address << " " << customer.Student_Name << " " << customer.Year_of_student << endl;
}
void showCustomers(CUSTOMER customers[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        showCustomer(customers[i]);
    }
}
int main()
{
    string UsernName;
    string pass;

    cout << "Please enter Username: ";
    getline(cin, UsernName);
    cout << "Please enter Password: ";
    getline(cin, pass);
    
    isAdmin(UsernName, pass);
    CUSTOMER customers[1];
 
        for (int i = 0; i < 1; i++)
        {
            input(customers[i]);
        }
        showCustomers(customers, 1);

    
}

