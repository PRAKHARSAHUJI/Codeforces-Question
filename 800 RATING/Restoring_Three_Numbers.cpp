// https://codeforces.com/contest/1154/problem/A





#include <bits/stdc++.h>
using namespace std;
int main()
{
long long a_b_sum;
cin >> a_b_sum;

long long a_c_sum;
cin >> a_c_sum;

long long b_c_sum;
cin >> b_c_sum;

long long a_b_c_sum;
cin >> a_b_c_sum;

int arr[4]={a_b_sum , a_c_sum , b_c_sum , a_b_c_sum};
sort(arr,arr+4);

long long c = arr[3] - arr[0];
long long b = arr[3] - arr[1];
long long a = arr[3] - arr[2];

cout << a << " " << b << " " << c ;

}