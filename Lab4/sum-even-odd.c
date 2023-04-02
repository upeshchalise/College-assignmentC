// WAP to input numbers in an array of size 'N' and find the sum of even and odd numbers separately

#include<stdio.h>

int main() 
{
    int ev = 0, od = 0, i,n;
    printf("How many numbers you want to enter: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter number:\n");
    for ( i = 0; i < n; i++) 
    {
        printf("%d: ", i + 1);
        scanf("%d", &array[i]);
        if( array[i] % 2 == 0) {
            ev += array[i];
        }
        else { 
            od += array[i];
        }
    }
    printf("The sum of odd numbers is %d.\n", od);
    printf("The sum of even numbers is %d.\n", ev);
    return 0;
}