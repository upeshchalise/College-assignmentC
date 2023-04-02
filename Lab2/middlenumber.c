#include<stdio.h>

//WAP to input 3 numbers and find the middle number

int main() {
    int a, b, c, m;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a<b && b<c || a>b && b>c) {
        printf(" the middle number is %d\n", b);
    }
    else if(b>a && a>c || b<a && a<c) {
        printf("the middle number is %d\n",a);
    }
    else if(a>c && c>b || a<c && c<b) {
        printf("the middle number is %d\n", c);
    }
}