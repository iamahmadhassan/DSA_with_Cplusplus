#include<iostream>
using namespace std;




int SumEven (int n);

bool IsEven(int n);

int main(){

int n;
cin>>n;
cout<<"The sum of even no from 0 to "<< n << " is "<< SumEven(n);


return 0;






}


int SumEven (int n){
    int sum=0;


for(int i=0; i<=n; i++){

if(IsEven(i)){
    sum=sum+i;
}


}

return sum;

}

bool IsEven(int n){
if(n&1){
    return 0;
}
return 1;


}