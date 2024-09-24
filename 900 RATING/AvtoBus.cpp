
// // -----------------------------------------------Correct Code---------------------------------------------

// https://codeforces.com/problemset/problem/1679/A

// Brute force Greedy Math Number Theory 900 Rating


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        long long n;cin>>n;
        if(n%2!=0 || n<=3)
        cout<<-1<<endl;
        else
        {
            if(n%6==0)
            cout<<n/6<<" ";
            else
            cout<<(n/6)+1<<" ";

            cout<<n/4<<endl;
        }
    }
}




// // -----------------------------------------------Correct Code---------------------------------------------



// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     while (n--)
//     {
        
//         long long n; cin>>n;
        
//         if(n%2!=0)
//         cout<<-1<<endl;
//         else if(n<=3)
//         cout<<-1<<endl;
//         else 
//         {
//             long long x = n;
//             long long y = n;
//             long long bus = 0;
//             long long bus2 = 0;
//             if(x%6!=0)
//             {
//             while(x%6!=0)
//             {
//                 x-=4;
//                 bus++;
//                 if(x%6==0)
//                 bus+=x/6;
//             }
//             }
//             else
//             {
//                 bus=x/6;
//             }
//             if(y%4!=0)
//             {
//             while(y%4!=0)
//             {
//                 y-=6;
//                 bus2++;
//                 if(y%4==0)
//                 bus2+=y/4;
//             }
//             }
//             else
//             {
//                 bus2 = y/4;
//             }
//             cout<<bus<<" "<<bus2<<endl;

//         }

//     }
// }
