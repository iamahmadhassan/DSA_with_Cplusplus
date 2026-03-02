#include<iostream>
using namespace std;

int sumNo (int a,int  b){


int result=a+b;
return result;

}




int main(){


int a,b;
cin>>a>>b;

cout<<"The sum of " <<a << " & " <<b <<" is " <<sumNo(a,b);


    return 0;
}