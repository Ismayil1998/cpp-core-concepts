#include<iostream>
#include<iomanip>
#include <cmath>
#include <math.h> 
using namespace std;

int main(){
    //Digit Count
     int N;
   int counter=0;
   cin>>N;

   while (N>0)
   {
    counter++;
    N=N/10;
    
   }
   cout<<counter<<endl;

   //Digit Sum
    int n;
   int sum=0;
   cin>>n;

   while (n>0)
   {
    int a=n%10;
    sum+=a;
    n=n/10;
   
   }
   cout<<sum<<endl;

   //Odd Digit Count
   int n;
   int odd=0;
   cin>>n;
   while (n>0)
   {
    int a=n%10;
    if (a%2!=0)
    {
     odd++;
    }

    n=n/10;
    
   }
   cout<<odd<<endl;  

   //Palindrome Number Checker
     int n;
   int reversed=0;
   cin>>n;
   int orginal=n;

   while (n>0)
   {
    int tail=n%10;
    reversed=reversed*10+tail;
    n=n/10;
   }

   if (orginal==reversed)
   {
    cout<<"YES"<<endl;
   }else
   {
    cout<<"NO"<<endl;
   }

   // Maximum Digit Finder
   int n;
   cin>>n;
   int max=0;

   while (n>100)
   {
    int tail=n%10;
    if (tail>=max)
    {
        max=tail;
    }
    n=n/10;
   }
   cout<<max<<endl;

   //Maximum Digit Occurrence
    int N;
   cin >> N;

   int max = 0; 
   int count = 0; 

   while (N > 0) { 
       int tail = N % 10; 
       
       if (tail > max) { 
           max = tail; 
           count = 1;
       } else if (tail == max) { 
           count++; 
       }

       N = N / 10;
   }
   cout << count << endl;
   
   //Divisible Natural Numbers
    int n;
   cin>>n;
   for (int i = 1; i < n; ++i)
   {
    int num=i;
    bool print=true;

    while (num>0)
    {
       int tail=num%10;
       if (tail==0)
       {
        print=false;
        break;
       }
       else{
        if (i%tail!=0)
        {
            print=false;
            break;
        }
       }
       num=num/10;
    }
    
    if (print==true)
    {
       cout<<i<<" ";
    }
   }

   //Sum of Squares Representation
    int n;
   cin>>n;

   for (int i = 1; i <= n; ++i)
   {
      for (int j = i+1; j <=n; ++j)
      {    
        int a=i*i;
        int b=j*j;
        int sum=a+b;
        if (sum==n)
      {
        cout<<"YES"<<endl;
            return 0;
        
       }
        
      }
      
   }
   cout<<"NO"<<endl;

   //Sum of Squares Representation
   int n;
   cin>>n;
   for (int i = 1; i <=n; i++)
   {
    for (int j = i+1; j <=n; j++)
    {    
      int a=(i*i)+(j*j);
      if (a<=n)
      {
        cout<<i<<"^"<<"2"<<" + "<<j<<"^"<<"2"<<" = "<<a<<endl;
      }
    }
   }

   //Greatest Common Divisor (GCD)
   int a;
   int b;
   int max=0;
   int max1=0;
   cin>>a;
   cin>>b;

   while (a>=1)
   {
     while (b>0)
     {
        for (int i = 1; i < a; ++i)
        {
            for (int j = 1; j < b; ++j)
            {
               if (a%i==0)
               {
                if (i>max)
                {
                    max=i;
                    break;
                }
                
               }
               if (b%j==0)
               {
                if (j>max1)
                {
                    max1=j;
                  break;
                }
                
               }
               if (max==max1)
               {
                cout<<max<<endl;
                return 0;
               }   
            }
            
        }
        
     }
     
   }

   //Least Common Multiple (LCM)
    int a;
   int b;
   cin>>a;
   cin>>b;

   while (a>=1)
   {
     while (b>0)
     {
        for (int i = 1; i <= 1000; ++i)
        {
            for (int j = 1; j <=1000; ++j)
            {
               if (i%a==0)
               {
                if (j%b==0)
                {
                  if (i==j)
                  {
                    cout<<i<<endl;
                    return 0;
                    

                  }
                }
               }
              
               
            }
            
        }
        
     }
     
   }   

   //Least Common Multiple of Integers from 1 to N
   int n;
   cin>>n;

   int b=1;

   while (true)
   {
    bool found=true;

    for (int i = 1; i <=n; i++)
    {
       if (b % i !=0)
       {
        found=false;
        break;
       }
    }
    if (found==true)
    {
        cout<<b<<endl;
        break;
    }
    b++;
   }  

   //Divisors of a Natural Number
   int n;
   cin>>n;
   for (int i = 1; i <=n; i++)
   {
    if (n%i==0)
    {
        cout<<i<<" ";
    }
   }

   //Power of Two Check
    int n;
   cin>>n;
   for (int i = 0; i <= n; i++)
   {
    int a=pow(2,i);
    if (n==a)
    {
       cout<<"Yes"<<endl;
       return 0;
    }
    
   }
   cout<<"No"<<endl; 

   //Prime Number Check
   int n;
    cin >> n;

    if (n == 1) {
        cout << "No" << endl; 
        return 0;
    }

    for (int i = 2; i <=sqrt(n); i++) {
        if (n % i == 0) { 
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl; 
    return 0;

    //Prime Numbers Between N1 and N2
    int n1;
    int n2;
    cin>>n1;
    cin>>n2;

   while (n1<=n2)
   {
    bool found=true;
    if (n1==1)
    {
        found=false;
    }
    else
    {
        for (int i = 2; i<=sqrt(n1); i++)
        {
            if (n1%i==0)
            {
                found=false;
                break;
            }
            
        }
        
    }
    if (found)
    {
        cout<<n1<<" ";
    }
    n1++;
   }

   //Prime Divisors Decomposition
    int N;
     cin>>N;
     int count=0;
     while (N%2==0)
     {
       count++;
       N=N/2;
     }
      if (count>0)
       {
         cout<<2<<"^"<<count<<" ";
       }
     
     for (int i = 3; i <sqrt(N); i++)
     {
      count=0;
       while (N%i==0)
       {
         count++;
         N=N/i;
       }
        if (count>0)
         {
           cout<<i<<"^"<<count<<" ";
         }
     }

     if (N>2)
     {
       cout<<N<<"^"<<1;
     }

     //Factorial Prime Divisors Expansion
       int n;
    cin>>n;
    int a=1;

    for (int i = 1; i <=n; i++)
    {
     a*=i;
     
    }
    //cout<<a<<" ";

    int count=0;
    while (a%2==0)
    {
        count++;
        a=a/2;
    }
    if (count>0)
    {
        cout<<2<<"^"<<count<<" ";
    }

    for (int i = 3; i <=sqrt(a); i+=2)
    {
        count=0;
        while (a%i==0)
        {
            count++;
            a=a/i;
        }
        if (count>0)
        {
            cout<<i<<"^"<<count<<" ";
        } 
        
        
    }
    if (a>1)
        {
        cout<<a<<"^"<<1;
        } 

    //Twin Prime Numbers
    int n;
    cin>>n;

    int prevPrime=-1;

    for (int i = 2; i <=n; i++)
    {
        bool found=true;
        for (int a = 2; a <=sqrt(i); a++)
        {
            if (i%a==0)
            {
                found=false;
                break;
            }
            
        }
        if (found)
        {
            if (prevPrime!=-1&&i-prevPrime==2)
            {
                cout<<"("<<prevPrime<<", "<<i<<")"<<endl;
            }
            prevPrime=i;
        }
    }

    //Friendly Numbers
     int m;
    int n;
    cin>>m>>n;
    
   while (m<=n)
   {
    int a=0;
    int b=0;
    

      for (int i = 1; i <m; i++)
      {
        if (m%i==0) 
        {
            a+=i;
           
        }
      }
    
      for (int i = 1; i <a; i++)
      {
        if (a%i==0)
        {
            b+=i;
        }
     
      }
      if (b==m && m!=a&& m<a)
      {
        cout<<"("<<m<<", "<<a<<")"<<endl;
      }

      m++;
   }
    
   //Perfect Numbers
   int n;
   cin>>n;
   
   
      for (int i = 2; i <n; i++)
      {
        int a=0;
         for (int j = 1; j <i; j++)
         {
            if (i%j==0)
            {
                a+=j;
            }
            
         }
         if (i==a)
         {
            cout<<i<<" ";
         }
      }
}