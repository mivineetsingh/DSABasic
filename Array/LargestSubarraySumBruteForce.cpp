#include <iostream>

using namespace std;

// Max sub array sums

void printSubarraySum(int *arr, int n)
{
    //Brute force -> O(n^3)
    int max = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int currSum = 0;

            for (int k = i; k <= j; k++)
            {
                currSum += arr[k];
            }
            max = currSum > max ? currSum : max;
        }
    }

    cout << max;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(n);
    printSubarraySum(arr, n);
}