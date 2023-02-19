#include <iostream>
#include "character_p.cpp"
#include <string>
#include <vector>
#include <cstdlib> // for system()
#include <ctime>   // for time() in srand( time(NULL) );
#include <iomanip> // for setw()
using namespace std;


class Path
{
private:
    vector<vector<char>> map_; // convention to put trailing underscore
    int dimX_, dimY_;          // to indicate private data

public:
    Path(int dimX = 19, int dimY = 3);
    void init(int dimX, int dimY);
    void display() const;
};


Path::Path(int dimX, int dimY)
{
    init(dimX, dimY);
}


void Path::init(int dimX, int dimY)
{
    srand (time(NULL));

    dimX_ = dimX;
    dimY_ = dimY;
    char objects[12] = {' ', ' ', ' ', ' ', ' ', 'h', 'v', '>', '<', 'p', 'Z', 'A'};
    // int noOfObjects = 12; // number of objects in the objects array
    // create dynamic 2D array using vector
    map_.resize(dimY_); // create empty rows
    for (int i = 0; i < dimY_; ++i)

    {
        map_[i].resize(dimX_); // resize each row
    }
    // put random characters into the vector array
    for (int i = 0; i < dimY_; ++i)
    {
        for (int j = 0; j < dimX_; ++j)
        {
            int objNo = rand() % 12;
            map_[i][j] = objects[objNo];
        }
    }
}


void Path::display() const
{
    // comment this out during testing
    // system("cls"); // OR system("clear"); for Linux / MacOS
    cout << "        .: Alien vs Zombie :." << endl;
    // for each row
    for (int i = 0; i < dimY_; ++i)
    {
        // display upper border of the row
        cout << " ";
        for (int j = 0; j < dimX_; ++j)
        {
            cout << "+-";
        }
        cout << "+" << endl;
        // display row number
        cout << setw(2) << (dimY_ + i - 2);
        // display cell content and border of each column
        for (int j = 0; j < dimX_; ++j)
        {
            cout << "|" << map_[i][j];
        }
        cout << "|" << endl;
    }
    // display lower border of the last row
    cout << " ";
    for (int j = 0; j < dimX_; ++j)
    {
        cout << "+-";
    }
    cout << "+" << endl;
    // display column number
    cout << " ";
    for (int j = 0; j < dimX_; ++j)
    {
        int digit = (j + 1) / 10;
        cout << " ";
        if (digit == 0)
            cout << " ";
        else
            cout << digit;
    }
    cout << endl;
    cout << " ";
    for (int j = 0; j < dimX_; ++j)
    {
        cout << " " << (j + 1) % 10;
    }
    cout << endl << endl;
}


void test1_1()
{
    Path path;
    path.display();
}


int main1()
{
    srand(1); // use this for fixed map during testing
    // srand(time(NULL)); // try this for random map
    test1_1();
    main3();
    return 0;
}