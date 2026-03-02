#include<iostream>
using namespace std;


void Check_Prime(int n);

int main(){

int n;
cin>>n;
Check_Prime(n);


return 0;


}


void Check_Prime(int n){

for(int i=2; i<n; i++){

 if((n%i)==0){
    cout<<"No is Not Prime";
    return;
 }

}


cout<<"No is Prime ";



}