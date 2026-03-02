#include<iostream>
using namespace std;

inline bool Valid_Triangle(int A,int B,int C){

if(((A+B)>C) || ((B+C)>A) || ((A+C)>B))  return true;
return false; 

}

int main(){
int a,b,c;
cout<<"Enter A,B & C ";
cin>>a>>b>>c;
cout<<"Traingle is Valid " << Valid_Triangle(a,b,c)<<endl;



}