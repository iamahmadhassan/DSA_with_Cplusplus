#include<iostream>
using namespace std;

int main(){
for(int row=1; row<6; row++){
int space=5-row;
for(space; space>0; space--){

cout<<"_";

}


space=row;
for(int col=1; col<=1;  col++ ){

  cout<<"1";

for(; space>0; space--){
    cout<<"_";
}


}




cout<<endl;
}








}