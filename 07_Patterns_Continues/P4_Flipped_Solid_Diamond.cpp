#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;
int space=2;
for(int i=n; i>0; i--){
    

 for(int j=0; j<i; j++){
 
  cout<<"* ";


 }
 
for(int spacee=space; spacee>0; spacee--){
   cout<<" ";

}
cout<<"  ";
for(int space=n-i; space>0; space--){
    cout<<"  ";
}


 for(int j=0; j<i; j++){
 
  cout<<"* ";


 }


space=space+2;
cout<<endl;
} 



int space1=2;
for(int i=0; i<n; i++){
    

 for(int j=0; j<=i; j++){
 
  cout<<"* ";


 }
 
for(int spacee=n-i; spacee>0; spacee--){
   cout<<"  ";

}
for(int space=n-i; space>0; space--){
    cout<<"  ";
}


 for(int j=0; j<=i; j++){
 
  cout<<"* ";


 }


space1=space1+2;
cout<<endl;
}


return 0;

}