#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    double sum=0;
    cin>>n;
    for(int i = 1 ; i<=n ; i++)
    {
        int x;
        cin>>x;
        sum+=x;
    }
    cout<<fixed<<setprecision(12)<<sum/n;
    

}
