#include <stdio.h>
#include <stdlib.h>// importing the standard library
#include <time.h>// importing the time module

// This is a recursive function
int sequence(int n)
{
    if ( n == 1 || n == 2|| n == 3 )
        return 1;
    else
        return (sequence(n-1)+2 * sequence(n-2)+3 * sequence(n-3));// Calling the function in a recursive way in order to print the numbers for the amount of times required
}

int main() {
    int x ;
    int upper = 30;// setting the bounds for the random numbers
    int lower = 10;
    srand(time(0));// generates a random value using time
    for (int i = 0; i < 1; i += 1) {
        x = (rand() % (upper - lower + 1)) + lower;// this is the formula to make sure that the random value is in between the upper and lower bounds
        printf("The random integer is %d\n", x);
    }
    int y = 1;
    do// using a do while loop as the code has to be executed once before the while statement can be evaluated
    {
        printf("%d\n",sequence(y));
        y += 1;
    }
    while( y <= x);
    return 0;
}
