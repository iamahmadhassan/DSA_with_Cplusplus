#include<iostream>
using namespace std;



int main(){

int n=19;
bool check=false;
for(int i=2; i<n; i++){

if(n%i==0){
    cout<<"Number is Not Prime";
     check=true;
   break;

}

}

if(check==false ){
    cout<<"Number is Prime "<<endl;
}


}