// https://codeforces.com/problemset/problem/1883/B
// Strings  900 Rating

// // -----------------------------------------------Correct Code---------------------------------------------


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int b;
        cin >> b;
        string s; cin>>s;
        
        {
        
        int arr[26];
        for(int i =0 ; i<26;i++)
        {
            arr[i]=0;
        }
        for(int i =0 ; i<a;i++)
        {
            arr[s[i]-'a'] += 1;
        }
        
        int cntodd = 0;
        int cnteven = 0;
        for(int i =0 ; i<26;i++)
        {
            if(arr[i]%2 == 0 && arr[i]!=0)
            cnteven++;
            else if( arr[i]%2 != 0 && arr[i]!=0 )
            cntodd++;

        }
        
        if(cnteven>0 && cntodd==0)
        cout<<"YES"<<endl;
        else if(cntodd<=b+1)
        cout<<"YES"<<endl;
        else if(cntodd>b+1)
        cout<<"NO"<<endl;
        }
    }
}







// // -----------------------------------------------InCorrect Code---------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a;
//         cin >> a;
//         int b;
//         cin >> b;
//         string s; cin>>s;
//         if(s.length()==1 || s.length()==0)
//         cout<<"YES"<<endl;
//         else if(s.length()==2 && b!=0)
//         cout<<"YES"<<endl;
//         else
//         {
        
//         int arr[26];
//         for(int i =0 ; i<26;i++)
//         {
//             arr[i]=0;
//         }
//         for(int i =0 ; i<26;i++)
//         {
//             arr[s[i]-'a'] += 1;
//         }
//         // for(int i =0 ; i<26;i++)
//         // {
//         //     cout<<arr[i]<<" ";
//         // }
//         int cntodd = 0;
//         int cnteven = 0;
//         for(int i =0 ; i<26;i++)
//         {
//             if(arr[i]%2 == 0 && arr[i]!=0)
//             cnteven++;
//             else if( arr[i]%2 != 0 && arr[i]!=0 )
//             cntodd++;

//         }
//         // cout<<endl<<cnteven<<endl;
//         // cout<<cntodd<<endl;
//         if(cntodd<=b+1)
//         cout<<"YES"<<endl;
//         else if(cnteven>0 && cntodd==0)
//         cout<<"YES"<<endl;
//         else
//         cout<<"NO"<<endl;
//         }
//     }
// }







// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a;
//         cin >> a;
//         int b;
//         cin >> b;
//         string s; cin>>s;
//         if(s.length()==1 || s.length()==0)
//         cout<<"YES"<<endl;
//         else if(s.length()==2 && b!=0)
//         cout<<"YES"<<endl;
//         else
//         {
        
//         int arr[26];
//         for(int i =0 ; i<26;i++)
//         {
//             arr[i]=0;
//         }
//         for(int i =0 ; i<a;i++)
//         {
//             arr[s[i]-'a'] = 1;
//         }
//         int cntodd = 0;
       
//         // cout<<endl;
//         // for(int i =0 ; i<26;i++)
//         // {
//         //     cout<<arr[i]<<" ";
//         // }


//         for(int i =0 ; i<26;i++)
//         {
//             if(arr[i]%2 != 0)
//             cntodd++;
//         }
//         if(cntodd<=k+1)
//         cout<<"YES"<<endl;
//         else
//         cout<<"NO"<<endl;

        
//         }
//     }
// }

