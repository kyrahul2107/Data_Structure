#include <iostream>
#include <conio.h>
using namespace std;
int partition(int *arr, int s, int e)
{
    int pivot;
    int cnt = 0;
    int i = 0;
    int j = 0, k = e;
    pivot = arr[s];

    // to count the number of emement for right position of the pivot
    for (i = s + 1; i < e; i++)
        ;
    {
        if (arr[i] < pivot)
        {
            cnt++;
        }
    }
    // placing the pivot at the right position
    swap(pivot, arr[s + cnt]);
    // sorting the left and right part of the pivot element
    int pivotIndex = s + cnt;
    // to place the element smaller at the left side of pivot and bigger at the right side of the pivot
    while (j < pivotIndex && k > pivotIndex)
    {
        while (arr[j] < pivot)
        {
            j++;
        }
        while (arr[k] > pivot)
        {
            k--;
        }

        if (arr[j] > pivot && arr[k] < pivot)
        {
            swap(arr[j++], arr[k--]);
        }
    }
    return pivotIndex;
}
void quickSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    // partition karo
    int pivot = partition(arr, s, e);
    // recursive call for left part
    quickSort(arr, s, pivot - 1);
    // recursive call for right part
    quickSort(arr, pivot + 1, e);
}

int main(void)
{
    int arr[] = {38, 27, 43, 3, 9, 2, 10, 4};
    int n = 8;
    int s = 0;
    quickSort(arr, s, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}