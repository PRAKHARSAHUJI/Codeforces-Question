
// https://codeforces.com/problemset/problem/1927/B

// Constructive Algorithms Greedy Strings *900 Rating


//  ------------------------------------------------- Correct Code  ----------------------------------------------


#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<pair<char,int> > alphabets(26);

    for(int i = 0; i < 26; i++)
    {
        alphabets[i].first = char(97+i); 
        alphabets[i].second = 0; 

    }
    for(int i = 0; i < n; i++)
    {     
        for(int j = 0; j < 26; j++)
        {

        if(alphabets[j].second == arr[i])
        {
            cout << alphabets[j].first;
            alphabets[j].second++;
            break;
        }
        }
    }
    cout<<endl;
    



}
int main()
{
    int t; cin >> t;
    while(t--)
    solve();
}