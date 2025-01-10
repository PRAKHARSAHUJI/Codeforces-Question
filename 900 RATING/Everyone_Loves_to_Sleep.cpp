
// https://codeforces.com/problemset/problem/1714/A

// Implementation Math *900 Rating

//  ------------------------------------------------- Correct Code  ----------------------------------------------

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int H;
        cin >> H;
        int M;
        cin >> M;
        int current_time = H * 60 + M;
        int hour[n];
        int minute[n];
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> hour[i];
            cin >> minute[i];
            int sleeptime = (hour[i] * 60 + minute[i]) - current_time;
            if (sleeptime < 0)
            {
                sleeptime += 24 * 60;
            }

            mn = min(mn, sleeptime);
        }
        int h = mn / 60;
        int m = mn % 60;
        cout << h << " " << m << endl;
    }
}

//  ------------------------------------------------- Correct Code  ----------------------------------------------

/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int H;cin>>H;
        int M;cin>>M;
        int current_time =  H * 60 + M;
        int hour[n];
        int minute[n];
        int mn = INT_MAX;
        for(int i = 0; i<n;i++)
        {
            cin>>hour[i];
            cin>>minute[i];
            int sleeptime = (hour[i] * 60 + minute[i]) - current_time;
            if(sleeptime < 0){
                sleeptime += 24*60;
            }
            mn = min(mn , sleeptime);
        }
            int h = mn / 60;
            int m = mn - (mn / 60)* 60;
            while(m >= 60){
                h++;
                m -= 60;
            }
            cout << h << " " << m <<endl;

    }
}
*/

//  ------------------------------------------------- InCorrect Code  ----------------------------------------------
/*

#include <bits/stdc++.h>
using namespace std;
int main()

{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int H;cin>>H;
        int M;cin>>M;
        int current_time =  H * 60 + M;
        int hour[n];
        int minute[n];
        int mn = INT_MAX;
        for(int i = 0; i<n;i++)
        {
            cin>>hour[i];
            cin>>minute[i];
            int sleeptime = (hour[i] * 60 + minute[i])- current_time;
            if(sleeptime < 0){
                sleeptime += 24*60;
            }
            mn = min(mn , sleeptime);
        }
        // if(mn > 0){
        //     int h = mn / 60;
        //     int m = mn - (mn / 60)* 60;
        //     while(m >= 60){
        //         h++;
        //         m -= 60;
        //     }
        //     cout << h << " " << m <<endl;
        // }
        // else{
        //     int h = mn / 60;
        //     int m = mn - (mn / 60)* 60;
        //     while(h<0)
        //     {
        //         h +=24;
        //     }
        //     while(m < 0)
        //     {
        //         m += 60;
        //         h--;
        //     }
        //     cout << h << " " << m << endl;
        int h = mn / 60;
        int m = mn % 60;

        cout << h << " " << m << endl;
        }
    }


}
*/

// 23 35 - 1380 + 35 = 1415
// 10 30 - 600 + 30 = 630
// 20 15 - 1200 + 15 = 1215

// 06 : 13 = 360 + 13 = 373
// 08 : 00 = 480
