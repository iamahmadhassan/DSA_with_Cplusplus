#include<iostream>
using namespace std;

int main(){


for(int row=6; row>0; row--){

int space=6;
space=space-row;

for(; space>0; space--){
cout<<"-";


}

for(int col=0; col<row; col++){
    cout<<" * ";
}
cout<<endl;




}




}