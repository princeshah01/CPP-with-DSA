// #include<iostream>
// using namespace std ;

// void sum(int  , int );  // this is funtion declaration also known as funtion prototype

// int main(){

//     sum(10,20);    //this is funtion call
//     return 0 ;

// }


// //  this is funtion defination 
// void sum(int a ,int b){
//     cout<<a+b<<endl;
// }


// above code was for call by value when we pass argment as ordinary variable  and takes parameter as ordinary variable thenn it is known as call by value where a copy of a and b is created over there f we cnage the value for a adn b in funtion then it doesn't effact the actual value of a and b 



// now we will see call by address 

// #include<iostream>
// using namespace std ;

// int sum(int * , int*) ;

// int main(){
// int a = 10 ;
// int b = 20 ;

// cout<<sum(&a, &b)<<endl ; //here we are passing address of variable to our sm funtion becuase it is(pointer variable ) which is reciving address  
// return 0 ;
// }

// int sum(int *x , int *y){
//     return *x+*y ; 
// }

#include<iostream>
using namespace std;

int inline sum (int &a , int &b ){  // we are using inline keywords because we want to  when funtion is called our whole code move at that line   although we maek a funtion inline compiler checks for its space and time complexity if funtion is having some static variable or loop or any kind of recursion in it that compiler will not make that function inline compiler may producece some warning for such case  
    // static int az = 10 ;
    // for (int i = 10 ; i > 0; i++){
    //     // some code 
    // }
    return a+b ;
}

int main(){
int a = 10 ; 
int b = 20 ;

cout<<sum(a,b);

}

// this  is example of call by reference 




