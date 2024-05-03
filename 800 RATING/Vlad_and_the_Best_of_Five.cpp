// https://codeforces.com/problemset/problem/1926/A

// #include <iostream>
// using namespace std;
// int main()

// {
//     int n;
//     cin>>n;
//     string a;
//     for(int i =0 ; i <n ; i++)
//     {
//     int count_a = 0;
//     int count_b = 0;
//     cin>>a;
        
    
//     if(a[0]=='A')
//     {
//     count_a++;
//     }
//     else
//     {
//     count_b++;
//     }


//     if(a[1]=='A')
//     {
//     count_a++;
//     }
//     else
//     {
//     count_b++;
//     }


//     if(a[2]=='A')
//     {
//     count_a++;
//     }
//     else
//     {
//     count_b++;
//     }




//     if(a[3]=='A')
//     {
//     count_a++;
//     }
//     else
//     {
//     count_b++;
//     }


//     if(a[4]=='A')
//     {
//     count_a++;
//     }
//     else
//     {
//     count_b++;
//     }
    
//     if(count_a>count_b)
//     {
//         cout<<"A"<<endl;
//     }
//     else
//     {
//         cout<<"B"<<endl;
//     }


// }
// }





#include <iostream>
using namespace std;
int main()

{
    int n;
    cin>>n;
    for(int i =0 ; i <n ; i++) {
        string s;  //AAABB
        cin >> s;
        int cnt1 = 0, cnt2 = 0;
        for(auto ch: s)
        // for(int i = 0; i < s.size(); i++)
         {
            // s[i]=='A'
            if(ch == 'A')
                cnt1++;
            else    
                cnt2++;
        }
        if(cnt1 > cnt2)
            cout << 'A' << endl;
        else
            cout << 'B' << endl;
    }


}
