#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>

using namespace std;

int main(){
//pointers
int age =21;
int *pAge = &age;
double gpa =2.6;
double *pGpa =&gpa;
std::string name= "Jim";
std::string *pName = &name;

std::cout<<*pName<<std::endl; //cout<<&name can do the same as making a pointer variable

//classes & objects


class Book{
    public:
        std::string title;
        std::string author;
        int pages;
        Book(){

            title = "no title";
            author="no author";
            pages = 0;
        }

        Book(string aTitle, string aAuthor, int aPages){ //constructors
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};

Book book1("Harry Potter","Keming Jolly",234);
Book book2("Harry P","Jolly Jolly",236);
Book book3;
book1.title = "Harry P";
book1.author = "Kello Jolly";
book1.pages = 235;

class Student{
    public:
    string stuName;
    string major;
    double Gpa;
    Student(string names, string majors, double gpas){
        stuName = names;
        major = majors;
        Gpa = gpas;

    }

    bool hasHonors(){//object function
        if(Gpa>=3.5){
            return true;
        }
        return false;
    }


};

Student stu1("Jeff", "art", 2.1);
Student stu2("kellz", "math", 4.0);

cout<<stu1.hasHonors()<<endl;
cout<<stu2.hasHonors()<<endl;


class Movie{
    private:
        string rating;
    public:
        string title;
        string director;
        
        Movie(string mTitle, string mDirector, string mRating){
            title = mTitle;
            director = mDirector;
            setRating(mRating);
        }
        void setRating(string aRating){
            if(aRating == "G" || aRating =="PG" || aRating=="PG-13" || aRating=="R"){
                rating = aRating;

            }else{
                rating = "NR";            
            }
        }
        string getRating(){
            return rating;
        }
    };

Movie batman("The Batman","Matt Reeves","PG-13");


//batman.setRating("ge");
cout<<batman.getRating()<<endl;



//class inheritance 
class Chef{
    public:
        void makeChicken(){
            cout<< "The chef makes chicken"<< endl;
        }
        void makeFish(){
            cout<< "The chef makes fish"<<endl;
        }
        void makeSpecial(){
            cout<<"The chef makes bbq ribs"<<endl;
        }


};
class ItalianChef : public Chef{
   public:
    void makePasta(){
        cout<< "The chef makes Pasta"<<endl;
    }
    void makeSpecial(){
        cout<<"The chef makes chicken parm"<<endl;
        }

};


    Chef chef;
    chef.makeSpecial();

    ItalianChef italianchef;
    italianchef.makeSpecial();
    

    return 0;
}