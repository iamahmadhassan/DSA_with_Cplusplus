#include<iostream>
using namespace std;



void printone_To_N_Prime(int n){

if(n<=1){
    cout<<endl<<"Number is Not Prime "<<endl;

}

bool Prime;


for(int i=2; i<=n; i++){
   Prime=true;

    for(int j=2; j<i; j++){
        if(i%j==0){
            Prime=false;
            break;
        }


    }


if(Prime==true){
    cout<<  i <<" "; 

}


}







}





int main(){

int n=0;

cout<<"Enter the Number : ";
cin>>n;

printone_To_N_Prime(n);





    return 0;
}