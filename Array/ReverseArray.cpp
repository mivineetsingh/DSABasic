#include <iostream>

using namespace std;

void reverseArray(int *arr, int n)
{
    // with auxillary space we can do it

    // without auxillary space

    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 45, 60, 80, 90, 100};
    int n = sizeof(arr) / sizeof(int);
    reverseArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
}