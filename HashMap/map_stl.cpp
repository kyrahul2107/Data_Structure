#include <map>
#include <unordered_map>
#include <iostream>
using namespace std;
int main()
{
    unordered_map<string, int> m;
    // first way to insert
    pair<string, int> p = make_pair("Rahul", 23);
    m.insert(p);
    // second way to insert
    pair<string,int>pair2("love",24);
    // third way to insert
    m["yadav"]=25;
    m.insert(pair2);
    // first way to search
    cout<<m["yadav"]<<endl;
    // second way to search
    cout<<m.at("love")<<endl;
    // if the key is not present
    //cout<<m.at("unknown")<<endl;
    // if the key is not present we are searching without at it will assigned 0
    cout<<m["unknown"]<<endl;
    cout<<m.at("unknown")<<endl;
    // check for the presence of the key 
    cout<<m.count("love")<<endl;
    // to erase the key and the value
    m.erase("love");
     cout<<m.count("love")<<endl;
     // method first to traverse the map
     for(auto i:m)
     {
       cout << "The key of the map is " << i.first  <<" "<<"The value is" << i.second << endl;  
     }
    

    unordered_map<string, int>::iterator it = m.begin();
    while (it!=m.end())
    {
        cout << "The key of the map is " << it->first  <<" "<<"The value is" << it->second << endl;
        it++;
    }
}