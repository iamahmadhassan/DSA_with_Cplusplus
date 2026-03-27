#include<iostream>

using namespace std;

int findMax(int arr[],int size);

int main(){

int arr[8]={4,6,3,6,9,10,0};
cout<<"Maximum no in this array is :  "<<findMax(arr,8);



}



int findMax(int arr[],int size){
int inititalno=0;

for(int i=0; i<size; i++){
    if(arr[i]>inititalno){
        inititalno=arr[i];
    }
}


return inititalno;
}