
// https://codeforces.com/problemset/problem/4/C

// Data Structures Hashing Implementation *1300 Rating

// // // -----------------------------------------------Correct Code---------------------------------------------




#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    map< string ,int> mp;
    while (t--)
    {
        string s;
        cin>>s;
        if(mp[s]==0)
        {
        cout<<"OK"<<endl;
        mp[s]++;
        }
        else
        {
        cout<<s;
        mp[s]++;
        cout<<mp[s]-1<<endl;
        }
    }
    
}



// // // -----------------------------------------------InCorrect Code---------------------------------------------

// TLE at 7


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;cin>>t;
//     string arr[t];
//     for(int i = 0 ;i<t;i++)
//     {
//         cin>>arr[i];
//     }
   
//     for(int i = 0 ;i<t;i++)
//     {
//         string check = arr[i];
//         int cnt =  0; 
//         for(int j = 0 ;j<i;j++)
//         {
//             if(check==arr[j])
//             cnt++;
//         }
//         if(cnt>0)
//         cout<<arr[i]<<cnt<<endl;
//         else
//         cout<<"OK"<<endl;
//     }    
// }

