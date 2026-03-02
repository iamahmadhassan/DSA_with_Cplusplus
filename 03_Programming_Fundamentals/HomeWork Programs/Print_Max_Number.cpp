#include<iostream>
using namespace std;

int getMax(int a,int b, int c){

  if(a>b && a>c){
   
    return a;
  }

  else if(b>a && b>c){
    return b;
  }

 return c;


}


int main(){

int a=15;
int b=5;
int c=10;

cout<<getMax(a,b,c)<<" This is the Maximum Number "<<endl;





}