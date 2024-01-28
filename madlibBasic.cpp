#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string> 
using namespace std;

int main()
{

string name, food, drink;

cout<<"enter a name: ";
getline(cin, name);
cout<<"enter a food: ";
getline(cin, food);
cout<<"enter a drink: ";
cin>>drink;//alternate way

cout<<"Hi my name is "<<name<<endl;
cout<<"My favorite food is {food} and i like to drink {drink}"<<endl;



    return 0;
}