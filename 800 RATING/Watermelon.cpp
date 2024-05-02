#include <iostream>
using namespace std;
int main()
{
    
    {
        int x;
        cin>>x;
        if(x<=2)                        // if ( x : weight ) is less than 2 kg then Output " NO "
        cout<<"NO";

        else if((x-2)%2==0)            // if ( x : weight ) is divided in 2 even kg then Output " YES "
        {
        cout<<"YES";
        
        }
        else
        cout<<"NO";                // if ( x : weight ) is not divided in 2 even kg then Output " NO "
 
    }


}

/*

#include <iostream>
using namespace std;
int main()
{
    
    {
        int x;
        cin>>x;
        if(x<=2)
        cout<<"NO";

        else if((x)%2==0)
        {
        cout<<"YES";
        
        }
        else
        cout<<"NO";
 
    }


}

*/