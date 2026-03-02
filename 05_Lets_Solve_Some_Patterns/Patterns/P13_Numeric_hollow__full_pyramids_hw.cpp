// C program to add two numbers 
#include <iostream> 
using namespace std;  
int main() 
{ 
    
  int n;
  cin>>n;
  int k=1;
  int q=1;
   for(int i=1; i<=n; i++){
        

    for(int space=n-i; space>0; space--){
      cout<<" ";
    }


        for(int j=0; j<(i*2)-1; j++){
              
if(j==0){
    cout<<"1";
}

else if(i==n){
  
  cout<<" "<<++q<<"";

  if(q==n){
    break;
  }

}
else if( j==((i*2)-2) ){
              cout<<++k;
  
  
}

  else {
     cout<<" ";
  
  }

        }
   
cout << endl;
  
  
   }





    return 0; 
}