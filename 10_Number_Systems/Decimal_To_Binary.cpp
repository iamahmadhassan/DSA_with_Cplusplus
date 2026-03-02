#include<iostream>
#include<cmath>


using namespace std;

int decimal_To_BinaryMethod1(int n){

int binary=0,i=0;


while(n>0){
int bit= n%2;

binary=bit*(pow(10,i++))+binary;


n=n/2;




}




return binary;

}




int main(){

int n;
cin>>n;

int binary=decimal_To_BinaryMethod1(n);
cout<<binary;



    return 0;
}