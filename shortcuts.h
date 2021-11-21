/* 

This library file main purpose is to implement most famous and most used alorithms that are easy to implement but quite lengthy and time consuming in coding competitions.

This header file includes :
    MATHS:
    - Prime Number Check 
    - Large Prime Number Check
    - Prime Numbers between two Numbers
    - Factorial of Large Number
    - Nth Fibonacci Number
    - Check Palindrome

    RECURSION
    -Tower of Hanoi

    GENERAL
    -Sort Element by frequency



    NOTICE : This is still in development phase and more algorithms will be added ASAP.
             This header file is built with the help of STL and basic knowledge of STL is required to use this library.

    Author : JITESH KUMAR

*/

#include <bits/stdc++.h>
#define lli long long int
#define MODULO 1000000007

using namespace std;

//=============================================================================================

// Uses Sieve of Eratosthenes and has O(N log (log N)) complexity with O(n) auxilary space.
template <typename S>
vector<bool> sieve(S n)
{
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (S i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (S j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}
/**
 * @brief Prime Numbers have only 1 and themselves as factors.
 * Sieve of Eratosthenes is used here to check prime
 * 
 * @param int number
 * @return true or false  
 */
template <typename TT>
bool check_Prime(TT n)
{

    vector<bool> isPrime = sieve(n);
    return isPrime[n];
}

/**
 * @brief This function returns prime numbers between two given numbers in a vector
 * 
 * @tparam T 
 * @param a 
 * @param b 
 * @return vector<T>   
 */
template <typename T>
vector<T> primeInBetween(T a, T b)
{
    vector<bool> isPrime = sieve(b);

    vector<T> ans;

    for (int i = 0; i < b + 1; i++)
    {
        if (isPrime[i])
            ans.push_back(i);
    }

    return ans;
}

/**
 * @brief  Prime Numbers have only 1 and themselves as factors.
 * This function checks prime number for large integer value.
 * @param long_long_int number 
 * @return true or false 
 */
template <typename T>
bool check_LargePrime(T n)
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

/**
 * @brief Factorial of a non-negative number is product of all number upto that number
 * For Example: 6! = 1*2*3*4*5*6  = 720.vector<int> ans = factorialOfLargeNumber(int number);
 * 
 * @param int number 
 * @return vector<int> since the result is so large it will cause overflow, 
 */
vector<int> factorialOfLargeNumber(int n)
{

    Factorial obj;
    vector<int> res = obj.factorial(n);

    return res;
}

//====================================================================================

//nth Fibonacci Number

// time complexity O(n) and space as O(1)
// works great till n<1000
/**
 * @brief Fibonacci Series Fn = Fn-1 + Fn-2. Some fibonacci sequence are: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144,…….
 * 
 * @param long_long_int n 
 * @return long long int nth Fibonacci Number 
 */
template <typename T>
T nthFibonacci(T n)
{
    T a = 0, b = 1, c;

    if (n == 0)
        return a;
    for (T i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
//==============================================================================================

//Check Palindrome Number (original == reverse)
/**
 * @brief A palindrome is a word, number, phrase, or other sequence of characters which reads the same backward as forward.
 * 
 * @param string num  
 * @return True or false 
 */
bool checkPalindrome(string num)
{

    lli len = num.size();

    for (lli i = 0; i < len / 2; i++)
    {
        if (num[i] != num[len - i - 1])
            return false;
    }
    return true;
}

//=======================================================================================================

//Digital root - Finding sum of digits of a number until sum becomes single digit

/**
 * @brief This function returns the sum of digit of a number until that number becomes a single digit
 * 
 * @tparam D int , long ,long long or long long int
 * @param n  
 * @return returns a single digit 
 */
template <typename D>
D digitalRoot(D n){

    if(n==0)
        return 0;

    return (n % 9 == 0) ? 9 : (n % 9);
}


//==========================================================================================

//RECURSION

//Tower of Hanoi
/**
 * @brief Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move the entire stack to another rod. Following these rules : 1. Only one disk can e moved at a time.  2. No disk can be placed on top of smaller disk
 *  
 * @param n no of disks
 * @param A from rod 
 * @param B Aux Rod
 * @param C To rod
 */
template<typename T>
void TOH(T n,char A ,char B,char C){
    if(n==1){
        cout << "Move 1 from " << A << "to " <<C<<endl;
        return;
    }
    TOH(n - 1, A, C, B);
    cout << "Move " << n << " from " << A << "to " << C << endl;
    TOH(n - 1, B, A, C);
}

// Sort Element by frequency

/**
 * @brief This Function display or prints the array sorted elements by frequency. i.e The maximum occuring element is printed first and least occuring element is printed last.
 * 
 * @param arr 
 */
template<typename T , size_t SIZE>
void sortByFreq( T(&arr)[SIZE]){
    map<T, T> m;

    vector<pair<T, T>> array;

    for (auto i : arr)
    {
        m[i]++;
    }
    for (auto x : m)
    {
        array.push_back({x.first, x.second});
    }

    sort(array.begin(), array.end(), [](auto &a, auto &b)
         { return a.second > b.second; });

    for (auto it : array)
    {
        cout << it.first << " " << it.second << endl;
    }
}