// Write a program to find the minimum of two integers a and b without using any comparison operators (<, >, <=, >=). Use only bitwise operators and logical operators to determine which number is smaller.

// Input Format

//     Two space-separated integers a and b.

// Constraints

//     −10^9 ≤ a,b ≤ 10^9

// Output Format

//     Print the smaller of the two integers.

// Sample Input 0

// 5 3

// Sample Output 0

// 3

// Sample Input 1

// -7 2

// Sample Output 1

// -7

#include <stdio.h>

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);
    int diff = a - b;
    int sign = diff >> 31;
    int min = b ^ ((a ^ b) & sign);
    printf("%d", min);
    return 0;
}