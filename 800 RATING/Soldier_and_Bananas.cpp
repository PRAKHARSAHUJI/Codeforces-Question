// https://codeforces.com/problemset/problem/546/A


#include <bits/stdc++.h>
using namespace std ; 
int main ()
{
    int price ; 
    int inital_total_amt;
    int num_of_bananas;

    cin>>price;
    cin>>inital_total_amt;
    cin>>num_of_bananas;
    int amt_have = inital_total_amt;
    if(num_of_bananas==1 )
    {
        cout<<0;
        // return;
    }
    else
    {

    for(int i= 1 ; i <= num_of_bananas ; i++)
    {
        inital_total_amt = inital_total_amt - (price*i);
        // price = price*(i+1);

    }
    int amt_needed = abs(inital_total_amt);
    if(inital_total_amt>0)
    cout<<0;
    else
    cout<<amt_needed;
    
    }
}
