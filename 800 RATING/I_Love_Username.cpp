// https://codeforces.com/problemset/problem/155/A


#include <bits/stdc++.h>
using namespace std;
int main()
{

int t;
cin>>t;
int max = 0; 
int min = 0;
int count = 0; 

vector<int> v(t);
for(int i = 0 ; i< v.size() ; i++)
{
    cin>>v[i];
}
    max=v[0];
    min=v[0];

for(int i = 1 ; i< v.size() ; i++)
{
    if(max < v[i])
    {
        count+=1;
        max = v[i];

    }
    if(min > v[i])
    {
        count+=1;
        min = v[i];
        
    }
}
cout<<count;

}
