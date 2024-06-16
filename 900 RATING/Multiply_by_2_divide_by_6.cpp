// https://codeforces.com/problemset/problem/1374/B

// Math

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
        int count = 0;
        if (n == 1)
        {
            cout << 0 << "\n";
        }
        else
        {
            while (n != 1)
            {
                if (n % 6 == 0)
                    n /= 6;
                else if (n % 3 == 0)
                    n *= 2;
                else
                {
                    count = -1;
                    break;
                }
                count++;
            }
            cout << count << endl;
        }
    }
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) {
//         long long n;
//         cin >> n;
//         int count = 0;

//         while (n != 1) {
//             if (n % 6 == 0) {
//                 n /= 6;
//             } else if (n % 3 == 0) {
//                 n *= 2;
//             } else {
//                 count = -1;
//                 break;
//             }
//             count++;
//         }

//         cout << count << "\n";
//     }

//     return 0;
// }
