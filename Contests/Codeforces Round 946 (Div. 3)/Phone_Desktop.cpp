// https://codeforces.com/contest/1974/problem/A

// -------------------------------------Correct Code---------------------------------------------\

// Greedy Math *800 Rating


 
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

        int cnt = 0;
        int space = 0;
        


        while(y > 0)
        {
            if(y>=2)
            {
                cnt++;
                space += 7;
                y -= 2;
            }
            else if(y>=1)
            {
                cnt++;

                space += 11;
                y -= 1;
            }
        }

        x -= space;

        while(x > 0)
        {
            if(x>=15)
            {
                cnt++;
                
                x -= 15;
            }
            else if(x>=1)
            {
                cnt++;

                x -= 1;
                break;
            }
        }

        cout << cnt << endl;


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