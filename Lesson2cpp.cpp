#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>

using namespace std;

//functions
void sayHi(string name, int age);
double cube(double num);
double simpCalc();

int main()
{
// working with arrays
int rightNums[20] = {1,2,3,7,66}; //don't have to define here
int arrGrid[3][2] = {
                        {1,2},
                        {3,4},
                        {5,6}

};

rightNums[10]=21;
cout << rightNums[15]<<endl;
sayHi("kevin", 43);

double ans = cube(3);
cout<< cube(3.0)<<endl;

for(int i=0; i<3;i++){
    for(int j=0; j<2;j++){
        cout<<arrGrid[i][j];
    }

    cout << endl;
}



//simpCalc();


    return 0;
}






//function declarations
void sayHi(string name, int age)
{
cout<<name<<" You stink! at "<< age<<" years old. Crazy!"<< endl;

}
double cube(double num){

    return num * num * num;

}
double simpCalc(){
double num1;
double num2;
char op;
double result;

cout<<"Enter first number: ";
cin>>num1;
cout<<"Enter 2nd number: ";
cin>>num2;
cout<<"Enter operation: ";
cin>>op;

if (op=='+'){
result = num1 + num2 ;
}else if(op == '-') {
result = num1 - num2 ;
}else if(op == '*') {
result = num1 * num2 ;
}else if(op == '/') {
result = num1 / num2 ;
}else{
    cout<<"operation not found"<<endl;
    
}

cout<<result<<endl;
return result;


}