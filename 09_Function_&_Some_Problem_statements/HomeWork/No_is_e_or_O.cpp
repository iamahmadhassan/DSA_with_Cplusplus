#include<iostream>
using namespace std;


void E_or_O (int n);

int main(){

int n;
cin>>n;

E_or_O(n);

 return 0;   
}

void E_or_O (int n){

if(n&1){
cout<<"No is Odd";
}
else{
    cout<<"No is even";
}


}