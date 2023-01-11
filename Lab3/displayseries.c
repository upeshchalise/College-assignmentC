#include<stdio.h>

// WAP to display the following series:
 // a. *        b.    *       c. 5           d. 1       e. *******
 //    **            ***         45            212          ***** 
 //    ***          *****        345          32123          ***
 //    ****        *******       2345        4321234          *
 //    *****                     12345      543212345


void main() {
    int i,j,k,l;
    for(i=1; i<=5; i++) {
        for(j=0; j<i; j++) {
             printf("*");
        }
        printf("\n");
    }
   

printf("\n");
l = 3;
for(i=1; i<=7; i+=2) {
    for(k=0; k<l; k++) {
        printf(" ");
    }
    for(j=0; j<i; j++) {
        printf("*");
    }
    l--;
    printf("\n");
}


printf("\n");
for(i=5; i>=1; i--) {
    for(j=i; j<=5; j++) {
        printf("%d",j);
    }
    printf("\n");
}

printf("\n");

l=4;
for(i=1; i<=5; i++) {
    for(k=0; k<l; k++) {
        printf(" ");
    }
    if(i>1) {
        for( j=i; j>1; j--) {
            printf("%d", j);
        }
    }

    for(j=1; j<=i; j++) {
        printf("%d",j);
    }
    l--;
    printf("\n");
}

printf("\n");

l=0;
for(i=7; i>=1; i-=2) {
    for(k=0; k<l; k++) {
        printf(" ");
    }
    for(j=1; j<=i; j++) {
        printf("*");
    }
    l++;
    printf("\n");
}
}

