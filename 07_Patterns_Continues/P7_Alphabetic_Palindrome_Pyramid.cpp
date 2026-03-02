#include<iostream>
using namespace std;



int main(){

int n;
cin>>n;
for(int i=1; i<=n; i++){

char in='A';

for(int j=1; j<=i; j++){
    cout<<in<<" ";
   in++;
}
in--;
if(i>1){
    for(int k=i-1; k>0; k--){
        cout<<--in <<" ";
    }

}

cout<<endl;

}






}