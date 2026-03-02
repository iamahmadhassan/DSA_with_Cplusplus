#include<iostream>
using namespace std;

long Fact(long n);

int main(){
long n;
cin>>n;
cout<<"The Factorial of "<<n << " is => " <<Fact(n); 



}

long Fact(long n){

long fact=1;
for(int i=n; i>0; i--){

fact =fact*i;

}

return fact;

}
