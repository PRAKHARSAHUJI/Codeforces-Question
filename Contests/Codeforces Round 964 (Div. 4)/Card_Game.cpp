// https://codeforces.com/contest/1999/problem/B

// -----------------------------------------------Correct Code---------------------------------------------


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        
        long long a ; cin >>a;
        long long b ; cin >>b;
        long long c ; cin >>c;
        long long d ; cin >>d;
        int cnt =0;

        if(a>c && b>d)
        cnt++;
        if(b>d && a>c)
        cnt++;

        if(a>c && b==d)
        cnt++;
        if(b==d && a>c)
        cnt++;


        if(b>d && a==c)
        cnt++;
        if(a==c && b>d)
        cnt++;


        if(a>d && b>c)
        cnt++;
        if(b>c && a>d)
        cnt++;

        if(a>d && b==c)
        cnt++;
        if(b>c && a==d)
        cnt++;
        if(a==d && b>c)
        cnt++;
        if(b==c && a>d)
        cnt++;


      
        cout<<cnt<<endl;

    
    }
    
}


// -----------------------------------------------Incorrect Code---------------------------------------------




// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
        
//         long long a ; cin >>a;
//         long long b ; cin >>b;
//         long long c ; cin >>c;
//         long long d ; cin >>d;
//         int cnt =0;
//         if(a>c && a>d && b>c && b>d )
//         cout<<4<<endl;
//         else if(a>c && a<d && b>c && b>d)
//         cout<<2<<endl;
//         else if(a<c && a>d && b>c && b>d)
//         cout<<2<<endl;
//         else if(a>c && a>d && b>c && b<d)
//         cout<<2<<endl;
//         else if(a>c && a>d && b<c && b>d)
//         cout<<2<<endl;
//         else if(a<c && a<d && b<c && b<d)
//         cout<<0<<endl;
//         else if(a==c && a==d && b==c && b==d)
//         cout<<0<<endl;
        
//     }
    
// }



// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
        
//         long long a ; cin >>a;
//         long long b ; cin >>b;
//         long long c ; cin >>c;
//         long long d ; cin >>d;
//         int cnt =0;
//         if(a>c && a>d && b>c && b>d )
//         cout<<4<<endl;
//         else if(a<c && a<d && b<c && b<d)
//         cout<<0<<endl;
//         else if(a==c && a==d && b==c && b==d)
//         cout<<0<<endl;
//         else
//         {
//             int mx1 = max(a,b);
//             int mx2 = max(c,d);
//             int mn1 = min(a,b);
//             int mn2 = min(c,d);
//             if((mx1>mx2 && mn1>mn2))
//             cout<<2<<endl;
//             else if((mx1>mx2 && mn1>=mn2) || (mx1>=mx2 && mn1>mn2))
//             cout<<1<<endl;
           
//         }
 
//     }
    
// }