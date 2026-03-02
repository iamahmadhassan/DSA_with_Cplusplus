 #include<iostream>

 using namespace std;

 int main(){


  int n;
  cin>>n;

  for(int i=1; i<=n; i++){
    
      for(int j=1; j<=n-i+1; j++){
            

    if(i==1){
        cout<<j;
    }

    else if(j==1){
        cout<<i;
    }

  else if(j==n-i+1){
    cout<<n;
  }
  else {
    cout<<" ";
  }

cout<<" ";
      }

cout<<endl;

  }
    return 0;
 }