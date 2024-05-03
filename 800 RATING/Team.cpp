#include <iostream>
using namespace std;
int main()
{
        int n;
        cin>>n;
        int count = 0;
        for(int i =0;i < n;i++)
        {   
            int sum = 0;
            int a,b,c;
            cin>>a>>b>>c;
            sum = a+b+c;
            if(sum>=2)
            count+=1;
        }
            cout<<count;
}

//  n is number of problems in contest
//  a is about 1st knowing b is 2nd and c is 3rd knowledge; where 0 means no 1 means yes

//  if two of them knows they will solve the problem therefore sum >2 then count+1, means add question that can be solved 