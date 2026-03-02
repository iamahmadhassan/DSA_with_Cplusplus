#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;


for(int row=0; row<n; row++){


int space =n-1;
for(space=space-row; space>0; space--)
{
    cout<<" ";
}
for(int col=0; col<=row; col++){

if(col==0 || row==n-1  || col==row)
  cout<<" * ";

else
cout<<"   ";


}

cout<<endl;


}

}