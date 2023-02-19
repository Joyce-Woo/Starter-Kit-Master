#include <iostream>
#include <time.h>
using namespace std;

int main3() 
{
    srand (time(NULL));

    int Life[9] = {100, 150, 200, 250, 300, 350, 400, 450, 500};
    int Attack[6] = {5, 10, 15, 20, 25, 30};
    int Range[5] = {1, 2, 3, 4, 5};

    int L = rand() % 9;
    int A = rand() % 6;
    int R = rand() % 5;


    cout << "Alien    :  " << "Life  " << Life[L] << "\tAttack  " << Attack[A] <<endl;
    cout << "Zombie 1 :  " << "Life  " << Life[L] << "\tAttack  " << Attack[A] << "\tRange  " << Range[R] <<endl;
    cout << "Zombie 2 :  " << "Life  " << Life[L] << "\tAttack  " << Attack[A] << "\tRange  " << Range[R] <<endl;
    return 0;
}