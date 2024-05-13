// https://codeforces.com/problemset/problem/110/A






#include <bits/stdc++.h>
using namespace std ;
int main()

{
    long long number ;
    cin >> number ;
    int count = 0 ;
    string str  = to_string(number);
    

    for(int i = 0 ; i <str.length()  ; i++)
    {
        if(str[i] == '4' )
        {
            count++;
        }
        else if(str[i] == '7')
        {
            count++;
        }

    }
    if(count == 4)
    cout<<"YES";
    else if(count == 7)
    cout<<"YES";
    else
    cout<<"NO";

}


// #include <bits/stdc++.h>
// using namespace std ;
// int main()

// {
//     int number ;
//     cin >> number ;
//     int count = 0 ;
//     string str  = to_string(number);
    

//     for(int i = 0 ; i <str.length()  ; i++)
//     {
//         if(str[i] == '4' )
//         {
//             count++;
//         }
//         else if(str[i] == '7')
//         {
//             count++;
//         }
//         // else if(str[i] != '4' || str[i] != '7' )
//         // {
//         //     count+=0;
//         // }
//     }
//     cout<<count;
//     if(count == 4)
//     cout<<"YES";
//     else if(count == 7)
//     cout<<"YES";
//     else
//     cout<<"NO";

// }



// #include <bits/stdc++.h>
// using namespace std ;
// int main()

// {
//     int number ;
//     cin >> number ;
//     bool flag =false;
//     string str  = to_string(number);
//     for(int i = 1 ; i <str.length()  ; i++)
//     {
//         if(str[i] == '4' or str[i] == '7' )
//         {
//             if(str[i-1] == '7' or str[i-1] == '4')
//             flag =false;
//         }
//         // else if()
//         // {
//         //     flag =false;
//         // }
//         else if(str[i] != '4' || str[i] != '7' )
//         {
//             flag =true;
//             break;
//         }
//     }
//     if(flag)
//     cout<<"NO";
//     else 
//     cout<<"YES";

// }




// #include <bits/stdc++.h>
// using namespace std ;
// int main()

// {
//     int number ;
//     cin >> number ;
//     bool flag =false;
//     string str  = to_string(number);
//     for(int i = 0 ; i <str.length()  ; i++)
//     {
//         if(str[i] == '4' )
//         {
//             flag =false;
//         }
//         else if(str[i] == '7')
//         {
//             flag =false;
//         }
//         else if(str[i] != '4' || str[i] != '7' )
//         {
//             flag =true;
//             break;
//         }
//     }
//     if(flag)
//     cout<<"NO";
//     else 
//     cout<<"YES";

// }


// #include <bits/stdc++.h>
// using namespace std ;
// int main()

// {
//     int number;
//     cin>>number;
//     bool flag = false;
//     for(int i=0 ; i< (number/10)+1 ; i++)
//     {
//         if( number%10 == 7 || number%10 == 4 )
//         {
//             number=number/10;
//             flag = true;
//         }
//         else
//         {
//             cout<<"NO";
//             // break;
//             return 0;
//         }
//     }
//     if(flag)
//     cout<<"YES";

// }

