// https://codeforces.com/problemset/problem/158/B

// *special problemgreedyimplementation *1100

// -----------------------------------------------Correct Code---------------------------------------------


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 4)
            four++;
        if (arr[i] == 3)
            three++;
        if (arr[i] == 2)
            two++;
        if (arr[i] == 1)
            one++;
    }
    int no_of_cars = four;
    if (three >= one)
    {
        no_of_cars += three;
        if (two % 2 == 0)
            no_of_cars += two / 2;
        else
            no_of_cars += (two / 2) + 1;
    }
    else
    {
        no_of_cars += three;
        one = one - three;
        if (two % 2 == 0)
        {
            no_of_cars += two / 2;

            if (one % 4 == 0)
                no_of_cars += one / 4;
            else
                no_of_cars += (one / 4) + 1;
        }
        else
        {
            no_of_cars += (two / 2) + 1;
            if (one % 4 == 0)
            {
                no_of_cars += one / 4;
            }
            else if (one <= 2)
            {
                no_of_cars += 0;
            }
            else if (one > 2)
            {
                one = one - 2;
                if (one % 4 == 0)
                {
                    no_of_cars += one / 4;
                }
                else
                    no_of_cars += (one / 4) + 1;
            }
        }
    }
    cout << no_of_cars;

    return 0;
}



// -----------------------------------------------Correct Code---------------------------------------------


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int one = 0, two = 0, three = 0, four = 0;

//     // Read input and count the group sizes
//     for (int i = 0; i < n; i++) {
//         int group_size;
//         cin >> group_size;
//         if (group_size == 4) four++;
//         if (group_size == 3) three++;
//         if (group_size == 2) two++;
//         if (group_size == 1) one++;
//     }

//     // Start counting taxis
//     int no_of_cars = four;  // Each group of 4 needs its own car

//     // Pair groups of 3 with groups of 1
//     no_of_cars += three;    // All groups of 3 need a car
//     one = max(0, one - three);  // Pair groups of 3 with groups of 1 if possible

//     // Pair groups of 2 with each other
//     no_of_cars += two / 2;  // Two groups of size 2 can share a taxi
//     if (two % 2 != 0) {     // If there's an odd group of 2
//         no_of_cars++;        // They need an additional car
//         one = max(0, one - 2);  // Try to fit up to 2 groups of 1 in this car
//     }

//     // Handle the remaining groups of size 1
//     no_of_cars += (one + 3) / 4;  // Pack the remaining groups of 1 into cars of 4

//     cout << no_of_cars << endl;

//     return 0;
// }
