//9. Write a program to print cubes of the first 10 natural numbers

#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    printf("Number  Cube\n");

    for (i = 1; i < n + 1; i++)
    {
        printf("%d \t %d \t\n", i, i * i * i);
    }

    return 0;
}

