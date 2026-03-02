#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){

int n;
cin>>n;
  for(int i=1; i<=n; i++){
  
  for(int star1=n+4-i; star1>0; star1-- )
{
    cout<<"*";
}
  
  for(int j=1; j<=i; j++){
    cout<<i;
    if(i>1){
        cout<<"*";
    }
  }


  for(int star1=n+4-i; star1>0; star1-- )
{
    cout<<"*";
}


cout<<endl;
 
 
 
  }




    return 0;
}