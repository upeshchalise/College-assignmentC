#include<stdio.h>

// Create a menu driven program to add/subtract/multiply/divide two numbers using switch.

int main() {
    int a, b, c, z;
    printf("1. ADD \n");
    printf("2. SUBTRACT \n");
    printf("3. MULTIPLY \n");
    printf("4. DIVIDE \n");
    
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Choose a operator: ");
    scanf("%d", &z);

    switch (z)
    {
    case 1:
        c = a + b;
        break;
    case 2:
        c = a - b;
        break;
    case 3:
        c = a * b;
        break;
    case 4:
        c = a / b;
        break;
    
    default:
    printf("enter a number and operator \n");
    }

    printf("The answer is %d\n", c);
}
