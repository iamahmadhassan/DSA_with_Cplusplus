#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){
    int start=0;
    int end=size-1;

    while(start<=end){
         
        swap(arr[start],arr[end]);
        start++;
        end--;


    }
}


int main(){


    int arr[6]={10,20,30,40,50,60};
     reverseArray(arr,6);

     for(int i:arr){
        cout<<i<<" ";
     }
}