#include<stdio.h>

//WAP to input two numbers and then input the operator(+,-,*,/) and find the result using switch.

int main() {
    float num1, num2, calc;
    char res;
    printf("input two numbers: ");
    scanf("%f %c %f", &num1, &res, &num2);
    switch (res)
    {
    case '+':
        calc = num1 + num2;
        break;
    case '-':
        calc = num1 - num2;
        break;
    case '*':
        calc = num1 * num2;
        break;
    case '/':
        calc = num1 / num2;
        break;
    default:
        calc = 0;
        printf("Enter a number and sign:");
    }
printf("the answer is %.2f\n", calc);
}