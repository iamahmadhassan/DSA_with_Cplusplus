#include<iostream>
using namespace std;

//define Macro
#define PI 3.144

inline int Circumference_of_Circle(int r){
    return (r*2);
}

int main(){
//circumfernce of circle = 2*pi*radius

int Radius;
cout<<"Enter the Radius ";
cin>>Radius;
cout<<"The Circumference of the circle is => "<<Circumference_of_Circle(Radius)*PI;

return 0;


}