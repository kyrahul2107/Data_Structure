#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;

char mostoccurancecharacter(string str)
{
    char ch;
    int alp[26]={0};
    for(int i=0;i<str.length();i++)
    {
         ch=str[i];
         int number=ch-'a';
         alp[number]++;
    }
    int index=0,ans=-1;
    for(int j=0;j<26;j++)
    {
        if(alp[j]>ans)
        {
            ans=alp[j];
            index=j;
            
        }
    }
    return index+'a';

}





int main()
{
    string str,l;
    cout<<"enter the string::";
    getline (cin, str);
    cout<<"most occurance character";
    cout<<mostoccurancecharacter(str)<<endl;
    
    return 0;
}