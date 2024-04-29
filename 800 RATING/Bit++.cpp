#include <iostream>
using namespace std;
int main()
{
        int x=0;
        int n;
        cin>>n;
        for(int i = 0;i<n;i++)
        {

        string a;
        cin>>a;
        if(a== "++X")
        {
        x=x+1;
        }
        else if(a== "X++")
        x=x+1;
        else if(a== "--X")
        x=x-1;
        else
        x=x-1;
        }
        cout<<x;
}