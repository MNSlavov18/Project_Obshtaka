// Project_Obshtaka.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
struct Customer
{
    int Id;
    string Username;
    int Password;
    string First_Name;
    string Last_Name;
    string Address;
    string Student_Name;
    int Year_of_student;
};
void isAdmin(string UsernName, string pass)
{
    string admin = "admin";
    string adminPass = "adminpass";
        if (UsernName == admin and adminPass == pass)
        {
            cout << "Correct Password!\nAccess Granted!";
        }
        else
        {
            cout << "Wrong Password! ";
        }
}
int main()
{
    string UsernName;
    string pass;

    cout << "Please enter Password: ";
    getline(cin, UsernName);
    cout << "Please enter Username: ";
    getline(cin, pass);
    
    isAdmin(UsernName, pass);
}

