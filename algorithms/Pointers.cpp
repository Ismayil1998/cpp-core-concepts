#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    //Understanding Pointers
    cout<<5<<endl;
    cout<<"memory address"<<endl;
    cout<<5<<endl;

    //Integer Pointers
    int a;
    int b;
    cin>>a>>b;
    int ptrA=a;
    int ptrB=b;
    cout<<"Value of ptrA: "<<ptrA<<endl;
    cout<<"Value of ptrB: "<<ptrB<<endl;

    //Pointer Manipulation
    /*
    Consider the following C++ code snippet:

int *p;
int i;
int k;
i = 42;
k = i;
p = &i;
After these statements, which of the following statements will change the value of i to 75?

A) k = 75;
B) *k = 75;
C) p = 75;
D) *p = 75;
Select the correct option(s):

A) Only A
B) Only B
C) Only C
D) Only D
E) Both B and D
F) None of the above
 cout<<"D"<<endl;
*/

//Addition using Pointers
 int num1;
  int num2;
  cin>>num1>>num2;
  int *ptr1=&num1;
  int *ptr2=&num2;

  int sum=*ptr1+*ptr2;
  cout<<"Sum of "<<num1<<" and "<<num2<<" is: "<<sum<<endl; 

  // Array Sum using Pointers
   int size;
 cin>>size;
 int array[size];
 for (int i = 0; i < size; i++)
 {
   cin>>array[i];
 }

 int *ptr=array;
 int sum=0;

 for (int i = 0; i <size; i++)
 {
   sum+=*(ptr+i);
 }
 cout<<"Sum of array elements: "<<sum<<endl;

 //String Length using Pointer
  char text[100];
 char *ptr;
 cin.getline(text, sizeof(text));
 ptr=text;
 int count=0;

 while (*ptr!='\0')
 {
   ptr++;
   count++;
 }
 cout<<"Length of the string: "<<count<<endl;

 //String Copy using Pointer
 char source[100];
 char destination[100];
 char *ptrSourse;
 char *ptrDestination;
 cin.getline(source,sizeof(source));

 ptrDestination=destination;
 ptrSourse=source;

 while (*ptrSourse!='\0')
 {
   *ptrDestination=*ptrSourse;
   ptrSourse++;
   ptrDestination++;
 }
    *ptrDestination = '\0';
 cout<<"Copied string: "<<destination<<endl;

 //Reverse Array using Pointer
  int array[5]={10,20,30,40,50};
 int *ptr;
 ptr=array;
 int reversd[5];

 for (int i = 0; i <5; i++)
 {
    reversd[i]=*(ptr+(4-i));
 }

 for (int i = 0; i <5; i++)
 {
   cout<<reversd[i]<<endl;
 }

 //Concatenate Strings using Pointer
  char str1[100];
 char str2[100];
 char *s1;
 char *s2;
 cin.getline(str1,sizeof(str1));
 cin.getline(str2,sizeof(str2));
 s1=str1;
 s2=str2;

 int len1=strlen(str1);
 s1+=len1;

 while (*s2!='\0')
 {
    *s1=*s2;
    s1++;
    s2++;
 }
 *s1='\0';

 cout<<"Concatenated string: "<<str1<<endl; 

 
}