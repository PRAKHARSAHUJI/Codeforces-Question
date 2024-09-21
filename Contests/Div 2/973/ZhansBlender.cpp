
// // -----------------------------------------------Correct Code---------------------------------------------
// https://codeforces.com/contest/2013/problem/A

// Constructive Algorithms Math


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
       
       int n;
       int a,b;
       cin>>n>>a>>b;
       int time =0;
        if(b>a)
        {
            if(n%a==0)
            time=n/a;
            else
            time=(n/a)+1;
        }
        else
        {
            if(n%b==0)
            time=n/b;
            else
            time=(n/b)+1;
        }
       cout<<time<<endl;
    }
}



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t; cin>>t;
//     while(t--)
//     {
       
//        int n;
//        int a,b;
//        cin>>n>>a>>b;
//        int time =0;
//        while(n>0)
//        {
//         if(b>a)
//         {
//             time++;
//             n-=a;        
//         }
//         else
//         {
//             time++;
//             n-=b;        
//         }
//        }
//        cout<<time<<endl;


//     }



// }



