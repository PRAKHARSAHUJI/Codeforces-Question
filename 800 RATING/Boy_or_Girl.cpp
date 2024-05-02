// https://codeforces.com/problemset/problem/236/A


#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s ; 
   cin >> s ;
   int distinct_count=0 ; 
   sort(s.begin(), s.end());
//    cout<<s<<endl;
   for(int i = 1 ; i < s.length() ; i++ )
   {
    if(s[i-1]==s[i])
        distinct_count=distinct_count;
    else
        distinct_count++;

   }
//    cout<<distinct_count+1;
//    cout<<distinct_count;

if((distinct_count+1)%2==0)
    cout<<"CHAT WITH HER!";
else
    cout<<"IGNORE HIM!";

}