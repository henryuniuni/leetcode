# 38. Count and Say

## written time : 1

## Problem Description:
The count-and-say sequence is the sequence of integers with the first five terms as following:

1.     1
2.     11
3.     21
4.     1211
5.     111221
1 is read off as "one 1" or 11.
11 is read off as "two 1s" or 21.
21 is read off as "one 2, then one 1" or 1211.

Given an integer n where 1 ≤ n ≤ 30, generate the nth term of the count-and-say sequence. You can do so recursively, in other words from the previous member read off the digits, counting the number of digits in groups of the same digit.

Note: Each term of the sequence of integers will be represented as a string.

Example 1:

Input: 1
Output: "1"
Explanation: This is the base case.
Example 2:

Input: 4
Output: "1211"

## Performance:
Runtime: 4 ms, faster than 77.37% of C++ online submissions for Count and Say.
Memory Usage: 6.4 MB, less than 100.00% of C++ online submissions for Count and Say.

## Solution: 
1. using a for loop to run n-1 time if n > 1, because the question description says that it has a base case 1, so if input is 1, then return "1"
2. check whether the current character is same as the last one,
- if true, the count will add 1 and last character won't be changed.
- if false, the current count and last character will be push into returning string back and the count will be 1 again for a new current character.
