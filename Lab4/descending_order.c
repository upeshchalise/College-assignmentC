// WAP to sort the elements of an array in descending order.
#include <stdio.h>

void main() {
    int i,j,key;
    int array[6] = {8,9,2,17,4,20};

    for(i=1;i<6;i++) { 
        key= array[i];
        j = i-1;
        while(j>=0 && array[j] < key) {
            array[j+1] = array[j];
            j--;
        } 
        
        array[j+1] = key;
    }

    for(i=0;i<6;i++) {
        printf("%d ",array[i]);
    }

    printf("\n");
}

