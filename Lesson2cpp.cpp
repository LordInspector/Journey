#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>

using namespace std;

//functions
void sayHi(string name, int age);
double cube(double num);


int main()
{
// working with arrays
int rightNums[20] = {1,2,3,7,66}; //don't have to define here


rightNums[10]=21;
cout << rightNums[15]<<endl;
sayHi("kevin", 43);

double ans = cube(3);
cout<< cube(3.0)<<endl;

    return 0;
}

void sayHi(string name, int age)
{
cout<<name<<" You stink! at "<< age<<" years old. Crazy!"<< endl;

}
double cube(double num){

    return num * num * num;

}
