#include<iostream>
#include<vector>
using namespace std;
// reverse array function
 vector<int> reverse_array(vector<int> v)
 {
   int s=0,e=v.size()-1;
   while (s<=e)
   {
     swap(v[s],v[e]);
     s++;
     e--;
   }
   return v;
}
//priniting elements of array
void print(vector<int> ans)
{
    int i=0;
    for(i=0;i<=ans.size()-1;i++)
    {
        cout<<ans[i]<<" ";
    }

}
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(2);
    v.push_back(9);
    cout<<"before reverse array is"<<endl;
    print(v);
    vector<int>ans=reverse_array(v);
    cout<<"after reverse the array is"<<endl;
    print(ans);
    return 0;



}