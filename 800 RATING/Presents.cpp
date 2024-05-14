// // https://codeforces.com/problemset/problem/136/A



// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// int  n ;
// cin >> n ; 

// int arr[n+1];
// int new_arr[n+1];

// for(int i =1 ; i<=n ; i++)
// {
//     cin>>arr[i];
// }

// for(int i= 1 ; i<=n ; i++)
// {
//     new_arr[arr[i]]=i;

// }
// for(int i =1 ; i<=n ; i++)
// {
//     cout<<new_arr[i]<<" ";
// }

// }




// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// // int  n ;
// // cin >> n ; 

// // int arr[n];
// // int new_arr[n];

// // for(int i =0 ; i<n ; i++)
// // {
// //     cin>>arr[i];
// // }

// // for(int i =0 ; i<n ; i++)
// // {
// //     new_arr[arr[i]-1]= i+1;
// // }
// // for(int i =0 ; i<n ; i++)
// // {
// //     cout<<new_arr[i]<<" ";
// // }

// // }


// // #include <iostream>
// // #include <vector>
// // using namespace std;

// // int main() {
// //     int n;
// //     cin >> n;

// //     vector<int> giftsTo(n + 1); // Using 1-based indexing for simplicity

// //     for(int i = 1; i <= n; i++) {
// //         int recipient;
// //         cin >> recipient;
// //         giftsTo[recipient] = i; // Friend 'recipient' gave a gift to friend 'i'
// //     }

// //     for(int i = 1; i <= n; i++) {
// //         cout << giftsTo[i] << " ";
// //     }

// //     return 0;
// // }


#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)  
        cin >> a[i];

    vector<int> new_a(n);

    for(int i = 0; i < n; i++) {
        cout << "Index of present: " << a[i] - 1 << " Index: " << i + 1 << " \n";

        new_a[a[i] - 1] = i + 1;
    }
    cout << "\n";
    for(auto x: new_a) {
        cout << x << " ";
    }
    cout << '\n';
}