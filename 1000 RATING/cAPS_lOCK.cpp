
// // // -----------------------------------------------Correct Code---------------------------------------------

// https://codeforces.com/problemset/problem/131/A

//  Implementation  Strings *1000 Rating


#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    bool flag = true;
    
    if(s[0]>=97)
    {
        for(int i = 1 ;i<s.length();i++)
        {
            if(s[i]>=97)
            {
                flag=false;
                break;
            }
        }
    }
    else if(s[0]<97)
    {
        for(int i = 1 ;i<s.length();i++)
        {
            if(s[i]>=97)
            {
                flag=false;
                break;
            }
        }
    }
    if(flag)
    {
    for(int i = 0;i<s.length();i++)
    {
        if(s[i]>=97)
        s[i]=s[i]-32;
        else
        s[i]=s[i]+32;

    }
    cout<<s;
    }
    else
    cout<<s;   
}




// // // -----------------------------------------------Correct Code---------------------------------------------




// #include<iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int count_caps = 0;
//     for(int j = 0; j < s.size(); j++){
//         if(s[j] >= 65 && s[j] <= 90){
//             count_caps++;
//         }
//     }
//     char c = s[0];
//     for(int i = 0; i < s.size(); i++)
//     {
//         if(s.size() == count_caps)
//         {
//             if(s[i] >= 65 && s[i] <= 90){
//                 s[i] += 32;
                
//             }
//             else{
//                 s[i] -= 32;
              
//             }
//         }
//         else if(c>=97 && count_caps==s.size()-1)
//         {
//             if(s[i] >= 65 && s[i] <= 90)
//             {
//                 s[i] += 32;
                
//             }
//             else if(s[i]>=97 && s[i] <=122)
//             {
//                 s[i] -= 32;
               
//             }
//         }
//     }
//     cout<<s;
// }


// cAPS

// CAPS
// CAPs



// // // -----------------------------------------------InCorrect Code---------------------------------------------



// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;cin>>s;
//     bool flag = true;
//     // for(int i = 0;i<s.length();i++)
//     {
//         if(s[0]>=97)
//         {
//             for(int j =1;j<s.length();j++)
//             {
//                 if(s[j]>=97)
//                 {
//                     flag=false;
//                     break;
//                 }
//             }
//         }
//         else if(s[0]<97 && s[1]<97)
//         {
//             for(int j = 2;j<s.length();j++)
//             {
//                 if(s[j]>=97)
//                 {
//                     flag=false;
//                     break;
//                 }        
//             }

//         }
//         else if(s[0]<97 && s[1]>=97)
//         {
//             for(int j = 2;j<s.length();j++)
//             {
//                 if(s[j]<97)
//                 {
//                     flag=false;
//                     break;
//                 }        
//             }

//         }

//     }
//     if(flag)
//     {
//     if(s[0]>=97)
//     s[0]=s[0]-32;
//     for(int i = 1;i<s.length();i++)
//     {
//         if(s[i]<97)
//         s[i]=s[i]+32;
//     }
//     cout<<s;
//     }
//     else
//     cout<<s;
    
// }

