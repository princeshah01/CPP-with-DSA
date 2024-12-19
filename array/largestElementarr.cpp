#include<iostream>
using namespace std ;

int largestEle(int arr[] ,int n){

    // when we pass array to a funtion then address is only pass to function so here in function it holds the address of array we pass and in c++ address needs 8 byte to store .
    cout<<"size of arr"<<sizeof(arr) ;
    int largest = arr[0] ;


    for (int i = 1 ; i < n ; i++){
            if (arr[i] > largest){
                largest = arr[i] ;

            }
        }
            return largest ;

}

int main(){
    int arr[] = {1,2,3,4,5,6,17,1};

    int size = sizeof(arr)/ sizeof(arr[0]);
 cout<< endl<<largestEle(arr, size);
    

}