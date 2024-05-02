// https://codeforces.com/problemset/problem/112/A


// #include<bits/stdc++.h>
// using namespace std;
// int main()

// {

//     int a =0;
//     string s1;
//     string s2;
//     cin>>s1>>s2;
//     transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
//     transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 
//     // sort(s1.begin(), s1.end());
//     // sort(s2.begin(), s2.end());
//     cout<<s1<<endl;
//     cout<<s2<<endl;
    
//     for(int i = 0 ; i < s1.length() ; i++)
//     {
//         if(s1[i] == s2[i] )
//         {
//             a=1;
//             continue;
//         }
//         else if(s1[i]  > s2[i])
//         {
//             a=2;
//             break;
//         }
//         else if(s1[i] < s2[i])
//         {
//             a=3;   
//             break;
//         }
        
//     }
//     if(a==1)
//         cout<<0;
//     else if(a==2)
//         cout<<1;
//     else
//         cout<<-1;
// }

#include<bits/stdc++.h>
using namespace std;
int main()

{

    int a =0;
    string s1;
    string s2;
    cin>>s1>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 
    // sort(s1.begin(), s1.end());
    // sort(s2.begin(), s2.end());
    // cout<<s1<<endl;
    // cout<<s2<<endl;
    for(int i = 0 ; i < s1.length() ; i++)
    {
        if(s1[i]  == s2[i] )
        {
            a=0;
            continue;
        }
        else if(s1[i]  > s2[i])
        {
            a=1;
            break;
        }
        else if(s1[i] < s2[i])
        {
            a=-1;   
            break;
        }
        
    }
   cout<<a;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()

// {

//     int sum1 =0;
//     int sum2 =0;
//     string s1;
//     string s2;
//     cin>>s1>>s2;
//     transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
//     transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 
//     // sort(s1.begin(), s1.end());
//     // sort(s2.begin(), s2.end());
//     cout<<s1<<endl;
//     cout<<s2<<endl;
//     for(int i = 0 ; i < s1.length() ; i++)
//     {
//         sum1+=int(s1[i]);
//     }
//     for(int i = 0 ; i < s2.length() ; i++)
//     {
//         sum2+=int(s2[i]);
//     }
//     cout<<sum1<<endl;
//     cout<<sum2<<endl;
//     if(sum1>sum2)
//         cout<<1;
//     else if(sum1<sum2)
//         cout<<-1;
//     else
//         cout<<0;
  
// }







//  *************************** Wrong Code As we don't have to sort ***************************
// also don't need to compare asci value

// #include<bits/stdc++.h>
// using namespace std;
// int main()

// {

//     int a =0;
//     string s1;
//     string s2;
//     cin>>s1>>s2;
//     transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
//     transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 
//     sort(s1.begin(), s1.end());
//     sort(s2.begin(), s2.end());
//     cout<<s1<<endl;
//     cout<<s2<<endl;
//     for(int i = 0 ; i < s1.length() ; i++)
//     {
//         if(s1[i] -'a' == s2[i]-'a' )
//             a=1;
//             // continue;
//         else if(s1[i] -'a' > s2[i]-'a')
//         {
//             a=2;
//             break;
//         }
//         else if(s1[i] -'a' < s2[i]-'a')
//         {
//             a=3;   
//             break;
//         }
        
//     }
//     if(a==1)
//         cout<<0;
//     else if(a==2)
//         cout<<1;
//     else
//         cout<<-1;
// }


