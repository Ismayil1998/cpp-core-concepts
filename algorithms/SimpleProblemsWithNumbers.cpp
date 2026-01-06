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

  //Minimum of Three Numbers
     double X;
  double Y;
  double Z;
  cin>>X;
  cin>>Y;
  cin>>Z;
  if (X<Y&&X<Z)
  {
    cout<<X<<endl;
  }else if (Y<X&&Y<Z)
  {
    cout<<Y<<endl;
  }else if (Z<X&&Z<Y)
  {
    cout<<Z<<endl;
  }
  else
  {
    cout<<"Wrong access! "<<endl;
  }

  //Conditional Doubling and Absolute Values
  double X;
  double Y;
  double Z;
  cin>>X;
  cin>>Y;
  cin>>Z;
  if (Z>=Y&&Z>=X&&Y<=Z&&Y>=X&&X<=Z&&X<=Y)
  {
    double art=Z*2;
    double art1=Y*2;
    double art2=X*2;
    cout<<art2<<" "<<art1<<" "<<art<<endl;
   
  }
  else
  {
    cout<<(X/(-1))<<" "<<Y<<" "<<(Z/(-1))<<endl;
  }

  //Number Comparison
    double A;
  double B;
  cin>>A;
  cin>>B;
  if (A>B)
  {
    cout<<A<<endl;
  }
  else
  {
    cout<<A<<" "<<B<<endl;
  }

  //Number Transformation
  double X;
  double Y;
  cin>>X;
  cin>>Y;
  if (X!=Y)
  {
   if (X>Y&&Y<X)
   {
  
    double hasil=X*2;
    double yarim=(X+Y)/2;
    cout<<hasil<<" "<<yarim<<endl;
   }
   else if (Y>X&&X<Y)
   {
    double hasil1=Y*2;
    double yarim1=(X+Y)/2;
    cout<<yarim1<<" "<<hasil1<<endl;
   }
   
  }
  else
  {
    cout<<"Wrong access!"<<endl;
  }

  //Number Replacement
     double X;
  double Y;
  cin>>X;
  cin>>Y;
  if (X<=Y)
  {
    X=0;
    cout<<X<<" "<<Y<<endl;
  
  }
  else
  {
    cout<<X<<" "<<Y<<endl;
  }

  //Number Selection
       double a;
  double b;
  double c;
  cin>>a;
  cin>>b;
  cin>>c;

  if (a>1&&a<3&&b>1&&b<3&&c>1&&c<3)
  {
    cout<<a<<" "<<b<<" "<<c<<endl;
  
  }else if (a>1&&a<3&&b>1&&b<3)
  {
    cout<<a<<" "<<b<<endl;
  }else if (a>1&&a<3&&c>1&&c<3)
  {
    cout<<a<<" "<<c<<endl;
  } else if (b>1&&b<3&&c>1&&c<3)
  {
   cout<<b<<" "<<c<<endl;
  }else if (a>1&&a<3)
  {
    cout<<a<<endl;
  }else if (b>1&&b<3)
  {
    cout<<b<<endl;
  }else if (c>1&&c<3)
  {
   cout<<c<<endl;
  }
  else
  {
    cout<<"No Numbers Found "<<endl;
  }

  //Number Replacement
  double a;
  double b;
  double c;
  double d;
  cin>>a;
  cin>>b;
  cin>>c;
  cin>>d;
  if (d<=c&&d<=b&&d<=a&&c>=d&&c<=b&&c<=a&&b>=d&&b>=c&&a>=d&&a>=c&&a>=b)
  {
    cout<<a<<" "<<a<<" "<<a<<" "<<a<<endl;
  }else if (a<b&&a<c&&a<d&&b>a&&b<c&&b<d&&c>a&&c>b&&c<d&&d>a&&d>b&&d>c)
  {
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
  }else
  {
    double num1=pow(a,2);
    double num2=pow(b,2);
    double num3=pow(c,2);
    double num4=pow(d,2);
    cout<<num1<<" "<<num2<<" "<<num3<<" "<<num4<<endl;
  }  

  //Number Transformation
    double x;
  double y;
  cin>>x;
  cin>>y;
  if (x<0&&y<0)
  {
    cout<<x/(-1)<<" "<<y/(-1)<<endl;
  }else if (x<0||y<0)
  {
    
    cout<<(x+0.5)<<" "<<(y+0.5)<<endl;
  }else if (x>0&&y>0&&x<0.5&&x>2.0&&y<0.5&&y>2.0)
  {
   
    cout<<(x/10)<<" "<<(y/10)<<endl;
  }else
  {
     
    cout<<(x/10)<<" "<<(y/10)<<endl;
  }

  //Division Remainder Check
   int a;
  int b;
  int r;
  int s;
  cin>>a;
  cin>>b;
  cin>>r;
  cin>>s;
  if (a>0&&b>0&&r>0&&s>0&&b!=0)
  {
    int qaliq=a%b;
    if (qaliq==r||qaliq==s)
    {
      cout<<"Yes"<<endl;
    }else
    {
        cout<<"No"<<endl;
    }   
    
  }else
  {
    cout<<"No"<<endl;
  }  

  //Value Swapping Without Temporary Variable
  int a;
  int b;
  cin>>a;
  cin>>b;
  cout<<b<<" "<<a<<endl;  

  //Character Swapping
     char a;
  char b;
  cin>>a;
  cin>>b;

  if (a=='A'&&b=='B')
  {
    cout<<"Possible"<<endl;
  }

}