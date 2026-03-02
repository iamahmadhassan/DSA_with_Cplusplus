#include<iostream>
using namespace std;

int main(){
int num=1;
for(int row=1; row<6; row++){
int space=5-row;

for(; space!=0; space--){

 cout<<" ";

}


for(int col=1; col<=row; col++){
  cout<<num++<<" ";

}
cout<<endl;

}

 int space=0;
for(int row=1; row<5; row++){
 
space=row;
for(; space>0; space--){
    cout<<" ";
}

 for(int col=row; col<5; col++){

  cout<<num++<<" ";

 }
cout<<endl;
}



}