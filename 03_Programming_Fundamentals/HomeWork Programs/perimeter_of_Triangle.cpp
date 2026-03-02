#include<iostream>
using namespace std;

inline int Perimeter_OF_Triangle(int a,int b,int c){
    return a+b+c;
}

int main(){
int a,b,c;
cout<<"Enter the value of a , b & c";
cin >> a >> b >> c;
cout<<"Perimeter of a Triangle is => "<<Perimeter_OF_Triangle(a,b,c)<<endl;




}