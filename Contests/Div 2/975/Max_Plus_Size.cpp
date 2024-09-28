
// // -----------------------------------------------Correct Code---------------------------------------------

// https://codeforces.com/contest/2019/problem/A

// Brute Force Dp Greedy




#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int mx = INT_MIN;
        int idex = 0;
        bool check = false;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mx = max(mx, arr[i]);
        }

        if (n % 2 == 0)
            cout << mx + n / 2<<endl;
        else
            {
                for (int i = 0; i < n; i++)
                {
                    if(mx==arr[i])
                    {
                        if(i%2==0)
                        {
                            check =true;
                            break;
                        }
                    }
                }
                if(check)
                cout<<mx+ (n/2)+1<<endl; 
                else
                cout<<mx+ (n/2)<<endl; 

            }
    }
}











// // -----------------------------------------------Correct Code---------------------------------------------




// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         int mx = INT_MIN;
//         int idex = 0;
//         bool check = false;

//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//             if (arr[i] >= mx)
//                 idex = i;
//             mx = max(mx, arr[i]);
//         }

//         if (n % 2 == 0)
//             cout << mx + n / 2<<endl;
//         else
//             {
//                 for (int i = 0; i < n; i++)
//                 {
//                     if(mx==arr[i])
//                     {
//                         if(i%2==0)
//                         {
//                             check =true;
//                             break;
//                         }
//                     }
//                 }
//                 if(check)
//                 cout<<mx+ (n/2)+1<<endl; 
//                 else
//                 cout<<mx+ (n/2)<<endl; 

//             }
//     }
// }


















