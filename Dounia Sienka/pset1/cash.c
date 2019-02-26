
//DOUNIA SIENKA

#include<stdio.h>
#include<cs50.h>
int main (void)
{
    //Statement of different coins
    int five_hundred= 500;
    int two_hundred_fifty= 250;
    int two_hundred=200;
    int hundred=100;
    int fifty=50;
    int twenty_five=25;
    int ten=10;
    int five=5;
    int one=1;
    int count=0;
    int n;

    //Get the amount of money the user would want to change
    do
    {
        n= get_int("Amount: ");
    }
    while (n<0);

    //Use the largest coin possible and keep track of coins used
    while (n >=five_hundred)
    {
        count++;
        n= n-five_hundred;
    }
    while (n >=two_hundred_fifty)
    {
        count++;
        n= n-two_hundred_fifty;
    }
    while (n >=two_hundred)
    {
        count++;
        n = n-two_hundred;
    }
    while (n >=hundred)
    {
        count++;
        n = n-hundred;
    }
    while (n >=fifty)
    {
        count++;
        n = n-fifty;
    }
    while (n >=twenty_five)
    {
        count++;
        n = n-twenty_five;
    }
    while (n>=ten)
    {
        count++;
        n= n-ten;
    }
    while (n>=five)
    {
        count++;
        n= n-five;
    }
    while (n>=one)
    {
        count++;
        n= n-one;
    }

    //Print the final number of coins
    printf("The minimum number of coins is: %i", count);
    }