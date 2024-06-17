// https://codeforces.com/problemset/problem/460/A

// Implementation, Math, Brute force;

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m; 
    cin >> n>>m;
    int days = 0;
   while(n--)
   {
    days++;
    if(days%m==0)
    days++;
    
   }
   cout<<days;

}


/*
10 2

1 9
2 8+1
3 8
4 7+1
5 7
6 6+1
7 6
8 5+1
9 5
10 4+1
11 4
12 3+1
13 3
14 2+1
15 2
16 1+1
17 1
18 0+1
19 


*/


// #include <iostream>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;

//     int days = 0;
//     while (n > 0) {
//         days++;
//         n--; // Use one sock each day
//         if (days % m == 0) {
//             n++; // Get a new sock every m days
//         }
//     }

//     cout << days << endl;
//     return 0;
// }
