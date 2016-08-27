#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // declare variables
    float floatAmount = 0.00;
    int counterCoin = 0;
    int q = 25, d = 10, n = 5, p = 1;
    
    
    // prompt the user for a dollar amount more than 0
    
    do 
    {
        printf("O hai! How much change is owed?\n");
        floatAmount = GetFloat();
    }
    while (floatAmount < 0);
    
    // convert floating point number to integer
    
    int amount = round(floatAmount * 100);
    
    // divide the amount by the coins, subtract the coins
    // and put the number of coins in a counter variable
    
    int counterCoinQ = amount / q;
    amount -= q * counterCoinQ;
    int counterCoinD = amount / d;
    amount -= d * counterCoinD;
    int counterCoinN = amount / n;
    amount -= n * counterCoinN;
    int counterCoinP = amount / p;
    amount -= p * amount;
    counterCoin = counterCoinQ + counterCoinD + counterCoinN + counterCoinP;
    
    // print the result to the terminal
    
    printf("%d\n", counterCoin);
}
