// https://codeforces.com/problemset/problem/339/A

#include <bits/stdc++.h>
using namespace std ;
int main()
{
    string s; 
    cin>>s;
    int arr[(s.length()/2)+1];
    for(int i =0 ; i < s.length() ; i=i+2)
    {
        arr[i/2]=s[i]-48;     
    }

    sort(arr,arr+(s.length()/2)+1);
    for(int i = 0 ; i<(s.length()/2)+1 ; i++)
    {
        if(i<s.length()/2)
        cout<<arr[i]<<"+";
        else
        cout<<arr[i];

    }
    
}




// #include <bits/stdc++.h>
// using namespace std ;
// int main()
// {
//     string s; 
//     cin>>s;
//     int arr[(s.length()/2)+1];
//     for(int i =0 ; i < s.length() ; i=i+2)
//     {
//         arr[i/2]=s[i]-48;     
//     }
//     // for(int i = 0 ; i<(s.length()/2)+1 ; i++)
//     // {
//     //     cout<<arr[i]<<endl;
        
//     // }
//     sort(arr,arr+(s.length()/2)+1);
//     for(int i = 0 ; i<(s.length()/2)+1 ; i++)
//     {
//         cout<<arr[i]<<"+";

//     }
    
// }






// #include <bits/stdc++.h>
// using namespace std ;
// int main()
// {
//     string s; 
//     cin>>s;
//     string arr[(s.length()/2)+1];
//     for(int i =0 ; i < s.length() ; i=i+2)
//     {
//         // if(i == 0)
//         // arr[i] = s[i];
//         // if(i%2==0)
//         arr[i/2]=s[i];
//         // else
//         // arr[i/2]=s[i];
        

        
//     }
//     for(int i = 0 ; i<(s.length()/2)+1 ; i++)
//     {
//         cout<<arr[i]<<endl;

//     }
    
// }

