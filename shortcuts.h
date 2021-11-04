/* 

This header file main purpose is to implement most famous and most used alorithms that are easy to implement but quite lengthy and time consuming in coding competitions.

This header file includes :
    1. Prime Number Check 
    2. Large Prime Number Check



    NOTICE : This is still in development phase and more algorithms will be added ASAP.

    Author : JITESH KUMAR

*/

#include <bits/stdc++.h>
#define lli long long int

using namespace std;

bool check_Prime(lli n)
{
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    return isPrime[n];
}

bool check_LargePrime(lli n)
{
    if (n == 0 || n == 1)
        return false;

    if (n == 2 || n == 3 || n == 5 || n == 7)
        return true;
    if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
        return false;

    if ((n + 1) % 6 != 0 && (n - 1) % 6 != 0)
        return false;
    else
        return true;
}
