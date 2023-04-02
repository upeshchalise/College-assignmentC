#include<stdio.h>

// WAP to input a number and count the number of digits.

void main() {
int a,b=0;
printf("write the number: ");
scanf("%d", &a);

while(a!=0) {
    b+=1;
    a /=10;
}    
printf("No of digits: %d \n", b);
}   


