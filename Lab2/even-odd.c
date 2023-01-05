#include<stdio.h>
 
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