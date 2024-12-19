#include<iostream>
#include<string>
using namespace std;

class Std
{
private:
    string name;
    int roll ;
    string phoneN ;
public:
    Std(string name , int roll , string ph){
        this->name = name ;
        this->phoneN = ph ;
        this->roll = roll ;
        
    }
    void showStd();

};

void Std::showStd(){
    cout<<"name: "<<this->name<<" roll number is : "<<this->roll<<" his phone number is : "<< this->phoneN<<endl ; 
}

int main(){
    Std *std1 = new Std("prince" , 1 , "9817732008");
    Std *ptr ;
    std1->showStd() ;
    ptr = &*std1 ;
    cout<<ptr ;

    return 0 ;
}
