
# CPP Custom Header

This header file main purpose is to implement most famous and most used algorithm that are easy to implement but quite lengthy and time consuming in coding competitions.




## Usage

Just download the file "shortcuts.h" and paste it into your working directory.

Just include this header file

```bash
    #include "shortcuts.h"
```
    
## Content

MATHS:

- [Check Prime Numbers](#Check-Prime)
- [Check Large Prime Numbers](#Check-Large-Prime-number)
- [Prime Numbers between two Numbers](#Prime-Numbers-between-two-Numbers)
- [Factorial of a large Number](#Factorial-of-a-large-number)
- [Nth Fibonacci Number](#Nth-Fibonacci-Number)
- [Check Palindrome](#Check-Palindrome)
- [Digital Root](#Digital-Root)



# Documentation

The various Functions included are:

## Check Prime 
    
    This Function check prime number upto 10^7.

    Sieve of Eratosthenes is used.
    
    Returns a "boolean" result.
    
    USE: bool prime = check_Prime(variable);

## Check Large Prime number

    This function works on a large prime numbers.

    Use long long or long long int. 

    Returns a "boolean" result.

    USE: bool prime = check_LargePrime(variable);

## Prime Numbers between two Numbers

    This function returns all the prime number between two given numbers.

    The given numbers are not included.

    Returns a "vector" as the results.

    USE: vector<int> ans = primeInBetween(2,10)

## Factorial of a large number

    This function returns results in O(nlogn).

    Returns a "vector<int>" as the answer produce is large and cannot be stored in any data type.

    USE: vector<int> ans = factorialOfLargeNumber(variable);

## Nth Fibonacci Number

    This function returns results in O(n) and take O(1) constant space.

    Returns nth fibonacci in "long long int" type.

    USE: long long int fib = nthFibonacci(variables);

## Check Palindrome
    This function returns results in O(length of number).
    Convert the given integer into a string before passing.
    For that use "to_string()" function.

    Returns a "boolean" results.

    USE: bool palindrome = checkPalindrome(string num);

## Digital Root
    This function returns the sum of digit of a number until that number becomes a single digit.

    Returns a single digit as the result.

    USE: int sum = digitalRoot(123);     





    
    
