#include<iostream>

class A{
   public: 
int *num ;
char b ;
A(int *a){
    this->num = a ;
};

};
int main(){

int a = 10 ;

A* a1 = new A(&a);



return 0 ;
}