// WAP to display all prime numbers between 100 and 200

#include<stdio.h>

int main() {
    int i, j, k;

    for( i=100; i<=200; i++) {
        k = 0;

        for(j=2; j < i/2; j++) {

            if ( i % j == 0)
            {
                k++;
                break;
            }
        }
        if(k == 0) {
            printf("%d\t", i);
        }
    }
    printf("\n");
    return 0;
}


