#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#define PI 3.14159265358979323846
using namespace std;

double calculatorVolume(double radius){
    return (4.0/3.0)*PI*pow(radius,3);
}

  int findCube(int num ){
    return pow(num,3);
}

int findRectangle(int num, int num1){
    return num*num1;
}

int findPer(int num, int num1){
    return (num+num1)*2;
}

double findMile(double num){
    return num* 0.621371;
}

double numTotal(double num1, double num2, double num3, double num4){
    return num1+num2+num3+num4;
}

double numAvarege(double num1, double num2, double num3, double num4){
    return (num1+num2+num3+num4)/4;
}

double metr(double num){
    return num/100;
}

double kilo(double me){
    return me/1000;
}

void printPro(int num){
    if (num%2==0)
    {
        cout<<"The entered number is even"<<endl;
    }else
    {
        cout<<"The entered number is odd"<<endl;
    }   
}

int factorial(int n){
   int fac=1;
   for (int i = 1; i <=n; i++)
   {
      fac*=i;
   }
   return fac;
  }
  double sumSeries(double n){
   double sum=0;
   for (int i = 1; i <=n; i++)
   {
      sum+=factorial(i)/i;
   }
    return sum;
  }

  string convertoBinary(int decimal){
    string binary="";
    while (decimal>0)
    {
        binary=char((decimal%2)+'0')+binary;
        decimal=decimal/2;
    }
    return binary;
    
}

void primeCheck(int num){
   for (int i = 2; i <sqrt(num); i++)
   {
      if (num%i!=0)
      {
         cout<<"The number "<<num<<" is a prime number"<<endl;
          break;
      }else
      {
         cout<<"The number "<<num<<" is not a prime number"<<endl;
          break;
      }
   }
  }

  int numMax(int array[], int size){

    int max=array[0];
   
    for (int i = 0; i <size; i++)
    {
        if (array[i]>max)
        {
            max=array[i];
        }
        
    }
    return max;
    
}

 void numArmstrong(int number){
    int num=number;
    int count=0;
    int orginal=number;
    while (num>0)
    {   
        num=num/10;
        count++;
    }

    int tail=0;
    int sum=0;
    num=number;
    while (num>0)
    {
       tail=num%10;
       sum+=pow(tail,count);
       num=num/10;  
    }
    if (orginal==sum)
    {
        cout<<"The "<<orginal<<" is an Armstrong number."<<endl;
    }else
    {
        cout<<"The "<<orginal<<" is not an Armstrong number."<<endl;
    }
    
    
    
    
}

void isPerfect(int number){
    int sum=0;
    for (int i = 1; i <number; i++)
    {
        if (number%i==0)
        {
            sum+=i;
        }
        
    }
    if (sum==number)
    {
        cout<<"The "<<number<<" is a Perfect number."<<endl;
    }else
    {
        cout<<"The "<<number<<" is not a Perfect number."<<endl;
    }

}

 void isPerfect(int num, int num1){
   cout<<"The perfect numbers between "<<num<<" to "<<num1<<" are: ";
   for (int i = num; i <num1; i++)
   {
      int sum=0;
      for (int j = 1; j <i; j++)
      {
         if (i%j==0)
         {
            sum+=j;
         }
         
      }
      if (sum==i)
      {
         cout<<i<<" ";
      }
      
   }
  }

  void anagram(string text1, string text2){
   bool flag=true;
    for (int i = 0; i <text1.size(); i++)
    {
      bool found =false;
      for (int j = 0; j <text2.size(); j++)
      {
         if (text1[i]==text2[j])
         {
            text2[j]='*';
            found=true;
            break;
         }
         
      }
      if (!found)
      {
         flag=false;
         break;
      }
    }
    if (flag)
    {
      cout<<"Anagram"<<endl;
    }else
    {
      cout<<"Not Anagram"<<endl;
    }
  }

  int sum(int a, int b, int c=0, int d=0){

    return a+b+c+d;
}

