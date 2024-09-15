// https://codeforces.com/problemset/problem/1606/A

// Strings  900 Rating



// -----------------------------------------------Correct Code---------------------------------------------


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if(s[0]==s[s.length()-1])
        cout<<s<<endl;
        else
        {
            for(int i = 0 ; i<s.length()-1;i++)
            {
                cout<<s[i];
            }
            cout<<s[0];
            cout<<endl;

        }
        
    }
    return 0;
}




// -----------------------------------------------InCorrect Code---------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         string s;
//         cin >> s;
//         int a = s.size();
//         int aindex = 0;
//         int bindex = 0;
//         int count_ab = 0, count_ba = 0;

//         for (int i = 0; i < s.size() - 1;i++)
//         {
//             if (s[i] == 'a' && s[i + 1] == 'b')
//             {
//                 count_ab++;
//                 aindex = i;
//             }
//             if (s[i] == 'b' && s[i + 1] == 'a')
//             {
//                 count_ba++;
//                 bindex = i;

//             }
//         }

//         if(count_ab==count_ba)
//         cout<<s<<endl;
//         else
//         {
//             if(count_ab>count_ba)
//             {
//               s[aindex] ='b';
//             }
//             else
//             s[bindex] = 'a';

//         cout<<s<<endl;

//         }

//     }
//     return 0;
// }


// -----------------------------------------------InCorrect Code---------------------------------------------


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         string s;
//         cin >> s;
//         int a = s.size();
//         int aindex = 0;
//         int bindex = 0;
//         int count_ab = 0, count_ba = 0;

//         for (int i = 0; i < s.size() - 1;i++)
//         {
//             if (s[i] == 'a' && s[i + 1] == 'b')
//             {
//                 count_ab++;
//             }
//             if (s[i] == 'b' && s[i + 1] == 'a')
//             {
//                 count_ba++;
//             }

//         }

//         if(count_ab==count_ba)
//         cout<<s<<endl;
//         else
//         {
//             if(count_ab>count_ba)
//             {
//             for(int i = 0 ; i<count_ab;i++)
//             {
//                 cout<<"ab";
//             }

//             }
//         }

//     }
//     return 0;
// }
