#include<iostream>
#include <cmath>
using namespace std;


void Prime_or_Not(int n){

if(n<=1){
    cout<<"Number is Not Prime ";
}

for(int i=2; i<=sqrt(n); i++){

if(n%i==0){
cout<<"Number is Not Prime ):";
return;
}




}

cout<<"Number is Prime ";
return;


}



int main(){

int n=0;

cout<<"Enter the Number : ";
cin>>n;

Prime_or_Not(n);



return 0;
}


