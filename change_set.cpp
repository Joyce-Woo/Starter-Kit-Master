#include <iostream>
using namespace std;

void mysettings()
{
    cout << "Board Settings \n";
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

    cout << "Settings Updated. \n";
    cout << "Press any key to continue . . . \n";
}