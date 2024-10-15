#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max;
int min;
int prime_numbers[100000000000000000];
int prime_number_counter[1];

int main()
{
    printf("Welcome to the prime number generator!\n");

    printf("\nEnter the starting number: \n");
    scanf("%d", &min);

    printf("\nEnter the ending number: \n");
    scanf("%d", &max);

    // Error handling
    if (min < 0 || max < 0)
    {
        printf("\nError. Numbers must be positive!\n");
        return 0;
    }
    else if (max < min)
    {
        printf("\nError. Ending number must be greater than starting number!\n");
        return 0;
    }
    else if (max == min)
    {
        printf("\nError. Ending number can not be equal to starting number!\n");
    }

    for (int i = min; i <= max; i++)
    {
        int is_prime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1)
        {
            prime_numbers[prime_number_counter[0]] = i;
            prime_number_counter[0]++;
        }
    }

    printf("\nThere are %d prime numbers between %d and %d and they are: \n", prime_number_counter[0], min, max);
    for (int i = 0; i < prime_number_counter[0]; i++)
    {
        printf("%d\n", prime_numbers[i]);
    }

    return 0;
}
