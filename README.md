
# CPP Custom Header

This header file main purpose is to implement most famous and most used algorithm that are easy to implement but quite lengthy and time consuming in coding competitions.




## Usage

Just download the file "shortcuts.h" and paste it into your working directory.

Just include this header file

```bash
    #include "shortcuts.h"
```
    
## Content

- [Check Prime Numbers](#Check-Prime)
- [Check Large Prime Numbers](#Check-Large-Prime-number)
- [Factorial of a large Number](#Factorial-of-a-large-number)
- [Nth Fibonacci Number](#Nth-Fibonacci-Number)



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

## Factorial of a large number

    This function returns results in O(nlogn).

    Returns a "vector<int>" as the answer produce is large and cannot be stored in any data type.

    USE: vector<int> ans = factorialOfLargeNumber(variable);

## Nth Fibonacci Number

    This function returns results in O(n) and take O(1) constant space.

    Returns nth fibonacci in "long long int" type.

    USE: long long int fib = nthFibonacci(variables);





    
    
