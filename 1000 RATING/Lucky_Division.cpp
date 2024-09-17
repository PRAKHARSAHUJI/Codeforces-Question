// // https://codeforces.com/problemset/problem/122/A

// // -----------------------------------------------Correct Code---------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    {
        int n;
        cin >> n;

        if (n % 4 == 0 || n % 7 == 0 || n % 44 == 0 || n % 47 == 0 || n % 77 == 0 || n % 74 == 0 || n % 447 == 0 || n % 474 == 0 || n % 744 == 0 || n % 747 == 0 || n % 477 == 0 || n % 774 == 0 || n % 444 == 0 || n % 777 == 0)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}

// -----------------------------------------------InCorrect Code---------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     {
//         int n; cin>>n;

//         if(n<10)
//         {
//             if(n%4==0 || n%7==0)
//             cout<<"YES";
//             else
//             cout<<"NO";
//         }
//         else if(n>=10 && n<100)
//         {
//             if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%44==0 || n%77==0)
//             cout<<"YES";
//             else
//             cout<<"NO";

//         }
//         else if(n>=100 && n<=1000)
//         {

//             if(n%4==0 || n%7==0 || n%447==0 || n%474==0 || n%744==0 || n%747==0 || n%477==0 || n%774==0 || n%444==0 || n%777==0)
//             cout<<"YES";
//             else
//             cout<<"NO";

//         }
//         else
//             cout<<"NO";

//     }
//     return 0;
// }