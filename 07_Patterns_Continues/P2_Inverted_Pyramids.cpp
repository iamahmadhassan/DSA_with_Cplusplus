#include<iostream>
using namespace std;



int main(){

int n;
cin>>n;

for(int i=n; i>0; i--)
{

int space=n-i;

while(space!=0){
    cout<<" ";
 space--;
}


for(int j=0; j<i; j++){
    cout<<"* ";
}

cout<<endl;


}




}