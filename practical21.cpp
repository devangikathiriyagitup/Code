#include<iostream>
using namespace std;
 
 int main(){
 double a,b;
  double add,sub,multi,div;
   
   cout<<"enter two integers:"<<endl;
   cin>>a>>b;

   add=a+b;
   sub=a-b;
   multi=a*b;
   div= a/b;

   cout<<" Addition:"<<add<<endl;
   cout<<"  subtraction:"<<sub<<endl;
   cout<<"  Multiplication:"<<multi<<endl;
   cout<<"  Division:"<<div<<endl;


   return 0;
   }