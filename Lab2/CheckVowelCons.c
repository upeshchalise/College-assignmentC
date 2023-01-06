#include<stdio.h>

//WAP a program to check vowel/consonant.

int main() {
    char vowel;
    printf("write a letter: ");
    scanf("%c",&vowel);
    if(vowel == 'a' || vowel == 'e' || vowel ==  'i' || vowel ==  'o' || vowel ==  'u') {
    printf("vowel\n", vowel);
    }
    else {
    printf("consonant\n",vowel);
    }
}