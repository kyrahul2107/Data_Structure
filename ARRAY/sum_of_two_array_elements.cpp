#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;
vector<int> sum(vector<int>a,vector<int>b)
{
    vector<int>sum;
    int carry=0;
    int temp=0,value=0;
    int i=a.size()-1,j=b.size()-1;
    while(i>=0&&j>=0)
    {
        temp=a[i]+b[j];
        value=temp%10+carry;
        carry=temp/10;
        sum.push_back(value);
        i--;
        j--;

    }
    
    // case1
     while(i>=0)
    {
        temp=a[i];
        value=temp%10+carry;
        carry=temp/10;
        sum.push_back(value);
        i--;
    }
   // case 2
    while(j>=0)
    {
        temp=a[j];
        value=temp%10+carry;
        carry=temp/10;
        sum.push_back(value);
        j--;

    }
    //case 3
    while(carry!=0)
    {
       sum.push_back(carry); 
    }
    return sum;
}
//priniting elements of array
void print(vector<int>a)
{
    int i=0;
    for(i=0;i<=a.size()-1;i++)
    {
        cout<<a[i]<<" ";
    }
   cout<<endl;
}
vector<int>reverse(vector<int>ans)
{
    int s=0,e=ans.size()-1;
    while (s<e)
    {
        swap(ans[s++],ans[e--]);
    }
    return ans;
    
    
}
 int main()
 {
    vector<int>a;
    vector<int>b;
    a.push_back(1);
    a.push_back(3);
    a.push_back(5);
    a.push_back(2);
    a.push_back(9);
    b.push_back(1);
    b.push_back(3);
    b.push_back(5);
    b.push_back(2);
    b.push_back(9);
    cout<<" the first array is"<<endl;
    print(a);
    cout<<"the second array is"<<endl;
     print(b);
    vector<int>ans=reverse(sum(a,b));
    cout<<"sum of the array is"<<endl;
    print(ans);
    return 0;
 }