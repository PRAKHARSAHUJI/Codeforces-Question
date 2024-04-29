// https://codeforces.com/problemset/problem/1955/A

#include <iostream>
using namespace std;
int main()

{
    int n;
    cin>>n;
    for(int i =0 ; i <n ; i++)
    {
        int a ,b,c;
        cin>>a>>b>>c;

        if(a%2==0)
        {
            if((b*a)<(c*(a/2)))
            cout<<b*a;
            else
            cout<<(c*(a/2));

        }
        else
        {
            if((b*a)<((c*((a-1)/2))+b))
            cout<<b*a;
            else
            cout<<((c*((a-1)/2))+b);
        }
    }

}
    