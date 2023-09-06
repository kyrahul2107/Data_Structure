// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    int target = 15;
    arr.push_back(13);
    arr.push_back(15);
    arr.push_back(17);
    arr.push_back(19);
    arr.push_back(21);
    int s = 0;
    int e = arr.size() - 1;
    int mid = (s + e) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (target == arr[mid])
        {
            ans = mid;
            break;
        }
        if (target < arr[mid])
        {
            e = mid-1;
        }
        s = mid + 1;
        mid = (s + e) / 2;
    }
    cout << ans;

    return 0;
}