#include<iostream>

using namespace std;



int cal_Factorial(int n){
int sum=1;
for(int i=n; i>=1; i--){
  
sum=i*sum;


}



}



int main(){

cout<<"Enter the Number : ";

int n=0;
cin>>n;


cout<<endl<<"The Factorial of Given No is :  "<<cal_Factorial(n);




    return 0;
}