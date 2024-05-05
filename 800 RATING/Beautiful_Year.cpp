// https://codeforces.com/problemset/problem/271/A



#include <bits/stdc++.h>
using namespace std;
int main()
{
int year;
cin>>year;
year = year +1;
bool flag = true ;

while (flag)
{
int check = year;
string s = to_string(check);
if(s[0] == s[1] || s[0] == s[2] || s[0] == s[3] || s[1] == s[2] || s[1] == s[3] || s[2] == s[3]) 
{
year+=1;
}
else
{
    cout<<year;
    flag=false;
}
}

}




// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // int check = year;
 
//     int year ;
//     cin >> year ;
 
//     bool flag = true; 
 
//     while(flag)
//     {
//     int check = year+1;
    
//     string s = to_string(check);
 
//     if(s[0]==s[1] or s[0]==s[2] or s[0]==s[3] or s[1]==s[2] or s[1]==s[3] or s[2]==s[3])
//     {
//         year+=1;
 
//     }
//     else
//     {
//     // cout<<check;
//     cout<<check;
//     flag = false;
//     }
//     }
// }







// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int year;
//     cin >> year;
    
//     bool flag = true;
//     while (flag) {
//         int check = year + 1;
//         string s = to_string(check);

//         if (s[0] == s[1] || s[0] == s[2] || s[0] == s[3] ||
//             s[1] == s[2] || s[1] == s[3] || s[2] == s[3]) {
//             year += 1;
//         } else {
//             cout << check;
//             flag = false;
//         }
//     }
//     return 0;
// }
