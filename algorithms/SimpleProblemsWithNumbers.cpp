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

   //Find the sum and product of its digits.
   int number;
   cin>>number;
   if (number>10&&number<100)
   {
    int divid=number/10;
    int modul=number%10;
    int sum=divid+modul;
    int product=divid*modul;
    cout<<"Sum of the digits: "<<sum<<endl;
    cout<<"Product of the digits: "<<product<<endl;
   }
   else
   {
    cout<<"Wrong digit!"<<endl;
   }  

   //Print the number obtained by rearranging the digits of the original number.
   int number;
   cin>>number;
   if (number>10&&number<99)
   {
    int divid=number/10;
    int modul=number%10;
    if (modul==0)
    {
        
        cout<<divid<<endl;
    }else{
        cout<<modul<<divid<<endl;
    }
   }else{
    cout<<"Wrong digit!"<<endl;
   }

   //Using one division operation entirely, output the first digit of this number (hundreds).
   int number;
   cin>>number;
   if (number>100&&number<999)
   {
    int division=number/100;
    cout<<division<<endl;
   }else{
    cout<<"Wrong digit!"<<endl;
   }   

   //Print first its last digit (units), and then its middle digit (tens).
   int number;
   cin>>number;
  if (number>100&&number<999)
  {
    int modul=number%10;
    cout<<"Last digit (units): "<<modul<<endl;
    int division=(number/10)%10;
    cout<<"Middle digit (tens): "<<division<<endl;

  }else{
    cout<<"Wrong digit!"<<endl;
  }

  //Find the sum and product of its digits.
  int number;
  cin>>number;
  if (number>100&&number<999)
  {
    int modul=number%10;
    int modul1=(number/10)%10;
    int modul2=number/100;
    int total=modul+modul1+modul2;
    int product=modul*modul1*modul2;
    cout<<"Sum of the digits: "<<total<<endl;
    cout<<"Product of the digits: "<<product<<endl;
  }else{
    cout<<"Wrong digit !"<<endl;
  }  

  //Reverse three-digit integer
  int number;
  cin>>number;
  if (number>100&&number<999)
  {
    int modul=number%10;
    int modul1=(number/10)%10;
    int modul2=number/100;
    cout<<modul<<modul1<<modul2;
  }else{
    cout<<"Wrong digit!"<<endl;
  }  
}