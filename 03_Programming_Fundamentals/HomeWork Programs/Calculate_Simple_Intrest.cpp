#include<iostream>
using namespace std;

inline int CalculateIntrest(int P,int R,int T){
//P is Principle 
//R is Rate of Intrest
//T is the Given Time
return (P*R*T)/100;


}


int main(){

int Principle,Rate,Time;

cout<<"Enter Principle ";
cin>>Principle;
cout<<" Enter Rate  ";
cin>>Rate;
cout<<"Enter Time ";
cin>>Time;

cout<<"Intrest is Equal to => "<<CalculateIntrest(Principle,Rate,Time)<<endl;

}