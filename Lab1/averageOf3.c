#include<stdio.h>

//WAP to input 3 numbers and find its average.

int main() {
    float a, b, c, ave;
    printf("write the three numbers: ");
    scanf("%f %f %f", &a,&b,&c);
    ave = (a + b + c)/3.0;
    printf("average is : %.2f\n", ave);
}