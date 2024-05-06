// https://codeforces.com/contest/41/problem/A

#include <bits/stdc++.h>
using namespace std ; 
int main ()
{
string s1 ;
cin >> s1 ;
string s2 ;
cin >> s2 ;
bool flag =true;
// string s3 ="";
// for(int i = s1.length()-1; i>=0 ; i++)
// {
//     s3 =s3+s1[i];
// }
for(int i = s1.length()-1; i>=0 ; i--)
{
    if(s1[i]!=s2[(s1.length()-1)-i])
    {
        flag = false;
        break;
    }
}
if(flag)
cout<<"YES";
else
cout<<"NO";
}