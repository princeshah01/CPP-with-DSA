#include<iostream>
using namespace std ;

class C {
    private:
    int a , b ;

    public: 

    void setdata (int a , int b)
    {
        this->a = a ;
        this->b = b ;

    }

    void showData (){
        cout<<a << " " << b <<endl ;

    }
    C(){
        this->a = 0 ;
        this->b = 0 ;
    }

    C operator+(C &a){
        C temp;
        temp.a = this->a + a.a;
        temp.b = this->b + a.b ;
    return temp ;
    }

};

int main(){

    C c1 , c2 , c3 ;

    c1.setdata(10 , 20 );
    c2.setdata (20 ,30) ;
    c3 = c1+c2 ;

    c3.showData();
    return 0;
}