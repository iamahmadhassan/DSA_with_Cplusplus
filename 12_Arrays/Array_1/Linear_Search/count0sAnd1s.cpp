#include<iostream>



using namespace std;

void count0sand1s(int arr[],int size);

int main(){

int arr[10]={1,0,1,0,1,1,0,0,0,0};

 count0sand1s(arr,10);







}



void count0sand1s(int arr[],int size){

int zero=0; int one=0;


for(int i=0; i<size; i++){
    if(arr[i]==0){
        zero++;
    }
    else{
        one++;
    }
}

cout<<"Total Numnber of zero is : "<<zero<<endl;
cout<<"Total Numnber of one is : "<<one<<endl;

}