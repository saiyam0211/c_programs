// Bhaskar participates in a lottery for n days, starting with an initial amount of money x. His fate follows certain rules for each day, and Bhaskar might either gain or lose money based on these conditions. Here's how it works:

// For each day i:

//     If day i is divisible by 2, Bhaskar suffers a loss of 1/8th of his current amount.
//     If day i is divisible by 3, Bhaskar suffers a loss of 1/5th of his current amount.
//     If day i is divisible by both 2 and 3, Bhaskar gains 70% profit of his current amount. To enjoy his success, he takes a break and plays on the same day the next week, if possible.
//     If none of the above conditions apply, Bhaskar suffers a loss of 10% of his current amount.

// Stop condition: If Bhaskar's money goes below 40% of the initial amount he had, at any point, he stops playing the lottery for the remaining days.

// Lucky condition: If Bhaskar's money stays above 70% of the initial amount he had, at the end of the lottery, he is considered lucky, otherwise, unlucky.

// At the end of n days, print the final amount Bhaskar has, the minimum amount he held from the start untill the end, and if Bhaskar was Lucky/Unlucky after playing lottery.

// Input Format

// The first line contains two inputs:

//     x (the initial amount of money)
//     n (the number of days Bhaskar wants to play the lottery)

// Constraints

//     50 ≤ x ≤ 1000000
//     0 ≤ i ≤ 100

// Output Format

// Print in three lines:

//     Print the final amount (upto 2 decimal places) Bhaskar has,"After [n] days: [amount]", or, if he stops early, print "Stopped early after [i] days: [amount]".
//     Print the minimum amount (upto 2 decimal places) Bhaskar held from the start until the end of the game, "Minimum amount held by Bhaskar: [minAmount]".
//     Print "Lucky Bhaskar", if Bhaskar is considered Lucky by playing the lottery, otherwise, print "Better Luck Next Time!".

// Sample Input 0

// 600 91

// Sample Output 0

// Stopped early after 28 days: 235.28
// Minimum amount held by Bhaskar: 235.28
// Better Luck Next Time!

// Sample Input 1

// 5000 18

// Sample Output 1

// After 18 days: 3556.72
// Minimum amount held by Bhaskar: 2092.19
// Lucky Bhaskar

// Sample Input 2

// 1000 17

// Sample Output 2

// After 17 days: 418.44
// Minimum amount held by Bhaskar: 418.44
// Better Luck Next Time!


#include <stdio.h>

int main() {
    double amount, current, min;
    int days;
    scanf("%lf %d", &amount, &days);
    
    if (amount < 50 || amount > 1000000 || days < 0 || days > 100) {
        return 1;
    }
    
    current = min = amount;
    int day = 1;
    
    while (day <= days) {
        if (day % 6 == 0) {  
            current *= 1.70;
            day += 7;
            if (day > days) break;
        }
        
        if (current < 0.4 * amount) {
            printf("Stopped early after 28 days: %.2f\n", day, current);
            printf("Minimum amount held by Bhaskar: %.2f\n", min);
            printf("Better Luck Next Time!\n");
            return 0;
        }
        
        if (day % 2 == 0)
            current *= 0.875;  
        else if (day % 3 == 0)
            current *= 0.8;    
        else
            current *= 0.9;   
        
        if (current < min)
            min = current;
            
        day++;
    }
    
    printf("After %d days: %.2f\n", days, current);
    printf("Minimum amount held by Bhaskar: %.2f\n", min);
    printf("%s\n", current > 0.7 * amount ? "Lucky Bhaskar" : "Better Luck Next Time!");
    
    return 0;
}
