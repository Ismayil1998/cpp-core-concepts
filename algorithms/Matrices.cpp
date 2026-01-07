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

   //Column Value Differences to Array
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

    int maxMin[n];
    for (int i = 0; i <n; i++)
    {
        int min=matrix[0][i];
        int max=matrix[0][i];
        for (int j = 0; j <m; j++)
        {
            if (min>matrix[j][i])
            {
                min=matrix[j][i];
            }
            if (max<matrix[j][i])
            {
                max=matrix[j][i];
            }
        }
        maxMin[i]=max-min;
    }
    for (int i = 0; i <n; i++)
    {
        cout<<maxMin[i]<<" ";
    }

    //Average of Extreme Values
    int n, m;
    cin >> n >> m;

    double matrix[n][m];

   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

  
    double min = matrix[0][0];
    double max = matrix[0][0];

 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] < min)
                min = matrix[i][j];
            if (matrix[i][j] > max)
                max = matrix[i][j];
        }
    }

 
    double average = (min + max) / 2.0;
    cout << fixed << setprecision(2) << average << endl;

    //Swap Rows with Extreme Values
      int n,m;
    cin>>n>>m;
    int matix[n][m];

    for (int i = 0; i <n; i++)
    {
      for (int j = 0; j <m; j++)
      {
        cin>>matix[i][j];
      }
      
    }

    int maxRow=0;
    int minRow=0;
    int min=matix[0][0];
    int max=matix[0][0];
    
    for (int i = 0; i <n; i++)
    {
      
      for (int j = 0; j <m; j++)
      {
        if (matix[i][j]>max)
        {
          max=matix[i][j];
          maxRow=i;
        }
        if (matix[i][j]<min)
        {
          min=matix[i][j];
          minRow=i;
        } 
      }
  
    }
    for (int j = 0; j < m; j++)
    {
      int temp=matix[minRow][j];
      matix[minRow][j]=matix[maxRow][j];
      matix[maxRow][j]=temp;
    }

    for (int i = 0; i <n; i++)
    {
      for (int j = 0; j <m; j++)
      {
        cout<<matix[i][j]<<" ";
      }
        cout<<endl;
      
    }

    // Rows with All Zeros
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
      bool found=true;
      for (int j = 0; j <n; j++)
      {
        if (matrix[i][j]!=0)
        {
          found=false;
          break;
        }
      }
      if (found)
      {
        cout<<i+1<<" ";
      }
    }

    //Rows with Equal Elements
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
      bool found=true;
      for (int j = 0; j <n-1; j++)
      {
        if (matrix[i][j]!=matrix[i][j+1])
        {
          found=false;
          break;
        } 
      }
      if (found)
      {
        cout<<i+1<<" ";
      }
    }   

    //Monotonic Sequences in Rows
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

    for ( int i = 0; i <n; i++)
    {
      bool artan=true;
      bool azalan=true;
      for (int j = 0; j <n-1; j++)
      {
         if (matrix[i][j]>=matrix[i][j+1])
         {
            artan=false;
            
         }

          if (matrix[i][j]<=matrix[i][j+1])
         {
           azalan=false;
          
         }
      }

      if (artan||azalan)
      {
        cout<<i+1<<" ";
      }
      
      
    }

    // Columns with Symmetrical Sequences
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

    

    for (int j = 0; j <n; j++)
    {
      bool palindriom=true;
      for (int i = 0; i <n/2; i++)
      {
        if (matrix[i][j]!=matrix[n-1-i][j])
        {
          palindriom=false;
          break;
        }
      }
      if (palindriom)
      {
        cout<<j+1<<" ";
      }
    }

    //Swap Columns in Integer Matrix
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

    int a;
    cin>>a;
    int b;
    cin>>b; 

    for (int i = 0; i <n; i++)
    {
       int temp = matrix[i][a - 1];
        matrix[i][a - 1] = matrix[i][b - 1];
        matrix[i][b - 1] = temp;
      
    }

    for (int i = 0; i <n; i++)
    {
      for (int j = 0; j <m; j++)
      {
        cout<<matrix[i][j]<<" ";
      }
        cout<<endl;
      
    }  

    // Fill 5x6 Matrix in a Specific Pattern
     int matrix[5][6];
    int num=1;

    for (int i = 0; i <5; i++)
    {
      if (i%2==0)
      {
        for (int j = 0; j <6; j++)
        {
          matrix[i][j]=num++;
        }
        
      }else
      {
        for (int j = 5; j>=0; --j)
        {
          matrix[i][j]=num++;
        }
        
      }
    }

    for (int i = 0; i <5; i++)
    {
      for (int j = 0; j <6; j++)
      {
        cout<<matrix[i][j]<<" ";
      }
      cout<<endl;
      
    }

    //Mirror Matrix Horizontally
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

    for (int i = n-1; i>=0; --i)
    {
      for (int j = 0; j <n; ++j)
      {
        cout<<matrix[i][j]<<" ";
      }
      cout<<endl;
      
    }   

    //Mirror Matrix Vertically
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
      for (int j = n-1; j >=0; --j)
      {
        cout<<matrix[i][j]<<" ";
      }
      cout<<endl;
      
    }  

    //Mirror Matrix along Main Diagonal
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

    //Mirror Matrix along Secondary Diagonal
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
        cout<<matrix[n-1-j][n-1-i]<<" ";
      }
      cout<<endl;
      
    }  

    //Rotate Matrix in Positive Directions
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
    
    cout<<"90 degrees:"<<endl;
    for (int i = 0; i <n; i++)
    {
      for (int j = 0; j <n; j++)
      {
        cout<<matrix[n-1-j][i]<<" ";
      }
      cout<<endl;
      
    }
    cout<<endl; 

    cout<<"180 degrees:"<<endl;
    for (int i = 0; i <n; i++)
    {
      for (int j = 0; j <n; j++)
      {
        cout<<matrix[n-1-i][n-1-j]<<" ";
      }
      cout<<endl;
      
    }
    cout<<endl;
     
    cout<<"270 degrees:"<<endl;
    for (int i = 0; i <n; i++)
    {
       for (int j = 0; j <n; j++)
       {
          cout<<matrix[j][n-1-i]<<" ";
       }
       cout<<endl;
       
    }

    //Replace Elements Above and Below Main Diagonal
    int n;
    cin>>n;
    int matrix[n][n];
    int above[n][n];
    int below[n][n];
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
        if (i<j)
        {
          above[i][j]=0;
        }else
        {
          above[i][j]=matrix[i][j];
        }
        
        
      }
      
    }
    
    cout<<"Above the diagonal:"<<endl;
    for (int i = 0; i <n; i++)
    {
      for (int j = 0; j <n; j++)
      {
        cout<<above[i][j]<<" ";
      }
      cout<<endl;
    }
    cout<<endl;

    for (int i = 0; i <n; i++)
    {
      for (int j = 0; j <n; j++)
      {
        if (i>j)
        {
          below[i][j]=0;
        }else
        {
          below[i][j]=matrix[i][j];
        }
        
        
      }
      
    }
    
    cout<<"Below the diagonal:"<<endl;
    for (int i = 0; i <n; i++)
    {
      for (int j = 0; j <n; j++)
      {
        cout<<below[i][j]<<" ";
      }
      cout<<endl;
    }
    
    //Swap Columns with Minimum and Maximum Elements
      int M, N;
    cin >> M >> N;

    int matrix[M][N];

  
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

   
    int minVal = matrix[0][0], maxVal = matrix[0][0];
    int minCol = 0, maxCol = 0;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] < minVal) {
                minVal = matrix[i][j];
                minCol = j;
            }
            if (matrix[i][j] > maxVal) {
                maxVal = matrix[i][j];
                maxCol = j;
            }
        }
    }

    
    if (minCol != maxCol) {
        for (int i = 0; i < M; i++) {
            int temp = matrix[i][minCol];
            matrix[i][minCol] = matrix[i][maxCol];
            matrix[i][maxCol] = temp;
        }
    }

   
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout <<endl;
    }

    //Count Rows with Permutations
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
    
    int count=0;

    for (int i = 0; i <n; i++)
    {
      bool seen[n+1]={false};
      bool isPermutation=true;
      for (int j = 0; j <n; j++)
      {
        int value=matrix[i][j];
        if (value<1||value>n||seen[value])
        {
          isPermutation=false;
          break;
        }
        seen[value]=true;
      }

      if (isPermutation)
      {
        count++;
      }
    }
    cout<<count<<endl;

    //Rearrange Rows by First Column
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

    for (int i = 0; i <m-1; i++)
    {
      for (int j = 0; j <m-i-1; j++)
      {
        if (matrix[j][0]>matrix[j+1][0])
        {
          for (int k = 0; k <n; k++)
          {
            int temp=matrix[j][k];
            matrix[j][k]=matrix[j+1][k];
            matrix[j+1][k]=temp;
          }
          
        }
        
      }
      
    }

    for (int i = 0; i <m; i++)
    {
      for (int j = 0; j <n; j++)
      {
        cout<<matrix[i][j]<<" ";
      }
        cout<<endl;
      
    }

    //Sum of Quarters in a Square Matrix
     int n;
    cin>>n;
    int matrix[n][n];
    for (int i = 0; i <n; i++)
    {
      for (int j = 0;  j<n; j++)
      {
        cin>>matrix[i][j];
      }
      
    }

    int upper=0;
    int right=0;
    int lower=0;
    int left=0;

    for (int i = 0; i <n; i++)
    {
      for (int j = 0; j <n; j++)
      {
        if (i<j&&i+j<n-1)
        {
          upper+=matrix[i][j];
        }else if (i<j&&i+j>n-1)
        {
          right+=matrix[i][j];
        }else if (i>j&&i+j>n-1)
        {
          lower+=matrix[i][j];
        }else if (i>j&&i+j<n-1)
        {
          left+=matrix[i][j];
        }
      }
      
    }
    cout<<upper<<' '<<right<<' '<<lower<<' '<<left<<endl;

    // Swap Quarters in a Square Matrix
    int n;
    cin>>n;
    int matrix[n][n];
    for (int i = 0; i <n; i++)
    {
      for (int j = 0;  j<n; j++)
      {
        cin>>matrix[i][j];
      }
      
    }

    for (int i = 0; i <n; i++)
    {
      for (int j = 0; j <n; j++)
      {
        if (i<j&&i+j<n-1)
        {
          int x=n-1-i;
          int y=j;
          int temp=matrix[i][j];
          matrix[i][j]=matrix[x][y];
          matrix[x][y]=temp;
        }
        
      }
      
    }

    for (int i = 0; i <n; i++)
    {
      for (int j = 0; j <n; j++)
      {
        if (i>j&&i+j<n-1)
        {
          int x=i;
          int y=n-1-j;
          int temp=matrix[i][j];
          matrix[i][j]=matrix[x][y];
          matrix[x][y]=temp;
        }
        
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
}