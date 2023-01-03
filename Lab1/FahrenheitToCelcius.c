#include<stdio.h>

//WAP to input temperature in fahrenheit and convert into celsius.

int main() {
    float F, c;
    printf("Input the temperature in fahernheit: ");
    scanf("%f", &F );
    c = (F-32.0) * (5.0/9.0);
    printf("The temperature in celcius is %.2f\n",c);
}