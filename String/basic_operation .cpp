#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
bool valid( char ch)
{
  if('a'<=ch&&ch<='z'|| 'A'<=ch&&ch<='Z'||0<=ch&&ch<=9)
  {
    return 1;
  }
  return 0;
}
char lowercase(char ch)
{
  if(ch>='a'&&ch<='z')
  {
    return ch;
  }
  else{
    int temp=ch-'A';
    return temp+'a';
     
  }
}

int length(char str[100])
{
    int l=0,i=0;
    while(str[i]!='\0')
    {
        l++;
        i++;
    }
    return l;

}
void reverse( char str[100],int n)
{
   int s=0;
   int e=n-1;
   while (s<e)
   {
    swap(str[s++],str[e--]);
   }
   cout<<str<<endl;
}
// case sensitive palindrome
bool palindrome( char str[100],int n)
{
   int b=0,e=n-1;
   while (b<=e)
   {
     if(lowercase(str[b])!=lowercase(str[e]))
     {
        return 0;
     }
     b++;
     e--;
   }
   return 1;
   
}
// valid palindrome
bool validpalindrome( char str[100],int n)
{  
  char temp[100];
  int length=0;
  for( int i=0;i<n;i++)
  {
     if(valid(str[i]))
     {
        for(int j=0;j<100;j++)
        {
          temp[j]=str[i];
        }
      
     }
  }
   
   return palindrome( temp,length);
  
  
   
}


int main()
{
    char str[100],l;
    cout<<"enter the string::";
    cin>>str;
    cout<<"the lenght of the strig is::";
    l=length(str);
    cout<<l<<endl;
    cout<<"reverse of the string is::";
    reverse(str,l);
    cout<<"palindrome or not"<<" "<<palindrome(str,l)<<endl;
    cout<<"vaild palindrome"<<" "<<validpalindrome( str, l);
    


    return 0;

}