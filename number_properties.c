#include <stdio.h>

void strong(void);
void armstrong(void);
void harshad(void);
void duck(void);

void strong(void)
{
    int n, temp, digit, sum = 0, fact, i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    temp = n;

    while (temp > 0)
    {
        digit = temp % 10;
        fact = 1;
        for (i = 1; i <= digit; i++)
            fact = fact * i;
        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == n)
        printf("%d is a Strong number.\n", n);
    else
        printf("%d is not a Strong number.\n", n);
}

void armstrong(void)
{
    int n, temp, digit, digits = 0, sum = 0, power, i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    temp = n;
    while (temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = n;
    while (temp > 0)
    {
        digit = temp % 10;
        power = 1;
        for (i = 1; i <= digits; i++)
            power = power * digit;
        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);
}

void harshad(void)
{
    int n, temp, digit, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    temp = n;

    while (temp > 0)
    {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }

    if (sum != 0 && n % sum == 0)
        printf("%d is a Harshad number.\n", n);
    else
        printf("%d is not a Harshad number.\n", n);
}

void duck(void)
{
    int n, temp, digit, hasZero = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    temp = n;

    while (temp > 0)
    {
        digit = temp % 10;
        if (digit == 0)
        {
            hasZero = 1;
            break;
        }
        temp = temp / 10;
    }

    if (hasZero)
        printf("%d is a Duck number.\n", n);
    else
        printf("%d is not a Duck number.\n", n);
}

int main(void)
{
    int choice;

    printf("--- DIGIT-BASED NUMBER CHECK MENU ---\n");
    printf("1. Check Strong number\n");
    printf("2. Check Armstrong number\n");
    printf("3. Check Harshad number\n");
    printf("4. Check Duck number\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1: strong(); break;
        case 2: armstrong(); break;
        case 3: harshad(); break;
        case 4: duck(); break;
        default: printf("Invalid choice.\n");
    }
    return 0;
}
