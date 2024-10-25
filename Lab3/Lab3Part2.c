/* LAB 3  PART 2
   Printing triagle with spaces and asterix
   By: Anastasia Dimov */

#include <stdio.h>

int main(void) {

    int totalRows, colAmount, spaceSides, spaceMiddle; 

    printf("Enter the number of rows in the triangle: ");
    scanf("%d", &totalRows);
    // prompt user to input amount of rows 
    

    colAmount = totalRows + (totalRows - 1); 
    spaceSides = colAmount / 2;
    // calculating the width (column amount) of the triangle, and the spaces on the sides.

    for (int row = 0; row < totalRows; row++) {

        if (row < totalRows - 1) { 
            for (int sideLeft = 0; sideLeft < spaceSides; sideLeft++) {
                printf(" ");
            }
            // printing the side spaces, looping until the amount matches spaceSides

            spaceSides--;
            printf("*");
            spaceMiddle = row + (row - 1);
            // each row has one less space on the side, calculates the spaces in the middle

            if (row > 0) {
                for ( int middle = 0; middle < spaceMiddle; middle++) {
                    printf(" ");
                // loop for the middle spaces
                }
                printf("*");
            // there's more than one * after the first row
            }
        // bulding the triangle shape
           
        } 
        else if (row == totalRows - 1) {
            for (int asterix = 0; asterix < colAmount; asterix++) {
                printf("*");
            }
        // building the base of the triangle
        }
        printf("\n");
    }


    return 0;


}