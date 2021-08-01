#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Vectors are passed by value
    vector<int> arr = {1, 2, 10, 12, 15};

    arr.push_back(2);
    arr.pop_back();

    for (auto x : arr)
    {
        cout << x << endl;
    }

    vector<int> arrFillCons(10, 7); // 7 filled 10 times
    cout << arr.size() << endl;
}