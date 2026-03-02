#include<iostream>
using namespace std;

int main(){





for(int row=0; row<6; row++){


int space=5;
for(space=space-row; space>0; space--)
{
    cout<<" ";
}
for(int col=0; col<=row; col++){

  cout<<"*  ";


}

cout<<endl;


}

}