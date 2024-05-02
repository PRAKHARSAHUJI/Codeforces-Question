// https://codeforces.com/problemset/problem/791/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int weight_1 ;
    int weight_2 ;
    cin >> weight_1 ;
    cin >> weight_2 ;

    int year_count=0;
    
    bool flag = true;
    while(flag)   
    {
        weight_1=weight_1*3;
        weight_2=weight_2*2;
        if(weight_1>weight_2)
        flag=false;
        year_count++;
    } 
    cout<<year_count;
}