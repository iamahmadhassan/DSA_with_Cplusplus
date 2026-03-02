// C program to add two numbers 
#include <iostream> 
using namespace std;  
int main() 
{ 
    
  int n;
  cin>>n;
  
   for(int i=1; i<=n; i++){
        

    for(int space=n-i; space>0; space--){
      cout<<" ";
    }


        for(int j=0; j<(i*2)-1; j++){
              
              if(j==0 || j==((i*2)-2) || i==n){
              cout<<"*";
  
  
}

  else {
     cout<<" ";
  
  }

        }
   
cout<<endl;
   }





    return 0; 
}