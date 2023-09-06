#include <iostream>
#include <conio.h>
using namespace std;
int sumofArray(int *arr, int size)
{
    int ans = 0;
    if (size == 0 || size == 1)
    {
        return 0;
    }
    // processing part
    ans = ans +arr[size-1]+arr[size-2];
    // recursion call
     sumofArray(arr, size - 2);
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    cout <<"sum of array elements is"<<endl;
    cout<<sumofArray(arr, size)<< endl;
    return 0;
}
