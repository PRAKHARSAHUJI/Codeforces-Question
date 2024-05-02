#include <iostream>
using namespace std;
int main()
{
    {
        int n;
        cin>>n;
        for(int i =0 ; i<n ; i++)
        {
        
        string a;
        cin>>a;
        int x = a.length();
        if(a.length()<=10)
        {
            cout<<a<<endl;
        }
        else
        cout<<a[0]<<a.length()-2<<a[x-1]<<endl;
        
        }
    }
}
