// Write a C++ program that checks whether primitive values cross the limit.
// Check whether the primitive values crossing the limits or not :
// --------------------------------------------------------------------
// The Gender is : F
// Is she married? : 1
// Number of sons she has : 2
// Year of her appointment : 2009
// Salary for a year : 1500000
// Height is : 79.48
// GPA is 4.69
// Salary drawn upto : 12047235
// Balance till : 995324987


#include<iostream>
using namespace std ;
int main(){

    char Gender = 'F';
    bool isMarried = 1 ;
    unsigned short numberOfSon = 2 ;
    unsigned int yearOfAppointment = 2008 ;
    unsigned int salary = 1500000;
    float height = 79.48f ;
    float gpa = 4.69 ;
    unsigned long drawnSalary =    12047235L;
    unsigned long long balanceTill =  995324987LL ;

    cout << Gender << endl;
    cout << isMarried << endl;
    cout << numberOfSon << endl;
    cout << yearOfAppointment << endl;
    cout << salary << endl;
    cout << height << endl;
    cout << drawnSalary << endl;
    cout << gpa << endl;
    cout <<balanceTill <<endl;
    

    return 0 ;

}