#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    //Arithmetic Progression Checker
   int size;
   cin>>size;
   int array[size];
   for (int i = 0; i <size; i++)
   {
    cin>>array[i];
   }

   int ferq=array[1]-array[0];
   bool isFerq=true;
   for (int i = 2; i <size; i++)
   {

    int indikiFerq= array[i]-array[i-1];
     if (indikiFerq!=ferq)
     {
        isFerq=false;
        break;
     }
     
   }
   if (isFerq)
   {
    cout<<"Yes"<<endl;
   }else
   {
    cout<<"No"<<endl;
   } 

   //Geometric Progression Checker
    int size;
   cin>>size;
   int array[size];

   for (int i = 0; i <size; i++)
   {
     cin>>array[i];
   }

   double bolme=(double)array[1]/(double)array[0];

   bool isBolme=true;
   for (int i = 2; i <size; i++)
   {
     double indikiBolme=(double)array[i]/(double)array[i-1];
     if (indikiBolme!=bolme)
     {
       isBolme=false;
       break;
     }
     
   }
   if (isBolme)
   {
    cout<<"Yes"<<endl;
   }else
   {
    cout<<"No"<<endl;
   }

   //Sequence Order Checker
    int size;
   cin>>size;
   int array[size];

   for (int i = 0; i <size; i++)
   {
     cin>>array[i];
   }

   bool artir=false, azalir=false;
   for (int i = 0; i < size-1; i++)
   {
     if (array[i]<array[i+1])
     {
       artir=true;
       
     }else if (array[i]>array[i+1])
     {
       azalir=true;
     }
     
   }
   if (artir&&!azalir)
   {
       cout<<"Ascending"<<endl;
   }else if (!artir&&azalir)
   {
     cout<<"Descending"<<endl;
   }else
   {
    cout<<"Neither"<<endl;
   }

   //Last Occurrence Index Finder
   int size;
   cin>>size;
   int array[size];
   for (int i = 0; i <size; i++)
   {
    cin>>array[i];
   }

   int num;
   cin>>num;
   int lastIndex=-1;
   

   for (int i = 0; i <size; i++)
   {
     if (array[i]==num)
     {
      lastIndex=i;
     }
     
   }
   if (lastIndex!=-1)
   {
    cout<<"Last Occurrence Index: "<<lastIndex<<endl;
   }
   else
   {
   cout<<"Not Found"<<endl;
   }

   //Even Numbers in Even Places Counter
    int size;
  cin>>size;
  int array[size];
  for (int i = 0; i < size; i++)
  {
    cin>>array[i];
  }
  int count=0;

  for (int i = 0; i <size; i++)
  {
    if (array[i]%2==0&&i%2==0)
    {
      count++;
    }
    
  }
  cout<<count<<endl;

  //Sequence Minimum and Maximum Value Finder
   int size;
  cin>>size;
  int array[size];
  for (int i = 0; i <size; i++)
  {
    cin>>array[i];
  }

  int max=array[0];
  int min=array[0];

  for (int i = 0; i <size; i++)
  {
    if (array[i]>max)
    {
      max=array[i];
      
    }
    else if (array[i]<min)//8 min=8 3
    {
      min=array[i];
    }
  }
  cout<<"minimum = "<<min<<", maximum = "<<max<<endl;

  //First and Last Maximum Elements Finder
  int size;
  cin>>size;
  int array[size];
  for (int i = 0; i < size; i++)
  {
    cin>>array[i];
  }

  int max=array[0];
  int count=1;
  int indexMax=0;
  int lastIndex=0;

  for (int i = 1; i < size; i++)
  {
     if (array[i]>max&&i>indexMax)
     {
       max=array[i];
       count=1;
       indexMax=i;
       lastIndex=i;
      
     }else if (max==array[i])
     {
       count++;
       lastIndex=i;
       
     }
  }
  cout<<"The maximum element is: "<<max<<endl;
  cout<<"The number of occurrences of the maximum element is: "<<count<<endl;
  cout<<"The position of the first maximum element is: "<<indexMax<<endl;
  cout<<"The position of the last maximum element is: "<<lastIndex<<endl;

  //Swap Maximum and Minimum Elements
   int size;
  cin>>size;
  int array[size];

  for (int i = 0; i < size; i++)
  {
    cin>>array[i];
  }

  int max=array[0];
  int min=array[0];
  int maxIndex=0;
  int minIndex=0;

  for (int i = 1; i <size; i++)
  {
    if (array[i]>max)
    {
      max=array[i];
      maxIndex=i;
    }
    if (array[i]<min)
    {
      min=array[i];
      minIndex=i;
    }
    
  }

  int temp=array[maxIndex];
  array[maxIndex]=array[minIndex];
  array[minIndex]=temp;
  for (int i = 0; i < size; i++)
  {
    cout<<array[i]<<" ";
    
  }

  //Count Local Minima and Maxima
   int size;
  cin>>size;
  int array[size];
  for (int i = 0; i <size; i++)
  {
    cin>>array[i];
  }
  
  int count=0;
  int count1=0;

  for (int i = 0; i < size-2; i++)
  {
    if (array[i]>array[i+1]&&array[i+1]<array[i+2])//i=3 i=4 i=3+2
    {
      
      count++;
      
    }
    if (array[i]<array[i+1]&&array[i+1]>array[i+2])
    {
      
      count1++;
    }
  }
  cout<<"Local Minima: "<<count<<endl;
  cout<<"Local Maxima: "<<count1<<endl;

  //Count Distinct Elements in Non-decreasing Sequence
   int size;
  cin>>size;
  int array[size];
  for (int i = 0; i <size; i++)
  {
    cin>>array[i];
  }
  
  int count=0;

  for (int i = 0; i <size; i++)
  {
    if (array[i]!=array[i+1])
    {
      count++;
    }
    
  }
  cout<<"Distinct Elements: "<<count<<endl;

  //Count Distinct Elements in Unordered Sequence
   int size;
  cin>>size;
  int array[size];
  for (int i = 0; i <size; i++)
  {
    cin>>array[i];
  }

  int count=0;


  for (int i = 0; i <size; i++)// 2 5 3 8 2 4 8 7
  {
    bool isDuplic=false;
    for (int j = 0; j <i; j++)
    {
      if (array[i]==array[j])
      {
        isDuplic=true;
        break;
      }
      
    }
    if (!isDuplic)
    {
    count++;
     }
  }
  cout<<"Distinct Elements: "<<count<<endl;

  //Count Occurrences of Subsequence
    int size;
    cin >>size;                    

    int array[size];                   
    for (int i = 0; i < size; i++){
         cin >> array[i];           
    }
    
    int count = 0;                

    
    for (int i = 0; i <= size - 10; i++){ //27  9 2 1 2 3 4 5 6 7 8 9 10 10 11 1 2 3 1 8 3 4 5 6 7 8 9 10 
         bool found = true;       
         for (int j = 0; j < 10; j++){
              if (array[i + j] != j + 1){//i=9 +0 =9 ==1 1+0=1 i=1 2 !=1 i=2+0=2= 1==1 i=3+j=2 2=2 i=4 3=3
                  found = false;  
                  break;          
              }
         }
         
         if (found){
          count++; 
         }     
    }
    
    cout <<"Occurrences of Subsequence: "<< count << endl;   

    //Maximum Length of Consecutive Zeros
     int size;
    cin>>size;
    int array[size];
    for (int i = 0; i <size; i++)
    {
      cin>>array[i];
    }
    
    int maxCount=0;
    int currentCount=0;
    for (int i = 0; i <size; i++)
    {
      if (array[i]==0)
      {
        currentCount++;
        maxCount=max(maxCount,currentCount);
      }else
      {
        currentCount=0;
      }
      
      
    }
    cout<<"Length of Maximum Consecutive Zeros: "<<maxCount<<endl;
    
    //Length of Largest Ascending Portion
    int size;
    cin>>size;
    int array[size];
    for (int i = 0; i <size; i++)
    {
      cin>>array[i];
    }

    int currentLeght=0;
    int maxLeght=0;

    for (int i = 0; i <size; i++)
    {
      if (array[i]<array[i+1])
      {
        currentLeght++;
        maxLeght=max(currentLeght,maxLeght);
      }else
      {
        currentLeght=0;
      }
    }
    cout<<"Length of Largest Ascending Portion: "<<maxLeght<<endl;

    //Closest Value to Min, Max, and Mean
     int size;
    cin>>size;
    int array[size];
    for (int i = 0; i <size; i++)
    {
      cin>>array[i];
    }

    int x;
    cin>>x;
    int min=array[0];
    int max=array[0];
    int sum=0;

    for (int i = 0; i <size; i++)
    {
      if (array[i]>max)
      {
        max=array[i];
      }
      if (array[i]<min)
      {
        min=array[i];
      }
      sum+=array[i];
    }

    int mean=sum/size;

    int diffmax=(x>=max)?(x-max):(max-x);
    int diffmin=(x>=min)?(x-min):(min-x);
    int diffmean=(x>=mean)?(x-mean):(mean-x);

    if (diffmax<=diffmin&&diffmax<=diffmean)
    {
      cout<<"Maximum"<<endl;
    }
    else if (diffmin<=diffmax&&diffmin<=diffmean)
    {
      cout<<"Minimum"<<endl;
    }else
    {
      cout<<"Mean"<<endl;
    }

    //Check Symmetry of Array Elements
       int size;
    cin>>size;
    int array[size];
    for (int i = 0; i <size; i++)
    {
      cin>>array[i];
    }

    bool isSymmetrical =true;  

    for (int i = 0; i <size/2; i++)
    {
      if (array[i]!=array[size-1-i])
      {
        isSymmetrical=false;
        break;
      }
      
    }
    if (isSymmetrical)
    {
      cout<<"Symmetrical"<<endl;
    }else
    {
      cout<<"Not Symmetrical"<<endl;
    }
    
    //Reverse Array Elements up to K
     int N;
    cin >> N;
    int arr[N];

    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int K;
    cin >> K; 


    for (int i = 0; i <K/2; i++) {
        int temp = arr[i];         
        arr[i] = arr[K-i-1];  
        arr[K -i-1] = temp;
    }

    
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;  

    //Reverse Array Elements from K to N
      int size;
   cin>>size;
   int array[size];
   for (int i = 0; i <size; i++)
   {
     cin>>array[i];
   }
   int K;
   cin>>K;

   for (int i = K-1, j=size-1;i<j; i++, j--)
   {
    int temp=array[i];
    array[i]=array[j];
    array[j]=temp;
   }

   for (int i = 0; i <size; i++)
   {
     cout<<array[i]<<" ";
   }

   //Reverse Array Elements from K to L
     int size;
   cin>>size;
   int array [size];
   for (int i = 0; i <size; i++)
   {
     cin>>array[i];
   }

   int K , L;
   cin>>K>>L;

   for (int i = K-1, j=L-1; i <j; i++,j--)
   {
    int temp=array[i];
    array[i]=array[j];
    array[j]=temp;
   }

   for (int i = 0; i <size; i++)
   {
     cout<<array[i]<<" ";
   }

   // Cyclically Shift Array Elements to the Right
    int size;
   cin>>size;
   int array[size];
   for (int i = 0; i <size; i++)
   {
     cin>>array[i];
   }

   int last=array[size-1];

   for (int i = size-1; i >0; i--)
   {
    array[i]=array[i-1];
   }
   array[0]=last;

   for (int i = 0; i <size; i++)
   {
     cout<<array[i]<<" ";
   }  

   // Replace Array Elements with Half the Sum of Neighbors
   int size;
   cin>>size;
   double array[size];
   for (int i = 0; i <size; i++)
   {
     cin>>array[i];
   }
   double newArray[size];
   newArray[0]=array[0];
   newArray[size-1]=array[size-1];

   for (int i = 1; i <size-1; i++)
   {
    newArray[i]=(array[i-1]+array[i+1])/2;
   }

   for (int i = 0; i <size; i++)
   {
     cout<<newArray[i]<<" ";
   }
   
   //Group Positive and Negative Elements in Array
    int size;
   cin>>size;
   int array[size];
   for (int i = 0; i <size; i++)
   {
     cin>>array[i];
   }

   int newArray[size];

   int index=0;

   for (int i = 0; i <size; i++)
   {
     if (array[i]>0)
     {
       newArray[index]=array[i];
       index++;
     }

   }
   for (int i = 0; i <size; i++)
   {
     if (array[i]<0)
     {
      newArray[index]=array[i];
      index++;
     }
     
   }
   for (int i = 0; i <size; i++)
   {
     cout<<newArray[i]<<" ";
   }
   
   //Sort Array in Ascending Order
   int size;
   cin>>size;
   int array[size];
   for (int i = 0; i <size; i++)
   {
    cin>>array[i];
   }

   for (int i = 0; i <size-1; i++)
   {
     for (int j = 0; j <size-i-1; j++)
     {
       if (array[j]>array[j+1])
       {
        int temp=array[j];
       array[j]=array[j+1];
       array[j+1]=temp;
       }
       
     }
     
   }
   for (int i = 0; i <size; i++)
   {
     cout<<array[i]<<" ";
   }
}