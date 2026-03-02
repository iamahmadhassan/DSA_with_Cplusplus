#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
  
int a=1;
   for(int i=0; i<n; i++){
  
  for(int j=0; j<=i; j++)
{
   cout<<a;
 
 if(j!=i){
    cout<<"*";
 }
 
}
 
 
a++;

cout<<endl;
   }



int a1=n;
   for(int i=n; i>0; i--){
  
  for(int j=0; j<i; j++)
{
   cout<<a1;
 
 if(j != (i-1) ){
    cout<<"*";
 }
 
}
 
 

cout<<endl;
   a1--;
   }



    return 0;
}