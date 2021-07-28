#include <iostream>

using namespace std;

int main()
{
    int a[100] = {0}; // static memory allocation || if we don't initialize an array it's filled with garbage value || if we initialize even a single element, rest all are filled with 0

    int a1[] = {1, 2, 3};

    string fruits[] = {"apple", "mango", "guava"};

    // for basic ip op
    int marks[100];

    int n;
    cout << "Enter the no of students ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << marks[i] << " ,";
    }
}