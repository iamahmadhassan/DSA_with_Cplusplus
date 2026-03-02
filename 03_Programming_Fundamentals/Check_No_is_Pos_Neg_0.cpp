#include<iostream>
using namespace std;

inline void Check_No(int n){
    if(n>=0)
    {if(n==0) cout<<" 0 "; cout<<"Positive";}
    else {cout<<"Negative";}
}

int main(){
int n;
cout << " Enter the Number ";
cin >> n; 
cout << " Number is ";
Check_No(n);
return 0;
}