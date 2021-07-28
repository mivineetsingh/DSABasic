#include <iostream>

using namespace std;

// a brute force approach
bool linearSearch(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 0, 10, 11, 9, 8, 8, 7};
    int n = sizeof(arr) / sizeof(int);
    int key = 9;

    cout << linearSearch(arr, n, key) << endl;
}
