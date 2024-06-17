// https://codeforces.com/problemset/problem/320/A

//  Greedy, Brute force;

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;
//     bool flag = false;
//     if(true)
//     {
//         for(int i =0 ; i<s.length();i++)
//         {
//             if(s[i]=='1')
//             {
//             break;
//             }
//             else
//             {
//                 cout<<"NO";
//                 return 0;
//             }
//         }
//     }
//     for(int i = 0 ; i<s.length();i++)
//     {
//         if(s[i]=='4' && s[i+1]=='4' && s[i+2]=='4')
//         {
//             cout<<"NO";
//             return 0;
//         }

//         if(s[i]=='1'||s[i]=='4')
//         flag = true;
//         else
//         {
//         flag=false;
//         break;
//         }
//     }
//     if(flag)
//     cout<<"YES";
//     else
//     cout<<"NO";
// }

#include <bits/stdc++.h>
using namespace std;
using namespace std;

bool is_magical(string number)
{
    for (int i = 0; i < (int)number.size(); i++)
        if (number[i] != '1' && number[i] != '4')
            return false;

    if (number[0] == '4')
        return false;

    if (number.find("444") != number.npos)
        return false;

    return true;
}

int main()
{
    string number;
    cin >> number;

    if (is_magical(number))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
