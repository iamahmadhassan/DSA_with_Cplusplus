#include<iostream>
using namespace std;


void Print_one_to_N(int n);

bool Check_Prime(int n);

int main(){

int n;
cin>>n;
Print_one_to_N(n);


    return 0;
}



void Print_one_to_N(int n){
cout<< " 1 2 ";

for(int i=3; i<n; i++){
     
  if(Check_Prime(i)){
    cout<< i <<" ";
  }

}



}


bool Check_Prime(int n){

for(int i=2; i<n; i++){

 if((n%i)==0){
    
    return 0;
 }

}


return 1;


}