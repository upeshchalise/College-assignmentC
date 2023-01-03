#include<stdio.h>
#include<math.h>

//WAP to find the volume of cylinder

int main() {
    float radius, height, volume;
    printf("give the radius(in cm): ");
    scanf("%f", &radius);
    printf("give the height: ");
    scanf("%f", &height);
    volume = 3.14 * radius * radius * height;
    printf("the volume of cylinder is : %.2f cubic cm\n", volume); //output rounded off to 2 dec.point by %.2f
}