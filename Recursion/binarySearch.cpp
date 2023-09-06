#include <iostream>
#include <conio.h>
using namespace std;
bool binarySearch(int arr[], int start, int end, int key)
{

    int mid = (start + end) / 2;
    // base case
    if (start > end)
    {
        return false;
    }
    if (arr[mid] == key)
    {
        return true;
    }
    if (arr[mid] > key)
    {
        binarySearch(arr, start, mid - 1, key);
    }
    else
    {
        binarySearch(arr, mid + 1, end, key);
    }
    return false;
}
int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int end = 8;
    int key;
    cout << "enter the key to search the element" << endl;
    cin >> key;
    if (binarySearch(arr, 0, end, key))
    {
        cout << "element is present in the list";
    }
    else
    {
        cout << "element is not present in the list";
    }

    return 0;
}