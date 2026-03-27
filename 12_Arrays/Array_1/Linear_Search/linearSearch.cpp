#include<iostream>

using namespace std;
void find_Arr(int arr[],int size,int key);


int main(){


    int arr[5]={1,5,3,4,0};
    int size=5;
     int key=0;
    cin>>key;
    find_Arr(arr,size,key);



return 0;

}


void find_Arr(int arr[],int size,int key){
      
    for(int i=0; i<size; i++){
        if (arr[i]==arr[key]){
            cout<<key << " is present !!!! ";
            return ;
        }

    }

    cout<<"Key is not present "<<endl;
    return ;
}