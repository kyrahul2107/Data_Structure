#include<iostream>
#include<vector>
using namespace std;
vector<int> rotated_array(vector<int>v,int k)
{
    vector<int>temp(v.size());
    for(int i=0;i<v.size();i++)
    temp[(i+k)%v.size()]=v[i];
    return temp;

    
}
void print(vector<int>ans)
{
    for(int i=0;i<ans.size();i++)
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
    cout<<"before rotate array is"<<endl;
    print(v);
    cout<<endl;
    vector<int>ans;
    ans=rotated_array(v,2);
    cout<<"after rotate the array is"<<endl;
    print(ans);
    return 0;
}