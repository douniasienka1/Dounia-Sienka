
//DOUNIA SIENKA

#include <stdio.h>
#include <cs50.h>
int main (void)
{

    //statement of variables
    long long i;
    long long add;
    long long x;
    int addsum;
    int prod;
    int sum;

    //get the credit card number from the user
    do
    {
        i= get_long_long ("Please, type your card credit number: ");
        }
        while (i<0);

        //do the sum of digits starting from the last
        for (add=i, addsum=0; add>0; add/=100)
        addsum += add % 10;

        //multiplication  by 2 and sum of every digit starting from the second to last
        for (x = i/10, prod = 0; x>0; x/=100)
        {

            //conditons
            if (2*(x%10)>9)
            {
                prod += (2*(x%10))/10;
                prod += (2*(x%10))%10;
                }
                else
                prod += 2*(x%10);
                }
                sum = addsum + prod;

                //verification of type of credit card number
                if (sum % 10==0)
                {
                    if ((i>=340000000000000 && i< 500000000000000)|| (i>=370000000000000 && i< 380000000000000))

                    //print American Express if the credit card number is from this type
                    printf ("Your credit card is valid and is from American Express type\n");
                    else if (i>= 5100000000000000 && i< 5600000000000000)

                    //print MasterCard if the credit card number is from this type
                    printf ("Your credit card is valid and is from MasterCard type\n");
                    else if ((i >=4000000000000 && i< 5000000000000) || (i>= 4000000000000000 && i< 5000000000000000))

                    //print Visa if the credit card number is from this type
                    printf ("Your credit card is valid and is from Visa type\n");
                    else
                    printf ("Your credit card number is invalid");
                }
                else
                printf ("Your credit card number is invalid\n");
                return 0;
                }