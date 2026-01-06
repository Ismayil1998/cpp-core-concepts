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

  //Shift Right
    int number;
    cin>>number;
  if (number>100&&number<999)
  {
    int modul=number%10;
    int modul1=(number/10)%10;
    int modul2=number/100;
    cout<<modul1<<modul<<modul2;
  }else{
    cout<<"Wrong digit!"<<endl;
  } 

  //Shift Left
   int number;
   cin>>number;
  if (number>100&&number<999)
  {
    int modul=number%10;
    int modul1=(number/10)%10;
    int modul2=number/100;
    cout<<modul<<modul2<<modul1;
  }else{
    cout<<"Wrong digit!"<<endl;
  }  

  //Rearrange Digits
  int number;
  cin>>number;
  if (number>100&&number<999)
  {
    int modul=number%10;
    int modul1=(number/10)%10;
    int modul2=number/100;
    cout<<modul1<<modul2<<modul;
  }else{
    cout<<"Wrong digit!"<<endl;
  } 

  //Rearrange Digits II
  int number;
  cin>>number;
  if (number>100&&number<999)
  {
    int modul=number%10;
    int modul1=(number/10)%10;
    int modul2=number/100;
    cout<<modul2<<modul<<modul1;
  }else{
    cout<<"Wrong digit!"<<endl;
  }   

  //Extract Hundreds Digit
      int number;
    cin>>number;
  if (number>999)
  {
    int divid=(number/100)%10;
    cout<<divid<<endl;
  }
  else
  {
   cout<<"Wrong digit!"<<endl;
  }

  //Palindrome Check
  int number;
  cin>>number;
  if (number>999&&number<9999)
  {
    int modul=number%10;
    int modul1=(number/10)%10;
    int modul2=(number/100)%10;
    int modul3=number/1000;
   if (modul==modul3&&modul1==modul2)
   {
    cout<<"Palindrome"<<endl;
   }
   else
   {
    cout<<"Not Palindrome"<<endl;
   }
   
  }
  else
  {
    cout<<"Wrong digit!"<<endl;
  }

  //Digit Sum Difference
  int number;
  cin>>number;
  if (number>10000)
  {
    int n1=number/10000;
    int n2=(number/1000)%10;
    int m1=number%10;
    int m2=(number%100)/10;
    int total=n1+n2;
    int total2=m1+m2;
    int ferq=total-total2;
    cout<<ferq<<endl;
  }
  else
  {
    cout<<"Wrong digit!"<<endl;
  }  
   
  //Palindrome Number Check
     int number;
   cin>>number;
  if (number>10000&&number<99999)
  {
    int modul=number%10;
    int modul1=(number/10)%10;
    int modul2=(number/100)%10;
    int modul3=(number/1000)%10;
    int modul4=number/10000;
   if (modul==modul4&&modul1==modul3)
   {
    cout<<"Palindrome"<<endl;
   }
   else
   {
    cout<<"Not Palindrome"<<endl;
   }
   
  }
  else
  {
    cout<<"Wrong digit!"<<endl;
  }

  //Digit Square Sum
    int number;
    cin>>number;
  if (number>10000&&number<99999)
  {
    int modul=number%10;
    int modul1=(number/10)%10;
    int modul2=(number/100)%10;
    int modul3=(number/1000)%10;
    int modul4=number/10000;
   int netice= pow(modul,2);
   int netice1= pow(modul1,2);
   int netice2= pow(modul2,2);
   int netice3= pow(modul3,2);
   int netice4= pow(modul4,2);
   int total=netice+netice1+netice2+netice3+netice4;
   cout<<total<<endl;
  }
  else
  {
    cout<<"Wrong digit!"<<endl;
  }

  //Ascending Digits Check
   int number;
  cin>>number;
  if (number>10000&&number<99999)
  {
    int modul=number%10;
    int modul1=(number/10)%10;
    int modul2=(number/100)%10;
    int modul3=(number/1000)%10;
    int modul4=number/10000;
   if (modul4<modul3&&modul3<modul2&&modul2<modul1&&modul1<modul)
   {
    cout<<"Ascending"<<endl;
   }
   else
   {
    cout<<"Not Ascending"<<endl;
   }
   
  }
  else
  {
    cout<<"Wrong digit!"<<endl;
  }  

  //Reverse Digits
  int number;
  cin>>number;
  if (number>10000&&number<99999)
  {
    int modul=number%10;
    int modul1=(number/10)%10;
    int modul2=(number/100)%10;
    int modul3=(number/1000)%10;
    int modul4=number/10000;
   cout<<modul<<modul1<<modul2<<modul3<<modul4<<endl;
  }
  else
  {
    cout<<"Wrong digit!"<<endl;
  }  
  
  //Identical Digits Check
  int number;
  cin>>number;
  if (number>10000&&number<99999)
  {
    int modul=number%10;
    int modul1=(number/10)%10;
    int modul2=(number/100)%10;
    int modul3=(number/1000)%10;
    int modul4=number/10000;
    if (modul4==modul||modul4==modul1||modul4==modul2||modul4==modul3||modul3==modul4||modul3==modul2||modul3==modul1||modul3==modul||modul2==modul4||modul2==modul3||modul2==modul1||modul2==modul||modul1==modul4||modul1==modul3||modul1==modul2||modul1==modul||modul==modul4||modul==modul3||modul==modul2||modul==modul1)
    {
        cout<<"Identical Digits Found"<<endl;
    }else
    {
     cout<<"No Identical Digits"<<endl;
    } 
    }
  else
  {
    cout<<"Wrong digit!"<<endl;
  }

  //Unique Digits Check
    int number;
  cin>>number;
  if (number>999&&number<9999)
  {
    int modul=number%10;
    int modul1=(number/10)%10;
    int modul2=(number/100)%10;
    int modul3=number/1000;
   if (modul3==modul2||modul3==modul1||modul3==modul||modul2==modul3||modul2==modul1||modul2==modul||modul1==modul3||modul1==modul2||modul1==modul||modul==modul3||modul==modul2||modul==modul1)
   {
    cout<<"Duplicate Digits Found"<<endl;
   }
   else
   {
    cout<<"All Digits are Different"<<endl;
   }
   
  }
  else
  {
    cout<<"Wrong digit!"<<endl;
  }   

  //Digit 3 Check
   int number;
  cin>>number;
  if (number>999&&number<9999)
  {
    int modul=number%10;
    int modul1=(number/10)%10;
    int modul2=(number/100)%10;
    int modul3=number/1000;
   if (modul3==3||modul3==3||modul3==3||modul2==3||modul2==3||modul2==3||modul1==3||modul1==3||modul1==3||modul==3||modul==3||modul==3)
   {
    cout<<"Digit 3 Found"<<endl;
   }
   else
   {
    cout<<"Digit 3 Not Found"<<endl;
   }
   
  }
  else
  {
    cout<<"Wrong digit!"<<endl;
  }  
  
  //Consecutive Digits Check
     int number;
    cin>>number;
  if (number>999&&number<9999)
  {
    int modul=number%10;
    int modul1=(number/10)%10;
    int modul2=(number/100)%10;
    int modul3=number/1000;
   if (modul3==3&&modul2==7||modul2==3&&modul1==7||modul1==3&&modul==7)
   {
    cout<<"Consecutive Digits Found"<<endl;
   }
   else
   {
    cout<<"Consecutive Digits Not Found"<<endl;
   }
   
  }
  else
  {
    cout<<"Wrong digit!"<<endl;
  }

  //Armstrong Number Check
   int number;
  cin>>number;
  if (number>999&&number<9999)
  {
    int modul=number%10;
    int modul1=(number/10)%10;
    int modul2=(number/100)%10;
    int modul3=number/1000;
   if (number==pow(modul3,4)+pow(modul2,4)+pow(modul1,4)+pow(modul,4))
   {
    cout<<"Armstrong Number"<<endl;
   }
   else
   {
    cout<<"Not Armstrong Number"<<endl;
   }
   
  }
  else
  {
    cout<<"Wrong digit!"<<endl;
  }

  //Sum of Digits Check
    int number;
  cin>>number;
  if (number>999&&number<9999)
  {
    int modul=number%10;
    int modul1=(number/10)%10;
    int modul2=(number/100)%10;
    int modul3=number/1000;
    int total=modul3+modul2+modul1+modul;
   if (total%2==0&&total%3==0)
   {
    cout<<"Multiple of 2 and 3"<<endl;
   }
   else
   {
    cout<<"Not a Multiple of 2 and 3"<<endl;
   }
   
  }
  else
  {
    cout<<"Wrong digit!"<<endl;
  }

  //Divisibility Check
    int number;
    cin>>number;
  if (number>999&&number<9999)
  {
    int modul=number%10;
    int modul1=(number/10)%10;
    int modul2=(number/100)%10;
    int modul3=number/1000;
   if (number%modul==0&&number%modul1==0&&number%modul2==0&&number%modul3==0)
   {
    cout<<"Divisible by All Digits"<<endl;
   }
   else
   {
    cout<<"Not Divisible by All Digits"<<endl;
   }
   
  }
  else
  {
    cout<<"Wrong digit!"<<endl;
  }

  //Maximum of Three Numbers
   double X;
  double Y;
  double Z;
  cin>>X;
  cin>>Y;
  cin>>Z;

  if (X>Y&&X>Z)
  {
    cout<<X<<endl;
  }else if (Y>X&&Y>Z)
  {
    cout<<Y<<endl;
  }else if (Z>X&&Z>Y)
  {
    cout<<Z<<endl;
  }
  else
  {
    cout<<"Wrong access! "<<endl;
  } 
}