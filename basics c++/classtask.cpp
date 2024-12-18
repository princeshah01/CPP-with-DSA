#include<iostream>
using namespace std ;

class A {
    public:
    virtual void display(){
        cout<<"a";
    }
};

class B : public A {

    public :

    void display() {
        A::display() ;
        cout<<"b";
    }
};

int main(){

    // A* ptr = new B();
    B b ;
    b.display() ;


    return 0 ;

}