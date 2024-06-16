
// https://codeforces.com/problemset/problem/451/A

// Implementation


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , m ;
    cin >> n >> m; 
    if(n<m)
    {
    if(n%2==0)
    cout<<"Malvika";
    else cout<<"Akshat";

    }
    else
    {
    if(m%2==0)
    cout<<"Malvika";
    else cout<<"Akshat";
    }

}





// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n , m ;
//     cin >> n >> m; 
//     if((n*m)%2==0)cout<<"Malvika";
//     else cout<<"Akshat";

// }


