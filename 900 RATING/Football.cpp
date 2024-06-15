// https://codeforces.com/problemset/problem/96/A

// Implementation,Strings


#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s; 

    int count_one = 0;
    int count_zero = 0;
    int max_one=0;
    int max_zero=0;

    for(int i = 0 ; i < s.length(); i++)//1000000001
    {
       if(s[i]=='1')
       {
        count_one++;
        count_zero=0;
       }
       else
       {
        count_one=0;
        count_zero++;
       }
        max_one = max(count_one,max_one);
        max_zero = max(count_zero,max_zero);
    }
    // cout<<max_one<<endl;
    // cout<<max_zero;
if(max_one>=7 || max_zero>=7)
cout<<"YES"<<"\n";
else
cout<<"NO"<<"\n";

}
