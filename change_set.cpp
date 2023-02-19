#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class mysettings
{
public:
    void usersettings()
    {
        cout << "\n Board Settings \n";
        cout << "------------------------- \n";

        int rows;
        cout << "Enter rows (odd)   => ";
        cin >> rows;

        int column;
        cout << "Enter column (odd) => ";
        cin >> column;

        cout << "\n";

        cout << "Zombie Settings \n";
        cout << "------------------------- \n";
        int zombie;
        cout << "Enter number of zombies => ";
        cin >> zombie;

        cout << "\n";

        if (rows % 2 != 0 && column % 2 != 0)
        {
            cout << "Changed Successful - Settings Updated. \n";
        }

        else
        {
            cout << "Changed Unsuccessful - you can only enter odd numbers. \n";
            cout << "Please Try Again \n";
            mysettings myObj;
            myObj.usersettings();
        }
    }
};


int main2()
{
    mysettings myObj;
    myObj.usersettings();
    return 0;
}