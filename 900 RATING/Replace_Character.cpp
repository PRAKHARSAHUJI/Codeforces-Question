
// https://codeforces.com/contest/2047/problem/B

// Brute Force Combinatorics Greedy Strings 900 Rating

// --------------------------------  Correct Code ----------------------------------------------------







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
    string s;
    cin >> s;
    unordered_map<char,int>mp;
    for(int i = 0; i < n; i++){
        mp[s[i]]++;
    }
    vector<pair<int,char>>arr;
    for(auto &it : mp){
        arr.push_back({it.second , it.first});
    }
    sort(arr.begin(),arr.end());
    int x = arr.size();
    char tochange = arr[0].second;
    char change = arr[x - 1].second;

    for(int i = 0; i < n; i++){
        if(s[i] == tochange){
            s[i] = change;
            break;
        }
    }

    cout << s << endl;
    }
    

}




