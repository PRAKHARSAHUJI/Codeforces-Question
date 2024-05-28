// https://codeforces.com/problemset/problem/118/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s; 
    int count_vowel = 0;
    int count_const = 0;
    transform(s.begin(),s.end(),s.begin(),::tolower);

    for(int i = 0 ; i<s.length();i++)
    {
    if(s[i]==65 || s[i]==69 || s[i]==73 || s[i]==79 || s[i]==85 || s[i]==89 || s[i]==97 || s[i]==101 || s[i]==105 ||  s[i]==111 || s[i]==117|| s[i]==121)
    {

    }
    else
    cout<<'.'<<s[i];
    }
}




// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s; 
//     int count_vowel = 0;
//     int count_const = 0;
//     transform(s.begin(),s.end(),s.begin(),::tolower);

//     // for(int i = 0 ; i<s.length();i++)
//     // {
//         // if(s[i]==65 || s[i]==69 || s[i]==73 || s[i]==79 || s[i]==85 || s[i]==97 || s[i]==101 || s[i]==105 ||  s[i]==111 || s[i]==117)
//         // {
//         //     count_vowel++;
//         // }
//         // else
//         //     count_const++;

//         // }
//         // cout<<count_const<<endl;
//         // cout<<count_vowel;
//     for(int i = 0 ; i<s.length();i++)
//     {
//     if(s[i]==65 || s[i]==69 || s[i]==73 || s[i]==79 || s[i]==85 || s[i]==89|| s[i]==97 || s[i]==101 || s[i]==105 ||  s[i]==111 || s[i]==117|| s[i]==121)
//     {

//     }
//     else
//     cout<<'.'<<s[i];
//     }


// }