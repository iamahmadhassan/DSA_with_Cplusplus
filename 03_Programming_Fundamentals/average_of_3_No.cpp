#include<iostream>
using namespace std;

//default Arguments
inline double Average(int A=0,int B=0,int C=0){

return ((A+B+C)/3);

}
int main(){

int a , b , c;
cout << "Enter the values of a & b & c  " ;
cin >> a >> b >> c ;

cout<<"The Average of a & b is => "<<Average(a,b,c);

return 0;
}