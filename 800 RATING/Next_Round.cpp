#include <iostream>
using namespace std;
int main()
{
    {
        int count = 0;
        int x,y;
        cin>>x>>y;
        int arr[x];
        for(int i =0;i<x;i++)
        {
            cin>>arr[i];

        }

        int z=arr[y-1];
        for(int i =0;i<x;i++)
        {
            if(arr[i]==0)
            {
            count=count;
            }
            else if(arr[i]>=z)
            count++;
        }
        cout<<count;
    }
}




// #include <iostream>
// using namespace std;
// int main()
// {
//     {
//         int count = 0;
//         int x,y;
//         cin>>x>>y;
//         int arr[x];
//         for(int i =0;i<x;i++)
//         {
//             cin>>arr[i];

//         }

//         int z=arr[y];
//         for(int i =0;i<x;i++)
//         {
//             if(arr[i]==0)
//             {
//             count =count;
//             }
//             else if(arr[i]>=z)
//             count++;
//         }
//         cout<<count;
//     }
// }
