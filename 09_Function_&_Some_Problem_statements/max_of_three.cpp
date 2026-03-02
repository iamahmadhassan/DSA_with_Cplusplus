#include<iostream>
using namespace std;


int max1(int a,int b,int c);


int main(){

int a,b,c;
cin>>a>>b>>c;

cout<<"The max no of " << a<<" ," <<b <<" & " << c << " is "  <<max1(a,b,c);



    return 0;
}


int max1(int a,int b,int c){
if(a>b && a>c){
    return a;
}

if(b>c && b>c)
{
    return b;
    }

return c;

}