// https://codeforces.com/problemset/problem/1328/A



#include <bits/stdc++.h>
using namespace std ;
int main()

{
    int t ;
    cin >> t ;

    while(t--)
    {

        int x ;
        int y ;
        cin>>x;
        cin>>y;
            if(x>y)
            {
                if(((x%y)+x)%y==0)
                cout << x%y << endl ;
                else
                cout << y-(x%y) << endl ;
            }
            else 
            {
                cout << y-x << endl ;
            }
    }
}




// #include <bits/stdc++.h>
// using namespace std ;
// int main()

// {
//     int t ;
//     cin >> t ;

//         int x ;
//         int y ;
//         cin>>x;
//         cin>>y;
//     while(t--)
//     {
//     int moves = 0 ;
//         if(x%4==0)
//         {
//             cout << moves;
//         }
//         else
//         {
//         moves+=1;
//         x+=1;
//         }
//     }
// }



// #include <bits/stdc++.h>
// using namespace std ;
// int main()

// {
//     int t ;
//     cin >> t ;

//     while(t--)
//     {

//         int x ;
//         int y ;
//         cin>>x;
//         cin>>y;
//         bool flag = true;
//         int moves = 0;
//         while(flag)
//         {
//             if(x>y)
//             {
//                 if(((x%y)+x)%y==0)
//                 cout << x%y << endl ;
//                 else
//                 cout << y-(x%y) << endl ;


//                 flag = false ;
//             }
//             else 
//             {
//                 cout << y-x << endl ;
//                 flag = false ;
//             }
//         }
//     }
// }





