/*
CS 410 Operating Systems
Onwuegbuchi Osondu
Lab 01
*/

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int m, n, c, k;
    m = 0b10101;
    bool keepGoing = false;

    do {
        printf("the binary 10101 in decimal is: %i \n", m);
        printf("Enter an integer in decimal number system\n");
        scanf("%d", &n);
        printf("%d binary number system is:\n", n);

        for (c = 31; c >= 0; c--){
            k = n >> c;
            if (k & 1)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
        printf("Do you want to convert another decimal number? Enter 1/0 for y/n \n");
        scanf("%d", &n);
        if (n == 1)
            keepGoing = true;
        else
            keepGoing = false;
    }
    while(keepGoing);
    return 0;
}
