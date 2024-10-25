/* LAB 3  PART 1
   Given threshold and boiling point, program ouputs the substance 
   which matches those characteristics
   By: Anastasia Dimov */

#include <stdio.h>

int main(void) {

    const int WATERBP = 100;
    const int MERCURYBP = 357;
    const int COPPERBP = 1187; 
    const int SILVERBP = 2193;
    const int GOLDBP = 2660; 
    // setting up the boiling point of each substances as constants

    int threshold = 0, substanceBP = 0; 
    // initializing some int variables to 0
    

    printf("Enter the threshold in Celsius: ");
    scanf("%d", &threshold); 

    printf("Enter the observed boiling point in Celsius: ");
    scanf("%d", &substanceBP); 
    // prompt user to input desirable threshold and boiling point


    if ((WATERBP - threshold <= substanceBP) && (substanceBP <= WATERBP + threshold)) 
        printf("The substance you tested is: Water");
    
    else if ((MERCURYBP - threshold <= substanceBP) && (substanceBP <= MERCURYBP + threshold)) 
        printf("The substance you tested is: Mercury");
    
    else if ((COPPERBP - threshold <= substanceBP) && (substanceBP <= COPPERBP + threshold)) 
        printf("The substance you tested is: Copper");
    
    else if ((SILVERBP - threshold <= substanceBP) && (substanceBP <= SILVERBP + threshold)) 
        printf("The substance you tested is: Silver");
    
    else if ((GOLDBP - threshold <= substanceBP) && (substanceBP <= GOLDBP + threshold)) 
        printf("The substance you tested is: Gold");
    
    else 
        printf("Substance unknown.");
    // checking at which boiling point range the boiling point of the unknown substance falls

    
    
    return 0;
}
