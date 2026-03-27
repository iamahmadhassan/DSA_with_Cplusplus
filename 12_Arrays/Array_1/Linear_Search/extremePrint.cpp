#include<iostream>


using namespace std;

void extremePrint(int arr[],int size);


int main(){
int arr[8]={1,2,3,4,5,6,7,8};

extremePrint(arr,8);


}

void extremePrint(int arr[],int size){

     int count=0; 

    for(int i=0; i<size; i++){

        if(count<size){
        cout<<arr[i]<<" "<<arr[size-(i+1)]<<" ";
        count=count+2;
    }
    
}


}
