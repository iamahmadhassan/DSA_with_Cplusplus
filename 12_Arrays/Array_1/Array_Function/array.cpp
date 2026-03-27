#include<iostream>

using namespace std;


void inc(int brr[],int size){

    brr[1]=brr[1]+10;
}


int main(){

int arr[5]={1,2};

inc(arr,2);

cout<<arr[1]<<" ";



return 0;


}