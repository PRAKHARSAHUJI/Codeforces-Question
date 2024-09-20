// https://codeforces.com/problemset/problem/1373/B

// Games


// // -----------------------------------------------Correct Code---------------------------------------------

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
        int countone = 0;
        int countzero = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
                countzero++;
            else
                countone++;
        }
        int move = 0;
        if (countone == countzero)
            move = countone;
        else if (countone > countzero)
            move = countzero;
        else
            move = countone;
        if (move % 2 == 0)
            cout << "NET" << endl;
        else
            cout << "DA" << endl;
    }
}

// https://codeforces.com/problemset/problem/1373/B

// Games

// // -----------------------------------------------Correct Code---------------------------------------------


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t; cin>>t;
//     while(t--)
//     {

//     string s;
//     cin >> s;
//     int countone=0;
//     int countzero=0;
//     for(int i =0 ; i<s.length();i++)
//     {
//         if(s[i]=='0')
//         countone++;
//         else
//         countzero++;
//     }
//     int move =0;
//     if(countone==countzero)
//     move=countone;
//     else if(countone>countzero)
//     move=countzero;
//     else
//     move=countone;
// if(move%2==0)
// cout<<"NET"<<endl;
// else
// cout<<"DA"<<endl;
// }
// }
