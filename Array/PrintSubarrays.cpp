#include <iostream>

using namespace std;

// Subarray - smaller continous array

void printSubarrays(int *arr, int n)
{
    //Brute force -> O(n^3)

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << ",";
            }
            cout << endl;
        }
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(n);
    printSubarrays(arr, n);
}