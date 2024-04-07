#include <stdio.h>

int main() {
    printf(" Welcome \n");
    printf("Exercise 1 \n");//The goal of the program is to compute the derivative of a polynomial of degree 5
    float a[6]; //Declaring an array to store the values that the user enters as the coefficient of each term
    float derivative[6] ; //Declaring an array to store the coefficients of the derivative(required answer)
    for (int i = 0; i <=5; i++)
    {
        printf ("Please enter the coefficient for value for x ^ %d :\n",i);
        scanf("%f",&a[i] ); //The scanf statement has takes a float variable to accommodate users who wish to enter float variables
    }

    for (int i = 0; i<=5;i++)
    {
        derivative[i] = (i * a[i])  ; // This part of the code will compute the derivative of each of the terms and store them in the array named "derivative" at the "i"th position
    }

    printf("%.3fx^%d ", derivative[5],4);// This part of the code prints the first term a.k.a. the x^4 term //This is not done in the "for" loop because the "+" symbol gets printed an extra time

    for (int i = 4; i>0;i--)
    {
        printf("+ %.3fx^%d ", derivative[i],i-1); // This part of the code prints the final answer to 3 decimal points with the x^i where "i" will always be an integer without decimal place
    }

    return 0;
}
