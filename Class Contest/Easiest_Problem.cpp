// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     {
//         int t; cin>>t;
//         int n; cin>>n;
//         int a = t;
//         int b = n;
//         if(t>n)
//         {
//         for(int i=1 ; i>0;i++)
//         {
//             n=n*i;
//             if(n>t)
//             {
//             cout<<n<<endl;
//             break;
//             }
//             n=b;

//         }
//         }
//         else
//         {
//         for(int i=1 ; i>0;i++)
//         {
//             t=t*i;
//             if(t>n)
//             {
//             cout<<t<<endl;
//             break;
//             }
//             t=a;
//         }
//         }
//     } 
// }




#include <bits/stdc++.h>

using namespace std;
int main()
{
    {
        int t; cin>>t;
        int n; cin>>n;
        int a = t;
        int b = n;
       
        for(int i=1 ; i>0;i++)
        {
            n=n*i;
            if(n>t)
            {
            cout<<n<<endl;
            break;
            }
            n=b;

        }
        
        
      
        
    } 
}