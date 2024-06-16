// https://codeforces.com/problemset/problem/405/A

// Implementation, Greedy Sortings

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // sort(arr, arr + n, greater<int>());
    sort(arr, arr + n);
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}