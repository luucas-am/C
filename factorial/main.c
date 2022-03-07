#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void factorial();
void bhaskara();

int main()
{
    int input;
    printf("[1] - Factorial\n[2] - Bhaskara\nInput: ");
    scanf("%d", &input);

    switch (input)
    {
    case 1:
        factorial();
        break;
    
    case 2:
        bhaskara();
        break;

    default:
        printf("Invalid Input.");
        break;
    }
}

void factorial()
{
    system("cls");
    int input, factorial;

    printf("Enter a number: ");
    scanf("%d", &input);

    factorial = input;
    for (int i = 1; i < input; i++)
    {
        factorial = factorial * i;
    }

    printf("\n%d! = %d", input, factorial);
}

void bhaskara()
{
    system("cls");
    double a, b, c;

    printf("Enter Three Numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double x1 = (-b + sqrt(pow(b,2)-(4*a*c)))/(2*a);
    double x2 = (-b - sqrt(pow(b,2)-(4*a*c)))/(2*a);


    if ((pow(b,2))-(4*a*c) >= 0 && a != 0)
    {
        printf("x': %.5f\n", x1);
        printf("x'': %.5f\n", x2);
    }
    else 
    {
        printf("Error - Delta < 0\n");
    }
}