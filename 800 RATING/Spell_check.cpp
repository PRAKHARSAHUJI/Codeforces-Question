// https://codeforces.com/problemset/problem/1722/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin >> t ;

while(t--)
{
    int n ;
    cin >> n ;
    string s1 ;
    cin >> s1 ;
    string s2 ="Timur";
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    bool flag = false;

    if(s1.length()!=s2.length())
    cout<<"NO"<<"\n";

    else
    {
    for(int i =0 ; i < n ; i++)
    {
        if(s1[i] == s2[i])
        flag = true;
        else
        {
            flag = false;
            break;
        }
    }
        
        if(flag)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
}

}
