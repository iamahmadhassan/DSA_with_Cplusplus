#include<iostream>
using namespace std;

inline int Mul(int a , int b){
    return a*b;
}

int main(){

int a;
int b;
cout<<"Enter Values of a & b ";
cin>>a >> b ;
cout<<"Product of a  & b is => "<<Mul(a,b)<<endl; 




}