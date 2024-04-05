#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string userName;
    cout << "Enter the user name: ";
    getline(cin,userName);
    string reenterUserName;
    cout << "Reenter the user name: ";
    getline(cin,reenterUserName);
    if ((userName==reenterUserName)) {
        cout << "The user name " << userName << " is valid." <<endl;
    } else {
        cout << "The user name " << userName << " is invalid." <<endl;
    }
    return 0;
}