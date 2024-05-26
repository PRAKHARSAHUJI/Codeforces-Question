// https://codeforces.com/contest/1903/problem/A



#include <iostream>
using namespace std;


bool check_sort(int arr[], int x)
{
    for (int i = 0; i < x - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}

int main()

{
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        int k;
        cin >> x;
        cin >> k;
        int arr[x];
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        
        if(check_sort(arr , x ))
        cout<<"YES"<<"\n";
        else
        {
        if(k>=2)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
        }
    }
}









// #include <iostream>
// using namespace std;

// bool check_sort(int arr[], int x)
// {
//     for (int i = 0; i < x - 1; i++)
//     {
//         if (arr[i] > arr[i + 1])
//             return false;
//     }
//     return true;
// }

// int main()

// {

//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         int a;
//         cin >> x;
//         cin >> a;
//         int arr[x];
//         for (int i = 0; i < x; i++)
//         {
//             cin >> arr[i];
//         }
//         if (check_sort(arr, x))
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
// }




// #include <iostream>
// using namespace std;
// int main()

// {

//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int x;
//         int k;
//         cin >> x;
//         cin >> k;
//         int arr[x];
//         for (int i = 0; i < x; i++)
//         {
//             cin >> arr[i];
//         }
//         bool flag = false;
//         for (int i = 1; i < x; i++)
//         {
//             if(arr[0] == arr[i])
//             flag = true;
//         }
//         if(flag)
//         cout<<"YES"<<"\n";
//         else
//         {
//         if(k>=2)
//         cout<<"YES"<<"\n";
//         else
//         cout<<"NO"<<"\n";
//         }
//     }
// }





// #include <iostream>
// using namespace std;

// // bool check_sort(int arr[], int x)
// // {
// //     int a = 0; 
// //     for(int i = 1 ; i < x ; i++)
// //     {
// //         if(arr[i-1]<= arr[i])
// //         a = 1;
// //     }
    
// //     if(a==0)
// //     return false;
// //     else
// //     return true;

// // }
// bool check_sort(int arr[], int x)
// {
//     for (int i = 0; i < x - 1; i++)
//     {
//         if (arr[i] > arr[i + 1])
//             return false;
//     }
//     return true;
// }




// int main()

// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int x;
//         int k;
//         cin >> x;
//         cin >> k;
//         int arr[x];
//         for (int i = 0; i < x; i++)
//         {
//             cin >> arr[i];
//         }
        
//         if(check_sort(arr , x ))
//         cout<<"YES"<<"\n";
//         else
//         {
//         if(k>=2)
//         cout<<"YES"<<"\n";
//         else
//         cout<<"NO"<<"\n";
//         }
//     }
// }