
# CPP Custom Header

This header file main purpose is to implement most famous and most used algorithm that are easy to implement but quite lengthy and time consuming in coding competitions.




## Usage

Just download the file "shortcuts.h" and paste it into your working directory.

Just include this header file

```bash
    #include "shortcuts.h"
```
    
## Content

Maths:

- [Check Prime Numbers](#Check-Prime)
- [Check Large Prime Numbers](#Check-Large-Prime-number)
- [Prime Numbers between two Numbers](#Prime-Numbers-between-two-Numbers)
- [Factorial of a large Number](#Factorial-of-a-large-number)
- [Nth Fibonacci Number](#Nth-Fibonacci-Number)
- [Check Palindrome](#Check-Palindrome)
- [Digital Root](#Digital-Root)


Recursion:

- [Tower of Hanoi](#Tower-of-Hanoi)

GENERAL:

- [Sort Element by frequency](#Sort-Element-by-frequency)
- [Kadane's Algorithm (Largest Sum Contiguous  Subarray)](#Kadane's-Algorithm)
- [Count pairs with given sum](#Count-pairs-with-given-sum)
- [Trapping Rain Water](#Trapping-Rain-Water)

Dynamic Programming:

- [Selling Wines Problem](#Selling-Wines-Problem)
- [Rod Cutting Problem](#Rod-Cutting-Problem)

LinkedList:

- [How to use this class](#How-to-use-this-class)
- [Inserting a Node](#Inserting-a-Node)
- [Insert at given position](#Insert-at-given-position)
- [Printing the list](#Printing-the-list)



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

## Tower of Hanoi
    This function prints all the move required for tower of hanoi puzzle to be solved.

    It is of type void and need four parameter to work:
        int n = no of disks.
        char A = from rod.
        char B = auxiliary rod.
        char C = to rod

    USE: TOH(5,'A','B','C'); 

## Sort Element by frequency
    This Function display or prints the array sorted elements by frequency. i.e The maximum occuring element is printed first and least occuring element is printed last.

    USE:  sortByFreq(arr)

## Kadane's-Algorithm
    This function finds the sum of contiguous subarray within a one-dimensional array that has the largest sum.

    INPUT: 
            - int arr[] // The array in which the operation should  be performed.
            - int n // The length of the array.



    It returns the maximum contiguous subarray sum as a INT type.

    USE: maxSubarraySum(int arr[],int n);

## Count pairs with given sum
    Given an array of N integers, and an integer K, this function returns the number of pairs of elements in the array whose sum is equal to K.

    INPUT: int arr[] , int n (size of array) , int k (the sum)

    USE: getPairsCount(int arr[], int n, int k)


## Trapping Rain Water
    Given an array arr[] or vector<int> of N non-negative integers representing the height of blocks. If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season.

    Input: A vector of integers(vector<int> vec) , 
            "n" Total no of elements in vectors.

    Output: A integer value of how much water is trapped inside the blocks.    

    Usage: trappedRainWater(arr,n)

          where arr is "vector<int> arr" and n is "int n"


## Dynamic Programming:
## Selling Wines Problem
    Given n wines in a row, with integers denoting the cost of each wine respectively. Each year you can sale the first or the last wine in the row. Let the initial profits from the wines be P1, P2, P3…Pn. On the Yth year, the profit from the ith wine will be Y*P[i], calculate the maximum profit from all the wines.

    Input: Wines vector , start of the array , end of the array and current year.

    Output: Maximum profit in integer format.

    Usage: maxProfitFromSellingWine(vector<int> wines,int i,int j,int y)

    Here, y=1 should be given as it will mark the starting the of the year , y will increase as the we iterate through the array.

## Rod Cutting Problem
    Visit this blog to know more about the problem.
    
    https://leetcode.com/discuss/general-discussion/1707239/rod-cutting-dp

    Input: A vector of integer.
    Output: returns the max profit as int

    Usage: rod_cutting(vector<int> vec); 


## How to use Linked List class
    This class can be used just like a datatype.
    USE: LinkedList list;

## Inserting a Node
    It insert the node in linked list.
    Nodes are inserted at the END.

    USE : list.insert(value);
    
## Insert at given position
    This function insert the given node at a specific position.

    It returns the head node of the modified linked list.

    USE: list.insertAtSpecific(Node* head,int position,int data);     

## Printing the list
    This prints the linked list.

    USE: list.display();   

                      





    
    
