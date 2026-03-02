#include<iostream>
using namespace std;



char StudentGrades(int marks);


int main(){
int marks;
cin>>marks;


cout<<StudentGrades(marks);


return 0;

}


char StudentGrades(int marks){

if(marks>=90 && marks<=100)
{
 return 'A';
}

else if(marks>=80 && marks<90)
{
 return 'B';
}

 else if(marks>=70 && marks<80)
{
 return 'C';
}

 else if(marks>=60 && marks<70)
{
 return 'D';
}
 
 else if( marks>=50 && marks<60){
 return 'F';
}
  



}


