#include<stdio.h>
#include<math.h>

//WAP to input electricity units and find the billing amount.
  /* for first 20 units - Rs 0/unit
     for next 100 units - Rs 12/unit
     for next 100 units - Rs 11/unit
     for above 220 units - Rs 10/unit
*/

int main() {
    int unit, price;
    printf("Fill the electricity unit: ");
    scanf("%d", &unit);

    if(unit <= 20) price = 0;
    if(unit >= 20 && unit <= 120 ) price = (unit - 20 ) *  12;
    if(unit > 120 && unit <=220 ) price =  (100 * 12) + ((unit - 120) * 12);
    if(unit > 220) price =  (100*11) + (100*12) + (unit - 220)*10;

    printf("The Bill of electricity is %d\n", price);

}