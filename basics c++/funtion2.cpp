#include<iostream>
#include<math.h>
using namespace std;

float area(float);
int area(int , int) ;



int main(){


float r ;
cout<<"enter radius for circle"<<endl;
cin>>r ;
cout<<"area of circle is "<<area(r)<<endl;

int l , b ;

cout<<"enter length and breadth for ractangle"<<endl;
cin>>l>>b ;

cout<<"area of rectangle is "<<area(l,b)<<endl;


    return 0;
}

float area(float r){
    return (M_PI*r*r);
}
int area(int l , int b){
    return l*b ;
}

// if we have diffrent signature for funtion with same name then at compile time compiler will check which call should bind with which function bu in case somehow it doesn't happen then compiler will do type promotion which basically mean char short will consider as int and  float will promoted as double