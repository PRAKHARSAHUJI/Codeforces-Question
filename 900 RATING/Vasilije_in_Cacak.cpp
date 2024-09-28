
// https://codeforces.com/problemset/problem/1878/C

// Math 900 Rating

// // -----------------------------------------------Correct Code---------------------------------------------


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, x;
        cin >> n >> k >> x;

        long long sum_min = (k * (k + 1)) / 2; // Sum of first k natural numbers
        long long sum_max = (k * (2 * n - k + 1)) / 2; // Sum of largest k numbers

        if (x >= sum_min && x <= sum_max)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}


// // -----------------------------------------------InCorrect Code---------------------------------------------

// Time limit exceed on test case 3

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;cin>>t;
//     while(t--)
//     {
//         long long n,k,x;
//         cin>>n>>k>>x;
        
//         long long a =n;

//         long long sum_min = 0;
//         long long sum_max = 0;

//         for(long long i = 1 ; i<=k;i++){
//             sum_min+=i;
//         }
//         for(long long i = k ; i>=1;i--){
//             sum_max+=n;
//             n--;
//         }
//         // cout<<sum_max<<endl;
//         // cout<<sum_min<<endl;


//         if(x>=sum_min && x<=sum_max)
//         cout<<"YES"<<endl;
//         else
//         cout<<"NO"<<endl;

//     }
// }
