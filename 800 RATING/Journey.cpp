

// https://codeforces.com/contest/2051/problem/B

// Binary Search Math


// -----------------------------------------------Correct Code---------------------------------------------


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a;
        cin >> a;
        long long b;
        cin >> b;
        long long c;
        cin >> c;
        long long sum = 0;
        long long cnt = 0;
        if (n > a + b + c)
        {
            sum = (n / (a + b + c)) * (a + b + c);
            cnt = 3 * (n / (a + b + c));
            while (sum < n)
            {
                sum += a;
                cnt++;
                if (sum >= n)
                    break;
                sum += b;
                cnt++;
                if (sum >= n)
                    break;
                sum += c;
                cnt++;
                if (sum >= n)
                    break;
            }
            cout << cnt << endl;
        }
        else
        {

            while (sum < n)
            {
                sum += a;
                cnt++;
                if (sum >= n)
                    break;
                sum += b;
                cnt++;
                if (sum >= n)
                    break;
                sum += c;
                cnt++;
                if (sum >= n)
                    break;
            }
            cout << cnt << endl;
        }
    }
}
