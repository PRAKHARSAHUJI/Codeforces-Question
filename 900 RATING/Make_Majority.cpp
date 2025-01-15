// https://codeforces.com/contest/1988/problem/B

// Greedy Implementation *900 Rating

// ------------------------------------ Correct Code   -------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        string s;
        cin >> s;

        if (s == "1") {
            cout << "Yes\n";
        } else if (s == "0") {
            cout << "No\n";
        } else {
            int cnt_one = 0, cnt_zero = 0;

            for (int i = 0; i < n; i++) {
                if (s[i] == '0') {
                    cnt_zero++;
                    while (i + 1 < n && s[i + 1] == '0') {
                        i++;
                    }
                } 
                else if (s[i] == '1') {
                    cnt_one++;
                }
            }

            cout << cnt_zero << " " << cnt_one << "\n";

            if (cnt_zero >= cnt_one) {
                cout << "No\n";
            } else {
                cout << "Yes\n";
            }
        }
    }
    return 0;
}


/*


#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        string s; cin >> s;
        
        if(s == "1")
            cout << "Yes" << endl;
        else if (s == "0")
            cout << "No" << endl;
        else{
            int cnt_one = 0;
            int cnt_zero = 0;
            for(int i = 0; i < n; ){
                    if(s[i] == '0')
                    {
                        cnt_zero++;
                        while(s[i] == '0')
                        {
                            i++;
                        } 

                    }
                    else if(s[i] == '1')
                    {
                        cnt_one++;
                        i++;
                    } 
            }
            if(cnt_zero >= cnt_one)
                cout << "No" << endl;
            else if(cnt_zero < cnt_one)
                cout << "Yes" << endl;
        }
    }
}


*/