#include<iostream>
using namespace std;


int check(int n){
 int count=0;

while(n!=0){
  count++;
  n=n/10;


}

count=count-1;
if(count==0){
    return 1;
}

int no=10;

for(int i=1; i<count; i++){
    no=no*10;
}
return no;


}




int reverseInteger (int n){

int digit,R_digit=0;


while(n!=0){

digit=(n%10)*check(n);
R_digit=digit+R_digit;
n=n/10;


}

return R_digit;


}









int main(){


int n;
cin>>n;
int r=reverseInteger(n);
cout<<r;



    return 0;
}