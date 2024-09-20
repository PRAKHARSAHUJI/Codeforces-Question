// https://codeforces.com/problemset/problem/556/A

//  Greedy
// ------------------------ Correct Code-------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long n;
//     cin >> n;
//     string s;
//     cin>>s;
//     int countone=0;
//     int countzero=0;
//     for(int i =0 ; i<s.length();i++)
//     {
//         if(s[i]=='0')
//         countone++; 
//         else
//         countzero++; 
//     }
//     if(countone==countzero)
//     cout<<0;
//     else if(countone>countzero)
//     cout<<countone-countzero;
//     else
//     cout<<countzero-countone;  
// }


// ------------------------ Correct Code-------------------------------------------

// https://codeforces.com/problemset/problem/556/A

//  Greedy

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    string s;
    cin>>s;
    int countone=0;
    int countzero=0;
    for(int i =0 ; i<s.length();i++)
    {
        if(s[i]=='0')
        countzero++; 
        else
        countone++; 
    }
    if(countone==countzero)
    cout<<0;
    else if(countone>countzero)
    cout<<countone-countzero;
    else
    cout<<countzero-countone;  
}






// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long n;
//     cin >> n;
//     string s;
//     cin>>s;
//     for(int i =1 ; i<s.length();i++)
//     {
//         if(s[i]=='1'&&s[i+1]=='0')
//         s.erase(i,2);
//         if(s[i]=='0'&&s[i-1]=='1')
//         s.erase(i-1,2);
//         if(s[i]=='0'&&s[i+1]=='1')
//         s.erase(i,2);
//         if(s[i]=='1'&&s[i-1]=='0')
//         s.erase(i-1,2);
        
//     }

//         for(int i =1 ; i<s.length();i++)
//     {
//         if(s[i]=='1'&&s[i+1]=='0')
//         s.erase(i,2);
//         if(s[i]=='0'&&s[i-1]=='1')
//         s.erase(i-1,2);
//         if(s[i]=='0'&&s[i+1]=='1')
//         s.erase(i,2);
//         if(s[i]=='1'&&s[i-1]=='0')
//         s.erase(i-1,2);
        
//     }
//     cout<<s.length()<<endl;
// }


// #include <iostream>
// #include <string>

// int main() {
//     std::string str = "Hello,World!";
//     int index = 5; // index of the character you want to delete

//     if (index >= 0 && index < str.size()) {
//         str.erase(index, 2); // erase 1 character at the specified index
//     }

//     std::cout << str << std::endl;

//     return 0;
// }
