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

    switch(operator){
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if(b == 0){
                printf("Error! the divisor can`t be zero.\n");
            }
            else{
                result = a / b;
            }
            break;
        default:
            printf("Invalid operator\n");
    }
    
    printf("result: %0.2lf", result);
    

    system("pause");
    return 0;
}