// https://codeforces.com/contest/705/problem/A

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// int n;
// cin>>n;

// for(int i =1 ; i < n ; i=i+1)
// {
// if(i%2==0)
// cout<<"I love that ";
// else
// cout<<"I hate that ";

// }
// if(n%2==0)
// cout<<"I love it";
// else
// cout<<"I hate it";

// }

// ------------------------------------ Correct Code  ---------------------------------------------

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1)
        cout << "I hate it";
    else
    {
        for (int i = 1; i < n; i = i + 1)
        {
            if (i % 2 == 0)
                cout << "I love that ";
            else
                cout << "I hate that ";
        }

        if (n % 2 == 0)
            cout << "I love it";
        else
            cout << "I hate it";
    }
}

// ------------------------------------ INCorrect Code  ---------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

// int n;
// cin>>n;
// for(int i =0 ; i < n ; i=i+2)
// {

//     cout<<"I hate it";
//     if(i+1<n)
//     cout<<" I love that ";
// }

// }