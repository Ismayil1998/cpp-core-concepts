#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    //Reverse a String
     string text;
    getline(cin,text);
    for (int i = text.size()-1; i>=0; i--)
    {
        cout<<text[i];
    }

    //Shift Letters in a String
    string text;
    getline(cin,text);

    for (int i = 0; i < text.size(); i++)
    {
        if (text[i]>='A'&&text[i]<='Z')
        {
            text[i]=(text[i]=='Z')?'A': text[i]+1;
        }
        else if (text[i]>='a'&&text[i]<='z')
        {
            text[i]=(text[i]=='z')?'a': text[i]+1;
        }
        cout<<text[i];
    }
    cout << endl;

    //Capitalize Words in a String
    string text;
    getline(cin,text);

   bool newWord=true;

   for (size_t i = 0; i <text.size(); i++)
   {
       if (isalpha(text[i]))
       {
          if (newWord)
          {
            text[i]=toupper(text[i]);
            newWord=false;
          }else
          {
            text[i]=tolower(text[i]);
          }
       }else
       {
        newWord=true;
       }  
   }
   cout<<text<<endl;

   //Largest Word in a String
   string text;
  getline(cin,text);
  
  string word="";
  string longLeng="";
  text+=' ';

  for(char c: text){
    if (isalpha(c))
    {
        word+=c;
    }else if (c==' ')
    {
        if (word.length()>longLeng.length())
        {
            longLeng=word;
        }
        word="";
    }
    
  }
  cout<<longLeng<<endl;

  // Sort Characters in a String
    string text;
  getline(cin,text);

  string words="";

  for(char c:text){
    if (isalpha(c))
    {
        words+=c;
    }
    
  }
  for (size_t i = 0; i <words.length()-1; i++)
  {
    for (size_t j = 0; j < words.length()-i-1; j++)
    {
        if (words[j]>words[j+1])
        {
            char temp=words[j];
            words[j]=words[j+1];
            words[j+1]=temp;
        }
        
    }
    
  }
  cout<<words<<endl;

  //Count Vowels in a String
  string text;
 getline(cin,text);
 int count=0;

 for(char c:text){
    if ((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u'))
    {
        count++;
    }
    
 }
 cout<<"number of vowels -> "<<count<<endl;

 //Check Palindrome
     string text;

    getline(cin,text);

    string orginal=text;
    string reversd="";

    for (int i = text.size()-1; i>=0; i--)
    {
        reversd+=text[i];
    }
    if (orginal==reversd)
    {
        cout<<"True"<<endl;
    }else
    {
        cout<<"False"<<endl;
    }

    //Insert Dash Between Odds
     string text;
   getline(cin,text);

   string word="";

   for (size_t i = 0; i <text.size(); i++)
   {
       if ((text[i]%2!=0)&&(text[i+1]%2!=0)&&(text[i]!=text[i+1]))
       {
         word+=text[i];
         word+='-';
       }
       else
       {
          word+=text[i];
       }
       
   }
   cout<<word<<endl;

   //Remove Special Characters
    string text;

   getline(cin,text);

   string word="";

   for (size_t i = 0; i <text.size(); i++)
   {
      if (isalnum(text[i])||text[i]==' ')
      {
        word+=text[i];
      }
      
      
   }
   cout<<word<<endl;

   //Verify Letter Existence
   string text;
   getline(cin,text);

   string text1;
   getline(cin,text1);

   bool found=true;

   for (size_t i = 0; i <text1.size(); i++)
   {
     bool letterFound=false;

     for (size_t j = 0; j <text.size(); j++)
     {
        if (text1[i]==text[j])
        {
            letterFound=true;
            break;
        }
        
     }
     if (!letterFound)
     {
        found=false;
        break;;
     }
     
     
   }
   if (found)
   {
    cout<<"true"<<endl;
   }else
   {
    cout<<"false"<<endl;
   }

   //String Compression
   string text;
    getline(cin,text);
    int count=1;
    string word="";
    for (int i = 0; i <text.size(); i++)
    {
        if (text[i]==text[i+1])
        {
            count++;
        }else
        {
            word+=text[i];
            word+=to_string(count);
            count=1;
        }
    }
    cout<<word<<endl;   

    // Longest Common Substring
     string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    string result = "";
    int max=0;
    
    for (int i = 0; i < s1.length(); i++) {
        for (int j = 0; j < s2.length(); j++) {
            int k = 0;

          
            while (i + k < s1.length() && j + k < s2.length() && s1[i + k] == s2[j + k]) {
                k++;
            }

           
            if (k >max) {
                max=k;
                result = "";
                for (int m = 0; m < max; m++) {
                    result += s1[i + m];
                }
            }
        }
    }

    cout << "Longest Common Substring: " << result << endl;
   
}