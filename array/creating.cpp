#include<iostream>
 using namespace std;
 int main(){
    int a ;
    int arr[100] ; // when we create array statically then it takes stack memory in our pc and stack memory is allocated in compile time so we can't do some thing like arr[a] ;  even we can use dynamic array which takes memory in heap memory and it is in runtime syntax  " int *arr = new int[a] "
    cin>>a ;
    for (int i = 0 ; i <a ; i++ ){

        cin>>arr[i];

    }

    for ( int i = 0 ; i< a ; i++){
        cout<<arr[i] ;
    }
    return 0;

 } 