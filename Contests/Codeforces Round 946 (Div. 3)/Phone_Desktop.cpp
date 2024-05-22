// https://codeforces.com/contest/1974/problem/A

// -------------------------------------Incorrect Code---------------------------------------------\



#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;
        int y;
        cin >> y;

        int space_1 = x;
        int space_2 = y * 4;
        int total_space = space_1 + space_2;

        if (y > 2)
        {
            if (y % 2 == 0)
            {
                {
                    if (x <= 7*(y/2))
                        cout << y / 2 << "\n";
                    else
                        cout << (y / 2) + (x%(7*(y/2))) << "\n";
                }
            }
            else
            {
                if (x <= 11+7*((y/2)+1) )
                cout << (y / 2) + 1 << "\n";
                else
                cout << (y / 2) + (x % (11+7*((y/2)+1))) << "\n";

            }
        }
        else
        {

            if (total_space % 15 < 0)
                cout << 1 << "\n";
            else if (total_space % 15 == 0)
                cout << total_space / 15 << "\n";
            else
                cout << (total_space / 15) + 1 << "\n";
        }
    }
}









// -------------------------------------Incorrect Code---------------------------------------------


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int x;
//         cin >> x;
//         int y;
//         cin >> y;

//         int screen = 0;
        
//         int total_space = x + y*4 ;

//         int blank_space = 0;
//         int required_space = 0;

//         if(y==0 && x == 0)
//         cout<<0<<"\n";

//         else if(y==0 &&x<=15)
//         cout<<1<<"\n";

//         else if(y<2 && y>0)
//         {
//             screen = 1;
//             if(x<=11)
//             cout<<screen<<"\n";
//             else
//             cout<<screen+((x-11)%15)<<"\n";


//         }



//         else if( y%2==0 )
//         {
//             screen = y/2;
//             blank_space = 7 * (y/2);
//             required_space = x -blank_space;
//             if( x < blank_space)
//             {
//             cout<<screen<<"\n";
//             }
//             else
//             {
//             if(required_space%15<=15)
//             cout<<screen + 1<<"\n";
//             else
//             cout<<screen + (required_space/15)+1<<"\n";

//             }

//         }
//         else
//         {
//             screen = y/2+1;
//             blank_space = (7 * (y/2)) + 11;
//             if( x < blank_space)
//             {
//             cout<<screen<<"\n";
//             }

//             else
//             {
//             cout<<screen+(15/(blank_space-x))<<"\n";
//             }


//         }
        
//     }

//     }