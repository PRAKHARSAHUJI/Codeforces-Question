
// https://codeforces.com/problemset/problem/499/B

// Implementation Strings *1000 Rating


// --------------------------------  Correct Code ----------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 
    cin >> n;

    int t;
    cin >> t;

    vector<pair<string, string>> arr(t); 
    for (int i = 0; i < t; i++) {
        cin >> arr[i].first >> arr[i].second;
    }

    vector<string> brr(n); 
    for (int i = 0; i < n; i++) {
        cin >> brr[i];
    }

    for (int i = 0; i < n; i++) {
      for(int j = 0; j < t; j++){
        if(brr[i] == arr[j].first){
          if(arr[j].first.length() <= arr[j].second.length())
          cout << arr[j].first <<" ";
          else
          cout << arr[j].second <<" ";
        }
      }
    }
    cout << endl; 

    return 0;
}


/* 

// --------------------------------  Correct Code ----------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 
    cin >> n;

    int t;
    cin >> t;

    unordered_map<string,string>mp ;
    for(int i = 0; i < t; i++){
        string s1,s2;
        cin >> s1,s2;

        if(s1.length() <= s2.length())
        mp[s1] = s1;
        else
        mp[s1] = s2;

    }
    for(int i = 0; i < n; i++){
        for(auto & it : mp){
            if(arr[i] == it.first)
            cout << it.second << " ";
        }
    }
    // vector<pair<string, string>> arr(t); 
    // for (int i = 0; i < t; i++) {
    //     cin >> arr[i].first >> arr[i].second;
    // }

    // vector<string> brr(n); 
    // for (int i = 0; i < n; i++) {
    //     cin >> brr[i];
    // }

    // for (int i = 0; i < n; i++) {
    //   for(int j = 0; j < t; j++){
    //     if(brr[i] == arr[j].first){
    //       if(arr[j].first.length() <= arr[j].second.length())
    //       cout << arr[j].first <<" ";
    //       else
    //       cout << arr[j].second <<" ";
    //     }
    //   }
    // }
    
    cout << endl; 

    return 0;
}



*/