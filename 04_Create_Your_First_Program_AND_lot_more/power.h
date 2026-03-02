int power(int a , int b){
//base case
if(b==1){
    return a;

}
int sp=power(a,b-1);
int bp=a*sp;
return bp;

}

int Mul(int a,int b){
    return a*b;
}