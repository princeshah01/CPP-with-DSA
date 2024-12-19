#include<iostream>
#include<string>

using namespace std ;

class Std
{
private:
    int roll ;
    string name ;
    string course ;     
public:
    Std(string course , string name , int roll){
        this->course = course ;
        this->name = name ;
        this->roll = roll ;
    }
    ~Std(){
        cout<<"destructor is called" ;

    }
};


int main(){
    Std s1("mca", "prince" , 1) ;
 
 return 0;
}