#include<iostream>
using namespace std;
class A{

int a , b ;

static int rate;
public:

void set_data( int a , int b){
    this->a = a ;
    this->b = b ;
}
void show_data();

void operator+(A &temp1){

 this->a = temp1.a+this->a ;  ;
 this->b = temp1.b+this->b  ;
}
static void setRate(int x){
rate = x;
}

};



void A::show_data(){ //we can declare function out side class using scoperesulation then it will be considerd as class function /member function
    cout<<"a is "<<this->a<<"b is "<<this->b<<endl;
}
int A::rate = 0 ;

int main(){

    A ad1 ;
    A ad2 ;
    ad1.set_data(10,20);
    ad2.set_data(12,23);
    A::setRate(20) ;
    ad1+ad2 ;
    ad1.show_data();
    return 0;
}