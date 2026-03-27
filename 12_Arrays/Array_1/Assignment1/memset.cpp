//valid for 0 or -1 memset


#include<iostream>
#include<cstring>

using namespace std;


int main(){


int arr[10];

memset(arr,-1,sizeof(arr));

for(int i:arr){
 
    cout<<arr[i]<<" ";
}





    return 0;
}