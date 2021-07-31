#include <iostream>

using namespace std;

// Max sub array sums

void printSubarraySum(int *arr, int n)
{
    //Prefix sum approach -> O(n^2)
    int max = INT32_MIN;

    //Making prefix sum array arr[i] = arr[i-1]+arr[i] given n!=0
    for (int i = 1; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int currSum;

            if (i == 0)
            {
                currSum = arr[j];
            }
            else
            {
                currSum = arr[j] - arr[i - 1];
            }

            max = currSum > max ? currSum : max;
        }
    }

    cout << max;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(n);
    printSubarraySum(arr, n);
}