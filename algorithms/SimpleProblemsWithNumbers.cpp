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

   //Redistribute the values
   int x;
   int y;
   cin>>x;
   cin>>y;
   if (x>y)
   {
    cout<<x<<" "<<y<<endl;
   }else{
    int num=y;
   cout<<num<<" "<<x<<endl;
   }

   //Determine whether it is an even number
   int num;
   cin>>num;
   if (num%2==0)
   {
    cout<<"The number is even. "<<endl;
   }
   else
   {
    cout<<"The number is not even. "<<endl;
   }  

   //Print first its left digit, and then its right digit
   int number;
   cin>>number;
   //cout<<"The user is prompted to enter a two-digit integer: "<<number<<endl;
   if (number>10&&number<99)
   {
    int divid=number/10;
    cout<<"Left digit: "<<divid<<endl;
    int modul=number%10;
    cout<<"Right digit: "<<modul<<endl;
    }
   else
   {
    cout<<"Wrong digit"<<endl;
   }
}