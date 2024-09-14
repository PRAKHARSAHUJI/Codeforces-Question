
// https://codeforces.com/problemset/problem/709/A
// implementation


// --------------------------------------- Correct Code ------------------------------------------------



#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;  // number of oranges
    int b, d;
    cin >> b >> d;  // max size of orange the juicer can handle and max juicer capacity
    
    int sum = 0;  // current sum of orange sizes in the juicer
    int ans = 0;  // number of times juicer is emptied
    
    for (int i = 0; i < t; i++)
    {
        int orange;
        cin >> orange;  // input size of each orange
        
        if (orange <= b)  // only consider oranges with size <= b
        {
            sum += orange;  // add the orange to the juicer
        }
        
        if (sum > d)  // if juicer is full, we need to empty it
        {
            ans++;
            sum = 0;  // reset juicer after emptying
        }
    }
    
    cout << ans;  // output the number of times the juicer was emptied
}





// --------------------------------------- Correct Code ------------------------------------------------



// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     int arr[t];
//     int b,d;
//     cin>>b>>d;
//     int sum = 0;
//     int ans = 0;
//     for(int i =0 ;i<t;i++)
//     {
//         cin>>arr[i];
//         if(arr[i]<=b)
//         {
//             sum+=arr[i];
//         }
//         if(sum>d)
//         {
//             ans++;
//             sum=0;
//         }
//     }
//     cout<<ans;
// }




// --------------------------------------- InCorrect Code ------------------------------------------------


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long t;
//     cin >> t;
//     long long arr[t];
//     long long b,d;
//     cin>>b>>d;
//     long long sum = 0;
//     for(int i =0 ;i<t;i++)
//     {
//         cin>>arr[i];
//         if(arr[i]<=b)
//         {
//             sum+=arr[i];
//         }
        
//     }
//     if(sum%d==0 && sum!=0)
//     {
//     cout<<(sum/d)-1;
//     }
//     else
//     cout<<sum/d;
// }