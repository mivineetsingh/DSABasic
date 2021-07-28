#include <iostream>

using namespace std;

bool binarySearch(int *arr, int n, int key)
{
    // works on a sorted array
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return true;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return false;
}

int main()
{
    int arr[] = {1, 2, 10, 11, 19, 29, 30};
    int key;
    cin >> key;
    int n = sizeof(arr) / sizeof(int);

    cout << binarySearch(arr, n, key) << endl;
}