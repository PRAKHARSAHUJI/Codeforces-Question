// https://codeforces.com/problemset/problem/1030/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin >>n;
int sum = 0;
vector<int> v(n);
for(int i=0;i<v.size();i++)
{
    cin>>v[i];
}

for(int i=0;i<v.size();i++)
{
    sum+=v[i];
}
if(sum>0)
cout<<"HARD";
else
cout<<"EASY";

}


