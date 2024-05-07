// https://codeforces.com/problemset/problem/977/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number ; 
    int times;
    cin>>number;
    cin>>times;
    for(int i = 0 ; i<times ; i++ )
    {

    if(number%10 == 0)
    number=number/10;
    else
    number =number-1;

    }
    cout<<number;
}

