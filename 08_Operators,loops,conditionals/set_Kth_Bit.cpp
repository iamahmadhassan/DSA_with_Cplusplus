#include<iostream>
using namespace std;


using namespace std;

int setKthbit(int N, int K){
 
    int mask = 1<<K;
    int ans=N|mask;
    return ans;


}


int main(){

int N,K;
cout<<"Enter the Number : ";
cin>>N;
cout<<endl<<"Enter the Kth bit : ";
cin>>K;

int ans=setKthbit(N,K);


cout<<"The ans is : "<<setKthbit(N,K);




}