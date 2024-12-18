#include<iostream>  // header file only contain declearation of functions , code for the function is written in liabrary which is in linker 
#include<conio.h>
#include<typeinfo> // we include typeinfo for using typeid() function
#include<string>
using namespace std ;

// this is how software is developed   // filename.cpp ==> preprocessor ==> filename.i ==> compiler ==> filename.obj ==> linker ==> add all the code of funtion used from liabrary ==> filenmae .exe executable file


int main(){

    int a = 075 ; // then the integer has value starting with 01 to 07   then it is treated as octal 
    int b = 0X21 ; // if the value if interger is starting with ox then it will be treated as hexadecimal

    cout<<b ;

    // clrscr();   it was used in turboc++ but now mordern compiler like gcc and all doesn't support that so we have to write 
    // system("cls");
    // int a = 10 ;
    // int *p ;
    // p = &a ;
    // cout<<p ;
    // int &p = a ;  // this is a reference variable when we are creating a reference variable we have to assi gn value at that time only 
    // we cann't do 
    // int &b; 
    // &b = a ;   this cannot be done 


    // cout<<++p ;
    // cout<<a ;

   // double b ;
    // cout<<"this is a line printed on screen using cout object\n"; //cout and cin is a object of iostream class where as insertion and extraction is a operator overloading << >> 
    // cout<<"next line";
    // cout<<typeid(a).name() ; // this is how we can check type of a variable 

    // reference variable  and pointer variable


    // char a = 'g' ;
    // char *p = &a ;
    // cout<<*p <<endl;


    // char m  = 'p' ;

    // char &q = m ;

    // cout<<q ;

//    we cant do nesting in multiline comment 



    return 0 ;
}