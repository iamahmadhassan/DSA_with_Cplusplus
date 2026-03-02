#include<iostream>

#define pi 3.14

using namespace std;

double area_Of_Circle(double r);


int main(){
double r;
cin>>r;
cout<<area_Of_Circle(r);



}


double area_Of_Circle(double r){
double area_of_Circcle=(r*r)*pi;
return area_of_Circcle;
}