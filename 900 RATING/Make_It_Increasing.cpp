// // -----------------------------------------------Correct Code---------------------------------------------

// https://codeforces.com/problemset/problem/1675/B

// Greedy Implementation 900 Rating


#include <bits/stdc++.h>
using namespace std;

bool checksort(int arr[], int n)
{
    bool check = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            check = true;
        }
        else
        {
            check = false;
            break;
        }
    }
    return check;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n == 1)
            cout << 0 << endl;
        else if (checksort(arr, n))
        {
            cout << 0 << "\n";
        }
        else
        {
            int cnt = 0;
            for (int i = n - 1; i >= 1; i--)
            {
                while (arr[i] <= arr[i - 1])
                {
                    arr[i - 1] =arr[i-1]/2;
                    cnt++;
                    if (arr[i - 1] == 0) break;
                }

                if (arr[i] > arr[i - 1])
                {
                    cnt=cnt;
                }
            }
            if(checksort(arr,n))
            cout << cnt << endl;
            else
            cout << -1 << endl;

            // for (int i = 0; i < n; i++)
            // {
            //     cout << arr[i] << " ";
            // }
        }
    }
}
