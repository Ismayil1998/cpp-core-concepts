#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    //Maximum Modulo Element
      int m,n;
    cin>>m>>n;

    int matric[m][n];

    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j <n; j++)
        {
            cin>>matric[i][j];
        }
    }

    int max=matric[0][0];
    int maxIndex=0;
    int maxColum=0;

    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j <n; j++)
        {
            if (matric[i][j]>max)
            {
                max=matric[i][j];
                maxIndex=i;
                maxColum=j;
                
                
            }
            
        }
        
    }
    cout<<"Value: "<<max<<' '<<maxIndex<<' '<<maxColum<<endl;

    //Count Unique Elements
    int m,n;
    cin>>m>>n;

    int matrix[m][n];
    int see[10000]={0};
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j <n; j++)
        {
            cin>>matrix[i][j];
        }
        
    }
    int count=0;
    

    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j <n; j++)
        {
            int x=matrix[i][j];
            if (see[x]==0)
            {
                count++;
                see[x]=1;
            }
            
            
        }
        
    }
    cout<<count<<endl;

    //Diagonal and Above Zeroing
     int n;
   cin>>n;

   int matrix[n][n];

   for (int i = 0; i <n; i++)
   {
      for (int j = 0; j <n; j++)
      {
         cin>>matrix[i][j];
      }
      
   }

   for (int i = 0; i <n; i++)
   {
     for (int j = i; j <n; j++)
     {
         matrix[i][j]=0;
         
     }
     
   }
   for (int i = 0; i <n; i++)
   {
     for (int j = 0; j <n; j++)
     {
        cout<<matrix[i][j]<<" ";
     }
     cout<<endl;
     
   }
   
   //Diagonal Sums
    int n;
   cin >> n;

   int matrix[n][n];

   for (int i = 0; i <n; i++) {
       for (int j = 0; j <n; j++) {
           cin >> matrix[i][j];
       }
   }

   int sum = 0;    
   int sum1 = 0;   

   for (int i = 0; i < n; i++) {
       sum += matrix[i][i];            
       sum1 += matrix[i][n - 1 - i];      
   }

   cout << sum << ' ' << sum1 << endl;

   //Swap Rows and Columns
    int n;
   cin>>n;

   int matrix[n][n];

   for (int i = 0; i <n; i++)
   {
     for (int j = 0; j <n; j++)
     {
        cin>>matrix[i][j];
     }
     
   }

   for (int i = 0; i <n; i++)
   {
     for (int j = 0; j <n; j++)
     {
         cout<<matrix[j][i]<<" ";
     }
     cout<<endl;
     
   }  

   //Row Sum to Array
   int m,n;
   cin>>m>>n;

   int matrix[m][n];
   for (int i = 0; i < m; i++)
   {
     for (int j = 0; j <n; j++)
     {
        cin>>matrix[i][j];
     }
     
   }
   int sum[100]={};

   for (int i = 0; i <m; i++)
   {
     for (int j = 0; j <n; j++)
     {
        sum[i]+=matrix[i][j];
     }
     
   }
   for (int i = 0; i <m; i++)
   {
     cout<<sum[i]<<" ";
   }  

   //Row Product to Array
    int n,m;
   cin>>n>>m;

   int matrix[n][m];
    int produc[n];
    
    for(int i=0; i<n; i++){
        produc[i]=1;
    }
  

   for (int i = 0; i <n; i++)
   {
     for (int j = 0; j <m; j++)
     {
       cin>>matrix[i][j];
     }
     
   }
   

   for (int i = 0; i <n; i++)
   {
     for (int j = 0; j <m; j++)
     {
       produc[i]*=matrix[i][j];
     }
     
   }

   for (int i = 0; i <n; i++)
   {
      cout<<produc[i]<<" ";
   }  

   //Minimum Row Values to Array
     int n,m;
   cin>>n>>m;

   int matrix[n][m];
   for (int i = 0; i <n; i++)
   {
     for (int j = 0; j <m; j++)
     {
       cin>>matrix[i][j];
     } 
   }

   int rowMin[n];

   for (int i = 0; i <n; i++)
   {

    int min=matrix[i][0];

     for (int j = 1; j <m; j++)
     {
       if (matrix[i][j]<min)
       {
         min=matrix[i][j];
       }
     }

     rowMin[i]=min;
     
   }

   for (int i = 0; i <n; i++)
   {
     cout<<rowMin[i]<<" ";
   } 

   //Column Sum to Array
    int m,n;
    cin>>m>>n;
    int matrix[m][n];
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j <n; j++)
        {
            cin>>matrix[i][j];
        }
    }

    int colmSum[n]={0};
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <m; j++)
        {
           colmSum[i]+=matrix[j][i];
        }
        
    }
    for (int i = 0; i <n; i++)
    {
        cout<<colmSum[i]<<" ";
    }

    //Minimum Column Values to Array
    int n,m;
   cin>>n>>m;

   int matrix[n][m];
   for (int i = 0; i <n; i++)
   {
     for (int j = 0; j <m; j++)
     {
       cin>>matrix[i][j];
     }
     
   }

   int minColm[m];

   for (int j = 0; j <m; j++)
   {
      int min=matrix[0][j];
      for (int i = 1; i <n; i++)
      {
        if (matrix[i][j]<min)
        {
          min=matrix[i][j];
        }
        
      }
      minColm[j]=min;
      
   }

   for (int j = 0; j <m; j++)
   {
      cout<<minColm[j]<<" ";
   }  

   //
}