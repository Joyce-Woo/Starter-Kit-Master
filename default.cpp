// ********************************************************* 
// Course: TCP1101 PROGRAMMING FUNDAMENTALS 
// Year: Trimester 1, 2022/23 (T2215) 
// Lab: TT8L 
// Names: JOYCE WOO KAI XUAN | TOH KAI RU 
// IDs: 1211104955 | 1211104977 
// Emails: 1211104955@student.mmu.edu.my | 1211104977@student.mmu.edu.my 
// Phones: 0162017158 | 01111980502 
// ********************************************************* 

#include <iostream>
#include "change_set.cpp"
#include "default_dashboard.cpp"
using namespace std;

int main()
{
  cout << "Default Games Settings \n";
  cout << "------------------------- \n";
  cout << "Board Rows    : 19 \n";
  cout << "Board Columns : 3 \n";
  cout << "Zombie Count  : 2 \n";

  string change_settings;
  cout << "Do you wish to change the game settings (y/n)? => ";
  getline(cin, change_settings);

  cout << "\n";
  
  if (change_settings == "y") main2();
  if (change_settings == "n") main1();

  return 0;

}