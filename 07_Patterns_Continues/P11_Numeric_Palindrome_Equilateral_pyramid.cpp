#include<iostream>
 
 using std::cin;
 using std:: cout; 
 using std:: endl;



 int main(){
int n;
cin>>n;




for(int i=1; i<=n; i++){

for(int space=n-i+1; space>0; space--){
    cout<<"--";
}

for(int j=1; j<=i; j++){
    cout<<j<<" ";
}
if(i>1){
    for(int k=i-1; k>0; k--){
        cout<<k<<" ";
    }
}
cout<<endl;
}







return 0;


 }
