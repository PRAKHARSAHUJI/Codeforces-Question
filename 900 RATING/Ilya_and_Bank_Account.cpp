// https://codeforces.com/problemset/problem/313/A


// Implementation ,Number Theory

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n > 0)
        cout << n;
    else
    {
        string s = to_string(n);
        string num1;
        string num2;
        for (int i = 0; i < s.length() - 1; i++)
        {
            num1 += s[i];
        }
        for (int i = 0; i < s.length() - 2; i++)
        {
            num2 += s[i];
        }
        num2 += s[s.length() - 1];
        int n1 = stoi(num1);
        int n2 = stoi(num2);
        if(n1>n2)cout<<n1;
        else cout<<n2;
    }
}