string convertToBinary(int num){
   string binary="";
   if (num==0)
   {
      return "0";
   }
   int tail=0;
   while (num>0)
   {
      tail=num%2;
      binary=to_string(tail)+binary;
      num=num/2;
   }
    return binary;
  }

  string convertToHex(int num){
   string hex="";
   if (num==0)
   {
      return "0";
   }
   string hexd="0123456789ABCDEF";
   while (num>0)
   {
      int tail=num%16;
      hex=hexd[tail]+hex;
      num=num/16;
   }
   return hex;
  }
  string convertToOctal(int num){
   string octal="";
   if (num==0)
   {
     return "0";
   }
   while (num>0)
   {
      int tail=num%8;
      octal=to_string(tail)+octal;
      num=num/8;
   }
   return octal;
  }

  string convertToBinary(int num){
   string binary="";
   if (num==0)
   {
      return "0";
   }
   int tail=0;
   while (num>0)
   {
      tail=num%2;
      binary=to_string(tail)+binary;
      num=num/2;
   }
    return binary;
  }

  string convertToHex(int num){
   string hex="";
   if (num==0)
   {
      return "0";
   }
   string hexd="0123456789ABCDEF";
   while (num>0)
   {
      int tail=num%16;
      hex=hexd[tail]+hex;
      num=num/16;
   }
   return hex;
  }
  string convertToOctal(int num){
   string octal="";
   if (num==0)
   {
     return "0";
   }
   while (num>0)
   {
      int tail=num%8;
      octal=to_string(tail)+octal;
      num=num/8;
   }
   return octal;
  }

  string convertTo(int num,  string format = "dec"){
   if (format=="bin")
   {
      return convertToBinary(num);
   }else if (format=="hex")
   {
     return convertToHex(num);
   }else if (format=="oct")
   {
      return convertToOctal(num);
   }else
   {
      return to_string(num);
   }
  }

int main(){
  system("cls");

  //Sphere Volume Calculator
   double radius;
   cin>>radius;
   double volume=calculatorVolume(radius);
   cout<<"The volume of a sphere is: "<<volume<<endl;

   //Cube Volume Calculator
     int num;
   cin>>num;

   int result=findCube(num);
   cout<<result<<endl; 

   //Rectangle Area and Perimeter
   int num;
   int num1;
   cin>>num;
   cin>>num1;
   int result=findRectangle(num,num1);
   cout<<"The area of the rectangle is: "<<result<<endl;
   int result1=findPer(num,num1);
   cout<<"The perimeter of the rectangle is: "<<result1<<endl; 

   //Kilometers to Miles Conversion
    double num;
   cin>>num;

   double result=findMile(num);
   cout<<result<<" Miles/hr"<<endl;  

   //Total and Average of Four Numbers
   double num1,num2,num3,num4;
   cin>>num1>>num2>>num3>>num4;
   double total=numTotal(num1,num2,num3,num4);
   cout<<"The total of four numbers is : "<<total<<endl;
   double avarage=numAvarege(num1,num2,num3,num4);
   cout<<"The average of four numbers is : "<<avarage<<endl;

   // Character Code (ASCII/Unicode) Printer
    char c;
   cin>>c;

   cout<<"The ASCII value of "<<c<<" is: "<<(int)c<<endl;
   cout<<"The character for the ASCII value "<<(int)c<<" is: "<<c<<endl; 

   //Centimeter to Meter and Kilometer Converter
   double num;
   cin>>num;
   double me=metr(num);
   cout<<"The distance in meter is: "<<me<<endl;

   double kilometr=kilo(me);
   cout<<"The distance in kilometer is: "<<kilometr<<endl;

   //Even-Odd Checker
    int num;
   cin>>num;
   
   printPro(num);

   //Series Sum with Factorials
     double n;
   cin>>n;
   cout<<sumSeries(n)<<endl;  

   //Decimal to Binary Converter
    int decimal;
   cin>>decimal;

   string result=convertoBinary(decimal);
   cout<<result<<endl;  

   //Prime Number Checker
    int num;
   cin>>num;
   primeCheck(num); 

   //Largest Element Finder
   int size;
   cin>>size;
   int array[size];
   for (int i = 0; i < size; i++)
   {
     cin>>array[i];
   }

   int result=numMax(array, size);
   cout<<result<<endl;

   //Armstrong and Perfect Number Checker
   int number;
   cin>>number;

   numArmstrong(number);
   isPerfect(number); 

   //Perfect Number Finder
   int num;
    cin>>num;
    int num1;
   cin>>num1;
   isPerfect(num, num1);  

   //Anagram Checker
    string text1;
   getline(cin,text1);
   string text2;
   getline(cin,text2);
   anagram(text1,text2);

   //Sum Function with Default Arguments
   int a;
   int b;
   int c;
   int d;
   cin>>a>>b>>c>>d;

   int result=sum(a,b,c,d);
   cout<<result<<endl;   

   //Number Conversion Functions
    int num;
   cin>>num;
   cout<<"Bin: "<<convertToBinary(num)<<endl;
   cout<<"Hex: "<<convertToHex(num)<<endl;
   cout<<"Oct: "<<convertToOctal(num)<<endl;

   //Number Conversion Function
    int num;
   cin>>num;
   cin.ignore();
   string format;
   getline(cin, format);
   cout<<convertTo(num,format)<<endl;

   

}