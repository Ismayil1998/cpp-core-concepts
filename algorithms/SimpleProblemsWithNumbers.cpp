#include<iostream>
#include<iomanip>
#include <cmath>
#include <math.h> 
using namespace std;

int main(){
    system("cls");
   // Print Number with Spaces
   int num;
   cin>>num;
   int a=num%10;
   int b=(num/10)%10;
   int c=num/100;
   cout<<c<<" "<<b<<" "<<a<<endl;

   //Swap two integers
   int a;
   int b;
   cin>>a;
   cin>>b;
   int num1=b;
   cout<<num1<<" "<<a<<endl;
}