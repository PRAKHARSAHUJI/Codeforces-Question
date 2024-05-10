// https://codeforces.com/problemset/problem/486/A





// #include <iostream>

// int main() {
//     long long number;
//     std::cin >> number;

//     // Calculate the sum based on the input number
//     // If number is even, sum = number/2, if number is odd, sum = -(number+1)/2
//     long long sum = (number % 2 == 0) ? number / 2 : -(number + 1) / 2;

//     std::cout << sum << std::endl;

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

long long n;
cin >> n ;

long long sum_even = 0;
long long sum_odd = 0;
long long sum = sum_even+sum_odd ;
if(n%2==0)
{

sum_even = ((n)*(2+n))/4;
// cout<<sum_even<<endl;
sum_odd = ((n)*(1+(n-1))/4);
// cout<<sum_odd<<endl;
sum = sum_even-sum_odd;
cout<<sum;

}
else
{
sum_even = (((n-1)/2)*((2+(n-1))/2));
// cout<<sum_even<<endl;
sum_odd = (((n+1)/2)*((1+(n))/2));
// cout<<sum_odd<<endl;

sum = sum_even-sum_odd;
cout<<sum;
}
}



// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

// long long n;
// cin >> n ;

// long long sum_even = 0;
// long long sum_odd = 0;
// long long sum = sum_even+sum_odd ;
// if(n%2==0)
// {

// sum_even = ((n/2)*(2+n))/2;
// // cout<<sum_even<<endl;
// sum_odd = ((n/2)*(1+(n-1))/2);
// // cout<<sum_odd<<endl;

// sum = sum_even-sum_odd;
// cout<<sum;

// }
// else
// {
// sum_even = (((n-1)/2)*((2+(n-1))/2));
// // cout<<sum_even<<endl;
// sum_odd = (((n+1)/2)*((1+(n))/2));
// // cout<<sum_odd<<endl;

// sum = sum_even-sum_odd;
// cout<<sum;
// }
// }







// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

// long long number;
// cin >> number ;

// long long sum = 0;
// for(int i = 1 ; i <= number ; i++)
// {
// if(i%2 !=0)
// sum -= i;
// else
// sum += i;

// }
// cout<<sum;

// }



// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
 
// int number;
// cin >> number ;
 
// int sum = 0;
// for(int i = 1 ; i <= number ; i++)
// {
// if(i%2 !=0)
// sum -= i;
// else
// sum += i;
 
// }
// cout<<sum;
 
// }