// #include <iostream>
// #include<cmath>

// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i =1;i<=n;i++)
//     {
//         int p;
//         int a;
//         cin>>p;
//         int arr[p];
//         for(int i =0;i<p;i++)
//         {
            
//             cin>>arr[i];
//         }
//         for(int i =0;i<p;i++)
//         {
//         if(abs(arr[0]-arr[i+1]) >1)
//         a=1;
//         }


//     }

 

// }



#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;

        int arr[n];
        for (int j = 0; j < n; ++j) {
            cin >> arr[j];
        }
sort(arr, arr + n);
        int a =1;
        for (int j = 1; j < n; ++j) {
            if (abs(arr[j] - arr[j - 1]) > 1) {
                a = 0;
                break;
            }
        }

        if (a==1) {
            cout << "YES"<<endl;
        } else {
            cout << "NO"<<endl;
        }
    }

    return 0;
}
