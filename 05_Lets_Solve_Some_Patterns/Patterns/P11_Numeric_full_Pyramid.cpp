#include<iostream>
using namespace std;

int main(){

int col1=0;

for(int row=1; row<6;  row++){
int space=5-row;

for(; space>0; space--){

cout<<"  ";

}
int num;
  for(int col=1; col<=row; col++){
   num=row+col-1;
   cout<< num<<" ";


  }


for(int col1=1; col1<row; col1++){
  num=num-1;
  cout<<num<<" ";



}

cout<<endl;



}



}

