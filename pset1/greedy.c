#include <stdio.h>
#include <cs50.h>
#include <math.h>

#define QUARTER 25;
#define DIME 10;
#define NICKEL 5;

int main(void) 
{
    float given_amount = 0;
    int cent_amount = 0;
    int quarter_count = 0;
    int dime_count = 0;
    int nickel_count = 0;
    int leftover = 0;
    int coin_count = 0;
    
    do 
    {
        printf("You gave me: ");
        given_amount = GetFloat();
        if(given_amount == 0||given_amount <= 0)
        printf("Number Should be greater then Zero EG:10\n:");
    }
    while(given_amount <= 0);

    cent_amount = (int)round(given_amount*100);

    quarter_count = cent_amount / QUARTER;
    leftover = cent_amount % QUARTER;
    
    dime_count = leftover / DIME;
    leftover = leftover % DIME;
    
    nickel_count = leftover / NICKEL;
    leftover = leftover % NICKEL;
    
    coin_count = quarter_count + dime_count + nickel_count + leftover;
    
    printf("%d\n", coin_count);
    
    return 0;
}