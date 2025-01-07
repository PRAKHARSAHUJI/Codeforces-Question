


// ------------------------------------ Correct Code   -------------------------------------

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n; cin >> n;
    long long cnt = 0;

    while(n != 0)
    {
        cnt += n / 5;
        n /= 5;
    }
    cout << cnt;
}
int main()
{

    solve();
}


