/* LAB 3  PART 3
   Calculating change amount when a cent amount is given
   By: Anastasia Dimov */

#include <stdio.h>
#include <string.h>

int main(void) {

    const int QUARTER = 25;
    const int DIME = 10;
    const int NICKEL = 5;

    int amountQuarter, amountDime, amountNickel, amountCent, totalCent = 0, leftForDime, leftForNickel,
        arrayLength = 0, n;

    printf("Please give an amount in cents less than 100: ");
    scanf("%d", &totalCent);
    // first prompt for the cent amount

    while (totalCent > 0 && totalCent < 100) {
        

        int numZero = 0;
        printf("%d cents: ", totalCent);
        // numZero is the amount of zeros in the coins array below
        
        

        amountQuarter = totalCent / QUARTER;
        leftForDime = totalCent - (amountQuarter * QUARTER);

        amountDime = leftForDime / DIME;
        leftForNickel = leftForDime - (amountDime * DIME);

        amountNickel = leftForNickel / NICKEL;
        amountCent = leftForNickel - (amountNickel * NICKEL);

        // calculating the amount of each coin 

        int coins[4] = {amountQuarter, amountDime, amountNickel, amountCent};
        char coinName[4][10] = {"quarter", "dime", "nickel", "cent"};
        char coinNameUp[4][10];
        // initializing arrays for the amount of each coins and the coin names

        

        for (int i = 0; i < 4; i++) {
            if (coins[i] == 0) {
                numZero++;
            }
        // loop through the coins array and calculates the zero entries
        }
    
        for (int i = 0; i < 4; i++) {

            if (coins[i] > 1) {
                char plural = 's';
                strncat(coinName[i], &plural, 1);
            }
        // adds "s" to the coin names when there's more than one coin        
        }   
    

        for (int s = 0, b = 0; s < 4; s++) {
            if (coins[s] != 0) {
                strcpy(coinNameUp[b++], coinName[s]);
            }
        // copy the coin names (associated index to coins array where the coins are not zero)
        }

        for (int i = 0, n = 0; i < 4; i++) {
            if (coins[i] != 0) {
            coins[n++] = coins[i];
            }
        // updates the coins array to remove zeroes
        }
        
        if (numZero == 0) {
            printf("%d %s, %d %s, %d %s, and %d %s.\n", coins[0], coinNameUp[0], coins[1], 
                    coinNameUp[1], coins[2], coinNameUp[2], coins[3], coinNameUp[3]);
        }
            
        else if (numZero == 1) {
            printf("%d %s, %d %s, and %d %s.\n", coins[0], coinNameUp[0], coins[1], 
                 coinNameUp[1], coins[2], coinNameUp[2]);
        }
        else if (numZero == 2) {
            printf("%d %s and %d %s.\n", coins[0], coinNameUp[0], coins[1], 
                    coinNameUp[1]);
        }
        else if (numZero == 3) {
                printf("%d %s.\n", coins[0], coinNameUp[0]);
        }
        // looking at amount of zeroes and inputs the appropriate sentences for the coins values

        printf("Please give an amount in cents less than 100: ");
        scanf("%d", &totalCent);
        // continuous prompting, will break when invalid amount is inputed
        
        
       
        
    } 
    if (totalCent <= 0 || totalCent >= 100) {
            printf("%d cents: ", totalCent);
            printf("invalid amount.");
            return 0;
        } 
    // invalid amount output

    
   

    return 0;
}