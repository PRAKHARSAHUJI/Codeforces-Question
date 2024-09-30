
// https://codeforces.com/problemset/problem/1593/B

// Dfs and Similar Dp Greedy Math *900 Rating
// // -----------------------------------------------Correct Code---------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long n ;
        cin >> n;
        string s = to_string(n);
        int l = s.length();
        if(n%25==0 )
        cout<<0<<endl;
        else
        {
            int ans = INT_MAX;
           
            for(int i = 0; i<s.length();i++)
            {
                for(int j = i+1; j<s.length();j++)
                {
                    if(((s[i]-'0')*10+(s[j]-'0'))%25==0)
                    ans = min(ans,(j-i-1)+(l-j-1));

                }
                
            }
            cout<<ans<<endl;
        }


        
    }
    return 0;
}










// // -----------------------------------------------Correct Code---------------------------------------------


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t; cin>>t;
//     while(t--)
//     {
//         long long n ;
//         cin >> n;
//         string s = to_string(n);
//         int l = s.length();
//         if(n%25==0 )
//         cout<<0<<endl;
//         else
//         {
//             int ans = INT_MAX;
//             int mx = INT_MAX;
//             for(int i = 0; i<s.length();i++)
//             {
//                 for(int j = i+1; j<s.length();j++)
//                 {
//                     if(((s[i]-'0')*10+(s[j]-'0'))%25==0)
//                     ans = (j-i-1)+(l-j-1);

//                     mx = min(ans,mx);
//                 }
                
//             }
//             cout<<mx<<endl;
//         }


        
//     }
//     return 0;
// }


