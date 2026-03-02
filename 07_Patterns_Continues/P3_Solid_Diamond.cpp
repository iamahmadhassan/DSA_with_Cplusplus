#include<iostream>
using namespace std;


int main(){

int n;
cin>>n;

for(int i=1; i<=n; i++){
  
  
  for(int space=n-i; space>0; space--){
    cout<<" ";
  }


  for(int j=1; j<=i; j++){

  if(j==1 || j==i )
  cout<<"* ";
  else 
    cout<<"  ";

  }

   cout<<endl;

}




for(int i=n; i>0; i--)
{

int space=n-i;

while(space!=0){
    cout<<" ";
 space--;
}


for(int j=0; j<i; j++){

  if(j==0 || j==i-1)
    cout<<"* ";

else
    cout<<"  ";
}

cout<<endl;


}






}