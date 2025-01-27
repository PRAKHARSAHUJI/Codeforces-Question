
// https://codeforces.com/contest/2049/problem/A

// Greedy Implementation *800 Rating

// ------------------------------------ Correct Code   -------------------------------------



#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){

    int n;
    cin >> n;
    int sum = 0;
    bool flag = true;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
        if(arr[i] == 0){
            flag = false;
        }
    }
    if(sum == 0){
        cout << 0 << endl;
    }
    else if(flag){
        cout << 1 << endl;
    }
    else{
        int s = 0; int l = n-1;
        while(arr[s] == 0)s++;
        while(arr[l] == 0)l--;

        int cnt = 0;
        for(int i = s; i <= l; i++){  // both equal and without equal can work 
            if(arr[i] == 0)
            cnt++;
        }
        if(cnt == 0)
        cout << 1 << endl;
        else 
        cout << 2 << endl;

    }
    
    }
    
}