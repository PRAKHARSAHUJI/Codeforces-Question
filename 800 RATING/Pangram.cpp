// https://codeforces.com/problemset/problem/520/A

// ------------------------------------ Correct Code  ---------------------------------------------

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    sort(s.begin(),s.end());
    int arr[26] = {0};
    for(int i =0;i<s.length();i++)
    {
        arr[s[i]-'a'] = 1;
    }
    int sum = 0;

    for(int i =0;i< 26;i++)
    {
        sum += arr[i];
    }
    if(sum==26)
    cout<<"YES";
    else
    cout<<"NO";
}

// ------------------------------------ Correct Code  ---------------------------------------------



// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin>>s;
//     transform(s.begin(),s.end(),s.begin(),::tolower);
//     sort(s.begin(),s.end());
//     int arr[26] = {0};
//     cout<<s<<endl;
//     for(int i =0;i<s.length();i++)
//     {
//         arr[s[i]-'a'] = 1;
//     }
//     int sum = 0;
//     for(int i =0;i< 26;i++)
//     {
//         // sum += arr[i];
//         cout<<arr[i]<<" ";
//     }
//     for(int i =0;i< 26;i++)
//     {
//         sum += arr[i];
//     }
//     // cout << sum << '\n';
//     if(sum==26)
//     cout<<"YES";
//     else
//     cout<<"NO";
// }