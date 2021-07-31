#include <iostream>

using namespace std;

// Max sub array sums

void printSubarraySum(int *arr, int n)
{
    //Kadane's Algo -> O(n)
    int max = INT32_MIN;
    int currSum = 0;

    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        max = currSum > max ? currSum : max;
    }

    cout << max;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(n);
    printSubarraySum(arr, n);
}