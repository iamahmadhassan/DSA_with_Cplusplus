#include<iostream>
using namespace std;

  //bitwise Apprach
inline void EvenOdd(int n)
{
  if(n&1) cout<<"Odd " ;
  else cout<<"Even";
}
//modolus approach
inline void EvenOdd2(int n){
    if(n%2==0)  cout<<"Odd " ;
  else cout<<"Even";

}


int main(){
int n;
cin>>n;
cout<<"Number is ";
EvenOdd(n);
//EvenOdd2(n);

}

