#include <stdio.h>

int sum_of_odd(int n){
    int sum =0;

    for (int i = 0; i < n+1 ; i += 1) //The for loop is designed to add 1 to the variable "i" until the value entered by the user is reached
    {
        if (i % 2 ==1) // this "if statement" makes sure that only odd numbers are added to the sum
        {
            sum += i;//this line updates the sum by adding the value of "i" to it
        }
    }
    return sum;
}
void print_rectangle(int n,int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)//This is a nested for loop i.e a for loop inside a for loop where one loop prints the stars and one makes the shift to a new line when the program has reached the required width of stars
        {
            printf("*");//This prints the stars
        }
        printf("\n");// This pushes the program down a line when the width has been reached
    }
}

int main()
{
    printf("Welcome\n");
    int option, n, m; // Initializing three different variables where n and m are used if the user selects option 2 and n and m become the dimensions of the rectangle
    do {//The do-while loop is used here because the code has to be executed at least once before it can be terminated
        // The menu options
        printf("Enter 1 to calculate the sum of all the odd numbers upto the number you may enter\n");
        printf("Enter 2 to print a rectangle of stars(enter an integer)\n");
        printf("Enter 3 to terminate the program : \n");
        scanf("%d", &option);// This takes the input from the user and stores it in the "option" variable
        switch (option)
        {  //Using a switch case
            case 1:
                printf("Enter a number:\n");
                scanf("%d", &n);
                printf("%d\n", sum_of_odd(n));
                break;
            case 2:
                printf("Enter a numerical value for the width of the rectangle:\n");
                scanf("%d", &m);// both m and n are initialized at the start as the print_rectangle function takes 2 parameters before the function is invoked doesn't have a scanf statement inside the function
                printf("Enter a numerical value for the length of the rectangle:\n");
                scanf("%d", &n);
                print_rectangle(n, m);//calling the function print_rectangle()
                break;
            case 3:
                printf("The program is now terminated Goodbye\n");
                break;
            default:// The default case is triggered if none of the cases have been fulfilled. For example a user may enter a number greater than 3
                printf("Invalid option, Please enter either 1,2 or 3\n");
                break;
        }
    } while (option != 3);//The option will make sure that the program terminates if the user enters 3
    return 0;

}
