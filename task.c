#include <stdio.h>
#include <math.h>

int calculation(int x, int y)
{
    int answer = x + y;
    int square = answer * answer;
    printf("Square of 2 sums: %d\n\n", square);
}
int sqrnum(int x, int y)
{
    while (x <= y)
    {
        int sqr = x * x;
        printf("Sqr of %d is %d\n", x, sqr);
        x++;

        if (x == 0)
        {
            printf("Minimum 1!\n");
            return 1;
        }
    }
}

int main()
{
    int f, d;
    int ans;
    printf("Welcome to the square calculator!(0 to quit)\n\n");

    while (1)
    {
        printf("Enter the first number: \n");
        scanf("%d", &f);
        if (f == 0)
        {
            break;
        }
        printf("Enter the second number: \n");
        scanf("%d", &d);
        if (d == 0)
        {
            break;
        }

        calculation(f, d);
    }

    printf("Okay! Wanna know square of numbers?(1 y, 0 n)\n");
    scanf("%d", &ans);

    if (ans == 0)
    {
        printf("Are you sure?(0 again to confirm or 1 to go back)\n");
        scanf("%d", &ans);
        if (ans == 0)
        {
            printf("Quitting the programm...");
            return 1;
        }
        if (ans == 1)
        {
            printf("Strating the programm...\n");
        }
    }
    if (ans == 1)
    {
        while (1)
        {
            printf("Enter the smallest number in range: (-1 to quit)\n");
            scanf("%d", &f);
            if (f == -1)
            {
                break;
            }
            printf("Enter the biggest number in range: \n");
            scanf("%d", &d);
            if (d == -1)
            {
                break;
            }
            sqrnum(f, d);
        }
    }
    printf("Thank you for testing!");

    return 0;
}