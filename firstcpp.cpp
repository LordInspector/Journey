#include <iostream>
#include <ctime>
#include <cstdlib>
//using namespace std;

int main()
{
const std::string myName = "kko";
int age;
age = 32;
std::cout << "I am Akachi " << myName<< age << std::endl;
const double money = 21.55;

std::cout << money<< " is not enough"<< std::endl;
//simple math

double x = 10;
double y = 5;
double z;

z = (x+10)/(3*y);

std::cout<< z << std::endl;

// simple math cont, tax rates

double sales = 95000;
double state_rate = 0.04;
double county_rate = 0.02;
double taxTotal, state_tax, county_tax;

state_tax= state_rate*sales;
county_tax= county_rate*sales;
taxTotal= state_tax+county_tax;

std::cout<< "Your sales were "<<sales<< " and with state and county rates you pay "<<taxTotal<<" total tax"<<std::endl;

// reading user input

std::cout<< "Enter 2 values: ";
int userVal;
int secVal;
std::cin>> userVal>> secVal;

std::cout<< "Your values were "<<userVal<< " and "<<secVal<<std::endl;

//simple temp converter

std::cout<< "Enter a temp value in F: ";
double TempF;
std::cin>> TempF;
double TempC;
TempC = (TempF-32) * (5.0/9);
std::cout<< "The value in C is "<<TempC<<std::endl;


//dice roll program
// generate random seed between 1 and 6
srand(time(nullptr));
std::cout<<"Rolling dice..."<<std::endl;
int number;
number =rand() % 6;
if (number == 0)
{
    number =6;
}


std::cout<<"Dice roll is: "<<number<<std::endl;








return 0;


}