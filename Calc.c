# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main()
{
    
    char operator;
    double a;
    double b;
    double result;

    printf("Please enter the first number: \n");
    scanf("%lf", &a);

    printf("Please enter the operator (+, -, *, or /): \n");
    scanf(" %c", &operator);

    printf("Please enter the second number: \n");
    scanf("%lf", &b);
    

    system("pause");
    return 0;
}