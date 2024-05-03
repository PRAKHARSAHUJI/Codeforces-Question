// https://codeforces.com/problemset/problem/1950/C



#include <iostream>
using namespace std;
int main()

{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int hour = (s[0]-'0')*10 +(s[1]-'0');
        int min = (s[3]-'0')*10 +(s[4]-'0');
        if(hour<12 && hour>0)
            // cout<<hour<<":"<<min<<" AM"<<endl;
        cout<<s<<" AM"<<endl;
        else if (hour==12)
            // cout<<hour-12<<":"<<min<<" PM"<<endl;
        cout<<s<<" PM"<<endl;
        else if (hour==0 && min == 0 )
        cout<<"12:00"<<" AM"<<endl;
        else if(hour>12 && hour<=21)
        cout<<"0"<<to_string(hour-12)<<":"<<s[3]<<s[4]<<" PM"<<endl;
        else if(hour>21)
        cout<<to_string(hour-12)<<":"<<s[3]<<s[4]<<" PM"<<endl;
        else if (hour==0)
        cout<<"12:"<<s[3]<<s[4]<<" AM"<<endl;

        

    }

}