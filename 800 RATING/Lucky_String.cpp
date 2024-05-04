// https://codeforces.com/problemset/problem/110/B


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin >> n;
    int check = 0;

        for(int i = 97 ; i < 97+n ; i++)
        {
        cout<<char(i);
        check++;
        if(check==4)
        {
            i=i-4;
            n=n-4;
            check = 0;
        }
        }
    

}



// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n ;
//     cin >> n;
//     int check = 0;
//     if(n<5)
//     {
//     for(int i = 97 ; i < 97+n ; i++)
//     {
//         cout<<char(i);
//     }
//     }
//     else
//     {
//         for(int i = 97 ; i < 97+n ; i++)
//         {
//         cout<<char(i);
//         check++;
//         if(check==4)
//         {
//             i=i-4;
//             n=n-4;
//             check = 0;
//         }
//         }
//     }

// }