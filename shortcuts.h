/* 

This header file main purpose is to implement most famous and most used alorithms that are easy to implement but quite lengthy and time consuming in coding competitions.

This header file includes :
    1. Prime Number Check 
    2. Large Prime Number Check
    3. Factorial of Large Number
    4. Nth Fibonacci Number



    NOTICE : This is still in development phase and more algorithms will be added ASAP.

    Author : JITESH KUMAR

*/

#include <bits/stdc++.h>
#define lli long long int
#define MODULO 1000000007

using namespace std;

//=============================================================================================


// Uses Sieve of Eratosthenes and has O(N log (log N)) complexity with O(n) auxilary space.

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

//=============================================================================================


// Class containing all factorial related problems
class Factorial
{
public:
    vector<int> factorial(int N)
    {
        vector<int> res = {1};

        for (int i = 2; i <= N; i++)
        {
            int carry = 0;

            for (int j = 0; j < res.size(); j++)
            {
                int prod = (res[j] * i) + carry;
                res[j] = prod % 10;
                carry = prod / 10;
            }
            while (carry)
            {
                res.push_back(carry % 10);
                carry /= 10;
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

vector<int> factorialOfLargeNumber(int n){

    Factorial obj;
    vector<int> res = obj.factorial(n);

    return res;
}

//====================================================================================

//nth Fibonacci Number

// time complexity O(n) and space as O(1) 
// works great till n<1000

lli nthFibonacci(lli n){
    lli a = 0, b = 1, c;

    if(n==0)
        return a;
    for (lli i = 2; i <= n;i++){
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}





