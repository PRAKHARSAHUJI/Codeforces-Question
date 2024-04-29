#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        int z =0;

        cin >> x;
        int arr[x];
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
            int count = 0;
        for (int i = 0; i < x; i++)
        {
            int y =0;
            if(arr[i]==0)
            {
            count++;
            }
            else
            {
            count=0;
            }
            y = count;
            
            if(z<y)
            {
            z=y;
            }

        }
        cout<<z<<endl;
    }
}