/* LAB 4  PART 1
   printing the pascal's triangle 
   By: Anastasia Dimov */

#include <stdio.h>

//declaring the functions
int factorial(int);
int choose(int, int);
int triangle(int);

// main prints the triangle by utilizing the triangle() function
int main() {
    int rows;

  do {
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    if (rows >= 0) {
      triangle(rows);
    }
  } while (rows >= 0);
    return 0;
}

// function that calculates n! for any n, a factorial calulating function
int factorial(int n) {
    int product = 1; 

    for (int i = n; i >= 1; i--) {
        product *= i;
    }

    return product;
}

// using the formula nCr choose() calculates the specific number for each 
// row and collumn of the triangle
int choose(int n, int r) {
    int diff = n - r;
    int number = (factorial(n)) / (factorial(r) * factorial(diff));

    return number;
}

// prints the appropriate number from choose() with appropriate spacing after
// to create triangle
int triangle(int row) {
    int totalCol, spaceSide, n; 
    const int SPACE = 5;
    
    totalCol = row + (row - 1) * SPACE;
    spaceSide = totalCol / 2;
    n = 0; 
    

    //loops through each row to determine how much spacing to put in front and after the number to create the triangle
    for (int i = 0; i < row; i++, n++) {

        if (i < row ) {
            for (int left = 0; left < spaceSide; left++) {
                printf(" ");
            }
            

            for (int r = i; r >= 0; r--) {
                printf("%d", choose(n, r));

                if (r == 0) {
                    printf("     ");
                    break;
                }
                else if (choose(n, r) >= 10 && choose(n, r) < 100) {
                    printf("    ");
                }
                else if (choose(n, r) >= 100) {
                    printf("   ");
                }
                else {
                    printf("     ");
                }
            }
            
            spaceSide = spaceSide - 3;
            printf("\n");


        }
        
    }

    return 0;
}

