#include<stdio.h>


//WAP to find area of circle

void main() {
    float radius ,Area;
    printf("write the radius: ");
    scanf("%f",&radius);
    Area = 3.14 * radius * radius;
    printf("area of circle is: %.2f\n", Area );

}