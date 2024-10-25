/* LAB 2  PART 2
   Rearangement of Digits from a 4-Digit Code
   By: Anastasia Dimov */


#include <stdio.h>
#include <math.h>

int main(void) {

    int number, a, b, c, d;

    printf("Enter an encrypted 4-digit combination: ");
    scanf("%d", &number); 

    d = number % 10; 
    c = (int)(number / 10) % 10; 
    b = (int)(number / 100) % 10; 
    a = (int)(number / 1000) % 10;

    // gets all the individual digits of the integer 

    printf("The real combination is: %d%d%d%d", d, 9 - b, 9 - c, a);

    return 0; 

}