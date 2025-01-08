
// https://codeforces.com/contest/2050/problem/B

// Brute force Greedy Math *1100 Rating


// -----------------------------------------------Correct Code---------------------------------------------


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {

    long long n;
    cin >> n;
    long long arr[n];
    for(long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long sumodd = 0;
    long long sumeven = 0;
    long long cnt1 = 0;
    long long cnt2 = 0;
    for(long long i = 0; i < n; i += 2)
    {
        sumodd += arr[i];
        cnt1++;
    }
    for(long long i = 1; i < n; i += 2)
    {
        sumeven += arr[i];
        cnt2++;
    }
    if(((sumodd / cnt1) == (sumeven / cnt2)) &&   (sumodd % cnt1) == 0 && (sumeven % cnt2) == 0)
    cout << "YES" <<endl;
    else
    cout << "NO" <<endl;
    }
    
}


/*

// -----------------------------------------------Correct Code---------------------------------------------


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {

    long long n;
    cin >> n;
    long long arr[n];
    for(long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long sumodd = 0;
    long long sumeven = 0;
    long long cnt1 = 0;
    long long cnt2 = 0;
    for(long long i = 0; i < n; i += 2)
    {
        sumodd += arr[i];
        cnt1++;
    }
    for(long long i = 1; i < n; i += 2)
    {
        sumeven += arr[i];
        cnt2++;
    }
    if(((sumodd % cnt1) == 0 && (sumeven % cnt2) == 0 && (sumodd / cnt1) == (sumeven / cnt2))   )
    cout << "YES" <<endl;
    else
    cout << "NO" <<endl;
    }
    
}

*/
