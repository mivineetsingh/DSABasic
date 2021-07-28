#include <iostream>>

using namespace std;
// Arrays are passed by reference
void printArray(int *arr, int n)
{
    // printArray (int arr[]) is equivalent to printArray (int *arr)
    // if we print sizeof(arr) -> we get 8 (the pointer size), instead of original array size
    // so we must pass the num of elements from main
    // arr in main and in this method share same memory -> pass by reference

    arr[0] = 10; // this will also change the arr[0] of main
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    printArray(arr, n);
}