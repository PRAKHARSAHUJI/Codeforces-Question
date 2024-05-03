// https://codeforces.com/problemset/problem/1895/A

#include <iostream>
using namespace std;
int main()

{
    int t;
    cin>>t;
    while(t--) 
    {
        int a , b , c ;
        cin>>a>>b>>c; 
        if(a>b)
            cout<<a<<endl;
        else
        {
            if(b-a<=c)
                cout<<b<<endl;
            else
                cout<<(a+c+((b-(a+c))*2))<<endl;
        }
    }
}    