// WAP to multiply two matrices.

#include <stdio.h>

void main() {
    int a[2][2] = {
        {1,2},
        {2,3}
    };

    int b[2][2] = {
        {1,2},
        {3,4}
    };

    int c[2][2],i,j,k,sum;

   
    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            sum =0;
            for(k=0;k<2;k++) {
                sum+= a[i][k] * b[k][j]; 
            }
            c[i][j]=sum;
        }
    }

    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}