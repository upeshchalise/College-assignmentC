#include<stdio.h>
 
//WAP to input a number and check if its odd or even

int main() {
    int num;
    printf("Input a number: ");
    scanf("%d",&num);
    if (num%2 == 0)
    {
        printf("the given number is even\n");
    }
    else {
        printf("the given number is odd\n");
    }
    
}