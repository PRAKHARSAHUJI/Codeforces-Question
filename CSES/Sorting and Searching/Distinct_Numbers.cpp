

// https://cses.fi/problemset/task/1621

// ------------------------------------ Correct Code   -------------------------------------


#include <bits/stdc++.h>
using namespace std;

int DistinctValuesMap(const vector<int>& arr) {
    unordered_map<int, int> freqMap;
    for (int num : arr) {
        freqMap[num]++;
    }
    return freqMap.size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {

        long long n; cin >> n;


        set<long long> st;
        for(long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            st.insert(x);
        }

        cout << st.size() << endl;
    }
}

/*

// ------------------------------------ Correct Code   ----------------------------


#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {

        long long n; cin >> n;
        long long brr[n];
        for(long long i = 0; i < n; i++)
        {
            cin >> brr[i];
        }


        set<long long> st;
        for(long long i = 0; i < n; i++)
        {
            
            st.insert(brr[i]);
        }

        cout << st.size() << endl;
    }
}

*/


/*

TLE 

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {

        long long n; cin >> n;
        long long arr[n+1];
        for(long long i = 0; i <= n; i++)
        {
            arr[i] = 0;
        }
        long long brr[n];
        for(long long i = 0; i < n; i++)
        {
            cin >> brr[i];
            arr[brr[i]] = 1;
        }
        long long sum = 0;
        for(long long i = 0; i <= n; i++)
        {
            sum += arr[i];
        }

        cout << sum << endl;

    }
}


*/



/*

TLE

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {

        long long n; cin >> n;


        unordered_set<long long> st;
        for(long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            st.insert(x);
        }

        cout << st.size() << endl;
        
    }
}
*/

