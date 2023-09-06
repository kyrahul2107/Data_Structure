#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;

bool checkequal(int a[26], int b[26])
{
    for(int k=0;k<26;k++)
    {
        if(a[k]!=b[k])
        {
            return 0;
        }
    }
    return 1;
}


 bool permutation( string str1, string str2)
 {

    int i=0,j=0;
    int count1[26]={0};
     int count2[26]={0};
     int windowsize=str1.size();
     // character count store in srtring 1
     while(j<windowsize)
     {
        char ch=str1[j];
         int index= ch-'a';
         count1[index]++;
         j++;

     }
     // for first window
     while(i<windowsize)
     {
        char ch= str2[i];
        int index=ch-'a';
        count2[index]++;
        i++;
     }
     if(checkequal(count1, count2))
     {
         return 1;
     }

    // traverse for the next window
    while(i<str2.size())
    {
        char ch=str2[i];
         int index=ch-'a';
         count2[index]++;
         char oldchar=str2[i-windowsize];
         index=oldchar-'a';
         count2[index]--;
         if(checkequal(count1, count2))
     {
         return 1;
     } 
     i++;

    }
    return 0;
 }









int main()
{
    string str1,str2;
    cout<<"enter the  first string::";
    getline (cin, str1);
    cout<<"enter th secondf string::";
    getline (cin, str2);
    if(permutation(str1,str2))
    {
        cout<<"permutation string";
    }
     else{
        cout<<" not a permutation string";
     }
    
    
    return 0;
}